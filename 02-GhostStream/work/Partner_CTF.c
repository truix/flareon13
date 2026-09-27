void *sub_140001000()
{
  return &unk_140005680;
}


int sub_140001010(char *Format, ...)
{
  FILE *v2; // rbx
  unsigned __int64 *v3; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v2 = _acrt_iob_func(1u);
  v3 = (unsigned __int64 *)sub_140001000();
  return _stdio_common_vfprintf(*v3, v2, Format, nullptr, va);
}


int __fastcall main(int argc, const char **argv, const char **envp)
{
  __int64 v3; // r15
  HANDLE FileA; // rbx
  HMODULE ModuleHandleA; // rax
  size_t (__cdecl *strlen)(const char *); // rdi
  size_t v7; // rax
  unsigned __int64 v8; // r14
  int v9; // ebx
  __m128i si128; // xmm2
  char *v11; // rdx
  __m128 v12; // xmm3
  __int64 v13; // r14
  int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm1
  __int64 v26; // r14
  unsigned __int8 *v27; // r10
  int i; // r9d
  int v29; // r11d
  unsigned __int8 *v30; // rcx
  __int128 *v31; // r14
  __int128 v32; // xmm6
  int v33; // ebx
  __int16 v34; // di
  char v35; // si
  int v36; // eax
  int v37; // r12d
  int v38; // ecx
  unsigned __int64 v39; // r10
  char *v40; // r11
  unsigned __int64 v41; // rsi
  __int64 v42; // r14
  int v43; // r9d
  _BYTE *v44; // rdx
  int v45; // ebx
  int v46; // r8d
  int v47; // ebx
  unsigned __int64 v48; // rax
  DWORD LastError; // eax
  __int128 v51; // [rsp+40h] [rbp-C0h]
  __int128 v52; // [rsp+50h] [rbp-B0h]
  DWORD flOldProtect; // [rsp+68h] [rbp-98h] BYREF
  DWORD NumberOfBytesRead; // [rsp+6Ch] [rbp-94h] BYREF
  _BYTE v55[4]; // [rsp+70h] [rbp-90h] BYREF
  char v56; // [rsp+74h] [rbp-8Ch] BYREF
  char Str[32]; // [rsp+170h] [rbp+70h] BYREF
  CHAR String[16]; // [rsp+190h] [rbp+90h] BYREF
  __int128 v59; // [rsp+1A0h] [rbp+A0h]
  __int128 v60; // [rsp+1B0h] [rbp+B0h]
  __int128 v61; // [rsp+1C0h] [rbp+C0h]
  char v62[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v63; // [rsp+1E0h] [rbp+E0h]
  int v64; // [rsp+1F0h] [rbp+F0h]
  __int16 v65; // [rsp+1F4h] [rbp+F4h]
  _BYTE v66[218]; // [rsp+1F6h] [rbp+F6h] BYREF
  char Buffer[256]; // [rsp+2D0h] [rbp+1D0h] BYREF

  sub_140001010("[Partner] Process started.\n", argv, envp);
  memset(Buffer, 0, sizeof(Buffer));
  LODWORD(v3) = 0;
  FileA = CreateFileA("\\\\.\\pipe\\FlareChallenge", 0x80000000, 0, nullptr, 3u, 0, nullptr);
  if ( FileA == (HANDLE)-1LL )
  {
    while ( GetLastError() == 231 )
    {
      if ( !WaitNamedPipeA("\\\\.\\pipe\\FlareChallenge", 0x1388u) )
      {
        sub_140001010("[Partner] Pipe timeout.\n");
        return 1;
      }
      FileA = CreateFileA("\\\\.\\pipe\\FlareChallenge", 0x80000000, 0, nullptr, 3u, 0, nullptr);
      if ( FileA != (HANDLE)-1LL )
        goto LABEL_5;
    }
    LastError = GetLastError();
    sub_140001010("[Partner] Could not open pipe. Error: %lu\n", LastError);
    Sleep(0x7D0u);
    return 1;
  }
  else
  {
LABEL_5:
    ModuleHandleA = GetModuleHandleA("ucrtbase.dll");
    strlen = (size_t (__cdecl *)(const char *))GetProcAddress(ModuleHandleA, "strlen");
    if ( ReadFile(FileA, Buffer, 0xFFu, &NumberOfBytesRead, nullptr) && NumberOfBytesRead )
    {
      if ( NumberOfBytesRead >= 0x100uLL || (Buffer[NumberOfBytesRead] = 0, v7 = strcspn(Buffer, "\r\n"), v7 >= 0x100) )
        sub_140001878();
      Buffer[v7] = 0;
    }
    CloseHandle(FileA);
    *(_QWORD *)&v51 = 0x8B397AD735875C96uLL;
    *((_QWORD *)&v51 + 1) = 0xC85856BB286D0475uLL;
    *(_QWORD *)&v52 = 0x37A956A4E1DAEE35LL;
    *((_QWORD *)&v52 + 1) = 0xD340A27F9561581LL;
    memset(v66, 0, sizeof(v66));
    v64 = 640451310;
    *(_OWORD *)v62 = v51;
    v63 = v52;
    v65 = -1883;
    qword_140005678 = (unsigned __int64)strlen ^ 0xDEADBEEF;
    v8 = (unsigned __int64)strlen ^ 0xDEADBEEF;
    v9 = ::strlen(Buffer);
    if ( v9 > 0 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_140003420);
      v11 = &v56;
      v12 = (__m128)_mm_load_si128((const __m128i *)&xmmword_140003430);
      v13 = qword_140005678 + 270544960;
      v14 = 0;
      v15 = 8;
      do
      {
        v11 += 16;
        v16 = v15 + 4;
        v17 = (__m128i)_mm_and_ps((__m128)_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v15 - 8), 0), si128), v12);
        v18 = (__m128i)_mm_and_ps((__m128)_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v15 - 4), 0), si128), v12);
        v19 = _mm_packus_epi16(v17, v17);
        v20 = _mm_packus_epi16(v18, v18);
        *((_DWORD *)v11 - 5) = _mm_cvtsi128_si32(_mm_packus_epi16(v19, v19));
        *((_DWORD *)v11 - 4) = _mm_cvtsi128_si32(_mm_packus_epi16(v20, v20));
        v21 = _mm_cvtsi32_si128(v15);
        v15 += 16;
        v22 = (__m128i)_mm_and_ps((__m128)_mm_add_epi32(_mm_shuffle_epi32(v21, 0), si128), v12);
        v23 = _mm_packus_epi16(v22, v22);
        v24 = (__m128i)_mm_and_ps((__m128)_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v16), 0), si128), v12);
        *((_DWORD *)v11 - 3) = _mm_cvtsi128_si32(_mm_packus_epi16(v23, v23));
        v25 = _mm_packus_epi16(v24, v24);
        *((_DWORD *)v11 - 2) = _mm_cvtsi128_si32(_mm_packus_epi16(v25, v25));
      }
      while ( (int)(v15 - 8) < 256 );
      v26 = v13 ^ 0xBADF00D;
      v27 = v55;
      for ( i = 0; i < 256; ++i )
      {
        v29 = *v27;
        v14 = (v29 + (unsigned __int8)Buffer[i % v9] + v14) % 256;
        v30 = &v55[v14];
        *v27++ = *v30;
        *v30 = v29;
      }
      v8 = (v26 ^ 0xBADF00D) - 270544960;
      qword_140005678 = v8;
    }
    v31 = (__int128 *)(v8 ^ 0xDEADBEEF);
    VirtualProtect(v31, 0x17u, 0x40u, &flOldProtect);
    v32 = *v31;
    v33 = *((_DWORD *)v31 + 4);
    v34 = *((_WORD *)v31 + 10);
    v35 = *((_BYTE *)v31 + 22);
    *(_DWORD *)v31 = 319078449;
    *((_DWORD *)v31 + 1) = 24445362;
    *((_DWORD *)v31 + 2) = 806420712;
    *((_DWORD *)v31 + 3) = 1220738561;
    *((_DWORD *)v31 + 4) = 557367807;
    *((_WORD *)v31 + 10) = -3211;
    *((_BYTE *)v31 + 22) = -61;
    *(_OWORD *)String = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    GetEnvironmentVariableA("COMPUTERNAME", String, 0x40u);
    lstrlenA(String);
    IsDebuggerPresent();
    GetTickCount();
    strcpy(Str, "Wingardium Leviosa");
    ::strlen(::Str);
    v36 = ::strlen(Str);
    *v31 = v32;
    *((_DWORD *)v31 + 4) = v33;
    *((_WORD *)v31 + 10) = v34;
    *((_BYTE *)v31 + 22) = v35;
    v37 = v36;
    VirtualProtect(v31, 0x17u, flOldProtect, &flOldProtect);
    if ( v37 > 0 )
    {
      v38 = 0;
      v39 = -1;
      do
        ++v39;
      while ( ::Str[v39] );
      v40 = &v62[1];
      v41 = 0;
      v42 = 19;
      do
      {
        v43 = ((unsigned __int8)v37 + (int)v3) % 256;
        v44 = &v55[v43];
        v45 = (unsigned __int8)*v44;
        v46 = (v38 + v45) % 256;
        *v44 = v55[v46];
        v55[v46] = v45;
        *(v40 - 1) = (*(v40 - 1) + v37) ^ ::Str[v41 % v39] ^ v55[(unsigned __int8)(v45 + *v44)];
        v3 = (v43 + (unsigned __int8)v37) % 256;
        v47 = (unsigned __int8)v55[v3];
        v38 = (v46 + v47) % 256;
        v55[v3] = v55[v38];
        v48 = v41 + 1;
        v55[v38] = v47;
        v41 += 2LL;
        *v40 = (*v40 + v37) ^ ::Str[v48 % v39] ^ v55[(unsigned __int8)(v47 + v55[v3])];
        v40 += 2;
        --v42;
      }
      while ( v42 );
      v66[0] = 0;
    }
    if ( strstr(v62, "@flare-on.com") )
      sub_140001010("\n[SUCCESS] Decrypted Flag: %s\n", v62);
    else
      sub_140001010("\n[FAILED] Try again with better debugging\n");
    system("pause");
    return 0;
  }
}


