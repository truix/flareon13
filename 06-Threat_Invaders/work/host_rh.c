// ---- 14016c050 depth 0
__int64 __fastcall sub_14016C050(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  const char *v8; // rax
  int v9; // edi
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r10
  _WORD *v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  __int64 result; // rax
  int v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h]
  int v20; // [rsp+48h] [rbp-50h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h]
  int v22; // [rsp+58h] [rbp-40h]
  __int64 v23; // [rsp+A8h] [rbp+10h]

  v5 = a1;
  v18 = 0;
  v19 = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)a2 != 1 )
    v6 = a2;
  v7 = *(_QWORD *)(v6 + 8);
  if ( !qword_1407FE5A0 )
  {
    v8 = (const char *)sub_1400C17E0(*(_QWORD *)(v6 + 8));
    if ( !strcmp(v8, "ReplaceHighscores") )
      qword_1407FE5A0 = v7;
  }
  v9 = 1;
  v10 = qword_1407FD5E8;
  if ( *(_BYTE *)(qword_1407FD5E8 + 136) )
  {
    a1 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)a2 == 1 )
    {
      v11 = *(_DWORD *)(a1 + 36);
    }
    else
    {
      v11 = sub_14016BAB0(a1);
      v10 = qword_1407FD5E8;
    }
    if ( !v11 && *(_BYTE *)(v10 + 137) )
    {
      v12 = sub_1401150D0(a2);
      v9 = ((unsigned int)sub_14014F090(v12) != 0) + 4;
    }
  }
  v13 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)a2 == 1 )
  {
    sub_140115FD0(a1, &v20, *(_QWORD *)(v13 + 8), *(_QWORD *)(v13 + 16));
  }
  else
  {
    v14 = (_WORD *)(v13 - (8LL * *(unsigned __int8 *)(v13 + 2) + 24));
    v15 = *(_QWORD *)(*(_QWORD *)v14 + 24LL);
    v20 = v15 != 0 ? 2 : 0;
    v21 = v15;
    v22 = *(_WORD *)v13 & 0xFFF | ((v14[9] & 0xFFF | 0x6000) << 12);
  }
  v16 = sub_1401157A0((unsigned int)&v20, v7, v9, (unsigned int)&v18, 0, 0);
  if ( v16 < 0 )
    sub_1400BF510((unsigned int)v16);
  v23 = sub_1405D4030(0x18u);
  *(_QWORD *)v23 = 0;
  *(_DWORD *)(v23 + 8) = v18;
  *(_QWORD *)(v23 + 16) = v19;
  sub_1400EBFE0(&stru_1407FFA58);
  **(_QWORD **)(v5 + 16) = v23;
  *(_QWORD *)(v5 + 16) = v23;
  ++*(_DWORD *)(v5 + 24);
  if ( byte_1407FD665 )
    return sub_1400EC090(&stru_1407FFA58);
  byte_1407FD665 = 1;
  if ( byte_1407FD664 )
  {
    SetEvent(hEvent);
    return sub_1400EC090(&stru_1407FFA58);
  }
  byte_1407FD664 = 1;
  result = sub_1400EC090(&stru_1407FFA58);
  *a3 = 1;
  return result;
}


// ---- 1400c17e0 depth 1
const char *__fastcall sub_1400C17E0(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 6) & 7;
  if ( v2 == 4 )
  {
    v3 = *(unsigned __int16 *)(a1 + 4)
       - *(unsigned __int16 *)(*(_QWORD *)(a1 - (8LL * *(unsigned __int8 *)(a1 + 2) + 24)) + 12LL);
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          return "Address";
        else
          return ".ctor";
      }
      else
      {
        return "Set";
      }
    }
    else
    {
      return "Get";
    }
  }
  else if ( v2 == 7 )
  {
    return *(const char **)(a1 + 32);
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 2);
    v8 = 0;
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - (8 * v6 + 24)) + 24LL) + 192LL) + 24LL);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 184LL))(
           v7,
           *(_WORD *)a1 & 0xFFF | ((*(_WORD *)(a1 - 8 * v6 - 6) & 0xFFF | 0x6000u) << 12),
           &v8) >= 0 )
      return (const char *)v8;
    else
      return nullptr;
  }
}


// ---- 14016bab0 depth 1
__int64 __fastcall sub_14016BAB0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  bool v6; // bl
  __int64 v7; // rax
  int v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  if ( *(__int16 *)a1 >= 0 )
    return 3;
  v2 = a1 - (8LL * *(unsigned __int8 *)(a1 + 2) + 24);
  v3 = (*(_WORD *)(v2 + 18) & 0x8000) != 0
     ? v2 + 8 * (*(unsigned __int8 *)(v2 + 16) + 4LL)
     : *(_QWORD *)(*(_QWORD *)v2 + 32LL) + 8LL;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 152LL) + 2008LL);
  sub_1400EBFE0(&stru_1407FDB78);
  v9 = 2;
  v10 = a1;
  v5 = sub_14016FBC0(v4, &v9);
  v6 = !v5 || *(_BYTE *)(v5 + 26) != 4;
  sub_1400EC090(&stru_1407FDB78);
  if ( !v6 )
    return 3;
  if ( !*(_BYTE *)(qword_1407FD5E8 + 136) )
    return 0;
  if ( *(_BYTE *)(qword_1407FD5E8 + 137) )
    return 0;
  v7 = sub_1400C3460(a1);
  if ( (unsigned int)sub_14014F090(v7) )
    return 0;
  return 4;
}


