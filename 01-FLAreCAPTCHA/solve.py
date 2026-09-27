"""Flare-On 13 #1 FLAreCAPTCHA - recompute the flag from flarecaptcha.html statically."""
import re
from pathlib import Path

# HTML parser normalises CRLF -> LF, so Function.prototype.toString() sees LF source.
src = (Path(__file__).parent / "files" / "flarecaptcha.html").read_text(encoding="utf-8").replace("\r\n", "\n")

bitmap = [int(x) for x in re.search(r"recaptchaLogoBitmap = \[([^\]]+)\]", src).group(1).split(",")]
reset_widget = re.search(r"const resetWidget = (\(\) => \{.*?\n        \});", src, re.S).group(1)

ENV_SHIFT = len("UTF-8")   # Proxy: target[i] ^ document.characterSet.length
HOLD_SECONDS = 2           # right-click held until the 2000 ms timer fires
key = (HOLD_SECONDS * (len(reset_widget) + 1115)) & 0xFFFF
hi, lo = key >> 8, key & 0xFF

flag = "".join(chr((b ^ ENV_SHIFT) ^ (hi if i % 2 == 0 else lo)) for i, b in enumerate(bitmap))
print(f"resetWidget.toString().length = {len(reset_widget)}, key = {key:#06x}")
print(flag)
