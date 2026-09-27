void *sub_140001000()
{
  return &unk_140006678;
}


int sub_140001010(wchar_t *Buffer, size_t BufferCount, wchar_t *Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = (unsigned __int64 *)sub_140001000();
  result = _stdio_common_vswprintf_s(*v6, Buffer, BufferCount, Format, nullptr, va);
  if ( result < 0 )
    return -1;
  return result;
}


int sub_140001070(char *Format, ...)
{
  FILE *v2; // rbx
  unsigned __int64 *v3; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v2 = _acrt_iob_func(1u);
  v3 = (unsigned __int64 *)sub_140001000();
  return _stdio_common_vfprintf(*v3, v2, Format, nullptr, va);
}


int sub_1400010D0(char *Buffer, size_t BufferCount, char *Format, ...)
{
  _QWORD *v6; // rax
  int result; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = sub_140001000();
  result = _stdio_common_vsprintf(*v6 | 2LL, Buffer, BufferCount, Format, nullptr, va);
  if ( result < 0 )
    return -1;
  return result;
}


unsigned __int64 __fastcall sub_140001130(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  char *v6; // rax
  CHAR *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int8 v9; // r10
  char v10; // r9
  unsigned __int64 v11; // rcx
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm0
  __m128i v15; // xmm2
  __m128i v16; // xmm2
  __m128i v17; // xmm2
  __m128i v18; // xmm2
  char v19; // r8
  char v20; // dl
  char v21; // r8
  unsigned __int64 result; // rax
  _BYTE *v23; // rdx
  __int64 v24; // rdi
  char v25; // al
  CHAR Filename[272]; // [rsp+30h] [rbp-128h] BYREF

  GetModuleFileNameA(nullptr, Filename, 0x104u);
  v6 = strrchr(Filename, 92);
  if ( v6 )
    v7 = v6 + 1;
  else
    v7 = Filename;
  v8 = -1;
  do
    ++v8;
  while ( v7[v8] );
  v9 = 0;
  v10 = *v7 ^ v7[v8 >> 1];
  v11 = 0;
  if ( a2 >= 0x20 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      v12 = _mm_add_epi8(v12, _mm_loadu_si128((const __m128i *)(a1 + v11)));
      v14 = _mm_loadu_si128((const __m128i *)(a1 + v11 + 16));
      v11 += 32LL;
      v13 = _mm_add_epi8(v13, v14);
    }
    while ( v11 < (a2 & 0xFFFFFFFFFFFFFFE0uLL) );
    v15 = _mm_add_epi8(v13, v12);
    v16 = _mm_add_epi8(v15, _mm_srli_si128(v15, 8));
    v17 = _mm_add_epi8(v16, _mm_srli_si128(v16, 4));
    v18 = _mm_add_epi8(v17, _mm_srli_si128(v17, 2));
    v9 = _mm_cvtsi128_si32(_mm_add_epi8(v18, _mm_srli_si128(v18, 1)));
  }
  v19 = 0;
  v20 = 0;
  if ( v11 < a2 )
  {
    if ( a2 - v11 < 2 )
      goto LABEL_14;
    do
    {
      v19 += *(_BYTE *)(a1 + v11);
      v20 += *(_BYTE *)(a1 + v11 + 1);
      v11 += 2LL;
    }
    while ( v11 < a2 - 1 );
    if ( v11 < a2 )
LABEL_14:
      v9 += *(_BYTE *)(v11 + a1);
    v9 += v19 + v20;
  }
  v21 = 4;
  result = v9 - 28;
  switch ( v9 )
  {
    case 0x1Cu:
    case 0xE5u:
      v21 = 0;
      break;
    case 0x24u:
    case 0x62u:
    case 0xE1u:
      v21 = 2;
      break;
    case 0x53u:
    case 0x60u:
    case 0x6Au:
    case 0x74u:
    case 0x7Bu:
      v21 = 1;
      break;
    default:
      result = (unsigned int)v9 - 28;
      break;
  }
  if ( a2 )
  {
    v23 = a3;
    v24 = a1 - (_QWORD)a3;
    do
    {
      result = (unsigned __int8)v23[v24];
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          v25 = v10 ^ (result + 1);
        }
        else
        {
          if ( v21 != 2 )
            break;
          v25 = v10 + result - 2;
        }
      }
      else
      {
        v25 = result - v10;
      }
      *v23++ = v25;
      result = v23 - a3;
    }
    while ( v23 - a3 < a2 );
  }
  a3[a2] = 0;
  return result;
}