void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}


BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}


void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  capture_previous_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1400050A0 = retaddr;
  ContextRecord.Rcx = v2;
  dword_140005090 = -1073740791;
  dword_140005094 = 1;
  dword_1400050A8 = 1;
  unk_1400050B0 = 2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}


void __noreturn sub_140001878()
{
  _report_securityfailure(8);
}


void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(v2);
  capture_current_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1400050A0 = retaddr;
  dword_140005090 = -1073740791;
  dword_140005094 = 1;
  dword_1400050A8 = 1;
  unk_1400050B0 = v2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}


struct _IMAGE_RUNTIME_FUNCTION_ENTRY *__fastcall capture_current_context(PCONTEXT ContextRecord)
{
  ULONG64 Rip; // rdi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *result; // rax
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp+18h] BYREF

  RtlCaptureContext(ContextRecord);
  Rip = ContextRecord->Rip;
  result = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
  if ( result )
    return (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlVirtualUnwind(
                                                     0,
                                                     ImageBase,
                                                     Rip,
                                                     result,
                                                     ContextRecord,
                                                     &HandlerData,
                                                     &EstablisherFrame,
                                                     nullptr);
  return result;
}


struct _IMAGE_RUNTIME_FUNCTION_ENTRY *__fastcall capture_previous_context(PCONTEXT ContextRecord)
{
  ULONG64 Rip; // rsi
  int i; // edi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *result; // rax
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+68h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+70h] [rbp+18h] BYREF

  RtlCaptureContext(ContextRecord);
  Rip = ContextRecord->Rip;
  for ( i = 0; i < 2; ++i )
  {
    result = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
    if ( !result )
      break;
    result = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlVirtualUnwind(
                                                       0,
                                                       ImageBase,
                                                       Rip,
                                                       result,
                                                       ContextRecord,
                                                       &HandlerData,
                                                       &EstablisherFrame,
                                                       nullptr);
  }
  return result;
}


