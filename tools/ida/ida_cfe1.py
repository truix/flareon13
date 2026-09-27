import idaapi, idautils, idc, ida_bytes, ida_funcs, ida_name, ida_segment
import ida_hexrays

out = open(idc.ARGV[1] if len(idc.ARGV)>1 else r"C:\out\cfe1.txt","w",encoding="utf-8",errors="replace")
def P(*a):
    out.write(" ".join(str(x) for x in a)+"\n")
    out.flush()

idaapi.auto_wait()

P("=== context of 0x1400D3919 ===")
f = ida_funcs.get_func(0x1400D3919)
P("func", hex(f.start_ea) if f else None, hex(f.end_ea) if f else None, idc.get_func_name(0x1400D3919))
ea = 0x1400D38A0
while ea < 0x1400D39C0:
    P("  %x  %s" % (ea, idc.generate_disasm_line(ea,0)))
    ea = idc.next_head(ea, 0x1400D39C0)
    if ea == idaapi.BADADDR: break

P("")
P("=== func chunks of sub_140003A20 ===")
fn = ida_funcs.get_func(0x140003A20)
if fn:
    for ch in idautils.Chunks(0x140003A20):
        P("  chunk", hex(ch[0]), hex(ch[1]))
P("=== func chunks of sub_140003570 ===")
for ch in idautils.Chunks(0x140003570):
    P("  chunk", hex(ch[0]), hex(ch[1]))
P("=== func chunks of sub_140003B20 ===")
for ch in idautils.Chunks(0x140003B20):
    P("  chunk", hex(ch[0]), hex(ch[1]))

P("")
P("=== operator functor vtables ===")
for nm,ea in [("plus",0x1400DDD58),("minus",0x1400DDD28),("mul",0x1400DDDB8),("div",0x1400DDE90),
              ("and",0x1400DDCF8),("or",0x1400DDDE8),("xor",0x1400DDE18)]:
    P("--",nm,hex(ea))
    for i in range(6):
        v = ida_bytes.get_qword(ea+8*i)
        P("   [%d] %016x %s" % (i, v, idc.get_func_name(v) or ida_name.get_name(v) or ""))

P("")
P("=== decompile functor bodies ===")
seen=set()
for nm,ea in [("plus",0x1400DDD58),("minus",0x1400DDD28),("mul",0x1400DDDB8),("div",0x1400DDE90),
              ("and",0x1400DDCF8),("or",0x1400DDDE8),("xor",0x1400DDE18)]:
    for i in range(6):
        v = ida_bytes.get_qword(ea+8*i)
        fu = ida_funcs.get_func(v)
        if fu and fu.start_ea not in seen:
            seen.add(fu.start_ea)
            try:
                cf = ida_hexrays.decompile(fu.start_ea)
                P("---- %s slot%d %s @ %x ----" % (nm,i,idc.get_func_name(fu.start_ea),fu.start_ea))
                P(str(cf))
            except Exception as e:
                P("decompile fail", hex(fu.start_ea), e)

out.close()
idc.qexit(0)