char sub_140001400()
{
  HRSRC ResourceW; // rax
  HRSRC v1; // rbx
  HGLOBAL Resource; // rax
  const void *v4; // rdi
  DWORD v5; // eax
  DWORD v6; // ebx
  HANDLE FileW; // rax
  void *v8; // rsi
  DWORD LastError; // eax
  DWORD v10; // eax
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+50h] [rbp-4C8h] BYREF
  DWORD NumberOfBytesWritten; // [rsp+68h] [rbp-4B0h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+70h] [rbp-4A8h] BYREF
  WCHAR FileName[264]; // [rsp+E0h] [rbp-438h] BYREF
  WCHAR Buffer[264]; // [rsp+2F0h] [rbp-228h] BYREF

  ResourceW = FindResourceW(nullptr, (LPCWSTR)0x65, L"BIN");
  v1 = ResourceW;
  if ( !ResourceW )
  {
    sub_140001070("Failed to find resource.\n");
    return 0;
  }
  Resource = LoadResource(nullptr, ResourceW);
  if ( !Resource )
  {
    sub_140001070("Failed to load resource.\n");
    return 0;
  }
  v4 = LockResource(Resource);
  v5 = SizeofResource(nullptr, v1);
  v6 = v5;
  if ( v4 && v5 )
  {
    GetTempPathW(0x104u, Buffer);
    sub_140001010(FileName, 0x104u, (wchar_t *)L"%sPartner_CTF.exe", Buffer);
    FileW = CreateFileW(FileName, 0x40000000u, 0, nullptr, 2u, 0x80u, nullptr);
    v8 = FileW;
    if ( FileW == (HANDLE)-1LL )
    {
      LastError = GetLastError();
      sub_140001070("Failed to create file on disk. Error: %lu, Path: %ls\n", LastError, FileName);
    }
    else
    {
      NumberOfBytesWritten = 0;
      WriteFile(FileW, v4, v6, &NumberOfBytesWritten, nullptr);
      CloseHandle(v8);
      if ( NumberOfBytesWritten == v6 )
      {
        StartupInfo.cb = 104;
        memset(&StartupInfo.lpReserved, 0, 96);
        memset(&ProcessInformation, 0, sizeof(ProcessInformation));
        if ( CreateProcessW(
               FileName,
               nullptr,
               nullptr,
               nullptr,
               0,
               0,
               nullptr,
               nullptr,
               &StartupInfo,
               &ProcessInformation) )
        {
          CloseHandle(ProcessInformation.hProcess);
          CloseHandle(ProcessInformation.hThread);
          return 1;
        }
        v10 = GetLastError();
        sub_140001070("CreateProcess failed (%lu).\n", v10);
      }
      else
      {
        sub_140001070("Failed to write all bytes to disk.\n");
      }
    }
    return 0;
  }
  else
  {
    sub_140001070("Failed to lock resource or get size.\n");
    return 0;
  }
}


HMODULE sub_140001680()
{
  HMODULE ModuleHandleA; // rbx
  HMODULE result; // rax
  __int64 (__fastcall *v2)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  HANDLE CurrentProcess; // rax
  HMODULE LibraryA; // rbx
  FARPROC ProcAddress; // rax
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh]
  int v8; // [rsp+38h] [rbp-C8h]
  int v9; // [rsp+3Ch] [rbp-C4h]
  _DWORD v10[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v14[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[8]; // [rsp+68h] [rbp-98h] BYREF
  CHAR ProcName[256]; // [rsp+70h] [rbp-90h] BYREF

  v6 = -2052482436;
  v7 = -1701272409;
  v8 = -1635145560;
  LOWORD(v9) = -25950;
  BYTE2(v9) = -88;
  ModuleHandleA = GetModuleHandleA("kernel32.dll");
  if ( ModuleHandleA || (result = LoadLibraryA("kernel32.dll"), (ModuleHandleA = result) != nullptr) )
  {
    memset(ProcName, 0, sizeof(ProcName));
    sub_140001130((__int64)&v6, 0xFu, ProcName);
    result = (HMODULE)GetProcAddress(ModuleHandleA, ProcName);
    v2 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))result;
    if ( result )
    {
      CurrentProcess = GetCurrentProcess();
      result = (HMODULE)v2(CurrentProcess, &v12, v15, v14, v13);
      if ( (_DWORD)result )
      {
        v6 = 541143572;
        v7 = 843137094;
        v8 = 976625978;
        v9 = 322965042;
        qmemcpy(v10, "692!6:2", 7);
        LibraryA = GetModuleHandleA("kernel32.dll");
        if ( LibraryA || (LibraryA = LoadLibraryA("kernel32.dll")) != nullptr )
        {
          memset(ProcName, 0, sizeof(ProcName));
          sub_140001130((__int64)&v6, 0x17u, ProcName);
          ProcAddress = GetProcAddress(LibraryA, ProcName);
          if ( ProcAddress )
            ((void (__fastcall *)(__int64 *))ProcAddress)(&v11);
        }
        qword_140006670 = (v11 - v12) / 0x23C34600uLL;
        return (HMODULE)(0xE5109EC205D7BEA7uLL * (v11 - v12));
      }
    }
  }
  return result;
}


