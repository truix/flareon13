#!/usr/bin/env python3
"""Win32 debugger harness for Partner_CTF.exe.

Serves \\.\pipe\FlareChallenge with the key, breaks at +0x1531 (just after the two
hooked strlen() calls), dumps R12 / the two Str buffers, and optionally forces
R12 (= the value the hooked strlen returned) to the real strlen("Wingardium Leviosa").

    python dbg.py <key> [force_r12]
"""
import ctypes, ctypes.wintypes as w, os, sys, threading

k32 = ctypes.WinDLL("kernel32", use_last_error=True)
RVA_BP = 0x1531       # test r12d, r12d
RVA_STR = 0x5078      # .data global Str = "Bxs]bv`^u)TpcnolVjN"
HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.join(HERE, "Partner_CTF.exe")
OUT = os.path.join(HERE, "partner_stdout.txt")


class STARTUPINFO(ctypes.Structure):
    _fields_ = [("cb", w.DWORD), ("lpReserved", w.LPSTR), ("lpDesktop", w.LPSTR),
                ("lpTitle", w.LPSTR), ("dwX", w.DWORD), ("dwY", w.DWORD),
                ("dwXSize", w.DWORD), ("dwYSize", w.DWORD), ("dwXCountChars", w.DWORD),
                ("dwYCountChars", w.DWORD), ("dwFillAttribute", w.DWORD),
                ("dwFlags", w.DWORD), ("wShowWindow", w.WORD), ("cbReserved2", w.WORD),
                ("lpReserved2", ctypes.POINTER(ctypes.c_byte)),
                ("hStdInput", w.HANDLE), ("hStdOutput", w.HANDLE), ("hStdError", w.HANDLE)]


class PROCESS_INFORMATION(ctypes.Structure):
    _fields_ = [("hProcess", w.HANDLE), ("hThread", w.HANDLE),
                ("dwProcessId", w.DWORD), ("dwThreadId", w.DWORD)]


class SECURITY_ATTRIBUTES(ctypes.Structure):
    _fields_ = [("nLength", w.DWORD), ("lpSecurityDescriptor", ctypes.c_void_p),
                ("bInheritHandle", w.BOOL)]


class CONTEXT(ctypes.Structure):
    _pack_ = 16
    _fields_ = [("P1Home", ctypes.c_ulonglong), ("P2Home", ctypes.c_ulonglong),
                ("P3Home", ctypes.c_ulonglong), ("P4Home", ctypes.c_ulonglong),
                ("P5Home", ctypes.c_ulonglong), ("P6Home", ctypes.c_ulonglong),
                ("ContextFlags", w.DWORD), ("MxCsr", w.DWORD),
                ("SegCs", w.WORD), ("SegDs", w.WORD), ("SegEs", w.WORD),
                ("SegFs", w.WORD), ("SegGs", w.WORD), ("SegSs", w.WORD),
                ("EFlags", w.DWORD),
                ("Dr0", ctypes.c_ulonglong), ("Dr1", ctypes.c_ulonglong),
                ("Dr2", ctypes.c_ulonglong), ("Dr3", ctypes.c_ulonglong),
                ("Dr6", ctypes.c_ulonglong), ("Dr7", ctypes.c_ulonglong),
                ("Rax", ctypes.c_ulonglong), ("Rcx", ctypes.c_ulonglong),
                ("Rdx", ctypes.c_ulonglong), ("Rbx", ctypes.c_ulonglong),
                ("Rsp", ctypes.c_ulonglong), ("Rbp", ctypes.c_ulonglong),
                ("Rsi", ctypes.c_ulonglong), ("Rdi", ctypes.c_ulonglong),
                ("R8", ctypes.c_ulonglong), ("R9", ctypes.c_ulonglong),
                ("R10", ctypes.c_ulonglong), ("R11", ctypes.c_ulonglong),
                ("R12", ctypes.c_ulonglong), ("R13", ctypes.c_ulonglong),
                ("R14", ctypes.c_ulonglong), ("R15", ctypes.c_ulonglong),
                ("Rip", ctypes.c_ulonglong),
                ("Dummy", ctypes.c_byte * (512 + 26 * 16 + 8 * 6))]


class EXCEPTION_RECORD(ctypes.Structure):
    pass


EXCEPTION_RECORD._fields_ = [("ExceptionCode", w.DWORD), ("ExceptionFlags", w.DWORD),
                             ("ExceptionRecord", ctypes.POINTER(EXCEPTION_RECORD)),
                             ("ExceptionAddress", ctypes.c_void_p),
                             ("NumberParameters", w.DWORD),
                             ("ExceptionInformation", ctypes.c_ulonglong * 15)]


class EXCEPTION_DEBUG_INFO(ctypes.Structure):
    _fields_ = [("ExceptionRecord", EXCEPTION_RECORD), ("dwFirstChance", w.DWORD)]


class CREATE_PROCESS_DEBUG_INFO(ctypes.Structure):
    _fields_ = [("hFile", w.HANDLE), ("hProcess", w.HANDLE), ("hThread", w.HANDLE),
                ("lpBaseOfImage", ctypes.c_void_p), ("dwDebugInfoFileOffset", w.DWORD),
                ("nDebugInfoSize", w.DWORD), ("lpThreadLocalBase", ctypes.c_void_p),
                ("lpStartAddress", ctypes.c_void_p), ("lpImageName", ctypes.c_void_p),
                ("fUnicode", w.WORD)]


