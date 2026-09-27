import struct, hashlib, json, sys
from sympy import factorint, isprime
def u32(n): return struct.pack('<I',n)
def leb(p): return p.to_bytes((p.bit_length()+7)//8,'little')
def witness(p, facs):
    for g in range(2,1000):
        if all(pow(g,(p-1)//q,p)!=1 for q in facs): return g
    raise Exception('no witness')
def cert(p, cache={}):
    if p==2: return b'\x00'
    if p in cache: return cache[p]
    f=factorint(p-1)
    kids=[]
    for q in sorted(f):
        for _ in range(f[q]): kids.append(cert(q))
    g=witness(p,set(f))
    out=b'\x01'+u32(len(kids))+b''.join(u32(len(k))+k for k in kids)+u32(len(leb(p)))+leb(p)+u32(len(leb(g)))+leb(g)
    cache[p]=out
    return out
if __name__=='__main__':
    print(cert(769).hex())
