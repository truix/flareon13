#!/usr/bin/env python3
"""Flare-On 13 CTFd client: list, fetch (download + extract), submit.

Auth (first match wins):
  1. env CTFD_TOKEN                 -> API access token (CTFd Settings > Access Tokens)
  2. .ctfd.json {"token": "..."}    -> same
  3. .ctfd.json {"user": "...", "password": "..."} -> session login

Usage:
  py ctf.py list
  py ctf.py fetch [ID|all]      download + extract unlocked, not-yet-fetched challenges
  py ctf.py submit ID FLAG      submit; on success auto-fetches newly unlocked challenges
  py ctf.py found ID FLAG       record flag locally (timestamp) without submitting
  py ctf.py log                 show timeline + per-challenge durations
"""
import json
import os
import re
import subprocess
import sys
import time
from pathlib import Path
from urllib.parse import urlsplit, unquote

import requests

BASE = "https://flare-on13.ctfd.io"
ROOT = Path(__file__).resolve().parent
CFG = ROOT / ".ctfd.json"
LOG = ROOT / "timeline.jsonl"
SEVENZIP = r"C:\Program Files\7-Zip\7z.exe"
ARCHIVE_PASSWORD = "flare"


def log_event(**kw):
    kw["ts"] = time.strftime("%Y-%m-%dT%H:%M:%S")
    with LOG.open("a", encoding="utf-8") as f:
        f.write(json.dumps(kw) + "\n")


def session() -> requests.Session:
    s = requests.Session()
    s.headers["User-Agent"] = "flareon13-client"
    cfg = json.loads(CFG.read_text()) if CFG.exists() else {}
    token = os.environ.get("CTFD_TOKEN") or cfg.get("token")
    if token:
        s.headers["Authorization"] = f"Token {token}"
        s.headers["Content-Type"] = "application/json"
        return s
    if not (cfg.get("user") and cfg.get("password")):
        sys.exit(f"no credentials: set CTFD_TOKEN or create {CFG.name}")
    nonce = re.search(r'name="nonce"[^>]*value="([0-9a-f]+)"', s.get(f"{BASE}/login").text).group(1)
    r = s.post(f"{BASE}/login", data={"name": cfg["user"], "password": cfg["password"], "nonce": nonce})
    csrf = re.search(r"csrfNonce': \"([0-9a-f]+)\"", s.get(f"{BASE}/challenges").text)
    if "/login" in r.url or not csrf:
        sys.exit("login failed")
    s.headers["CSRF-Token"] = csrf.group(1)
    return s


def api(s, method, path, **kw):
    r = s.request(method, f"{BASE}/api/v1{path}", allow_redirects=False, **kw)
    if r.status_code in (301, 302, 401, 403):
        sys.exit(f"{method} {path}: auth rejected ({r.status_code})")
    body = r.json()
    if not body.get("success", True) and "data" not in body:
        sys.exit(f"{method} {path}: {body}")
    return body["data"]


def slug(name: str) -> str:
    return re.sub(r"[^A-Za-z0-9._-]+", "_", name).strip("_") or "chal"


def chal_dir(c) -> Path:
    # CTFd names look like "1 - FLAreCAPTCHA"; drop the redundant number prefix
    return ROOT / f"{c['id']:02d}-{slug(re.sub(r'^\d+\s*-\s*', '', c['name']))}"


def challenges(s):
    return sorted(api(s, "GET", "/challenges"), key=lambda c: c["id"])


