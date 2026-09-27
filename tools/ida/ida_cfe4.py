import idaapi, idautils, idc, ida_bytes, ida_funcs, ida_hexrays
out = open(idc.ARGV[1],"w",encoding="utf-8",errors="replace")
def P(*a):
    out.write(" ".join(str(x) for x in a)+"\n"); out.flush()
idaapi.auto_wait()

P("=== 0x140001000 region ===")
ea=0x140001000
while ea<0x140001045:
    P("  %x  %-46s ; %s" % (ea, idc.generate_disasm_line(ea,1), ida_bytes.get_bytes(ea,idc.get_item_size(ea)).hex()))
    n=idc.next_head(ea,0x140001045)
    if n==idaapi.BADADDR or n<=ea: break
    ea=n
f=ida_funcs.get_func(0x140001000)
P("func", hex(f.start_ea) if f else None, hex(f.end_ea) if f else None, idc.get_func_name(0x140001000))
try:
    P(str(ida_hexrays.decompile(0x140001000)))
except Exception as e:
    P("dec fail",e)
P("callers of 0x140001000:")
for x in idautils.XrefsTo(0x140001000,0):
    P("   from %x %s  %s" % (x.frm, idc.get_func_name(x.frm), idc.generate_disasm_line(x.frm,0)))

P("")
P("=== xrefs to sub_1400026B0 (rickroll) ===")
for x in idautils.XrefsTo(0x1400026B0,0):
    P("   from %x %s  %s" % (x.frm, idc.get_func_name(x.frm), idc.generate_disasm_line(x.frm,0)))
P("=== xrefs to sub_140002000 ===")
for x in idautils.XrefsTo(0x140002000,0):
    P("   from %x %s  %s" % (x.frm, idc.get_func_name(x.frm), idc.generate_disasm_line(x.frm,0)))

P("")
P("=== xrefs to globals ===")
for g,nm in [(0x1400E9238,"deque_proxy"),(0x1400E9240,"deque_map"),(0x1400E9248,"deque_mapsize"),
             (0x1400E9250,"deque_myoff"),(0x1400E9258,"deque_mysize"),
             (0x1400E8F04,"pending_op"),(0x1400E8F08,"accum"),(0x1400E8EC4,"newentry_flag"),
             (0x1400E2A82,"w_E2A82"),(0x1400E9020,"expr_buf"),(0x1400E8F00,"rick_active"),
             (0x1400E8EC0,"tick_idx"),(0x1400E8F10,"rick_len"),(0x1400E8F20,"rick_buf")]:
    P("-- %s %x" % (nm,g))
    for x in idautils.XrefsTo(g,0):
        P("   %x %s : %s" % (x.frm, idc.get_func_name(x.frm), idc.generate_disasm_line(x.frm,0)))

P("")
P("=== a0 / hWnd / FontW symbols ===")
for n in ("a0","hWnd","FontW","word_1400E9020"):
    ea = idc.get_name_ea_simple(n)
    P("  %s = %x" % (n, ea))
out.close()
idc.qexit(0)