// ---- 1401150d0 depth 1
__int64 __fastcall sub_1401150D0(__int64 a1)
{
  _WORD *v1; // rdx
  __int16 v3; // ax

  v1 = *(_WORD **)(a1 + 8);
  if ( *(_DWORD *)a1 == 1 )
    return *(_QWORD *)v1;
  v3 = v1[3];
  if ( (v3 & 0x20) != 0 )
    return *(_QWORD *)((char *)v1 + (unsigned __int8)byte_14070DB60[v3 & 0x1F]);
  if ( (*v1 & 0x3000) == 0x1000 )
    return sub_1400C2BE0(*(_QWORD *)(a1 + 8));
  return 0;
}


// ---- 14014f090 depth 1
_BOOL8 __fastcall sub_14014F090(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r10d
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v1 = sub_14014F0F0(a1, &v4);
  return v1 && *(_QWORD *)(v1 + 32) && (unsigned int)sub_140150460(*(_QWORD *)(v1 + 24), v1, v2, 0, 0) != 0;
}


// ---- 140115fd0 depth 1
__int64 __fastcall sub_140115FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v7; // rcx
  __int64 v8; // r11
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+4Ch] [rbp-1Ch]
  __int64 v20; // [rsp+50h] [rbp-18h]
  __int64 *v21; // [rsp+58h] [rbp-10h]

  v4 = *(unsigned __int8 *)(a3 + 2);
  v7 = *(_QWORD *)(*(_QWORD *)(a3 - (8 * v4 + 24)) + 24LL);
  v14 = *(_WORD *)a3 & 0xFFF | ((*(_WORD *)(a3 - 8 * v4 - 6) & 0xFFF | 0x6000) << 12);
  v15 = 0;
  v16 = 0;
  v20 = 0;
  v13 = v7;
  v21 = &v13;
  do
  {
    sub_140115B60(&v15);
    v9 = v16;
    v10 = v17;
    if ( v16 == 1 )
    {
      v11 = *(_QWORD *)(v17 + 16);
    }
    else
    {
      if ( v16 != 2 )
      {
        *(_DWORD *)a2 = v8;
        return a2;
      }
      v11 = v8;
    }
  }
  while ( v11 != a4 );
  *(_DWORD *)a2 = v16;
  if ( v9 != 1 )
  {
    *(_DWORD *)(a2 + 16) = v18;
    *(_DWORD *)(a2 + 20) = v19;
  }
  *(_QWORD *)(a2 + 8) = v10;
  return a2;
}


// ---- 1401157a0 depth 1
__int64 __fastcall sub_1401157A0(int *a1, __int64 a2, int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int v9; // r14d
  __int64 v10; // rdi
  __int64 **v11; // rsi
  __int64 *v12; // rsi
  __int64 v13; // rax
  void *v14; // rbx
  int v15; // ecx
  int v16; // r13d
  __int64 v17; // rbx
  __int64 v18; // rax
  _BYTE v20[4]; // [rsp+20h] [rbp-78h] BYREF
  int v21; // [rsp+24h] [rbp-74h]
  int v22; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+40h] [rbp-58h]

  v9 = *a1;
  v22 = v9;
  if ( v9 == 1 )
  {
    v10 = *((_QWORD *)a1 + 1);
    v23 = v10;
  }
  else if ( v9 == 2 )
  {
    v10 = *((_QWORD *)a1 + 1);
    v23 = v10;
    v24 = *((_QWORD *)a1 + 2);
  }
  else
  {
    v10 = v23;
  }
  v11 = *(__int64 ***)(a2 + 8);
  if ( v11 )
  {
    v12 = *v11;
    if ( v12 )
    {
LABEL_18:
      v16 = *((_DWORD *)v12 + 3);
      *((_DWORD *)v12 + 3) = v16 + 1;
      v17 = sub_1405D4080(56, &unk_14068C8C0);
      if ( v17 )
      {
        if ( v9 == 1 )
          v18 = *(_QWORD *)(v10 + 16);
        else
          v18 = 0;
        *(_QWORD *)v17 = 0;
        *(_QWORD *)(v17 + 8) = a2;
        *(_QWORD *)(v17 + 16) = v18;
        *(_QWORD *)(v17 + 24) = 0;
        *(_DWORD *)(v17 + 32) = v16;
        *(_DWORD *)(v17 + 36) = a3;
        *(_QWORD *)(v17 + 40) = a5;
        *(_QWORD *)(v17 + 48) = a6;
      }
      else
      {
        v17 = 0;
      }
      if ( !v17 )
        goto LABEL_12;
      *(_QWORD *)(v17 + 24) = v12[2];
      v12[2] = v17;
      if ( !*(_DWORD *)sub_140115510(&v22, v20, a2) )
        *(_DWORD *)(v17 + 52) |= 1u;
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 4) = v21;
      *(_QWORD *)(a4 + 8) = v17;
      v15 = 0;
      goto LABEL_28;
    }
  }
  v13 = sub_1405D4080(24, &unk_14068C8C0);
  v14 = (void *)v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = a2;
    *(_BYTE *)(v13 + 8) = 4;
    *(_DWORD *)(v13 + 12) = 1;
    *(_QWORD *)(v13 + 16) = 0;
  }
  else
  {
    v14 = nullptr;
  }
  if ( !v14 )
  {
LABEL_12:
    v15 = -2147024882;
    goto LABEL_28;
  }
  v15 = sub_1400C15F0(a2, 0);
  if ( v15 >= 0 )
  {
    if ( _InterlockedCompareExchange64(*(volatile signed __int64 **)(a2 + 8), (signed __int64)v14, 0) )
      j_j_free(v14);
    v12 = *(__int64 **)(a2 + 8);
    if ( v12 )
      v12 = (__int64 *)*v12;
    goto LABEL_18;
  }
