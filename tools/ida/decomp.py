"""IDA batch: decompile every function into ARGV[1]. Run via: idat -A -S"decomp.py out.c" bin"""
import ida_auto, ida_hexrays, idautils, ida_funcs, idc, ida_pro

ida_auto.auto_wait()
with open(idc.ARGV[1], "w", encoding="utf-8") as out:
    for ea in idautils.Functions():
        try:
            out.write(str(ida_hexrays.decompile(ea)) + "\n\n")
        except Exception as e:
            out.write(f"// {ea:x} {ida_funcs.get_func_name(ea)}: {e}\n\n")
ida_pro.qexit(0)
