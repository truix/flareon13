import idaapi, idautils, idc, ida_bytes, ida_funcs, ida_name, ida_hexrays, ida_segment

out = open(idc.ARGV[1],"w",encoding="utf-8",errors="replace")
def P(*a):
    out.write(" ".join(str(x) for x in a)+"\n"); out.flush()

idaapi.auto_wait()

def dis(lo,hi,tag):
    P("=== disasm %s %x-%x ===" % (tag,lo,hi))
    ea=lo
    while ea<hi:
        P("  %x  %-40s ; %s" % (ea, idc.generate_disasm_line(ea,1), ida_bytes.get_bytes(ea, min(idc.get_item_size(ea),16)).hex()))
        n=idc.next_head(ea,hi)
        if n==idaapi.BADADDR or n<=ea: break
        ea=n

dis(0x140008300,0x140008380,"div functor")
dis(0x140003A20,0x140003B20,"sub_140003A20")

P("")
P("=== raw byte scan for ldmxcsr (0F AE /2) and stmxcsr (0F AE /3) in .text ===")
seg = ida_segment.get_segm_by_name(".text")
P("text",hex(seg.start_ea),hex(seg.end_ea))
data = ida_bytes.get_bytes(seg.start_ea, seg.end_ea-seg.start_ea)
cnt=0
for i in range(len(data)-2):
    if data[i]==0x0F and data[i+1]==0xAE:
        modrm=data[i+2]
        reg=(modrm>>3)&7
        if reg in (2,3):
            P("  %x reg=%d %s" % (seg.start_ea+i, reg, idc.generate_disasm_line(seg.start_ea+i,0)))
            cnt+=1
P("count",cnt)

P("")
P("=== all names matching fenv/fp/round/except ===")
for ea,name in idautils.Names():
    ln=name.lower()
    if any(k in ln for k in ("fenv","feset","fegetenv","fpcontrol","_fp","flt","except","ieee","round")):
        P("  %x %s" % (ea,name))

out.close()
idc.qexit(0)
