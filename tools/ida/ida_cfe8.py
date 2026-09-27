import idaapi, idautils, idc, ida_bytes
out = open(idc.ARGV[1],"w",encoding="utf-8",errors="replace")
def P(*a): out.write(" ".join(str(x) for x in a)+"\n"); out.flush()
idaapi.auto_wait()
P("=== xrefs to sub_140003A20 / sub_140003570 / sub_1400C4D1C ===")
for t in (0x140003A20,0x140003570,0x1400C4D1C,0x140006FC0,0x140007690):
    P("-- %x %s" % (t, idc.get_func_name(t)))
    for x in idautils.XrefsTo(t,0):
        P("   %x %s : %s" % (x.frm, idc.get_func_name(x.frm), idc.generate_disasm_line(x.frm,0)))
P("")
P("=== xmmword_1400DDED0 (marquee pad) ===")
b=ida_bytes.get_bytes(0x1400DDED0,16)
P(b.hex(), repr(b))
P("=== a843952 ===")
ea=idc.get_name_ea_simple("a843952")
P(hex(ea), repr(ida_bytes.get_bytes(ea,16)) if ea!=idaapi.BADADDR else "n/a")
P("=== data at 1400E2A80 (a0) / 1400E9230 (hWnd) / 1400E9020 ===")
for n,ea,sz in [("a0",0x1400E2A80,8),("hWnd",0x1400E9230,8),("expr",0x1400E9020,8)]:
    P("  %s %x -> %s" % (n,ea, ida_bytes.get_bytes(ea,sz).hex()))
P("=== .CRT init table names ===")
for ea in range(0x1400D5330,0x1400D5360,8):
    P("  %x -> %016x" % (ea, ida_bytes.get_qword(ea)))
out.close(); idc.qexit(0)