int __fastcall pre_c_initialization()
{
  int startup_file_mode; // eax
  struct _exception *v1; // rcx
  int v2; // ebx
  charNode *v3; // rcx
  _crt_argv_mode v4; // eax
  struct _exception *v5; // rcx
  int v6; // eax
  struct _exception *v7; // rcx
  struct _exception *v8; // rcx
  int result; // eax

  set_app_type(_crt_console_app);
  startup_file_mode = get_startup_file_mode();
  set_fmode(startup_file_mode);
  v2 = UserMathErrorFunction(v1);
  *_p__commode() = v2;
  if ( !(unsigned __int8)_scrt_initialize_onexit_tables(1) )
    goto LABEL_8;
  sub_140002208();
  atexit(sub_140002244);
  v4 = (unsigned int)charNode::raw_length(v3);
  if ( configure_narrow_argv(v4) )
    goto LABEL_8;
  sub_140001F88();
  if ( (unsigned int)_scrt_is_user_matherr_present() )
    _setusermatherr(UserMathErrorFunction);
  v6 = UserMathErrorFunction(v5);
  configthreadlocale(v6);
  if ( (unsigned __int8)sub_140001F98() )
    initialize_narrow_environment();
  UserMathErrorFunction(v7);
  result = j_UserMathErrorFunction(v8);
  if ( result )
  {
LABEL_8:
    sub_140001FEC(7);
    JUMPOUT(0x140001AC5LL);
  }
  return result;
}