__int64 __fastcall sub_140001860(LPVOID lpThreadParameter)
{
  __int8 *v1; // rdx
  __m128i si128; // xmm3
  __m128 v4; // xmm4
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // eax
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm2
  __int64 v17; // rbx
  int v18; // ecx
  unsigned int v19; // r10d
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  __int8 v22; // r9
  DWORD TickCount; // eax
  __int64 v24; // rcx
  int v26; // [rsp+30h] [rbp-1E8h]
  DWORD v27; // [rsp+30h] [rbp-1E8h]
  __m128i v28[16]; // [rsp+50h] [rbp-1C8h] BYREF
  struct _SYSTEM_INFO SystemInfo; // [rsp+150h] [rbp-C8h] BYREF
  struct _MEMORYSTATUSEX Buffer; // [rsp+180h] [rbp-98h] BYREF
  char v31[16]; // [rsp+1C0h] [rbp-58h] BYREF
  _BYTE v32[48]; // [rsp+1D0h] [rbp-48h]

  v1 = &v28[0].m128i_i8[4];
  si128 = _mm_load_si128((const __m128i *)&xmmword_140004660);
  v4 = (__m128)_mm_load_si128((const __m128i *)&xmmword_140004670);
  v5 = 8;
  v6 = _mm_load_si128((const __m128i *)&xmmword_140004690).m128i_u32[0];
  v26 = -559038737;
  do
  {
    v1 += 16;
    v7 = v5 + 4;
    v8 = (__m128i)_mm_and_ps((__m128)_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v5 - 8), 0), si128), v4);
    v9 = (__m128i)_mm_and_ps((__m128)_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v5 - 4), 0), si128), v4);
    v10 = _mm_packus_epi16(v8, v8);
    v11 = _mm_packus_epi16(v9, v9);
    *((_DWORD *)v1 - 5) = _mm_cvtsi128_si32((__m128i)_mm_xor_ps(
                                                       (__m128)_mm_packus_epi16(v10, v10),
                                                       (__m128)_mm_cvtsi32_si128(v6)));
    v12 = _mm_cvtsi32_si128(v5);
    *((_DWORD *)v1 - 4) = _mm_cvtsi128_si32((__m128i)_mm_xor_ps(
                                                       (__m128)_mm_packus_epi16(v11, v11),
                                                       (__m128)_mm_cvtsi32_si128(v6)));
    v5 += 16;
    v13 = (__m128i)_mm_and_ps((__m128)_mm_add_epi32(_mm_shuffle_epi32(v12, 0), si128), v4);
    v14 = _mm_packus_epi16(v13, v13);
    v15 = (__m128i)_mm_and_ps((__m128)_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v7), 0), si128), v4);
    v16 = _mm_packus_epi16(v15, v15);
    *((_DWORD *)v1 - 3) = _mm_cvtsi128_si32((__m128i)_mm_xor_ps(
                                                       (__m128)_mm_packus_epi16(v14, v14),
                                                       (__m128)_mm_cvtsi32_si128(v6)));
    *((_DWORD *)v1 - 2) = _mm_cvtsi128_si32((__m128i)_mm_xor_ps(
                                                       (__m128)_mm_packus_epi16(v16, v16),
                                                       (__m128)_mm_cvtsi32_si128(v6)));
  }
  while ( (int)(v5 - 8) < 256 );
  v17 = 0;
  v18 = 0;
  do
  {
    v19 = __ROR4__(v26 ^ (4919 * v18), 27);
    v20 = v19 + v18;
    v26 ^= v19 % 0xFF;
    v21 = (unsigned __int8)v18++;
    v22 = v28[0].m128i_i8[v21];
    v28[0].m128i_i8[v21] = v28[0].m128i_i8[v20];
    v28[0].m128i_i8[v20] = v22;
  }
  while ( v18 < 10000 );
  GetSystemInfo(&SystemInfo);
  Buffer.dwLength = 64;
  v27 = SystemInfo.wProcessorArchitecture ^ (SystemInfo.dwNumberOfProcessors + v26);
  if ( GlobalMemoryStatusEx(&Buffer) )
    v27 += Buffer.ullTotalPhys % 0x186A0;
  TickCount = GetTickCount();
  sub_1400010D0(v31, 0x40u, "Telemetry_%u_%x", TickCount, v27);
  if ( dword_140006668 == 1 )
  {
    sub_140001130(*(_QWORD *)lpThreadParameter, *((_QWORD *)lpThreadParameter + 1), *((_BYTE **)lpThreadParameter + 2));
    sub_1400010D0(
      *((char **)lpThreadParameter + 3),
      *((_QWORD *)lpThreadParameter + 5),
      *((char **)lpThreadParameter + 2),
      *((_QWORD *)lpThreadParameter + 4));
  }
  v24 = 4;
  *(__m128 *)v31 = _mm_xor_ps((__m128)_mm_loadu_si128(v28), *(__m128 *)v31);
  do
  {
    v32[v17] ^= v28[1].m128i_u8[v17];
    ++v17;
    --v24;
  }
  while ( v24 );
  return 0;
}


