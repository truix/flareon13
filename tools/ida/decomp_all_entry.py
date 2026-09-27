"""IDA batch: make functions at given entry addrs, reanalyse, decompile all functions to ARGV[1]. ARGV: out.c addr..."""
import ida_auto, ida_hexrays, ida_funcs, idc, ida_pro, idautils

ida_auto.auto_wait()
for a in idc.ARGV[2:]:
    ea = int(a, 16)
    idc.create_insn(ea)
    ida_funcs.add_func(ea)
ida_auto.auto_wait()
with open(idc.ARGV[1], "w", encoding="utf-8") as out:
    for ea in idautils.Functions():
        try:
            out.write(f"// ---- {ea:x}\n{ida_hexrays.decompile(ea)}\n\n")
        except Exception as e:
            out.write(f"// {ea:x}: {e}\n\n")
ida_pro.qexit(0)