__int64 __fastcall post_pgo_initialization()
{
  _scrt_initialize_default_local_stdio_options();
  return 0;
}


void __fastcall pre_cpp_initialization()
{
  struct _exception *v0; // rcx
  int v1; // eax

  sub_140002194();
  v1 = UserMathErrorFunction(v0);
  set_new_mode(v1);
}


__int64 __fastcall __scrt_common_main_seh()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  char v2; // si
  __int64 v3; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  void (__fastcall **v8)(_QWORD, __int64); // rbx
  _tls_callback_type *v9; // rax
  _tls_callback_type *v10; // rbx
  char **initial_narrow_environment; // rdi
  char **v12; // rbx
  int *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx

  if ( !(unsigned __int8)_scrt_initialize_crt(1) )
  {
    sub_140001FEC(7);
    goto LABEL_19;
  }
  v2 = 0;
  LOBYTE(v0) = _scrt_acquire_startup_lock(v1);
  v3 = (unsigned int)dword_140005600;
  if ( dword_140005600 == 1 )
  {
LABEL_19:
    sub_140001FEC(7);
    goto LABEL_20;
  }
  if ( dword_140005600 )
  {
    v2 = 1;
  }
  else
  {
    dword_140005600 = 1;
    if ( initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
      return 255;
    initterm((_PVFV *)&qword_140003260, (_PVFV *)&qword_140003270);
    dword_140005600 = 2;
  }
  LOBYTE(v3) = v0;
  _scrt_release_startup_lock(v3);
  v6 = (_QWORD *)sub_140001FD0(v5);
  v8 = (void (__fastcall **)(_QWORD, __int64))v6;
  if ( *v6 && (unsigned __int8)_scrt_is_nonwritable_in_current_image(v6) )
    (*v8)(0, 2);
  v9 = (_tls_callback_type *)sub_140001FD8(v7);
  v10 = v9;
  if ( *v9 && (unsigned __int8)_scrt_is_nonwritable_in_current_image(v9) )
    register_thread_local_exe_atexit_callback(*v10);
  initial_narrow_environment = get_initial_narrow_environment();
  v12 = *_p___argv();
  v13 = _p___argc();
  v0 = main(*v13, (const char **)v12, (const char **)initial_narrow_environment);
  if ( !(unsigned __int8)sub_140002140(v14) )
LABEL_20:
    exit(v0);
  if ( !v2 )
    cexit();
  LOBYTE(v15) = 1;
  _scrt_uninitialize_crt(v15, 0);
  return v0;
}


__int64 start()
{
  sub_140001EC4();
  return __scrt_common_main_seh();
}