LABEL_28:
  if ( v15 >= 0 )
    return 0;
  return (unsigned int)v15;
}


// ---- 1405d4030 depth 1
void *__fastcall sub_1405D4030(size_t Size)
{
  void *result; // rax

  for ( result = malloc(Size); !result; result = malloc(Size) )
  {
    if ( !callnewh(Size) )
    {
      if ( Size != -1 )
      {
        sub_1405D4BF0();
        __debugbreak();
      }
      sub_140029DF0();
    }
  }
  return result;
}


// ---- 1400ebfe0 depth 1
void __fastcall sub_1400EBFE0(LPCRITICAL_SECTION lpCriticalSection)
{
  __int64 *ThreadLocalStoragePointer; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  int v5; // ebp
  int DebugInfo; // eax

  ThreadLocalStoragePointer = (__int64 *)NtCurrentTeb()->ThreadLocalStoragePointer;
  v3 = *ThreadLocalStoragePointer;
  v4 = *(_QWORD *)(*ThreadLocalStoragePointer + 384);
  if ( ((__int64)lpCriticalSection[1].DebugInfo & 0x10C) == 0 && v4 && *(_DWORD *)(v4 + 4) )
  {
    v5 = 1;
    *(_DWORD *)(v4 + 4) = 0;
  }
  else
  {
    v5 = 0;
  }
  DebugInfo = (int)lpCriticalSection[1].DebugInfo;
  if ( (DebugInfo & 0x90) != 0 )
  {
    if ( (DebugInfo & 0x80u) != 0 )
      _InterlockedIncrement(&dword_1408094E8);
    if ( ((__int64)lpCriticalSection[1].DebugInfo & 0x10) != 0 )
    {
      if ( !*(_BYTE *)(v3 + 16) )
        sub_1405D3FA0();
      ++*(_QWORD *)(v3 + 424);
    }
  }
  EnterCriticalSection(lpCriticalSection);
  if ( v5 )
  {
    *(_DWORD *)(v4 + 4) = 1;
    if ( dword_1407FD790 )
      sub_1400DA0C0(v4);
  }
}


// ---- 1400ec090 depth 1
__int64 __fastcall sub_1400EC090(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  result = *(unsigned int *)(a1 + 40);
  if ( (result & 0x90) != 0 )
  {
    if ( (result & 0x10) != 0 )
    {
      v3 = *(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(_BYTE *)(v3 + 16) )
        sub_1405D3FA0();
      result = 424;
      --*(_QWORD *)(v3 + 424);
    }
    if ( *(char *)(a1 + 40) < 0 )
      _InterlockedDecrement(&dword_1408094E8);
  }
  return result;
}


// ---- 1400bf510 depth 1
void __fastcall __noreturn sub_1400BF510(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rbx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( (dword_1407F94B0 & 0x4000) != 0 && (unsigned int)dword_1407F94B4 >= 5 )
    sub_1400AD790(5, 0x4000, 1, (unsigned int)"ThrowHR: HR = %x\n", a1);
  if ( a1 == -2147024882 )
    sub_1400BF7D0();
  v2 = -2147467259;
  if ( a1 )
    v2 = a1;
  v8 = (__int64)sub_1405D4030(0x18u);
  v3 = sub_1400BEC20(v8, v2);
  if ( (unsigned int)sub_1400AD770(0x4000, 5) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v5 = sub_1400BE840(v4);
    sub_1400C14D0(v7, v6, (unsigned int)"EX_THROW Type = 0x%x HR = 0x%x,  line %d\n", v5, v7, 971);
  }
  v8 = v3;
  sub_1405D68E0(&v8, &_TI3PEAVHRException__);
  JUMPOUT(0x1400BF5E2LL);
}


