import idaapi, idautils, idc, ida_bytes, ida_funcs, ida_name, ida_hexrays

out = open(idc.ARGV[1],"w",encoding="utf-8",errors="replace")
def P(*a):
    out.write(" ".join(str(x) for x in a)+"\n"); out.flush()

idaapi.auto_wait()

P("=== scan all instructions for ldmxcsr / fldcw / stmxcsr ===")
hits=[]
for f in idautils.Functions():
    for ea in idautils.FuncItems(f):
        m = idc.print_insn_mnem(ea).lower()
        if m in ("ldmxcsr","stmxcsr","fldcw","fnstcw","fstcw","fnclex","fwait"):
            hits.append((ea,m,idc.get_func_name(f),idc.generate_disasm_line(ea,0)))
for h in hits:
    P("  %x %-8s %-28s %s" % (h[0],h[1],h[2],h[3]))
P("total",len(hits))

P("")
P("=== names containing controlfp/control87/fpreset/setmode ===")
for ea,name in idautils.Names():
    ln = name.lower()
    if any(k in ln for k in ("controlfp","control87","fpreset","clearfp","statusfp","mxcsr","setfpe")):
        P("  %x %s" % (ea,name))

P("")
P("=== decompile junk-candidates called near divide ===")
for a in (0x140048DC0,):
    try:
        P("---- %x ----" % a)
        P(str(ida_hexrays.decompile(a)))
    except Exception as e:
        P("fail",hex(a),e)

P("")
P("=== xrefs to ldmxcsr-containing funcs ===")
done=set()
for ea,m,fn,_ in hits:
    if m!="ldmxcsr": continue
    f=ida_funcs.get_func(ea)
    if not f or f.start_ea in done: continue
    done.add(f.start_ea)
    P("func %s @ %x  callers:" % (idc.get_func_name(f.start_ea), f.start_ea))
    for x in idautils.XrefsTo(f.start_ea,0):
        P("   from %x %s" % (x.frm, idc.get_func_name(x.frm)))

out.close()
idc.qexit(0)