char _scrt_acquire_startup_lock()
{
  PVOID StackBase; // rcx
  signed __int64 v1; // rax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange64(&qword_140005608, (signed __int64)StackBase, 0);
      if ( !v1 )
        break;
      if ( StackBase == (PVOID)v1 )
        return 1;
    }
  }
  return 0;
}


char __fastcall _scrt_initialize_crt(int a1)
{
  if ( !a1 )
    byte_140005610 = 1;
  sub_140002280();
  if ( !(unsigned __int8)((__int64 (*)(void))sub_140001F98)() )
    return 0;
  if ( !(unsigned __int8)((__int64 (*)(void))sub_140001F98)() )
  {
    sub_140001F98(0);
    return 0;
  }
  return 1;
}


char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_140005611 )
  {
    if ( a1 > 1 )
    {
      sub_140001FEC(5);
      JUMPOUT(0x140001D86LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&xmmword_1400032D0);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_140005630._first = *(_OWORD *)&Table._first;
      stru_140005630._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_140005630) )
    {
      return 0;
    }
    byte_140005611 = 1;
  }
  return 1;
}


bool __fastcall _scrt_is_nonwritable_in_current_image(__int64 a1)
{
  _DWORD *v2; // rcx
  unsigned __int64 v3; // r8
  _DWORD *v4; // rdx
  _DWORD *v5; // r9
  unsigned __int64 v6; // rcx

  if ( MEMORY[0x140000000] != 23117 )
    return 0;
  v2 = (_DWORD *)(0x140000000LL + MEMORY[0x14000003C]);
  if ( *v2 != 17744 || *(_WORD *)(0x140000018LL + MEMORY[0x14000003C]) != 523 )
    return 0;
  v3 = a1 - 0x140000000LL;
  v4 = (_DWORD *)((char *)v2 + *(unsigned __int16 *)(0x140000014LL + MEMORY[0x14000003C]) + 24);
  v5 = &v4[10 * *(unsigned __int16 *)(0x140000006LL + MEMORY[0x14000003C])];
  while ( v4 != v5 )
  {
    v6 = (unsigned int)v4[3];
    if ( v3 >= v6 && v3 < (unsigned int)(v6 + v4[2]) )
      return v4 && v4[9] >= 0;
    v4 += 10;
  }
  v4 = nullptr;
  return v4 && v4[9] >= 0;
}


__int64 __fastcall _scrt_release_startup_lock(char a1)
{
  __int64 result; // rax

  result = _scrt_is_ucrt_dll_in_use();
  if ( (_DWORD)result )
  {
    if ( !a1 )
      _InterlockedExchange64(&qword_140005608, 0);
  }
  return result;
}


char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_140005610 || !a2 )
  {
    sub_140001F98(a1);
    LOBYTE(v3) = v2;
    sub_140001F98(v3);
  }
  return 1;
}


_onexit_t __cdecl onexit(_onexit_t Func)
{
  int v2; // eax
  int (__cdecl *v3)(); // rdx

  if ( Table._first == (_PVFV *)-1LL )
    v2 = crt_atexit((_PVFV)Func);
  else
    v2 = register_onexit_function(&Table, Func);
  v3 = nullptr;
  if ( !v2 )
    return Func;
  return v3;
}


int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != nullptr) - 1;
}


__int64 sub_140001EC4()
{
  uintptr_t v0; // rax
  __int64 result; // rax
  struct _FILETIME v2; // [rsp+20h] [rbp-10h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp+18h] BYREF

  v0 = _security_cookie;
  if ( _security_cookie == 0x2B992DDFA232LL )
  {
    SystemTimeAsFileTime = 0;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v2 = SystemTimeAsFileTime;
    v2 = (struct _FILETIME)(GetCurrentThreadId() ^ *(unsigned __int64 *)&v2);
    v2 = (struct _FILETIME)(GetCurrentProcessId() ^ *(unsigned __int64 *)&v2);
    QueryPerformanceCounter(&PerformanceCount);
    v0 = ((unsigned __int64)&v2
        ^ *(_QWORD *)&v2
        ^ PerformanceCount.QuadPart
        ^ ((unsigned __int64)PerformanceCount.LowPart << 32))
       & 0xFFFFFFFFFFFFLL;
    if ( v0 == 0x2B992DDFA232LL )
      v0 = 0x2B992DDFA233LL;
    _security_cookie = v0;
  }
  result = ~v0;
  qword_140005040 = result;
  return result;
}


