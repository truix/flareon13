
import ida_auto, idautils, idc, ida_pro, ida_funcs, ida_name
ida_auto.auto_wait()
name=idc.ARGV[2]
ea=ida_name.get_name_ea(idc.BADADDR,name)
f=ida_funcs.get_func(ea)
with open(idc.ARGV[1],'w') as out:
    for h in idautils.Heads(f.start_ea,f.end_ea):
        out.write('%x  %s\n'%(h, idc.GetDisasm(h)))
ida_pro.qexit(0)
