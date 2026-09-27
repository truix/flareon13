
char __fastcall sub_140003380(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rbx
  int v5; // edi
  int i; // edx
  int v7; // ecx
  int j; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  _QWORD ***v13; // rbx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rbx
  void (__fastcall *v18)(void (__fastcall *)(__int64, __int64), _OWORD *, _QWORD); // rsi
  _OWORD *v19; // rbx
  int v20; // eax
  int v22; // [rsp+30h] [rbp+8h]
  int v23; // [rsp+30h] [rbp+8h]
  int v24; // [rsp+30h] [rbp+8h]
  int v25; // [rsp+30h] [rbp+8h]
  int v26; // [rsp+30h] [rbp+8h]
  int v27; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( a2 != ((v2 + 0x59BFF9F6DF6184E0LL) ^ 0x59BFF9F6DF6184E0LL) )
    return 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_1400E9268 + 48LL))(qword_1400E9268, v2);
  sub_14007B280();
  v5 = 0;
  v22 = 367;
  for ( i = 0; i < 15; ++i )
  {
    v7 = i ^ v22;
    v22 = v7;
  }
  v23 = 844;
  for ( j = 0; j < 8; ++j )
  {
    v9 = j ^ v23;
    v23 = v9;
  }
  sub_1400B4D10();
  v10 = 0;
  v24 = 804;
  do
  {
    v11 = v10++ ^ v24;
    v24 = v11;
  }
  while ( v10 < 10 );
  v25 = 823;
  v12 = 0;
  v13 = (_QWORD ***)(*(_QWORD *)(((unsigned int)(*(_DWORD *)(a1 + 16) - 36384616) ^ 0xFDD4D080LL) + v4)
                   + ((unsigned int)(*(_DWORD *)(a1 + 16) - 1731121312) ^ 0x98D12F40LL));
  do
  {
    v14 = v12++ ^ v25;
    v25 = v14;
  }
  while ( v12 < 13 );
  sub_14000DB70();
  v15 = 0;
  v26 = 745;
  do
  {
    v16 = v15++ ^ v26;
    v26 = v16;
  }
  while ( v15 < 9 );
  v17 = *(_QWORD *)(((unsigned int)(*(_DWORD *)(a1 + 16) - 825627424) ^ 0xCEC9ECC0LL) + ***v13);
  sub_1400AE7A0();
  sub_14003EE30();
  if ( v17 )
  {
    sub_14009A5B0();
    sub_1400A82A0();
    sub_14007F4C0();
    v18 = (void (__fastcall *)(void (__fastcall *)(__int64, __int64), _OWORD *, _QWORD))sub_140001560(
                                                                                          v17,
                                                                                          (*(_DWORD *)(a1 + 16)
                                                                                         - 1523240233)
                                                                                        ^ 0x88399720);
    if ( v18 )
    {
      v19 = operator new(0x10u);
      *v19 = *(_OWORD *)a1;
      sub_14003EBF0();
      v18(sub_140002000, v19, 0);
      v27 = 373;
      do
      {
        v20 = v5++ ^ v27;
        v27 = v20;
      }
      while ( v5 < 5 );
    }
  }
  return 1;
}