__int64 __fastcall UserMathErrorFunction(struct _exception *a1)
{
  return 0;
}


__int64 __fastcall charNode::raw_length(charNode *this)
{
  return 1;
}


__int64 get_startup_file_mode()
{
  return 0x4000;
}


void sub_140001F88()
{
  InitializeSListHead(&stru_140005650);
}


char sub_140001F98()
{
  return 1;
}


void guard_check_icall_nop()
{
  ;
}


void *sub_140001FA0()
{
  return &unk_140005660;
}


_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_140001000();
  *v0 |= 0x24uLL;
  result = sub_140001FA0();
  *result |= 2uLL;
  return result;
}


_BOOL8 _scrt_is_user_matherr_present()
{
  return dword_14000504C == 0;
}


void *sub_140001FD0()
{
  return &unk_140005690;
}


void *sub_140001FD8()
{
  return &unk_140005688;
}


void sub_140001FE0()
{
  dword_140005668 = 0;
}


void __fastcall sub_140001FEC(unsigned int a1)
{
  ULONG64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v3; // rax
  BOOL v4; // ebx
  struct _EXCEPTION_POINTERS ExceptionInfo; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v6[20]; // [rsp+50h] [rbp-B0h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  DWORD64 retaddr; // [rsp+5C8h] [rbp+4C8h]
  __int64 v9; // [rsp+5D0h] [rbp+4D0h] BYREF
  unsigned __int64 ImageBase; // [rsp+5D8h] [rbp+4D8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+5E0h] [rbp+4E0h] BYREF
  PVOID HandlerData; // [rsp+5E8h] [rbp+4E8h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a1);
  sub_140001FE0();
  memset(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v3 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, nullptr);
  if ( v3 )
    RtlVirtualUnwind(0, ImageBase, Rip, v3, &ContextRecord, &HandlerData, &EstablisherFrame, nullptr);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v9;
  memset(v6, 0, 0x98u);
  v6[2] = retaddr;
  v6[0] = 0x140000015LL;
  v4 = IsDebuggerPresent();
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v6;
  ExceptionInfo.ContextRecord = &ContextRecord;
  SetUnhandledExceptionFilter(nullptr);
  if ( !UnhandledExceptionFilter(&ExceptionInfo) && !v4 )
    sub_140001FE0();
}


// attributes: thunk
__int64 __fastcall j_UserMathErrorFunction(struct _exception *a1)
{
  return UserMathErrorFunction(a1);
}


bool sub_140002140()
{
  HMODULE ModuleHandleW; // rax
  __int64 v1; // rcx
  bool result; // al

  ModuleHandleW = GetModuleHandleW(nullptr);
  result = ModuleHandleW
        && *(_WORD *)ModuleHandleW == 23117
        && (v1 = *((int *)ModuleHandleW + 15), *(_DWORD *)((char *)ModuleHandleW + v1) == 17744)
        && *(_WORD *)((char *)ModuleHandleW + v1 + 24) == 523
        && *(_DWORD *)((char *)ModuleHandleW + v1 + 132) > 0xEu
        && *(_DWORD *)((char *)ModuleHandleW + v1 + 248) != 0;
  return result;
}


LPTOP_LEVEL_EXCEPTION_FILTER sub_140002194()
{
  return SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)sub_1400021A4);
}


__int64 __fastcall sub_1400021A4(_QWORD *a1)
{
  _DWORD *v1; // rbx
  int v3; // edx
  __int64 v5; // rbx

  v1 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 == -529697949 && v1[6] == 4 )
  {
    v3 = v1[8];
    if ( v3 == 429065504 || (unsigned int)(v3 - 429065505) <= 1 || v3 == 26820608 )
    {
      *(_QWORD *)_current_exception() = v1;
      v5 = a1[1];
      *(_QWORD *)_current_exception_context() = v5;
      terminate();
    }
  }
  return 0;
}


