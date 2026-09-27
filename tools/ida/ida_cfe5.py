import idaapi, idautils, idc, ida_bytes, ida_funcs, ida_segment, ida_hexrays, struct
out = open(idc.ARGV[1],"w",encoding="utf-8",errors="replace")
def P(*a):
    out.write(" ".join(str(x) for x in a)+"\n"); out.flush()
idaapi.auto_wait()

TGT=0x140001000
P("=== scan .text for call/jmp rel32 to %x ===" % TGT)
for seg_name in (".text",):
    s=ida_segment.get_segm_by_name(seg_name)
    data=ida_bytes.get_bytes(s.start_ea, s.end_ea-s.start_ea)
    for i in range(len(data)-5):
        if data[i] in (0xE8,0xE9):
            rel=struct.unpack("<i",data[i+1:i+5])[0]
            if s.start_ea+i+5+rel==TGT:
                ea=s.start_ea+i
                P("  %x  %s   (in %s)" % (ea, idc.generate_disasm_line(ea,0), idc.get_func_name(ea)))

P("=== scan all segments for VA/RVA pointer to %x ===" % TGT)
for s in idautils.Segments():
    seg=ida_segment.getseg(s)
    nm=ida_segment.get_segm_name(seg)
    data=ida_bytes.get_bytes(seg.start_ea, seg.end_ea-seg.start_ea) or b""
    q=struct.pack("<Q",TGT); d=struct.pack("<I",TGT-0x140000000)
    i=data.find(q)
    while i>=0:
        P("  qword ptr at %x (%s)" % (seg.start_ea+i,nm)); i=data.find(q,i+1)
    i=data.find(d)
    while i>=0:
        P("  dword rva at %x (%s) : %s" % (seg.start_ea+i,nm, idc.generate_disasm_line(seg.start_ea+i,0))); i=data.find(d,i+1)

P("")
P("=== CRT init / TLS tables ===")
for n in ("__xi_a","__xi_z","__xc_a","__xc_z","__xp_a","__xt_z","TlsCallbacks","TlsDirectory","__dyn_tls_init_callback"):
    ea=idc.get_name_ea_simple(n)
    if ea!=idaapi.BADADDR: P("  %s=%x"%(n,ea))
s=ida_segment.get_segm_by_name(".rdata")
P(".rdata",hex(s.start_ea),hex(s.end_ea))

P("")
P("=== decompile sub_1400019D0 (entry-adjacent) head 40 lines ===")
try:
    t=str(ida_hexrays.decompile(0x1400019D0)).splitlines()
    for l in t[:60]: P("  "+l)
except Exception as e: P("fail",e)
out.close()
idc.qexit(0)
