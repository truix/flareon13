#!/usr/bin/env python3
"""Insert the reconstructed sections 2-6 into WRITEUP.md, in order, before '## 7'."""
import os
import re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SEC = os.path.join(ROOT, "tools", "sections")

wp = os.path.join(ROOT, "WRITEUP.md")
src = open(wp, encoding="utf-8").read()

chunks = []
for n in (2, 3, 4, 5, 6):
    path = os.path.join(SEC, "s%d.md" % n)
    body = open(path, encoding="utf-8").read().strip()
    assert body.startswith("## %d - " % n), path
    chunks.append(body)

block = "\n\n---\n\n".join(chunks) + "\n\n---\n\n"

anchor = "## 7 - FlareCalc"
i = src.index(anchor)
out = src[:i] + block + src[i:]
open(wp, "w", encoding="utf-8").write(out)

nums = re.findall(r"^## (\d+) - (.+)$", out, re.M)
print("sections now:", ", ".join("#" + a for a, _ in nums))
print("WRITEUP.md:", len(out), "bytes")