LRESULT __fastcall sub_140001B20(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
{
  LONG_PTR WindowLongPtrW; // r9
  int v10; // r8d
  int v11; // eax
  char v12; // r11
  _BYTE *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r10
  unsigned __int64 v16; // rax
  _BYTE *v17; // rcx

  if ( Msg == 129 )
  {
    SetWindowLongPtrW(hWnd, -21, *lParam);
    return 1;
  }
  else
  {
    WindowLongPtrW = GetWindowLongPtrW(hWnd, -21);
    v10 = 0;
    LOBYTE(v11) = 0;
    if ( WindowLongPtrW )
    {
      v11 = *(_DWORD *)(WindowLongPtrW + 32);
      *(_DWORD *)(WindowLongPtrW + 32) = Msg;
    }
    v12 = v11 ^ Msg;
    if ( Msg == 1 )
    {
      if ( WindowLongPtrW )
      {
        if ( *(_QWORD *)(WindowLongPtrW + 16) <= *(_QWORD *)(WindowLongPtrW + 24) )
        {
          v17 = *(_BYTE **)(WindowLongPtrW + 8);
          *v17 ^= 0x8Bu;
          v17[1] ^= 0x8Fu;
          v17[2] ^= 0x92u;
          v17[3] ^= 0x85u;
          v17[4] ^= 0x88u;
          v17[5] ^= 0x96u;
          v17[6] ^= 0x98u;
          v17[7] ^= 0x9Bu;
          v17[8] ^= 0x94u;
          v17[9] ^= 0x8Bu;
          v17[10] ^= 0x95u;
          v17[11] ^= 0xE6u;
          v17[12] ^= 0xEDu;
          v17[13] ^= 0xF0u;
          v17[14] ^= 0xE7u;
          SetEnvironmentVariableA("SESSION_TOKEN_CACHE", *(LPCSTR *)(WindowLongPtrW + 8));
        }
        else
        {
          v13 = *(_BYTE **)WindowLongPtrW;
          v14 = -1;
          do
            ++v14;
          while ( v13[v14] );
          if ( v14 )
          {
            v15 = 0;
            do
            {
              v13[v15++] ^= v12;
              v13 = *(_BYTE **)WindowLongPtrW;
              ++v10;
              v16 = -1;
              do
                ++v16;
              while ( v13[v16] );
            }
            while ( v10 < v16 );
          }
          *v13 ^= 0x8Bu;
          v13[1] ^= 0x8Fu;
          v13[2] ^= 0x92u;
          v13[3] ^= 0x85u;
          v13[4] ^= 0x88u;
          v13[5] ^= 0x96u;
          v13[6] ^= 0x98u;
          v13[7] ^= 0x9Bu;
          v13[8] ^= 0x94u;
          v13[9] ^= 0x8Bu;
          v13[10] ^= 0x95u;
          v13[11] ^= 0xE6u;
          v13[12] ^= 0xEDu;
          v13[13] ^= 0xF0u;
          v13[14] ^= 0xE7u;
        }
      }
      return -1;
    }
    else
    {
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    }
  }
}


__int64 __fastcall StartAddress(LPVOID lpThreadParameter)
{
  SOCKET v3; // rdi
  SOCKET v4; // rsi
  char *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  struct sockaddr name; // [rsp+20h] [rbp-2C8h] BYREF
  struct WSAData WSAData; // [rsp+30h] [rbp-2B8h] BYREF
  char buf[256]; // [rsp+1D0h] [rbp-118h] BYREF

  if ( WSAStartup(0x202u, &WSAData) )
    return 1;
  v3 = socket(2, 1, 6);
  if ( v3 == -1 )
    goto LABEL_18;
  name.sa_family = 2;
  *(_WORD *)name.sa_data = htons(0x7A69u);
  inet_pton(2, "127.0.0.1", &name.sa_data[2]);
  if ( bind(v3, &name, 16) == -1 || listen(v3, 0x7FFFFFFF) == -1 )
  {
    closesocket(v3);
LABEL_18:
    WSACleanup();
    return 1;
  }
  v4 = accept(v3, nullptr, nullptr);
  if ( v4 != -1 )
  {
    memset(buf, 0, sizeof(buf));
    if ( recv(v4, buf, 255, 0) > 8 && !strncmp(buf, "OVERRIDE:", 9u) )
    {
      strncpy_s(*(char **)lpThreadParameter, *((_QWORD *)lpThreadParameter + 1), &buf[9], 0xFFFFFFFFFFFFFFFFuLL);
      v5 = *(char **)lpThreadParameter;
      v6 = 0;
      v7 = -1;
      do
        ++v7;
      while ( v5[v7] );
      if ( v7 )
      {
        do
        {
          v5[v6] ^= 0x33u;
          *(_BYTE *)(*(_QWORD *)lpThreadParameter + v6) += 5;
          v8 = -1;
          v5 = *(char **)lpThreadParameter;
          ++v6;
          do
            ++v8;
          while ( v5[v8] );
        }
        while ( v6 < v8 );
      }
    }
    closesocket(v4);
  }
  closesocket(v3);
  WSACleanup();
  return 0;
}


int __fastcall main(int argc, const char **argv, const char **envp)
{
  HWND ConsoleWindow; // rdi
  HMODULE ModuleHandleA; // rbx
  FARPROC ProcAddress; // rax
  DWORD LastError; // eax
  char *v8; // rax
  CHAR *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // esi
  char *v13; // rax
  _QWORD *v14; // rax
  HANDLE Thread; // rdi
  HANDLE v16; // rax
  void *v17; // rdi
  HMODULE v18; // rdi
  FARPROC v19; // rax
  int v20; // esi
  HANDLE FileA; // rax
  void *v22; // rdi
  HMODULE ModuleHandleW; // rax
  HMODULE LibraryA; // rdi
  FARPROC v25; // rax
  HMODULE v26; // rdi
  FARPROC v27; // rax
  __int64 v28; // rax
  HMODULE v29; // rdi
  FARPROC v30; // rax
  void *v31; // rsi
  HMODULE v32; // rdi
  __int64 v33; // rax
  FARPROC v34; // rax
  _DWORD v35[6]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v36[4]; // [rsp+78h] [rbp-88h] BYREF
  int v37; // [rsp+98h] [rbp-68h]
  _QWORD Parameter[6]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v39[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v40; // [rsp+E0h] [rbp-20h]
  __int128 v41; // [rsp+F0h] [rbp-10h]
  __int128 v42; // [rsp+100h] [rbp+0h]
  __int128 v43; // [rsp+110h] [rbp+10h]
  DWORD NumberOfBytesRead; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v45[6]; // [rsp+128h] [rbp+28h] BYREF
  _DWORD v46[4]; // [rsp+140h] [rbp+40h] BYREF
  __m128i si128; // [rsp+150h] [rbp+50h] BYREF
  _DWORD v48[4]; // [rsp+160h] [rbp+60h] BYREF
  CHAR ProcName[256]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE Buffer[256]; // [rsp+270h] [rbp+170h] BYREF
  CHAR Filename[272]; // [rsp+370h] [rbp+270h] BYREF
  CHAR FileName[272]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v53[256]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v54[256]; // [rsp+690h] [rbp+590h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  memset(Filename, 0, 0x104u);
  memset(FileName, 0, 0x104u);
  memset(v54, 0, sizeof(v54));
  v45[0] = 1008550130;
  v45[1] = 1110918713;
  v45[2] = 489828406;
  v45[3] = 1010188604;
  v45[4] = 1161952059;
  v45[5] = 1008273217;
  qmemcpy(v46, "?1#<912:<?A", 11);
  qmemcpy(v35, "yDOZuX[DVYSFP", 13);
  ConsoleWindow = GetConsoleWindow();
  ModuleHandleA = GetModuleHandleA("user32.dll");
  if ( ModuleHandleA || (ModuleHandleA = LoadLibraryA("user32.dll")) != nullptr )
  {
    memset(ProcName, 0, sizeof(ProcName));
    sub_140001130((__int64)v35, 0xDu, ProcName);
    ProcAddress = GetProcAddress(ModuleHandleA, ProcName);
    if ( ProcAddress )
      ((void (__fastcall *)(HWND))ProcAddress)(ConsoleWindow);
  }
  if ( !GetModuleFileNameA(nullptr, Filename, 0x104u) )
  {
    LastError = GetLastError();
    sub_140001070("[Parent] Failed to get executable path. Error: %lu\n", LastError);
    return 1;
  }
  v8 = strrchr(Filename, 92);
  if ( v8 )
    v9 = v8 + 1;
  else
    v9 = Filename;
  v10 = -1;
  v11 = -1;
  do
    ++v11;
  while ( v9[v11] );
  v12 = 671 * v11;
  v13 = strrchr(Filename, 92);
  if ( v13 )
    v13[1] = 0;
  sub_1400010D0(FileName, 0x104u, "%sPolyjuicePotion.txt", Filename);
  Parameter[1] = 35;
  Parameter[0] = v45;
  Parameter[5] = 260;
  Parameter[2] = v54;
  Parameter[3] = FileName;
  Parameter[4] = Filename;
  v14 = malloc(0x10u);
  if ( !v14 )
    return 0;
  v14[1] = 256;
  *v14 = Buffer;
  Thread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)StartAddress, v14, 0, nullptr);
  Sleep(0x2710u);
  if ( Thread )
    CloseHandle(Thread);
  v16 = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)sub_140001860, Parameter, 0, nullptr);
  v17 = v16;
  if ( v16 )
  {
    WaitForSingleObject(v16, 0xFFFFFFFF);
    CloseHandle(v17);
  }
  v18 = GetModuleHandleA("ntdll.dll");
  memset(ProcName, 0, sizeof(ProcName));
  qmemcpy(v35, "z@eO@{ZRYFWS@[YZ`\\FOSP", 22);
  sub_140001130((__int64)v35, 0x16u, ProcName);
  if ( v18 )
  {
    v19 = GetProcAddress(v18, ProcName);
    if ( v19 )
      ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v19)(-2, 17, 0, 0);
  }
  v20 = v12 + 15;
  FileA = CreateFileA(FileName, 0x80000000, 1u, nullptr, 3u, 0x80u, nullptr);
  v22 = FileA;
  if ( FileA != (HANDLE)-1LL )
  {
    if ( ReadFile(FileA, Buffer, 0xFFu, &NumberOfBytesRead, nullptr) )
    {
      Buffer[NumberOfBytesRead] = 0;
      CloseHandle(v22);
      si128 = _mm_load_si128((const __m128i *)&xmmword_140004680);
      qmemcpy(v48, ".992;42", 7);
      sub_140001680();
      v37 = 0;
      v39[0] = 80;
      v40 = 0;
      v36[0] = Buffer;
      v41 = 0;
      v36[1] = &si128;
      v36[2] = qword_140006670;
      v36[3] = v20;
      v39[1] = sub_140001B20;
      v42 = 0;
      v43 = 0;
      ModuleHandleW = GetModuleHandleW(nullptr);
      qmemcpy(v35, "fOQ[E@OFuXSEEoLs", 16);
      *((_QWORD *)&v40 + 1) = ModuleHandleW;
      *(_QWORD *)&v43 = "x";
      LibraryA = GetModuleHandleA("user32.dll");
      if ( LibraryA || (LibraryA = LoadLibraryA("user32.dll")) != nullptr )
      {
        memset(ProcName, 0, sizeof(ProcName));
        sub_140001130((__int64)v35, 0x10u, ProcName);
        v25 = GetProcAddress(LibraryA, ProcName);
        ((void (__fastcall *)(_QWORD *))v25)(v39);
      }
      else
      {
        MEMORY[0](v39);
      }
      v35[0] = -1768249480;
      v35[1] = -1634952535;
      v35[2] = -1398498909;
      LOWORD(v35[3]) = -21126;
      BYTE2(v35[3]) = 118;
      v26 = GetModuleHandleA("user32.dll");
      if ( v26 || (v26 = LoadLibraryA("user32.dll")) != nullptr )
      {
        memset(ProcName, 0, sizeof(ProcName));
        sub_140001130((__int64)v35, 0xFu, ProcName);
        v27 = GetProcAddress(v26, ProcName);
        ((void (__fastcall *)(_QWORD, const char *, const char *, __int64, unsigned int, unsigned int, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD, _QWORD *))v27)(
          0,
          "x",
          "y",
          13565952,
          0x80000000,
          0x80000000,
          0,
          0,
          0,
          0,
          *((_QWORD *)&v40 + 1),
          v36);
      }
      else
      {
        MEMORY[0](0, "x", "y", 13565952, 0x80000000, 0x80000000, 0, 0, 0, 0, *((_QWORD *)&v40 + 1), v36);
      }
      v28 = -1;
      do
        ++v28;
      while ( Buffer[v28] );
      if ( (int)v28 <= 20 )
      {
        if ( Buffer[0] == 65 )
          sub_140001070("\n"
                        "[*] The Polyjuice Potion is still effective, preventing the true identity from being revealed.\n");
      }
      else
      {
        sub_140001070("\n[*] Try harded to find the secrets.\n");
      }
      memset(v53, 0, sizeof(v53));
      v35[0] = 704325929;
      v35[1] = 842872381;
      v35[2] = 775492393;
      v35[3] = 890253887;
      qmemcpy(&v35[4], ".992;42", 7);
      sub_140001130((__int64)v35, 0x17u, v53);
      qmemcpy(v35, "uFOS@OzSWOPd[DOs", 16);
      v29 = GetModuleHandleA("kernel32.dll");
      if ( !v29 )
      {
        v29 = LoadLibraryA("kernel32.dll");
        if ( !v29 )
          return 0;
      }
      memset(ProcName, 0, sizeof(ProcName));
      sub_140001130((__int64)v35, 0x10u, ProcName);
      v30 = GetProcAddress(v29, ProcName);
      if ( !v30 )
        return 0;
      v31 = (void *)((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, int, int, _DWORD, _QWORD))v30)(
                      v53,
                      2,
                      6,
                      1,
                      256,
                      256,
                      0,
                      0);
      if ( v31 != (void *)-1LL )
      {
        sub_140001400();
        qmemcpy(v35, "uYZZOU@zSWOPd[DO", 16);
        v32 = GetModuleHandleA("kernel32.dll");
        if ( v32 || (v32 = LoadLibraryA("kernel32.dll")) != nullptr )
        {
          memset(ProcName, 0, sizeof(ProcName));
          sub_140001130((__int64)v35, 0x10u, ProcName);
          v34 = GetProcAddress(v32, ProcName);
          v33 = ((__int64 (__fastcall *)(void *, _QWORD))v34)(v31, 0);
        }
        else
        {
          v33 = MEMORY[0](v31, 0);
        }
        if ( v33 || GetLastError() == 535 )
        {
          do
            ++v10;
          while ( Buffer[v10] );
          WriteFile(v31, Buffer, v10, &NumberOfBytesRead, nullptr);
        }
        CloseHandle(v31);
        sub_140001070("[+] Execution complete.\n");
        return 0;
      }
    }
    else
    {
      CloseHandle(v22);
    }
  }
  return 1;
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
  sub_1400030A4();
  atexit(sub_1400030E0);
  v4 = (unsigned int)charNode::raw_length(v3);
  if ( configure_narrow_argv(v4) )
    goto LABEL_8;
  sub_140002E24();
  if ( (unsigned int)_scrt_is_user_matherr_present() )
    _setusermatherr(UserMathErrorFunction);
  v6 = UserMathErrorFunction(v5);
  configthreadlocale(v6);
  if ( (unsigned __int8)sub_140002E34() )
    initialize_narrow_environment();
  UserMathErrorFunction(v7);
  result = j_UserMathErrorFunction(v8);
  if ( result )
  {
LABEL_8:
    sub_140002E88(7);
    JUMPOUT(0x1400027E5LL);
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

  sub_140003030();
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
    sub_140002E88(7);
    goto LABEL_19;
  }
  v2 = 0;
  LOBYTE(v0) = _scrt_acquire_startup_lock(v1);
  v3 = (unsigned int)dword_1400065F0;
  if ( dword_1400065F0 == 1 )
  {
LABEL_19:
    sub_140002E88(7);
    goto LABEL_20;
  }
  if ( dword_1400065F0 )
  {
    v2 = 1;
  }
  else
  {
    dword_1400065F0 = 1;
    if ( initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
      return 255;
    initterm((_PVFV *)&qword_140004348, (_PVFV *)&qword_140004358);
    dword_1400065F0 = 2;
  }
  LOBYTE(v3) = v0;
  _scrt_release_startup_lock(v3);
  v6 = (_QWORD *)sub_140002E6C(v5);
  v8 = (void (__fastcall **)(_QWORD, __int64))v6;
  if ( *v6 && (unsigned __int8)_scrt_is_nonwritable_in_current_image(v6) )
    (*v8)(0, 2);
  v9 = (_tls_callback_type *)sub_140002E74(v7);
  v10 = v9;
  if ( *v9 && (unsigned __int8)_scrt_is_nonwritable_in_current_image(v9) )
    register_thread_local_exe_atexit_callback(*v10);
  initial_narrow_environment = get_initial_narrow_environment();
  v12 = *_p___argv();
  v13 = _p___argc();
  v0 = main(*v13, (const char **)v12, (const char **)initial_narrow_environment);
  if ( !(unsigned __int8)sub_140002FDC(v14) )
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
  sub_140002D60();
  return __scrt_common_main_seh();
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
  qword_140006090 = retaddr;
  ContextRecord.Rcx = v2;
  dword_140006080 = -1073740791;
  dword_140006084 = 1;
  dword_140006098 = 1;
  unk_1400060A0 = 2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
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


char _scrt_acquire_startup_lock()
{
  PVOID StackBase; // rcx
  signed __int64 v1; // rax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange64(&qword_1400065F8, (signed __int64)StackBase, 0);
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
    byte_140006600 = 1;
  sub_14000311C();
  if ( !(unsigned __int8)((__int64 (*)(void))sub_140002E34)() )
    return 0;
  if ( !(unsigned __int8)((__int64 (*)(void))sub_140002E34)() )
  {
    sub_140002E34(0);
    return 0;
  }
  return 1;
}


char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_140006601 )
  {
    if ( a1 > 1 )
    {
      sub_140002E88(5);
      JUMPOUT(0x140002C22LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&xmmword_1400043B0);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_140006620._first = *(_OWORD *)&Table._first;
      stru_140006620._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_140006620) )
    {
      return 0;
    }
    byte_140006601 = 1;
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
      _InterlockedExchange64(&qword_1400065F8, 0);
  }
  return result;
}


