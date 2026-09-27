# Flare-On 13 — Solutions

Complete solutions to all nine challenges of the 13th annual [Flare-On](https://flare-on.com/) challenge (2026), with reproduction scripts and a rendered writeup.

> [!IMPORTANT]
> **Embargoed until the contest ends: 2026-10-24 00:00 UTC** (Fri 23 Oct, 8pm ET).
> Flare-On's rules and basic courtesy mean no flags, solutions or spoilers get published while the contest is live. This repository is private until then; the public release is cut automatically by [`.github/workflows/release.yml`](.github/workflows/release.yml), which refuses to run early.

## Contents

| Path | What |
|---|---|
| [`WRITEUP.md`](WRITEUP.md) | The writeup — one section per challenge |
| `writeup.html` | Same content, rendered as a styled single-page document with a techniques glossary |
| `NN-Name/solve.py` | Reproduction script, where one exists |
| `NN-Name/work/` | Analysis artifacts: decompiled sources, decoded stages, harnesses |
| [`ctf.py`](ctf.py) | CTFd client used to fetch challenges and submit flags |
| [`timeline.jsonl`](timeline.jsonl) | Event log (fetch / found / submit) behind the timing table |
| [`tools/`](tools) | Writeup build (`mkhtml.py`, `glossary.py`, `meta.py`) and IDA batch helpers |

## The challenges

| # | Name | Platform | Core technique | Time |
|---|---|---|---|---|
| 1 | FLAreCAPTCHA | HTML / JS | Two XOR layers keyed off a held right-click | 0h00m29s |
| 2 | GhostStream | Windows x64 | NTFS alternate data stream → WndProc unmasking → RC4 | 0h04m40s |
| 3 | FlareOn13.doc | Polyglot / macOS | Five-way polyglot, six formats, six hashed pieces | 0h05m30s |
| 4 | ToxicMiner | Windows x64 | Tampered SHA-256 in cpuminer; 2³² volume-serial sweep | 0h10m34s |
| 5 | catthief | Windows x64 + pcap | A packet capture nested inside a packet capture | 0h03m36s |
| 6 | Threat Invaders | .NET 10 + pcap | Backdoored CoreCLR host hooking managed methods | 0h07m00s |
| 7 | FlareCalc | Windows x64 | Shellcode smuggled in the Authenticode certificate | 0h50m12s |
| 8 | crux | WASM / Go | Input must be a Pratt primality certificate | 0h41m36s |
| 9 | NeonOutRun | Linux ELF / Tauri | Game JS four layers deep; flag gated on a float identity | 0h22m57s |

Total: **2h54m** from first download to the last accepted flag.

## Reproducing

Each section's **Reproduce** line is a command that was executed before it shipped. Most need only Python 3; a few need Node, and the original challenge files, which this repository deliberately does not redistribute — Flare-On publishes those itself when the contest ends.

```bash
python 02-GhostStream/work/solve.py          # derives the flag from GhostStream.wim
python 03-FlareOn13.doc/work/click_me_analysis/solve.py
04-ToxicMiner/work/bf.exe 0 0x100000000      # full 2^32 sweep, shard across cores
python 05-catthief/work/recarve.py           # walks the nested capture
python 06-Threat_Invaders/work/solve.py      # replays the C2 traffic
node   08-crux/work/final.js                 # builds the certificate, prints the flag
python 09-NeonOutRun/work/emu.py             # Unicorn + relocations
```

## Building the writeup

```bash
pip install markdown
python tools/mkhtml.py      # WRITEUP.md -> writeup.html (self-contained, no CDN)
```

`tools/glossary.py` holds the technique definitions, `tools/meta.py` the per-challenge metadata shown on each card.

## What isn't here

- **Challenge binaries and archives.** Not redistributed; Flare-On releases them officially.
- **IDA databases, memory dumps, carved images and whole-binary decompiles.** Large, machine-specific, and regenerable from the binaries.
- **Credentials.** `.ctfd.json` is gitignored.

## Honest notes

- Challenge 5's writeup stops short: the transport and the flag's location are verified, but the inner compression/encryption of the exfiltrated objects was not recovered. It says so rather than guessing.
- Challenge 9 ships a decoy flag on the visible victory path (`...@f1are-on.com`, with a digit). It was submitted twice before the real gate was found — the writeup documents the real path.
- Challenges 2, 3, 4 and 6 were reconstructed after the fact from the analysis artifacts, with each decisive step re-executed to confirm it.

## Licence

Writeup text and analysis: [CC BY 4.0](LICENSE-CC-BY-4.0). Tooling and scripts: [MIT](LICENSE-MIT).
No challenge material is included or relicensed; it remains the property of the FLARE team.