void sub_140002208()
{
  void (**i)(void); // rbx

  for ( i = qword_1400038F8; i < qword_1400038F8; ++i )
  {
    if ( *i )
      (*i)();
  }
}


void __fastcall sub_140002244()
{
  void (**i)(void); // rbx

  for ( i = &qword_140003908; i < &qword_140003908; ++i )
  {
    if ( *i )
      (*i)();
  }
}


__int64 sub_140002280()
{
  int v5; // ebp
  bool v7; // zf
  int v12; // edi
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  int v18; // esi
  int v19; // r10d
  unsigned int v20; // r11d
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  int v41; // [rsp+20h] [rbp+8h]

  _RAX = 0;
  __asm { cpuid }
  v5 = _RAX;
  _RAX = 1;
  v7 = ((unsigned int)_RBX ^ 0x756E6547 | (unsigned int)_RCX ^ 0x6C65746E | (unsigned int)_RDX ^ 0x49656E69) == 0;
  __asm { cpuid }
  v12 = _RCX;
  if ( v7
    && ((v13 = _RAX & 0xFFF3FF0, qword_140005060 = 0x8000, qword_140005068 = -1, v13 == 67264)
     || v13 == 132704
     || v13 == 132720
     || (v14 = (unsigned int)(v13 - 198224), (unsigned int)v14 <= 0x20) && (v15 = 0x100010001LL, _bittest64(&v15, v14))) )
  {
    v16 = dword_140005670 | 1;
    dword_140005670 |= 1u;
  }
  else
  {
    v16 = dword_140005670;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( v5 >= 7 )
  {
    _RAX = 7;
    __asm { cpuid }
    v18 = _RDX;
    v17 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      dword_140005670 = v16 | 2;
    if ( (int)_RAX >= 1 )
    {
      _RAX = 7;
      __asm { cpuid }
      v19 = _RDX;
    }
    _RAX = 36;
    if ( v5 >= 36 )
    {
      __asm { cpuid }
      v20 = _RBX;
    }
  }
  v36 = qword_140005050 & 0xFFFFFFFFFFFFFFFEuLL;
  dword_140005058 = 1;
  dword_14000505C = 2;
  qword_140005050 &= ~1uLL;
  if ( (v12 & 0x100000) != 0 )
  {
    v36 &= ~0x10uLL;
    dword_140005058 = 2;
    qword_140005050 = v36;
    dword_14000505C = 6;
  }
  if ( (v12 & 0x8000000) != 0 )
  {
    __asm { xgetbv }
    v41 = v36;
    if ( (v12 & 0x10000000) == 0 || (v36 & 6) != 6 )
    {
LABEL_32:
      if ( (v19 & 0x200000) != 0 && (*(_QWORD *)&v41 & 0x80000LL) != 0 )
        qword_140005050 &= ~0x80uLL;
      return 0;
    }
    v37 = dword_14000505C | 8;
    dword_140005058 = 3;
    dword_14000505C |= 8u;
    if ( (v17 & 0x20) != 0 )
    {
      dword_140005058 = 5;
      dword_14000505C = v37 | 0x20;
      v38 = qword_140005050 & 0xFFFFFFFFFFFFFFFDuLL;
      qword_140005050 &= ~2uLL;
      if ( (v17 & 0xD0030000) != 0xD0030000 )
      {
LABEL_26:
        if ( (v18 & 0x800000) != 0 )
          qword_140005050 = v38 & 0xFFFFFFFFFEFFFFFFuLL;
        if ( (v19 & 0x80000) != 0 && (v41 & 0xE0) == 0xE0 )
        {
          dword_14000566C = v20 & 0x400FF;
          v39 = qword_140005050 & ~(HIWORD(v20) & 6 | 0x1000029LL);
          qword_140005050 = v39;
          if ( (unsigned __int8)v20 > 1u )
            qword_140005050 = v39 & 0xFFFFFFFFFFFFFFBFuLL;
        }
        goto LABEL_32;
      }
      if ( (v41 & 0xE0) == 0xE0 )
      {
        dword_14000505C |= 0x40u;
        v38 = qword_140005050 & 0xFFFFFFFFFFFFFFDBuLL;
        dword_140005058 = 6;
        qword_140005050 &= 0xFFFFFFFFFFFFFFDBuLL;
        goto LABEL_26;
      }
    }
    v38 = qword_140005050;
    goto LABEL_26;
  }
  return 0;
}


_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return dword_140005070 != 0;
}


