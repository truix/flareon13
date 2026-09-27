import struct, hashlib, re, sys, time
from unicorn import *
from unicorn.x86_const import *

W = __import__("os").path.dirname(__import__("os").path.abspath(__file__)) + "/work/"
blob = open(W + "cert_blob.bin", "rb").read()
M = 0xFFFFFFFF
C2 = ((-565453543) & M) ^ 0xDE4BED20
C1 = ((-1618107571) & M) ^ 0xDE4BED20
keystr = b"8675309-88224646-31428571"


def der_len(b, i):
    l = b[i]; i += 1
    if l & 0x80:
        n = l & 0x7F; v = 0
        for k in range(n):
            v = (v << 8) | b[i]; i += 1
        return v, i
    return l, i


p7 = blob[8:]
pos = p7.find(bytes([0x2B, 0x06, 0x01, 0x04, 0x01, 0x8A, 0x39, 0x01]))
i = pos + 8
if p7[i] == 1: i += 3
assert p7[i] == 4
i += 1
ln, i = der_len(p7, i)
cont = p7[i:i + ln]
tot, i = der_len(cont, 1)
end = i + tot
allrec = {}
while i < end:
    l, i2 = der_len(cont, i + 1); rend = i2 + l
    j = i2
    assert cont[j] == 2
    nl, j = der_len(cont, j + 1)
    num = int.from_bytes(cont[j:j + nl], 'big'); j += nl
    assert cont[j] == 4
    dl, j = der_len(cont, j + 1)
    allrec[num] = cont[j:j + dl]
    i = rend
ids = set(allrec)


def h129(s):
    v = 9271
    for ch in s: v = (ch + 129 * v) & M
    return v


def xor_dec(data, key):
    v = 0
    for ch in key: v = (ch + 31 * v) & M
    out = bytearray(data)
    for j in range(len(out)):
        v = (1103515245 * v + 12345) & M
        out[j] ^= v & 0xFF
    return bytes(out)


def deinter(src):
    st = h129(keystr)
    out = bytearray(); k = 0
    def rng():
        nonlocal st
        st = (C2 + C1 * st) & M
        return st
    while k < len(src):
        out.append(src[k]); k2 = k + 1
        r = rng() % 3; n = r + 1
        for _ in range(n): rng()
        k = n + k2
    return bytes(out)


def getstage(sel):
    return deinter(xor_dec(allrec[sel], hashlib.md5(keystr + struct.pack('<i', sel)).digest()))


SUMV = 0x6A4AE6E0
def patch(code):
    c = bytearray(code)
    mi = re.search(rb'\xff\xc0\x89\x44\x24(.)', bytes(c))
    ms = re.search(rb'\x03\xc8\x89\x4c\x24(.)', bytes(c))
    if not mi or not ms: return bytes(c)
    A = mi.group(1)[0]; B = ms.group(1)[0]
    ia = c.find(bytes([0xC7, 0x44, 0x24, A, 0, 0, 0, 0]))
    ib = c.find(bytes([0xC7, 0x44, 0x24, B, 0, 0, 0, 0]))
    if ia < 0 or ib < 0: return bytes(c)
    c[ia + 4:ia + 8] = struct.pack('<I', 999999)
    c[ib + 4:ib + 8] = struct.pack('<I', (SUMV - 999999) & M)
    return bytes(c)


pc = {}
def code_of(sel):
    if sel not in pc: pc[sel] = patch(getstage(sel))
    return pc[sel]


CODE = 0x1000000; STACK = 0x2000000; STATE = 0x3000000; RET = 0x5000000
mu = Uc(UC_ARCH_X86, UC_MODE_64)
mu.mem_map(CODE, 0x10000); mu.mem_map(STACK, 0x20000); mu.mem_map(STATE, 0x1000)
ZR = (UC_X86_REG_RAX, UC_X86_REG_RBX, UC_X86_REG_RSI, UC_X86_REG_RDI, UC_X86_REG_R9,
      UC_X86_REG_R10, UC_X86_REG_R11, UC_X86_REG_RBP, UC_X86_REG_R12, UC_X86_REG_R13,
      UC_X86_REG_R14, UC_X86_REG_R15)
_tc = {}
def run(sel, byte, st):
    k = (sel, byte, bytes(st))
    if k in _tc: return _tc[k]
    code = code_of(sel)
    mu.mem_write(CODE, b'\x00' * 0x400); mu.mem_write(CODE, code)
    mu.ctl_remove_cache(CODE, CODE + 0x400)
    mu.mem_write(STATE, bytes(st) + b'\x00' * 32)
    rsp = STACK + 0x18000
    mu.reg_write(UC_X86_REG_RSP, rsp); mu.mem_write(rsp, RET.to_bytes(8, 'little'))
    for r in ZR: mu.reg_write(r, 0)
    mu.reg_write(UC_X86_REG_RCX, byte); mu.reg_write(UC_X86_REG_RDX, STATE)
    mu.reg_write(UC_X86_REG_R8, 0)
    try:
        mu.emu_start(CODE, RET, 0, 0)
    except UcError:
        _tc[k] = (None, None); return _tc[k]
    res = (mu.reg_read(UC_X86_REG_EAX) & M, bytes(mu.mem_read(STATE, 32)))
    _tc[k] = res
    return res


ORDER = [b for b in range(0x20, 0x7F)] + [b for b in range(256) if not (0x20 <= b < 0x7F)]
TARGET = 0x1185
best = None
seen = set()
t0 = time.time()

def dfs(cur, st, seq):
    global best
    if best is not None: return
    if cur == TARGET:
        best = (bytes(seq), st); return
    if len(seq) > 64: return
    key = (cur, st)
    if key in seen: return
    seen.add(key)
    for b in ORDER:
        n, ns = run(cur, b, st)
        if n is None or n not in ids: continue
        seq.append(b)
        dfs(n, ns, seq)
        seq.pop()
        if best is not None: return


sys.setrecursionlimit(5000)
dfs(0xCB7A, bytes(32), bytearray())
print("elapsed", time.time() - t0, "nodes", len(seen))
if best:
    print("SEQ:", best[0])
    print("SEQ hex:", best[0].hex())
    print("STATE:", best[1].hex())
else:
    print("not found")

# Final state 0x1185 = XTEA (big-endian words, 32 rounds, delta 0x9E3779B9) with key = state[0:16] ^ state[16:32],
# applied to record 0x2706.
st = best[1]
k = [struct.unpack('<I', st[4*i:4*i+4])[0] ^ struct.unpack('<I', st[16+4*i:20+4*i])[0] for i in range(4)]
data = bytearray(getstage(0x2706)); delta = 0x9E3779B9
for b in range(0, len(data) // 8 * 8, 8):
    v0, v1 = struct.unpack('>II', data[b:b+8]); s = (delta * 32) & M
    for _ in range(32):
        v1 = (v1 - ((((v0 << 4) ^ (v0 >> 5)) + v0) ^ (s + k[(s >> 11) & 3]))) & M
        s = (s - delta) & M
        v0 = (v0 - ((((v1 << 4) ^ (v1 >> 5)) + v1) ^ (s + k[s & 3]))) & M
    data[b:b+8] = struct.pack('>II', v0, v1)
print(bytes(data).rstrip(b'\0').decode())
