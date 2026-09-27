import traceback
try:
    """IDA batch for a raw x64 blob: create function at ARGV[3] (hex), decompile it + callees to depth ARGV[2] into ARGV[1]."""
    import ida_auto, ida_hexrays, ida_funcs, idc, ida_pro, idautils, ida_ida, idaapi
    
    ida_auto.auto_wait()
    out_path, depth, entry = idc.ARGV[1], int(idc.ARGV[2]), int(idc.ARGV[3], 16)
    idc.create_insn(entry)
    ida_funcs.add_func(entry)
    ida_auto.auto_wait()
    todo, seen = [(entry, 0)], set()
    with open(out_path, "w", encoding="utf-8") as out:
        while todo:
            ea, d = todo.pop(0)
            if not ida_funcs.get_func(ea):
                idc.create_insn(ea); ida_funcs.add_func(ea); ida_auto.auto_wait()
            f = ida_funcs.get_func(ea)
            if not f or f.start_ea in seen:
                continue
            seen.add(f.start_ea)
            try:
                out.write(f"// ---- {f.start_ea:x} depth {d}\n{ida_hexrays.decompile(f.start_ea)}\n\n")
            except Exception as e:
                out.write(f"// {f.start_ea:x}: {e}\n\n")
            if d < depth:
                for h in idautils.FuncItems(f.start_ea):
                    if idc.print_insn_mnem(h) == "call" and idc.get_operand_type(h, 0) in (idc.o_near, idc.o_far):
                        todo.append((idc.get_operand_value(h, 0), d + 1))
    
except Exception:
    open(r"C:/Users/jhaus/flareon13/07-FlareCalc/work/raw_err.txt","w").write(traceback.format_exc())
import ida_pro
ida_pro.qexit(0)