// attributes: thunk
EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
}


// attributes: thunk
__int64 _current_exception(void)
{
  return __current_exception();
}


// attributes: thunk
__int64 _current_exception_context(void)
{
  return __current_exception_context();
}


// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}


// attributes: thunk
int __cdecl seh_filter_exe(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return _seh_filter_exe(ExceptionNum, ExceptionPtr);
}


// attributes: thunk
void __cdecl set_app_type(_crt_app_type Type)
{
  _set_app_type(Type);
}


// attributes: thunk
void __cdecl _setusermatherr(_UserMathErrorFunctionPointer UserMathErrorFunction)
{
  __setusermatherr(UserMathErrorFunction);
}


// attributes: thunk
errno_t __cdecl configure_narrow_argv(_crt_argv_mode mode)
{
  return _configure_narrow_argv(mode);
}


// attributes: thunk
int __cdecl initialize_narrow_environment()
{
  return _initialize_narrow_environment();
}


// attributes: thunk
char **__cdecl get_initial_narrow_environment()
{
  return _get_initial_narrow_environment();
}


// attributes: thunk
void __cdecl initterm(_PVFV *First, _PVFV *Last)
{
  _initterm(First, Last);
}


// attributes: thunk
int __cdecl initterm_e(_PIFV *First, _PIFV *Last)
{
  return _initterm_e(First, Last);
}


// attributes: thunk
void __cdecl __noreturn exit(int Code)
{
  __imp_exit(Code);
}


// attributes: thunk
void __cdecl __noreturn exit(int Code)
{
  _exit(Code);
}


// attributes: thunk
errno_t __cdecl set_fmode(int Mode)
{
  return _set_fmode(Mode);
}


// attributes: thunk
int *__cdecl _p___argc()
{
  return __p___argc();
}


// attributes: thunk
char ***__cdecl _p___argv()
{
  return __p___argv();
}


// attributes: thunk
void __cdecl cexit()
{
  _cexit();
}


// attributes: thunk
void __cdecl c_exit()
{
  _c_exit();
}


// attributes: thunk
void __cdecl register_thread_local_exe_atexit_callback(_tls_callback_type Callback)
{
  _register_thread_local_exe_atexit_callback(Callback);
}


// attributes: thunk
int __cdecl configthreadlocale(int Flag)
{
  return _configthreadlocale(Flag);
}


// attributes: thunk
int __cdecl set_new_mode(int NewMode)
{
  return _set_new_mode(NewMode);
}


// attributes: thunk
int *__cdecl _p__commode()
{
  return __p__commode();
}


// attributes: thunk
int __cdecl initialize_onexit_table(_onexit_table_t *Table)
{
  return _initialize_onexit_table(Table);
}


// attributes: thunk
int __cdecl register_onexit_function(_onexit_table_t *Table, _onexit_t Function)
{
  return _register_onexit_function(Table, Function);
}


// attributes: thunk
int __cdecl crt_atexit(_PVFV Function)
{
  return _crt_atexit(Function);
}


// attributes: thunk
void __noreturn terminate(void)
{
  __imp_terminate();
}


__int64 __fastcall _GSHandlerCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  sub_1400025F4(a2, a4, *(_QWORD *)(a4 + 56));
  return 1;
}


__int64 __fastcall sub_1400025F4(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL);
  result = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(v2 + result + 3) & 0xF) != 0 )
    return *(_BYTE *)(v2 + result + 3) & 0xF0;
  return result;
}


// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}


__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}


// attributes: thunk
__int64 __fastcall guard_xfg_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}


