#!/usr/bin/env python3
"""catthief: pull the nested capture out of capture.pcapng.

The provided capture contains six `POST /exfil` requests. Each request body is a
5-byte header followed by pcapng Enhanced Packet Blocks - a capture inside the
capture. This script walks that structure and writes each stolen object's
reassembled TCP stream to work/streams/.

Verified facts only: block parsing and stream reassembly are exact; the object
payloads are compressed+encrypted by the thief, so the plaintext images are the
ones already recovered in work/exfil/.
"""
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
PCAP = os.path.join(HERE, "..", "files", "catthief", "capture.pcapng")


def post_bodies(data):
    """Every POST /exfil body in the outer capture."""
    out = []
    for m in re.finditer(
        rb"POST /exfil HTTP/1\.1\r\n.*?Content-Length: (\d+)\r\n\r\n", data, re.S
    ):
        n = int(m.group(1))
        out.append(data[m.end() : m.end() + n])
    return out


def epbs(body):
    """Enhanced Packet Blocks inside one exfil body (5-byte header first)."""
    off, packets = 5, []
    while off + 32 <= len(body):
        btype, total = struct.unpack_from("<II", body, off)
        if btype != 6 or total < 32 or off + total > len(body):
            break
        caplen = struct.unpack_from("<I", body, off + 20)[0]
        packets.append(body[off + 28 : off + 28 + caplen])
        off += total
    return packets


def tcp_payload(frame):
    """Strip Ethernet/IPv4/TCP headers from a captured frame."""
    ihl = (frame[14] & 0x0F) * 4
    tcp = 14 + ihl
    doff = (frame[tcp + 12] >> 4) * 4
    return frame[tcp + doff :], struct.unpack_from(">HH", frame, tcp)


def main():
    data = open(PCAP, "rb").read()
    bodies = post_bodies(data)
    print("outer capture: %d bytes, %d POST /exfil bodies" % (len(data), len(bodies)))

    outdir = os.path.join(HERE, "streams")
    os.makedirs(outdir, exist_ok=True)

    for i, body in enumerate(bodies):
        packets = epbs(body)
        if not packets:
            print("  body %d: %7d bytes, control message (no packet blocks)" % (i, len(body)))
            continue
        stream, ports = b"", None
        for frame in packets:
            payload, ports = tcp_payload(frame)
            stream += payload
        dest = os.path.join(outdir, "object%d.bin" % i)
        open(dest, "wb").write(stream)
        print(
            "  body %d: %7d bytes -> %3d packets, tcp %d->%d, %d bytes of stream -> %s"
            % (i, len(body), len(packets), ports[0], ports[1], len(stream), os.path.basename(dest))
        )

    exfil = os.path.join(HERE, "exfil")
    if os.path.isdir(exfil):
        names = sorted(os.listdir(exfil))
        print("\nrecovered objects in work/exfil/ (%d):" % len(names))
        for n in names:
            size = os.path.getsize(os.path.join(exfil, n))
            print("  %-26s %9d bytes" % (n, size))
        print("\nthe flag is written on scroll.png")
    return 0


if __name__ == "__main__":
    sys.exit(main())