// ---- 14016fbc0 depth 2
__int64 __fastcall sub_14016FBC0(__int64 *a1, int *a2)
{
  unsigned int v2; // r9d
  int v3; // r10d
  __int64 v4; // r8
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // r11d
  __int64 *v10; // rcx
  unsigned int v11; // edx
  __int64 result; // rax
  __int64 v13; // rax

  v2 = *((_DWORD *)a1 + 2);
  if ( !v2 )
    return 0;
  v3 = *a2;
  v4 = *((_QWORD *)a2 + 1);
  v5 = *a1;
  if ( *a2 == 1 )
  {
    v6 = *(_DWORD *)(v4 + 32);
    v7 = *(_QWORD *)(v4 + 8);
  }
  else
  {
    v6 = 0;
    v7 = *((_QWORD *)a2 + 1);
  }
  v8 = v7 + v6;
  v9 = ((int)v7 + v6) % v2;
  v10 = (__int64 *)(v5 + 8LL * v9);
  if ( !*v10 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    result = *v10;
    if ( *v10 != -1 && v3 == *(_DWORD *)result && v4 == *(_QWORD *)(result + 8) )
      break;
    if ( !v11 )
      v11 = v8 % (v2 - 1) + 1;
    v13 = v11 + v9 - v2;
    if ( v11 + v9 < v2 )
      v13 = v11 + v9;
    v9 = v13;
    v10 = (__int64 *)(v5 + 8 * v13);
    if ( !*v10 )
      return 0;
  }
  return result;
}


// ---- 1400c3460 depth 2
__int64 __fastcall sub_1400C3460(_WORD *a1)
{
  __int16 v1; // ax

  v1 = a1[3];
  if ( (v1 & 0x20) != 0 )
    return *(_QWORD *)((char *)a1 + (unsigned __int8)byte_14070DB60[v1 & 0x1F]);
  if ( (*a1 & 0x3000) == 0x1000 )
    return sub_1400C2BE0(a1);
  return 0;
}


// ---- 14014f0f0 depth 2
__int64 __fastcall sub_14014F0F0(unsigned __int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 result; // rax

  v3 = qword_1407FDC20[(unsigned __int8)(a1 >> 49)];
  if ( (v3 & 1) != 0 )
  {
    if ( *a2 <= 1u )
      goto LABEL_30;
    --v3;
  }
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)(a1 >> 41));
  if ( (v4 & 1) != 0 )
  {
    if ( *a2 <= 1u )
      goto LABEL_30;
    --v4;
  }
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)(a1 >> 33));
  if ( (v5 & 1) == 0 )
    goto LABEL_12;
  if ( *a2 <= 1u )
  {
LABEL_30:
    *a2 = 1;
    return 0;
  }
  --v5;
LABEL_12:
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 8LL * (unsigned __int8)(a1 >> 25));
  if ( (v6 & 1) != 0 )
  {
    if ( *a2 > 1u )
    {
      --v6;
      goto LABEL_16;
    }
    goto LABEL_30;
  }
LABEL_16:
  if ( !v6 )
    return 0;
  v7 = *(_QWORD **)(v6 + 8LL * (unsigned __int8)(a1 >> 17));
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( *a2 <= 1u )
    {
      *a2 = 1;
      v7 = nullptr;
    }
    else
    {
      v7 = (_QWORD *)((char *)v7 - 1);
    }
  }
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    if ( a1 >= v7[1] && a1 < v7[2] )
    {
      result = v7[3];
      if ( !*(_QWORD *)(result + 64) )
        return result;
    }
    v7 = (_QWORD *)*v7;
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( *a2 <= 1u )
        goto LABEL_30;
      v7 = (_QWORD *)((char *)v7 - 1);
    }
    if ( !v7 )
      return 0;
  }
}


