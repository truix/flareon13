import idaapi, idautils, idc, ida_bytes, ida_segment, ida_name, ida_nalt
out = open(idc.ARGV[1],"w",encoding="utf-8",errors="replace")
def P(*a):
    out.write(" ".join(str(x) for x in a)+"\n"); out.flush()
idaapi.auto_wait()

P("=== .rdata 0x1400D5300-0x1400D5400 qwords ===")
for ea in range(0x1400D5300,0x1400D5400,8):
    v=ida_bytes.get_qword(ea)
    P("  %x: %016x  %-30s | name=%s" % (ea,v, idc.get_func_name(v) or "", ida_name.get_name(ea)))

P("")
P("=== segments ===")
for s in idautils.Segments():
    seg=ida_segment.getseg(s)
    P("  %-10s %x-%x" % (ida_segment.get_segm_name(seg), seg.start_ea, seg.end_ea))

P("")
P("=== search names for tls ===")
for ea,nm in idautils.Names():
    if "tls" in nm.lower() or "TLS" in nm:
        P("  %x %s" % (ea,nm))

P("")
P("=== dump around 1400d5330..1400d5360 bytes ===")
P(ida_bytes.get_bytes(0x1400d5330,0x40).hex())
P("=== xrefs to 0x1400d5340 ===")
for x in idautils.XrefsTo(0x1400d5340,0):
    P("   %x %s : %s" % (x.frm, idc.get_func_name(x.frm), idc.generate_disasm_line(x.frm,0)))
out.close()
idc.qexit(0)