def fetch_one(s, cid: int) -> Path | None:
    c = api(s, "GET", f"/challenges/{cid}")
    d = chal_dir(c)
    marker = d / ".fetched"
    if marker.exists():
        return None
    (d / "work").mkdir(parents=True, exist_ok=True)  # scratch: dumps, decompiled output, notes
    (d / "description.html").write_text(c.get("description") or "", encoding="utf-8")
    if c.get("connection_info"):
        (d / "connection_info.txt").write_text(c["connection_info"], encoding="utf-8")
    for url in c.get("files", []):
        name = unquote(Path(urlsplit(url).path).name)
        dest = d / name
        with s.get(BASE + url if url.startswith("/") else url, stream=True) as r:
            r.raise_for_status()
            with dest.open("wb") as f:
                for chunk in r.iter_content(1 << 20):
                    f.write(chunk)
        if dest.suffix.lower() in (".7z", ".zip", ".rar"):
            out = subprocess.run(
                [SEVENZIP, "x", f"-p{ARCHIVE_PASSWORD}", "-y", f"-o{d / 'files'}", str(dest)],
                capture_output=True, text=True,
            )
            if out.returncode:
                print(f"  extract failed for {name}:\n{out.stdout}{out.stderr}")
    marker.touch()
    log_event(event="fetch", id=cid, name=c["name"])
    print(f"fetched #{cid} {c['name']} -> {d.relative_to(ROOT)}")
    return d


def cmd_list(s):
    for c in challenges(s):
        mark = "SOLVED" if c.get("solved_by_me") else ("locked" if c.get("type") == "hidden" else "open")
        print(f"#{c['id']:<3} {c['name']:<40} {c.get('value', ''):>5}  {mark}")


def cmd_fetch(s, which="all"):
    ids = [int(which)] if which != "all" else [
        c["id"] for c in challenges(s) if c.get("type") != "hidden"
    ]
    if not any(fetch_one(s, i) for i in ids):
        print("nothing new")


def cmd_submit(s, cid, flag):
    before = {c["id"] for c in challenges(s) if c.get("type") != "hidden"}
    res = api(s, "POST", "/challenges/attempt", json={"challenge_id": int(cid), "submission": flag})
    log_event(event="submit", id=int(cid), flag=flag, status=res["status"])
    print(f"#{cid}: {res['status']} - {res.get('message', '')}")
    if res["status"] in ("correct", "already_solved"):
        new = [c["id"] for c in challenges(s) if c.get("type") != "hidden" and c["id"] not in before]
        for i in new:
            fetch_one(s, i)


def cmd_found(cid, flag):
    log_event(event="found", id=int(cid), flag=flag)
    for d in ROOT.glob(f"{int(cid):02d}-*"):
        (d / "flag.txt").write_text(flag + "\n", encoding="utf-8")
    print(f"#{cid}: recorded {flag}")


def cmd_log():
    if not LOG.exists():
        return
    events = [json.loads(l) for l in LOG.read_text(encoding="utf-8").splitlines() if l.strip()]
    for e in events:
        print(json.dumps(e))
    ts = lambda e: time.mktime(time.strptime(e["ts"], "%Y-%m-%dT%H:%M:%S"))
    print(f"\n{'id':<4}{'start':<21}{'flag found':<21}{'submitted':<21}duration")
    for cid in sorted({e["id"] for e in events}):
        mine = [e for e in events if e["id"] == cid]
        start = min((e for e in mine if e["event"] in ("start", "fetch")), key=ts, default=None)
        subm = next((e for e in mine if e["event"] == "submit" and e["status"] == "correct"), None)
        found = min((e for e in mine if e["event"] == "found" or e is subm), key=ts, default=None)
        dur = ""
        if start and found:
            m, s_ = divmod(int(ts(found) - ts(start)), 60)
            dur = f"{m // 60}h{m % 60:02d}m{s_:02d}s"
        col = lambda e: (e["ts"] if e else "-").ljust(21)
        print(f"#{cid:<3}{col(start)}{col(found)}{col(subm)}{dur}")


def main(argv):
    if not argv or argv[0] not in ("list", "fetch", "submit", "found", "log"):
        sys.exit(__doc__)
    if argv[0] == "log":
        return cmd_log()
    if argv[0] == "found":
        return cmd_found(*argv[1:])
    s = session()
    {"list": cmd_list, "fetch": cmd_fetch, "submit": cmd_submit}[argv[0]](s, *argv[1:])


if __name__ == "__main__":
    main(sys.argv[1:])