class DEBUG_EVENT_U(ctypes.Union):
    _fields_ = [("Exception", EXCEPTION_DEBUG_INFO),
                ("CreateProcessInfo", CREATE_PROCESS_DEBUG_INFO),
                ("pad", ctypes.c_byte * 200)]


class DEBUG_EVENT(ctypes.Structure):
    _fields_ = [("dwDebugEventCode", w.DWORD), ("dwProcessId", w.DWORD),
                ("dwThreadId", w.DWORD), ("u", DEBUG_EVENT_U)]


def serve_pipe(key):
    k32.CreateNamedPipeA.restype = w.HANDLE
    h = k32.CreateNamedPipeA(b"\\\\.\\pipe\\FlareChallenge", 2, 6, 1, 256, 256, 0, None)
    k32.ConnectNamedPipe(h, None)
    n = w.DWORD(0)
    k32.WriteFile(h, key, len(key), ctypes.byref(n), None)
    k32.CloseHandle(h)


def main():
    key = (sys.argv[1] if len(sys.argv) > 1 else "HarryPotter").encode()
    force = int(sys.argv[2]) if len(sys.argv) > 2 else None
    threading.Thread(target=serve_pipe, args=(key,), daemon=True).start()

    sa = SECURITY_ATTRIBUTES(ctypes.sizeof(SECURITY_ATTRIBUTES), None, True)
    k32.CreateFileA.restype = w.HANDLE
    hout = k32.CreateFileA(OUT.encode(), 0x40000000, 3, ctypes.byref(sa), 2, 0x80, None)
    hin = k32.CreateFileA(b"NUL", 0x80000000, 3, ctypes.byref(sa), 3, 0x80, None)

    si = STARTUPINFO(); si.cb = ctypes.sizeof(si)
    si.dwFlags = 0x100        # STARTF_USESTDHANDLES
    si.hStdInput, si.hStdOutput, si.hStdError = hin, hout, hout
    pi = PROCESS_INFORMATION()
    ok = k32.CreateProcessA(EXE.encode(), None, None, None, True,
                            0x00000002,      # DEBUG_ONLY_THIS_PROCESS
                            None, None, ctypes.byref(si), ctypes.byref(pi))
    assert ok, ctypes.get_last_error()

    ev = DEBUG_EVENT()
    base = orig = hproc = None
    done = False
    while True:
        if not k32.WaitForDebugEvent(ctypes.byref(ev), 30000):
            print("timeout"); break
        cont = 0x00010002
        code = ev.dwDebugEventCode
        if code == 3:
            hproc = ev.u.CreateProcessInfo.hProcess
            base = ev.u.CreateProcessInfo.lpBaseOfImage
            n = ctypes.c_size_t(); buf = ctypes.create_string_buffer(1)
            k32.ReadProcessMemory(hproc, ctypes.c_void_p(base + RVA_BP), buf, 1, ctypes.byref(n))
            orig = buf.raw
            k32.WriteProcessMemory(hproc, ctypes.c_void_p(base + RVA_BP), b"\xcc", 1, ctypes.byref(n))
        elif code == 1:
            er = ev.u.Exception.ExceptionRecord
            if er.ExceptionCode == 0x80000003 and not done and base and er.ExceptionAddress == base + RVA_BP:
                done = True
                hthread = k32.OpenThread(0x1FFFFF, False, ev.dwThreadId)
                ctx = CONTEXT(); ctx.ContextFlags = 0x10001B
                k32.GetThreadContext(hthread, ctypes.byref(ctx))
                n = ctypes.c_size_t()
                s = ctypes.create_string_buffer(32); loc = ctypes.create_string_buffer(32)
                k32.ReadProcessMemory(hproc, ctypes.c_void_p(base + RVA_STR), s, 20, ctypes.byref(n))
                k32.ReadProcessMemory(hproc, ctypes.c_void_p(ctx.Rbp + 0x70), loc, 20, ctypes.byref(n))
                print("R12 (hooked strlen return) =", ctx.R12)
                print("global Str after hook      =", s.raw[:19])
                print("local  Str after hook      =", loc.raw[:19])
                k32.WriteProcessMemory(hproc, ctypes.c_void_p(base + RVA_BP), orig, 1, ctypes.byref(n))
                ctx.Rip = base + RVA_BP
                if force is not None:
                    ctx.R12 = force
                    print("forced R12 ->", force)
                ctx.ContextFlags = 0x10001B
                k32.SetThreadContext(hthread, ctypes.byref(ctx))
                k32.CloseHandle(hthread)
            elif er.ExceptionCode != 0x80000003:
                cont = 0x80010001
        elif code == 5:
            k32.ContinueDebugEvent(ev.dwProcessId, ev.dwThreadId, cont)
            break
        k32.ContinueDebugEvent(ev.dwProcessId, ev.dwThreadId, cont)
    k32.CloseHandle(hout)
    print("--- child stdout ---")
    print(open(OUT, "rb").read().decode("latin1"))


if __name__ == "__main__":
    main()
