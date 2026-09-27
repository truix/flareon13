from unicorn import *
from unicorn.x86_const import *
import struct
d=open('files/neon_outrun','rb').read()
BASE=0x400000
# map whole file at a base such that vaddr==offset+0x1000 for .text; simpler: map image by program headers
import sys
e_phoff=struct.unpack_from('<Q',d,0x20)[0]
e_phentsize,e_phnum=struct.unpack_from('<HH',d,0x36)
mu=Uc(UC_ARCH_X86,UC_MODE_64)
segs=[]
for i in range(e_phnum):
    off=e_phoff+i*e_phentsize
    p_type,p_flags,p_off,p_vaddr,p_paddr,p_filesz,p_memsz=struct.unpack_from('<IIQQQQQ',d,off)
    if p_type==1:
        segs.append((p_vaddr,p_off,p_filesz,p_memsz))
for v,o,fs,ms in segs:
    start=v & ~0xFFF
    size=((v+ms+0xFFF)&~0xFFF)-start
    try: mu.mem_map(start,size)
    except Exception: pass
    mu.mem_write(v, d[o:o+fs])
STACK=0x7ffff0000000
mu.mem_map(STACK,0x200000)
def call(addr,rdi=0,rsi=0,rdx=0):
    sp=STACK+0x100000
    RET=0x1000
    try: mu.mem_map(0,0x2000)
    except Exception: pass
    mu.mem_write(RET,b'\xf4')  # hlt
    mu.reg_write(UC_X86_REG_RSP,sp)
    mu.mem_write(sp,struct.pack('<Q',RET))
    mu.reg_write(UC_X86_REG_RDI,rdi); mu.reg_write(UC_X86_REG_RSI,rsi); mu.reg_write(UC_X86_REG_RDX,rdx)
    try:
        mu.emu_start(addr,RET,0,0)
    except Exception as e:
        pc=mu.reg_read(UC_X86_REG_RIP)
        print('fault at',hex(pc),e)
        raise
    return mu.reg_read(UC_X86_REG_RAX), mu.reg_read(UC_X86_REG_RDX)
res=[]
for k in range(28):
    a,_=call(0x67F9D8, k, 90)
    b,sdx=call(0x68003E, a&0xff)
    res.append((k,a&0xff,b,sdx&0xff))
    print(k, hex(a&0xff), b, hex(b), sdx&0xff)