char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_140006600 || !a2 )
  {
    sub_140002E34(a1);
    LOBYTE(v3) = v2;
    sub_140002E34(v3);
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


__int64 sub_140002D60()
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
  qword_140006040 = result;
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


void sub_140002E24()
{
  InitializeSListHead(&stru_140006640);
}


char sub_140002E34()
{
  return 1;
}


void guard_check_icall_nop()
{
  ;
}


void *sub_140002E3C()
{
  return &unk_140006650;
}


_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_140001000();
  *v0 |= 0x24uLL;
  result = sub_140002E3C();
  *result |= 2uLL;
  return result;
}


_BOOL8 _scrt_is_user_matherr_present()
{
  return dword_14000604C == 0;
}


void *sub_140002E6C()
{
  return &unk_140006688;
}


void *sub_140002E74()
{
  return &unk_140006680;
}


void sub_140002E7C()
{
  dword_140006658 = 0;
}


void __fastcall sub_140002E88(unsigned int a1)
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
  sub_140002E7C();
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
    sub_140002E7C();
}


// attributes: thunk
__int64 __fastcall j_UserMathErrorFunction(struct _exception *a1)
{
  return UserMathErrorFunction(a1);
}


bool sub_140002FDC()
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


LPTOP_LEVEL_EXCEPTION_FILTER sub_140003030()
{
  return SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)sub_140003040);
}


