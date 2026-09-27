"""IDA batch: undefine [start,end), create a function at start with that end, decompile to ARGV[1]. ARGV: out.c start end"""
import ida_auto, ida_hexrays, ida_funcs, idc, ida_pro, ida_bytes

ida_auto.auto_wait()
start, end = int(idc.ARGV[2], 16), int(idc.ARGV[3], 16)
ida_bytes.del_items(start, ida_bytes.DELIT_SIMPLE, end - start)
ea = start
while ea < end:
    n = idc.create_insn(ea)
    ea += n if n else 1
ida_auto.auto_wait()
ida_funcs.del_func(start)
ok = ida_funcs.add_func(start, end)
ida_auto.auto_wait()
with open(idc.ARGV[1], "w", encoding="utf-8") as out:
    out.write(f"// add_func={ok}\n")
    try:
        out.write(str(ida_hexrays.decompile(start)))
    except Exception as e:
        out.write(f"// fail: {e}\n")
ida_pro.qexit(0)