// ---- 140150460 depth 2
__int64 __fastcall sub_140150460(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v7; // r12
  unsigned int *v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // r13
  unsigned int v11; // r10d
  __int64 v12; // r15
  int v13; // r9d
  int v14; // ebx
  int v15; // r8d
  int v16; // eax
  unsigned int *v17; // rbp
  int v19; // eax
  unsigned int *v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // edi
  _DWORD v27[4]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]

  v7 = *(_QWORD *)(a2[4] + 608);
  v8 = *(unsigned int **)(v7 + 112);
  if ( v8 )
  {
    v9 = a3 - *(_DWORD *)a2;
    if ( *v8 <= v9 && v9 < *v8 + v8[1] )
      return 0;
  }
  v10 = *a2;
  v11 = a3 - *a2;
  v12 = *(_QWORD *)(v7 + 80);
  v13 = *(_DWORD *)(v7 + 88) - 1;
  v14 = 0;
  if ( v13 > 10 )
  {
    do
    {
      v15 = (v13 - v14) / 2 + v14;
      v16 = v15 - 1;
      if ( v11 >= *(_DWORD *)(v12 + 12LL * v15) )
      {
        v16 = v13;
        v14 += (v13 - v14) / 2;
      }
      v13 = v16;
    }
    while ( v16 - v14 > 10 );
  }
  if ( v14 > v13 )
    return 0;
  while ( 1 )
  {
    v17 = (unsigned int *)(v12 + 12LL * v14);
    if ( v11 < v17[3] )
      break;
    if ( ++v14 > v13 )
      return 0;
  }
  if ( v11 < *v17 || v14 < 0 )
    return 0;
  if ( a5 | (unsigned __int64)a4 )
  {
    v19 = sub_14014FCB0(v7, (unsigned int)v14);
    if ( v19 != -1 && (v19 & 1) != 0 )
      v14 = *(_DWORD *)(*(_QWORD *)(v7 + 96) + 4LL * v19);
    while ( 1 )
    {
      v20 = (unsigned int *)(v12 + 12LL * v14);
      v21 = *v20;
      v22 = v21 + v10;
      if ( (((_BYTE)v21 + (_BYTE)v10) & 1) == 0 )
      {
        v23 = v10;
        if ( v22 <= 1 )
          v23 = v10 + 100;
        v24 = sub_1401EFC70(*(_QWORD *)(v7 + 40) + 336LL, v21 + v23, v22 >> 1);
        v25 = 2 * v24;
        if ( v24 == -1 )
          v25 = -1;
        if ( ((v25 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          break;
      }
      --v14;
    }
    if ( a4 )
      *a4 = v25;
    if ( a5 )
    {
      *(_QWORD *)(a5 + 8) = a2;
      *(_QWORD *)(a5 + 16) = v20;
      *(_QWORD *)(a5 + 48) = v17;
      sub_140150950(a1, a5 + 8, v27);
      if ( v29 && a3 >= v28 )
        v26 = v27[2] + a3 - v28;
      else
        v26 = a3 - v27[0];
      *(_DWORD *)(a5 + 40) = v26;
    }
  }
  return 1;
}


// ---- 140115b60 depth 2
__int64 __fastcall sub_140115B60(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int *v2; // r10
  __int64 v3; // rax
  unsigned int v4; // r9d
  bool v5; // cf
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE v9[20]; // [rsp+24h] [rbp-24h]

  result = *a1;
  v2 = a1;
  switch ( (_DWORD)result )
  {
    case 0:
      v3 = *((_QWORD *)a1 + 5);
      *a1 = 1;
      v4 = *(_DWORD *)(v3 + 8);
      v5 = *(_QWORD *)v3 != 0;
      *((_QWORD *)a1 + 2) = *(_QWORD *)v3;
      a1[3] = *(_DWORD *)v9;
      a1[2] = v5 ? 2 : 0;
      a1[6] = v4;
      a1[7] = *(_DWORD *)&v9[16];
      return *(unsigned int *)&v9[16];
    case 1:
      v6 = sub_140115C40(a1, **((_QWORD **)a1 + 5), *(unsigned int *)(*((_QWORD *)a1 + 5) + 8LL));
      if ( v6 )
        *((_QWORD *)v2 + 4) = *(_QWORD *)(v6 + 24);
      v7 = *((_QWORD *)v2 + 4);
      *v2 = 2;
      if ( v7 )
        goto LABEL_7;
      break;
    case 2:
      break;
    default:
      return result;
  }
  v8 = *((_QWORD *)v2 + 4);
  if ( v8 )
  {
    v7 = *(_QWORD *)(v8 + 24);
    *((_QWORD *)v2 + 4) = v7;
    if ( v7 )
    {
LABEL_7:
      v2[3] = *(_DWORD *)v9;
      *((_QWORD *)v2 + 3) = *(_QWORD *)&v9[12];
      v2[2] = 1;
      *((_QWORD *)v2 + 2) = v7;
      return *(_QWORD *)&v9[12];
    }
  }
  *v2 = 3;
  *(_OWORD *)(v2 + 3) = *(_OWORD *)v9;
  v2[7] = *(_DWORD *)&v9[16];
  v2[2] = 0;
  return *(unsigned int *)&v9[16];
}


// ---- 1405d4080 depth 2
void *__fastcall sub_1405D4080(size_t a1)
{
  return sub_1405D4030(a1);
}


// ---- 1400c15f0 depth 2
__int64 __fastcall sub_1400C15F0(__int64 a1, void **a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbp
  void **p_Block; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int v9; // ebx
  __int64 v10; // r15
  signed __int64 v11; // rax
  unsigned int v12; // esi
  signed __int64 v13; // rax
  int v14; // ecx
  _DWORD *v15; // rbx
  __int64 i; // rdi
  __int64 **v17; // rcx
  __int64 *v18; // rbx
  __int64 v19; // [rsp+20h] [rbp-268h] BYREF
  __int64 v20; // [rsp+28h] [rbp-260h]
  __int64 v21; // [rsp+30h] [rbp-258h]
  __int64 v22; // [rsp+38h] [rbp-250h]
  void *Block; // [rsp+40h] [rbp-248h] BYREF
  __int64 v24; // [rsp+48h] [rbp-240h] BYREF
  int v25; // [rsp+50h] [rbp-238h]
  int v26; // [rsp+238h] [rbp-50h]

  v2 = (volatile signed __int64 *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 8) )
    return 0;
  v4 = a1 - (8LL * *(unsigned __int8 *)(a1 + 2) + 24);
  if ( (*(_WORD *)(v4 + 18) & 0x8000) != 0 )
    v5 = v4 + 8 * (*(unsigned __int8 *)(v4 + 16) + 4LL);
  else
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 32LL) + 8LL;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 152LL) + 696LL);
  v24 = 0;
  v25 = 0;
  Block = &v24;
  v26 = 0;
  p_Block = &Block;
  if ( a2 )
    p_Block = a2;
  v8 = *(struct _RTL_CRITICAL_SECTION **)(v6 + 112);
  v19 = (__int64)v8;
  v9 = 0;
  LODWORD(v20) = 0;
  if ( v8 )
  {
    sub_1400EBFE0(v8);
    v9 = 1;
    LODWORD(v20) = 1;
  }
  v10 = sub_140164A80(v6, 16);
  if ( v9 )
  {
    sub_1400EC090((__int64)v8);
    LODWORD(v20) = 0;
  }
  v19 = v10;
  v20 = 16;
  v21 = v6;
  v22 = 0;
  v11 = sub_1401D5290(p_Block, &v19);
  if ( v11 )
  {
    v13 = _InterlockedCompareExchange64(v2, v11, 0);
    v14 = v26;
    if ( !v13 )
      v14 = 1;
    v26 = v14;
    v12 = 0;
  }
  else
  {
    v12 = -2147024882;
  }
  if ( !v26 )
  {
    v15 = Block;
    if ( Block )
    {
      do
      {
        for ( i = (unsigned int)(v15[2] - 1); (int)i >= 0; i = (unsigned int)(i - 1) )
          (***(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v15[6 * i + 4])(
            *(_QWORD *)&v15[6 * i + 4],
            *(_QWORD *)&v15[6 * i + 6],
            *(_QWORD *)&v15[6 * i + 8]);
        v15 = *(_DWORD **)v15;
      }
      while ( v15 );
    }
  }
  v17 = (__int64 **)Block;
  if ( Block != &v24 )
  {
    do
    {
      v18 = *v17;
      j_j_free(v17);
      v17 = (__int64 **)v18;
    }
    while ( v18 != &v24 );
  }
  return v12;
}