__int64 __fastcall sub_140003040(_QWORD *a1)
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


void sub_1400030A4()
{
  void (**i)(void); // rbx

  for ( i = qword_140004B70; i < qword_140004B70; ++i )
  {
    if ( *i )
      (*i)();
  }
}


void __fastcall sub_1400030E0()
{
  void (**i)(void); // rbx

  for ( i = &qword_140004B80; i < &qword_140004B80; ++i )
  {
    if ( *i )
      (*i)();
  }
}


__int64 sub_14000311C()
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
    && ((v13 = _RAX & 0xFFF3FF0, qword_140006060 = 0x8000, qword_140006068 = -1, v13 == 67264)
     || v13 == 132704
     || v13 == 132720
     || (v14 = (unsigned int)(v13 - 198224), (unsigned int)v14 <= 0x20) && (v15 = 0x100010001LL, _bittest64(&v15, v14))) )
  {
    v16 = dword_140006660 | 1;
    dword_140006660 |= 1u;
  }
  else
  {
    v16 = dword_140006660;
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
      dword_140006660 = v16 | 2;
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
  v36 = qword_140006050 & 0xFFFFFFFFFFFFFFFEuLL;
  dword_140006058 = 1;
  dword_14000605C = 2;
  qword_140006050 &= ~1uLL;
  if ( (v12 & 0x100000) != 0 )
  {
    v36 &= ~0x10uLL;
    dword_140006058 = 2;
    qword_140006050 = v36;
    dword_14000605C = 6;
  }
  if ( (v12 & 0x8000000) != 0 )
  {
    __asm { xgetbv }
    v41 = v36;
    if ( (v12 & 0x10000000) == 0 || (v36 & 6) != 6 )
    {
LABEL_32:
      if ( (v19 & 0x200000) != 0 && (*(_QWORD *)&v41 & 0x80000LL) != 0 )
        qword_140006050 &= ~0x80uLL;
      return 0;
    }
    v37 = dword_14000605C | 8;
    dword_140006058 = 3;
    dword_14000605C |= 8u;
    if ( (v17 & 0x20) != 0 )
    {
      dword_140006058 = 5;
      dword_14000605C = v37 | 0x20;
      v38 = qword_140006050 & 0xFFFFFFFFFFFFFFFDuLL;
      qword_140006050 &= ~2uLL;
      if ( (v17 & 0xD0030000) != 0xD0030000 )
      {
LABEL_26:
        if ( (v18 & 0x800000) != 0 )
          qword_140006050 = v38 & 0xFFFFFFFFFEFFFFFFuLL;
        if ( (v19 & 0x80000) != 0 && (v41 & 0xE0) == 0xE0 )
        {
          dword_14000665C = v20 & 0x400FF;
          v39 = qword_140006050 & ~(HIWORD(v20) & 6 | 0x1000029LL);
          qword_140006050 = v39;
          if ( (unsigned __int8)v20 > 1u )
            qword_140006050 = v39 & 0xFFFFFFFFFFFFFFBFuLL;
        }
        goto LABEL_32;
      }
      if ( (v41 & 0xE0) == 0xE0 )
      {
        dword_14000605C |= 0x40u;
        v38 = qword_140006050 & 0xFFFFFFFFFFFFFFDBuLL;
        dword_140006058 = 6;
        qword_140006050 &= 0xFFFFFFFFFFFFFFDBuLL;
        goto LABEL_26;
      }
    }
    v38 = qword_140006050;
    goto LABEL_26;
  }
  return 0;
}


_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return dword_140006070 != 0;
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
  sub_140003484(a2, a4, *(_QWORD *)(a4 + 56));
  return 1;
}


__int64 __fastcall sub_140003484(__int64 a1, __int64 a2)
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


