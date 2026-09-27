import idaapi, idautils, idc, ida_bytes
out = open(idc.ARGV[1],"w",encoding="utf-8",errors="replace")
def P(*a): out.write(" ".join(str(x) for x in a)+"\n"); out.flush()
idaapi.auto_wait()
def dis(lo,hi,tag):
    P("=== %s %x-%x ===" % (tag,lo,hi))
    ea=lo
    while ea<hi:
        P("  %x  %s" % (ea, idc.generate_disasm_line(ea,0)))
        n=idc.next_head(ea,hi)
        if n==idaapi.BADADDR or n<=ea: break
        ea=n
dis(0x1400057C0,0x140005860,"equals eval")
dis(0x140005890,0x140005940,"NOT / other")
dis(0x140004480,0x140004580,"operator branch")
dis(0x140004ca0,0x140004d10,"decoy launch")
dis(0x140004090,0x140004120,"digit branch head")
out.close(); idc.qexit(0)
