"""IDA batch: decompile functions containing given addresses (+callees to depth). ARGV: out.c depth addr1 addr2 ..."""
import ida_auto, ida_hexrays, ida_funcs, idc, ida_pro, idautils, ida_ua

ida_auto.auto_wait()
out_path, depth = idc.ARGV[1], int(idc.ARGV[2])
todo = [(int(a, 16), 0) for a in idc.ARGV[3:]]
seen = set()
with open(out_path, "w", encoding="utf-8") as out:
    while todo:
        ea, d = todo.pop(0)
        f = ida_funcs.get_func(ea)
        if not f or f.start_ea in seen:
            continue
        seen.add(f.start_ea)
        try:
            out.write(f"// ---- {f.start_ea:x} depth {d}\n{ida_hexrays.decompile(f.start_ea)}\n\n")
        except Exception as e:
            out.write(f"// {f.start_ea:x} {ida_funcs.get_func_name(f.start_ea)}: {e}\n\n")
        if d < depth:
            for h in idautils.FuncItems(f.start_ea):
                if idc.print_insn_mnem(h) == "call":
                    t = idc.get_operand_value(h, 0)
                    if ida_funcs.get_func(t):
                        todo.append((t, d + 1))
ida_pro.qexit(0)