// ---- 1405d3f20 depth 2
// attributes: thunk
void __cdecl j_j_free(void *Block)
{
  j_free(Block);
}


// ---- 140115510 depth 2
__int64 __fastcall sub_140115510(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  _BYTE v15[24]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h]
  __int64 v18; // [rsp+80h] [rbp+8h]

  v4 = a3;
  v5 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 1 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v11 = a3;
    v12 = 1;
  }
  else
  {
    a3 = v18;
    if ( v5 == 2 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      a3 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v6 = v13;
    }
    v11 = v4;
    v12 = v5;
    if ( v5 == 2 )
    {
      v13 = a3;
      v14 = v6;
    }
  }
  ((void (__fastcall *)(_BYTE *, __int64 *, __int64, __int64))sub_1401151B0)(v15, &v11, a3, v4);
  while ( 1 )
  {
    v7 = v17;
    if ( !(_DWORD)v16 && !v17 )
    {
      *(_DWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      return a2;
    }
    if ( (_DWORD)v16 == 1 )
    {
      v8 = *(_DWORD *)(v17 + 52);
      goto LABEL_16;
    }
    v9 = *(_QWORD *)(v17 + 8);
    if ( !v9 || !*(_QWORD *)v9 )
      break;
    v8 = *(unsigned __int8 *)(*(_QWORD *)v9 + 8LL) >> 2;
LABEL_16:
    if ( (v8 & 1) != 0 )
      break;
    sub_140115350(v15);
  }
  *(_DWORD *)a2 = v16;
  *(_QWORD *)(a2 + 8) = v7;
  return a2;
}


// ---- 140630305 depth 2
// attributes: thunk
void *__cdecl malloc(size_t Size)
{
  return __imp_malloc(Size);
}


// ---- 140630335 depth 2
// attributes: thunk
int __cdecl callnewh(size_t Size)
{
  return _callnewh(Size);
}


// ---- 1405d4bf0 depth 2
void __noreturn sub_1405D4BF0()
{
  _BYTE v0[40]; // [rsp+20h] [rbp-28h] BYREF

  sub_1405D4BC0(v0);
  sub_1405D68E0(v0, &_TI2_AVbad_alloc_std__);
  __debugbreak();
}


// ---- 140029df0 depth 2
void __noreturn sub_140029DF0()
{
  _BYTE v0[40]; // [rsp+20h] [rbp-28h] BYREF

  sub_140029DC0(v0);
  sub_1405D68E0(v0, &_TI3_AVbad_array_new_length_std__);
  __debugbreak();
}


// ---- 1405d3fa0 depth 2
__int64 sub_1405D3FA0()
{
  __int64 result; // rax
  __int64 (__fastcall **i)(); // rbx

  result = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( *(_BYTE *)(result + 16) != 1 )
  {
    *(_BYTE *)(result + 16) = 1;
    for ( i = off_140680F40; i != (__int64 (__fastcall **)())&unk_140680F50; ++i )
    {
      result = (__int64)*i;
      if ( *i )
        result = ((__int64 (*)(void))result)();
    }
  }
  return result;
}


