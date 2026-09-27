
__int64 __fastcall sub_1400019D0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r14
  int v4; // edi
  int i; // ecx
  int v6; // eax
  __int64 v7; // rsi
  int j; // ecx
  int v9; // eax
  int k; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rbx
  int m; // edx
  int v18; // ecx
  int n; // ecx
  int v20; // eax
  int ii; // ecx
  int v22; // eax
  __int64 v23; // rbx
  int v24; // ecx
  int v25; // eax
  __int64 *v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rbx
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rbx
  int v32; // edx
  int v33; // ecx
  unsigned int *v34; // rbx
  int jj; // edx
  int v36; // ecx
  int kk; // ecx
  int v38; // eax
  int mm; // ecx
  int v40; // eax
  __int64 result; // rax
  __int64 v42; // rbp
  int v43; // ecx
  int v44; // eax
  int nn; // ecx
  int v46; // eax
  __int64 v47; // rbx
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // eax
  int v52; // eax
  int v53; // [rsp+40h] [rbp-248h]
  int v54; // [rsp+40h] [rbp-248h]
  int v55; // [rsp+40h] [rbp-248h]
  int v56; // [rsp+40h] [rbp-248h]
  int v57; // [rsp+40h] [rbp-248h]
  int v58; // [rsp+40h] [rbp-248h]
  int v59; // [rsp+40h] [rbp-248h]
  int v60; // [rsp+40h] [rbp-248h]
  int v61; // [rsp+40h] [rbp-248h]
  int v62; // [rsp+40h] [rbp-248h]
  int v63; // [rsp+40h] [rbp-248h]
  int v64; // [rsp+40h] [rbp-248h]
  int v65; // [rsp+40h] [rbp-248h]
  int v66; // [rsp+40h] [rbp-248h]
  int v67; // [rsp+40h] [rbp-248h]
  int v68; // [rsp+40h] [rbp-248h]
  int v69; // [rsp+40h] [rbp-248h]
  int v70; // [rsp+40h] [rbp-248h]
  int v71; // [rsp+40h] [rbp-248h]
  int v72[3]; // [rsp+44h] [rbp-244h] BYREF
  _BYTE v73[528]; // [rsp+50h] [rbp-238h] BYREF

  v53 = 405;
  v3 = (qword_1400E9228 - 0x48F518CA1B9FC20LL) ^ 0xFB70AE735E4603E0uLL;
  v4 = 0;
  for ( i = 0; i < 11; ++i )
  {
    v6 = i ^ v53;
    v53 = v6;
  }
  v54 = 109;
  v7 = (qword_1400E9228 + 0x7AA5C6A9F94262A0LL) ^ 0x7AA5C6A9F94262A0LL;
  for ( j = 0; j < 8; ++j )
  {
    v9 = j ^ v54;
    v54 = v9;
  }
  if ( a2 )
  {
    v55 = 305;
    for ( k = 0; k < 2; ++k )
    {
      v11 = k ^ v55;
      v55 = v11;
    }
    v3 = *a2;
    v12 = 0;
    v56 = 152;
    do
    {
      v13 = v12++ ^ v56;
      v56 = v13;
    }
    while ( v12 < 8 );
    v7 = a2[1];
    sub_14008F6F0();
    sub_140043CF0();
    sub_1400375B0();
    j_j_j__free_base(a2);
  }
  ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD))qword_1400E8EC8[((int)qword_1400E9228 - 786081632)
                                                               ^ 0xFFFFFFFFD12558A0uLL])(
    0,
    v73,
    ((_DWORD)qword_1400E9228 - 786081372) ^ 0xD12558A0);
  sub_140080050();
  sub_14009DEF0();
  sub_140072000();
  sub_1400B92E0();
  v14 = 0;
  v57 = 664;
  do
  {
    v15 = v14++ ^ v57;
    v57 = v15;
  }
  while ( v14 < 3 );
  sub_14004D310();
  v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_1400E9268 + 48LL))(
          qword_1400E9268,
          qword_1400E9228);
  v58 = 467;
  for ( m = 0; m < 7; ++m )
  {
    v18 = m ^ v58;
    v58 = v18;
  }
  v59 = 247;
  for ( n = 0; n < 14; ++n )
  {
    v20 = n ^ v59;
    v59 = v20;
  }
  v60 = 598;
  for ( ii = 0; ii < 11; ++ii )
  {
    v22 = ii ^ v60;
    v60 = v22;
  }
  v23 = *(_QWORD *)(((unsigned int)(qword_1400E9228 + 1535778648) ^ 0x5B8A1F40LL) + v16);
  v24 = 0;
  v61 = 971;
  do
  {
    v25 = v24++ ^ v61;
    v61 = v25;
  }
  while ( v24 < 5 );
  sub_14004C7A0();
  v26 = (__int64 *)(((unsigned int)(qword_1400E9228 + 1141157184) ^ 0x4404AD60LL) + v23);
  sub_1400442A0();
  v27 = *v26;
  sub_14003BC00();
  sub_140024190();
  v28 = *(_QWORD *)(v27 + 32);
  sub_140026CE0();
  v29 = 0;
  v62 = 972;
  do
  {
    v30 = v29++ ^ v62;
    v62 = v30;
  }
  while ( v29 < 4 );
  v31 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64))qword_1400E9268)(qword_1400E9268, v28, qword_1400E9228);
  sub_14006C3B0();
  v32 = 0;
  v63 = 212;
  do
  {
    v33 = v32++ ^ v63;
    v63 = v33;
  }
  while ( v32 < 7 );
  sub_140064C20();
  v34 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1400E9268 + 16LL))(
                          qword_1400E9268,
                          v31,
                          qword_1400E9228);
  v64 = 976;
  for ( jj = 0; jj < 14; ++jj )
  {
    v36 = jj ^ v64;
    v64 = v36;
  }
  v65 = 279;
  for ( kk = 0; kk < 15; ++kk )
  {
    v38 = kk ^ v65;
    v65 = v38;
  }
  v66 = 662;
  for ( mm = 0; mm < 8; ++mm )
  {
    v40 = mm ^ v66;
    v66 = v40;
  }
  result = ((__int64 (__fastcall *)(_BYTE *, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))qword_1400E8EC8[((int)qword_1400E9228 + 1373659361) ^ 0x51E060E0LL])(
             v73,
             ((_DWORD)qword_1400E9228 + 1826406304) ^ 0xECDCBFA0,
             ((_DWORD)qword_1400E9228 + 979037953) ^ 0x3A5AEF00u,
             0,
             (qword_1400E9228 - 715698749) ^ 0xD5574DC0,
             (qword_1400E9228 + 584416672) ^ 0x22D57D20,
             0);
  v42 = result;
  if ( result != -1 )
  {
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))qword_1400E8EC8[((int)qword_1400E9228 - 1504941566)
                                                                         ^ 0xFFFFFFFFA64C6A00uLL])(
      result,
      *v34,
      0,
      ((_DWORD)qword_1400E9228 - 1504941568) ^ 0xA64C6A00);
    sub_14003C890();
    v43 = 0;
    v67 = 804;
    do
    {
      v44 = v43++ ^ v67;
      v67 = v44;
    }
    while ( v43 < 5 );
    v68 = 909;
    for ( nn = 0; nn < 15; ++nn )
    {
      v46 = nn ^ v68;
      v68 = v46;
    }
    v47 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))qword_1400E8EC8[((int)qword_1400E9228 + 2000782916)
                                                                                  ^ 0x77418640LL])(
            0,
            529565,
            ((_DWORD)qword_1400E9228 + 1606165600) ^ 0x5FBC1460u,
            ((_DWORD)qword_1400E9228 - 1388690560) ^ 0xAD3A43C0);
    sub_14006C960();
    v48 = 0;
    v69 = 232;
    do
    {
      v49 = v48++ ^ v69;
      v69 = v49;
    }
    while ( v48 < 10 );
    if ( v47 )
    {
      v72[0] = (qword_1400E9228 + 2117033984) ^ 0x7E2F6000;
      sub_14008C800();
      ((void (__fastcall *)(__int64, __int64, __int64, int *, _QWORD))qword_1400E8EC8[((int)qword_1400E9228 + 422297283)
                                                                                    ^ 0x192BBEC0LL])(
        v42,
        v47,
        529565,
        v72,
        0);
      sub_14001F280();
      sub_14005FA10();
      ((void (__fastcall *)(__int64))qword_1400E8EC8[((int)qword_1400E9228 + 27675877) ^ 0x1A64CE0LL])(v42);
      v50 = 0;
      v70 = 302;
      do
      {
        v51 = v50++ ^ v70;
        v70 = v51;
      }
      while ( v50 < 10 );
      sub_14008BFE0();
      sub_14005A5C0();
      ((void (__fastcall *)(unsigned __int64, __int64))(v47 + 27962))(v3, v7);
      sub_140084130();
      v71 = 639;
      do
      {
        v52 = v4++ ^ v71;
        v71 = v52;
      }
      while ( v4 < 9 );
      return sub_140034830();
    }
    else
    {
      ((void (__fastcall *)(__int64))qword_1400E8EC8[((int)qword_1400E9228 + 1444042245) ^ 0x56125600LL])(v42);
      return sub_14001BE50();
    }
  }
  return result;
}
