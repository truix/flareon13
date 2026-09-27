import hashlib, struct

B = open(__file__.rsplit('/', 1)[0].rsplit('\\', 1)[0] + '/../udf/click_me', 'rb').read()
_, n = struct.unpack('>II', B[:8])
slices = [B[o:o + s] for _, _, o, s, _ in (struct.unpack('>5I', B[8 + 20 * i:28 + 20 * i]) for i in range(n))]
s0, s1 = slices

# slice0 (arm64 ALL, fire animation): SHA-0("totally_fake_flag")[:19 hex] ^ key -> piece 6
def sha0(msg):
    ml = len(msg) * 8
    msg += b'\x80' + b'\0' * ((55 - len(msg)) % 64) + struct.pack('>Q', ml)
    M = 0xffffffff
    rol = lambda v, r: ((v << r) | (v >> (32 - r))) & M
    h = [0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476, 0xC3D2E1F0]
    for off in range(0, len(msg), 64):
        W = list(struct.unpack('>16I', msg[off:off + 64]))
        for i in range(16, 80):
            W.append(W[i - 3] ^ W[i - 8] ^ W[i - 14] ^ W[i - 16])  # no rotate: SHA-0
        a, b, c, d, e = h
        for i in range(80):
            if i < 20: f, k = (b & c) | (~b & d), 0x5A827999
            elif i < 40: f, k = b ^ c ^ d, 0x6ED9EBA1
            elif i < 60: f, k = (b & c) | (b & d) | (c & d), 0x8F1BBCDC
            else: f, k = b ^ c ^ d, 0xCA62C1D6
            e, d, c, b, a = d, c, rol(b, 30), a, (rol(a, 5) + f + e + k + W[i]) & M
        h = [(x + y) & M for x, y in zip(h, [a, b, c, d, e])]
    return b''.join(struct.pack('>I', x) for x in h)

hx = sha0(b'totally_fake_flag').hex()[:19]
key0 = s0[0x1280:0x1290] + bytes([0x50, 0x4A, 0x07])  # __const @0x100001280 (+ immediates)
piece6 = bytes(ord(c) ^ k for c, k in zip(hx, key0))

pieces = [b'FLARE-STANDARD-ANTIVIRUS-TEST-FILE!',  # COM
          b'mainframe_ebcdic_ghost',              # PDF EBCDIC text
          b'jbig2_fax_geometry',                   # PDF JBIG2 image
          b'udf_tagged_descriptor',                # UDF impl-use area
          b'reduce_not_deflate',                   # ZIP flag.txt
          piece6]                                  # click_me slice0

# slice1 (Crystal): 6 MD5 targets @0x100035E30 (32 bytes each, nibble ^ 0x80)
unhex = lambda raw: bytes.fromhex(''.join('%x' % (c ^ 0x80) for c in raw))
targets = {unhex(s1[0x35E30 + 32 * i:0x35E50 + 32 * i]) for i in range(6)}
assert {hashlib.md5(p).digest() for p in pieces} == targets

key = bytearray(32)
for p in pieces:
    for i, c in enumerate(hashlib.sha256(p).digest()):
        key[i] ^= c

def rc4(k, data):
    S = list(range(256)); j = 0
    for i in range(256):
        j = (j + S[i] + k[i % len(k)]) & 255; S[i], S[j] = S[j], S[i]
    i = j = 0; out = bytearray()
    for c in data:
        i = (i + 1) & 255; j = (j + S[i]) & 255; S[i], S[j] = S[j], S[i]
        out.append(c ^ S[(S[i] + S[j]) & 255])
    return bytes(out)

ct = unhex(s1[0x35EF0:0x35F40])  # 80 bytes @0x100035EF0 -> 40-byte ciphertext
print('piece6:', piece6.decode())
print('flag  :', rc4(key, ct).decode())