// ---- 1400da0c0 depth 2
void __fastcall sub_1400DA0C0(__int64 a1)
{
  DWORD LastError; // ebx
  PVOID StackBase; // rcx
  int v4; // edx
  bool v5; // zf
  signed __int32 v6; // eax
  int v7; // eax
  char v8; // [rsp+20h] [rbp-28h]

  LastError = GetLastError();
  if ( !(unsigned __int8)off_1407F7710() && qword_1407FDB30 )
  {
    if ( !qword_1407FD7C0
      || ((v4 = 0, !a1)
        ? (StackBase = NtCurrentTeb()->NtTib.StackBase, v5 = *(_QWORD *)(qword_1407FD7C0 + 128) == (_QWORD)StackBase)
        : (v5 = a1 == *(_QWORD *)(qword_1407FD7C0 + 120)),
          LOBYTE(v4) = v5,
          !v4) )
    {
      if ( (dword_1407F94B0 & 0x40) != 0 && (unsigned int)dword_1407F94B4 >= 6 )
        sub_1400AD790(6, 64, 1, (unsigned int)"RareDisablePreemptiveGC: entering. Thread state = %x\n", *(_DWORD *)a1);
      while ( 1 )
      {
        while ( 1 )
        {
          for ( ; (*(_DWORD *)a1 & 8) != 0; *(_DWORD *)(a1 + 4) = 1 )
          {
            if ( *(_BYTE *)(a1 + 800) )
              break;
            *(_DWORD *)(a1 + 4) = 0;
            sub_1400DADB0(a1);
            do
            {
              do
              {
                sub_1400DAA70(a1);
                v6 = *(_DWORD *)a1;
              }
              while ( (*(_DWORD *)a1 & 8) != 0 );
              StackBase = (PVOID)(v6 & 0xFFF7FFF7);
            }
            while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)a1, (signed __int32)StackBase, v6) );
          }
          if ( (dword_1407FD790 & 1) == 0 )
            break;
          _InterlockedOr((volatile signed __int32 *)a1, 2u);
          *(_DWORD *)(a1 + 4) = 0;
          if ( ((unsigned int)xmmword_1407F9450 & (unsigned int)qword_1407F9468 & 0x10000) != 0
            && (*(_DWORD *)a1 & 8) == 0 )
          {
            sub_1400DD670(StackBase, a1);
          }
          _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFB);
          *(_BYTE *)(a1 + 801) = 0;
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_1407FDB30 + 336LL))(
                 qword_1407FDB30,
                 0) )
          {
            v7 = sub_1405C21E0();
            sub_1400FC3A0(-2146233082, v7, (int)L"Waiting for GC completion failed", 0, 0, nullptr);
          }
          if ( ((unsigned int)xmmword_1407F9450 & (unsigned int)qword_1407F9468 & 0x10000) != 0 )
            sub_1400DD400(StackBase, a1);
          *(_DWORD *)(a1 + 4) = 1;
          _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFD);
        }
        if ( (*(_DWORD *)a1 & 0x200000) == 0 )
          break;
        *(_DWORD *)(a1 + 4) = 0;
        sub_1400980A0(*(_QWORD *)qword_1407FD850, 0xFFFFFFFFLL, 0);
        *(_DWORD *)(a1 + 4) = 1;
      }
      if ( (dword_1407F94B0 & 0x40) != 0 && (unsigned int)dword_1407F94B4 >= 6 )
        sub_1400AD790(6, 64, 0, (unsigned int)"RareDisablePreemptiveGC: leaving\n", v8);
    }
  }
  SetLastError(LastError);
}


