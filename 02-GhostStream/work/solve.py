#!/usr/bin/env python3
"""Flare-On 13 #2 GhostStream - end-to-end solve from files/GhostStream.wim.

1. pull the NTFS alternate data stream PolyjuicePotion.txt:LordVoldemort out of the WIM
2. apply GhostStream.exe's WndProc transform (XOR 0x82, then XOR 15-byte table) -> RC4 key
3. apply Partner_CTF.exe's modified-RC4 + self-modified-strlen decryption -> flag
"""
import os
import struct
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
WIM = os.path.join(HERE, os.pardir, "files", "GhostStream.wim")
SEVENZIP = r"C:\Program Files\7-Zip\7z.exe"

# ---------------------------------------------------------------- stage 1: ADS
def extract_ads():
    out = os.path.join(HERE, "wim_extract")
    os.makedirs(out, exist_ok=True)
    subprocess.run([SEVENZIP, "x", "-sns", "-y", "-o" + out, WIM],
                   check=True, stdout=subprocess.DEVNULL)
    ads = os.path.join(out, "GhostStream", "PolyjuicePotion.txt:LordVoldemort")
    return open(ads, "rb").read()

# ------------------------------------------- stage 2: GhostStream WndProc xform
# sub_140001B20, WM_CREATE branch taken when (elapsed_minutes > 671*len("GhostStream.exe")+15)
WNDPROC_KEY = bytes([0x8B, 0x8F, 0x92, 0x85, 0x88, 0x96, 0x98, 0x9B,
                     0x94, 0x8B, 0x95, 0xE6, 0xED, 0xF0, 0xE7])
# v12 = (previous message) ^ WM_CREATE = WM_NCCALCSIZE(0x83) ^ 0x01
STREAM_XOR = 0x83 ^ 0x01


def wndproc_transform(buf):
    n = buf.index(0) if 0 in buf else len(buf)          # strlen()
    b = bytearray(buf[:n])
    b = bytearray(x ^ STREAM_XOR for x in b)            # whole string ^= v12
    for i, k in enumerate(WNDPROC_KEY):                 # first 15 bytes ^= table
        b[i] ^= k
    z = b.index(0) if 0 in b else len(b)                # written to pipe as strlen bytes
    return bytes(b[:z])

# ------------------------------------------------- stage 3: Partner_CTF.exe
CIPHER = (struct.pack("<QQ", 0x8B397AD735875C96, 0xC85856BB286D0475) +
          struct.pack("<QQ", 0x37A956A4E1DAEE35, 0x0D340A27F9561581) +
          struct.pack("<i", 640451310) +
          struct.pack("<h", -1883))                      # 38 bytes

# global Str at .data:0x140005078, rewritten in place by the hooked strlen stub
OBF_STR = b"Bxs]bv`^u)TpcnolVjN"


def strlen_stub(buf):
    """23-byte stub written over ucrtbase!strlen (VirtualProtect'd RWX):
         xor eax,eax / add al,0x13 / mov dl,1 / jnz +1 / <E8 byte skipped>
       L: add [rcx],dl / xor [rcx],al / inc dl / inc rcx / cmp [rcx],ah / jnz L / ret
       -> in-place b[i] = ((b[i] + i + 1) & 0xff) ^ 0x13; return value is a constant 19."""
    b = bytearray(buf)
    for i in range(len(b)):
        b[i] = ((b[i] + i + 1) & 0xFF) ^ 0x13
    return bytes(b)


# the hooked strlen() returns 19, which is wrong; the cipher was built with the
# real strlen("Wingardium Leviosa") == 18 (force EAX/R12 to 18 to make the exe print it)
K = 18


def decrypt(key):
    s = list(range(256))                                 # SIMD init -> identity
    j = 0
    for i in range(256):                                 # textbook RC4 KSA
        j = (s[i] + key[i % len(key)] + j) % 256
        s[i], s[j] = s[j], s[i]
    xor_str = strlen_stub(OBF_STR)                       # -> b"Piertotum Locomotor"
    i = j = 0
    out = bytearray()
    for k in range(len(CIPHER)):
        i = (i + K) % 256                                # i advances by 18, not 1
        j = (j + s[i]) % 256
        s[i], s[j] = s[j], s[i]
        ks = s[(s[i] + s[j]) % 256]
        out.append((((CIPHER[k] + K) & 0xFF) ^ xor_str[k % len(xor_str)] ^ ks) & 0xFF)
    return xor_str, bytes(out)


def main():
    ads = extract_ads()
    print("[1] ADS PolyjuicePotion.txt:LordVoldemort = %r" % ads)
    key = wndproc_transform(ads)
    print("[2] WndProc transform -> pipe key = %r" % key)
    xor_str, flag = decrypt(key)
    print("[3] patched-strlen xor string  = %r" % xor_str)
    print("[3] decrypted flag             = %s" % flag.decode())
    assert b"@flare-on.com" in flag, "no flag"
    return 0


if __name__ == "__main__":
    sys.exit(main())
