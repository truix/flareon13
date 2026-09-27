#!/usr/bin/env python3
"""Flare-On 13 #6 "Threat Invaders" - recover the C2 traffic from challenge.pcapng.

The patched singlefilehost in ThreatInvaders.exe hooks six managed methods and turns
the game's high-score / telemetry API into a C2 channel:

  * GetMachineGuid()        -> 16-byte MachineGuid is stolen and used as the cipher key
  * GetSessionID()          -> 16-byte session Guid is stolen
  * ReplaceHighscores()     -> scans the downloaded board for tasking
  * LaunchUpdate()          -> repurposed as the exec primitive, stdout is captured
  * HasFeedback()           -> forced to true so the telemetry POST always fires
  * EncodeFeedbackBuffer()  -> output is swapped for the encrypted exec result

Tasking lives in board rows where  Score XOR first4(PlayerName) == "cmd:" ; the row's
comment is the encrypted "cmd:<exe>;<args>".  A row whose comment is exactly "fun!"
makes the implant leak  MachineGuid[i] ^ SessionGuid[15-i]  (feedback_length == 8208).
Because the session Guid is sent in clear text in the same JSON document, the key is
recoverable from the capture alone.

Cipher (host.bin sub_1400C65E0): seed = mix(MachineGuid), then a 64-bit LCG whose top
byte is the keystream.  The state is global and persists across calls, so the blobs
must be processed in wire order.

    python solve.py [path/to/challenge.pcapng]
"""
import base64
import json
import re
import sys
import uuid
from pathlib import Path

from scapy.all import IP, TCP, rdpcap

M64 = (1 << 64) - 1
CLIENT_PORT = 49839


def reassemble(pcap):
    """Return (client_bytes, server_bytes) for the single HTTP conversation."""
    halves = {"c": {}, "s": {}}
    for pkt in rdpcap(str(pcap)):
        if IP not in pkt or TCP not in pkt:
            continue
        payload = bytes(pkt[TCP].payload)
        if not payload:
            continue
        side = "c" if pkt[TCP].sport == CLIENT_PORT else "s"
        halves[side][pkt[TCP].seq] = payload
    return tuple(b"".join(h[s] for s in sorted(h)) for h in (halves["c"], halves["s"]))


def http_bodies(stream, split):
    for part in re.split(split, stream):
        head, _, body = part.partition(b"\r\n\r\n")
        if body:
            yield head.split(b"\r\n")[0], body


def name_hash(data):
    """host.bin sub_1400C8090 seeded the way the implant seeds it (first 4 bytes)."""
    h = (0xC53A1B7F2D9E4467 * (data[0] ^ 0x8F3A2C91D7B4E6A5)) & M64
    mul = 0x5CA6E801706EAAAC
    for byte in data[1:4]:
        if byte == 0:
            break
        h = (mul * (h ^ byte)) & M64
        mul = (mul * 0x2545F4914F6CDD1D + 1) & M64
    return h


class Keystream:
    """host.bin sub_1400C65E0 - seed once from the MachineGuid, then a stateful LCG."""

    def __init__(self, key16):
        lo = int.from_bytes(key16[:8], "little")
        hi = int.from_bytes(key16[8:], "little")
        v = (lo ^ ((hi + (lo << 6) + (lo >> 2) + 0x9E3779B97F4A7C15) & M64)) & M64
        v = (v ^ (v >> 33)) & M64
        v = (v * 0xFF51AFD7ED558CCD) & M64
        v = (v ^ (v >> 29)) & M64
        v = (v * 0xC4CEB9FE1A85EC53) & M64
        self.state = (v ^ (v >> 32)) & M64

    def xor(self, buf):
        out = bytearray()
        for byte in buf:
            self.state = (self.state * 0x5851F42D4C957F2D + 0x14057B7EF767814F) & M64
            out.append(byte ^ ((self.state >> 56) & 0xFF))
        return bytes(out)


def main():
    pcap = Path(sys.argv[1]) if len(sys.argv) > 1 else (
        Path(__file__).resolve().parent.parent / "files/ThreatInvaders/challenge.pcapng")
    client, server = reassemble(pcap)

    telemetry = [json.loads(b) for _, b in
                 http_bodies(client, rb"(?=(?:GET|POST) /)")
                 if b.lstrip().startswith(b'{"request_id"')]

    leak, session = None, None
    exfil = []
    for doc in telemetry:
        length = doc["feedback_length"]
        blob = base64.b64decode(doc["feedback_b64"]) if doc["feedback_b64"] else b""
        if length == 8208:                       # key-disclosure beacon
            leak, session = blob[:16], uuid.UUID(doc["session_id"]).bytes_le
        elif length & 0x4000:                    # command output, real length in low bits
            exfil.append(blob[: length & ~0x4000])

    tasks, seen = [], set()
    for _, body in http_bodies(server, rb"(?=HTTP/1\.[01] \d\d\d)"):
        try:
            entries = json.loads(body).get("entries")
        except ValueError:
            continue
        if not isinstance(entries, list):
            continue
        for e in entries:
            name4 = (e["player_name"].encode() + b"\0" * 4)[:4]
            tag = (e["score"] ^ int.from_bytes(name4, "little")) & 0xFFFFFFFF
            key = (e["player_name"], e["score"])
            if tag.to_bytes(4, "little") == b"cmd:" and key not in seen:
                seen.add(key)
                tasks.append(base64.b64decode(e["comment_b64"]))
            elif e["comment_b64"] and name_hash(base64.b64decode(e["comment_b64"])) == 0x05045A536B62B2C6:
                seen.add(key)   # the "fun!" row that requests the key disclosure

    if leak is None:
        sys.exit("no key-disclosure beacon (feedback_length == 8208) in capture")

    machine_guid = bytes(leak[i] ^ session[15 - i] for i in range(16))
    print("session Guid  :", uuid.UUID(bytes_le=session))
    print("MachineGuid   :", uuid.UUID(bytes_le=machine_guid), "/", machine_guid.hex())

    ks = Keystream(machine_guid)
    for task, out in zip(tasks, exfil):
        print("\n$", ks.xor(task).decode("ascii", "replace"))
        print(ks.xor(out).decode("utf-8", "replace").rstrip())


if __name__ == "__main__":
    main()