// ---- 1400ad790 depth 2
void sub_1400AD790(unsigned int a1, int a2, unsigned int a3, __int64 a4, ...)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v7; // rbx
  va_list v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  LARGE_INTEGER v14; // rax
  LARGE_INTEGER v15; // r8
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 i; // rdx
  __int64 v20; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-48h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v4 = a4;
  v5 = a3;
  if ( (a2 & dword_1407F94B0) == 0 || a1 > dword_1407F94B4 )
    return;
  v7 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 448LL);
  if ( !v7 )
  {
    v7 = sub_1400AD030();
    if ( !v7 )
      return;
    v4 = a4;
  }
  va_copy(v8, va);
  v9 = v4 - qword_1407F9500;
  v10 = qword_1407F9508;
  if ( v4 - qword_1407F9500 < (unsigned __int64)qword_1407F9508 )
  {
    v10 = 0;
LABEL_13:
    v11 = v9;
    goto LABEL_14;
  }
  v9 = v4 - qword_1407F9510;
  if ( v4 - qword_1407F9510 < (unsigned __int64)qword_1407F9518 )
    goto LABEL_13;
  v10 = qword_1407F9518 + qword_1407F9508;
  v9 = v4 - qword_1407F9520;
  if ( v4 - qword_1407F9520 < (unsigned __int64)qword_1407F9528 )
    goto LABEL_13;
  v10 += qword_1407F9528;
  v9 = v4 - qword_1407F9530;
  if ( v4 - qword_1407F9530 < (unsigned __int64)qword_1407F9538 )
    goto LABEL_13;
  v11 = v4 - qword_1407F9540;
  if ( v11 < qword_1407F9548 )
  {
    v10 += qword_1407F9538;
LABEL_14:
    v11 += v10;
  }
  if ( v11 > 0x8000000000LL )
  {
    DebugBreak();
    v11 = 0;
  }
  v12 = *(_QWORD *)(v7 + 24) - (8LL * (int)v5 + 16);
  v13 = *(_QWORD *)(v7 + 64);
  if ( v12 < v13 + 16 )
  {
    sub_140634500(v13 + 16, 0, *(_QWORD *)(v7 + 24) - v13 - 16);
    if ( *(_QWORD *)(v7 + 64) == *(_QWORD *)(v7 + 40) && (unsigned int)sub_1400AD430(*(unsigned int *)(v7 + 72)) )
    {
      v14.QuadPart = sub_1400AC700();
      v15 = v14;
      PerformanceCount = v14;
      if ( v14.QuadPart )
      {
        v16 = *(_QWORD *)(v7 + 40);
        *(_QWORD *)v14.QuadPart = *(_QWORD *)(v7 + 48);
        *(_QWORD *)(v14.QuadPart + 8) = v16;
        *(_DWORD *)(v14.QuadPart + 32784) = -808464433;
        *(_DWORD *)(v14.QuadPart + 32788) = -808464433;
      }
      else
      {
        v15.QuadPart = 0;
      }
      if ( v15.QuadPart )
      {
        _InterlockedIncrement(&dword_1407F94C0);
        ++*(_DWORD *)(v7 + 72);
        **(LARGE_INTEGER **)(v7 + 40) = v15;
        *(LARGE_INTEGER *)(*(_QWORD *)(v7 + 48) + 8LL) = v15;
        *(LARGE_INTEGER *)(v7 + 40) = v15;
      }
    }
    v17 = *(__int64 **)(v7 + 64);
    v18 = *v17;
    *(_QWORD *)(v7 + 64) = *v17;
    if ( v18 == *(_QWORD *)(v7 + 48) )
      *(_BYTE *)(v7 + 18) = 1;
    v12 = v18 + 8 * (4096LL - (int)v5);
  }
  QueryPerformanceCounter(&PerformanceCount);
  *(_DWORD *)v12 = a2;
  *(_QWORD *)(v12 + 8) = (PerformanceCount.QuadPart << 13) | (v11 >> 26) & 0x1FFF;
  *(_QWORD *)v12 = (v5 << 32)
                 ^ ((((unsigned __int64)(unsigned int)v11 << 38) | *(_QWORD *)v12 & 0x3FFFFFFFFFLL)
                  ^ (v5 << 32))
                 & 0xFFFFFFC0FFFFFFFFuLL;
  for ( i = 0; (int)i < (int)v5; i = (unsigned int)(i + 1) )
  {
    v20 = *(_QWORD *)v8;
    v8 += 8;
    *(_QWORD *)(v12 + 8 * i + 16) = v20;
  }
  *(_QWORD *)(v7 + 24) = v12;
}


// ---- 1400bf7d0 depth 2
void __noreturn sub_1400BF7D0()
{
  __int64 v0; // [rsp+30h] [rbp+8h] BYREF

  sub_1400C1510();
  v0 = sub_1400BED90();
  sub_1405D68E0(&v0, &_TI2PEAVException__);
  JUMPOUT(0x1400BF7F4LL);
}


// ---- 1400bec20 depth 2
__int64 __fastcall sub_1400BEC20(__int64 a1, int a2)
{
  *(_QWORD *)a1 = &off_140701978;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_140701910;
  *(_DWORD *)(a1 + 16) = a2;
  return a1;
}


// ---- 1400ad770 depth 2
_BOOL8 __fastcall sub_1400AD770(int a1, unsigned int a2)
{
  return (a1 & dword_1407F94B0) != 0 && a2 <= dword_1407F94B4;
}


// ---- 1400be840 depth 2
__int64 sub_1400BE840()
{
  return 1213341728;
}


// ---- 1400c14d0 depth 2
void __fastcall sub_1400C14D0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  sub_1400AD790(5u, 0x4000, 3u, a3, a4, a5, a6);
}


// ---- 1405d68e0 depth 2
void __fastcall sub_1405D68E0(_QWORD *a1, _BYTE *a2)
{
  _BYTE *v2; // rbx
  ULONG_PTR v4; // rdi
  __int64 v5; // rcx
  PVOID v6; // rax
  PVOID BaseOfImage; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR Arguments[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a2;
  v4 = 429065504;
  if ( a2 && (*a2 & 0x10) != 0 )
  {
    v5 = *a1 - 8LL;
    v2 = *(_BYTE **)(*(_QWORD *)v5 + 48LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  }
  v6 = nullptr;
  BaseOfImage = nullptr;
  if ( v2 )
  {
    v6 = RtlPcToFileHeader(v2, &BaseOfImage);
    BaseOfImage = v6;
    if ( (*v2 & 8) != 0 || !v6 )
      v4 = 26820608;
  }
  Arguments[0] = v4;
  Arguments[1] = (ULONG_PTR)a1;
  Arguments[2] = (ULONG_PTR)v2;
  Arguments[3] = (ULONG_PTR)v6;
  RaiseException(0xE06D7363, 1u, 4u, Arguments);
}


