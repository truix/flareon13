// ---- 97be
__int64 __fastcall sub_97BE(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  int v13; // r9d
  int v14; // r9d
  __int64 v16; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+0h] [rbp-68h]
  __int64 v19; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+8h] [rbp-60h]
  int v22; // [rsp+8h] [rbp-60h]
  int v23; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+28h] [rbp-40h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]
  __int64 v27; // [rsp+38h] [rbp-30h]
  __int64 v28; // [rsp+40h] [rbp-28h]
  __int64 (*v29)(void); // [rsp+48h] [rbp-20h] BYREF
  __int64 (__fastcall *v30)(__int64, __int64, __int64, __int64, __int64); // [rsp+50h] [rbp-18h] BYREF

  v25 = 0;
  v27 = 0;
  v28 = 0;
  v29 = nullptr;
  v30 = nullptr;
  v26 = a3;
  if ( (unsigned int)sub_9F6E(a1, a2, a3, (unsigned int)&v25, a5, a6) )
  {
    v27 = sub_D68A(a1, a2, v26, 0xFFFFFFFF6BAE9059LL, v6, v7);
    v28 = sub_D68A(a1, a2, v26, 0x2989A626, v8, v9);
    if ( v27 && v28 )
    {
      v10 = sub_D7EA(a1, a2, 0xFFFFFFFF756BF4F9LL, v27, (unsigned int)&v29, v26, v16, v20);
      if ( v10 == 0 )
      {
        v11 = sub_D7EA(a1, a2, 0xFFFFFFFFFDD993F6LL, v28, (unsigned int)&v30, v26, v17, v21);
        if ( v11 == 0 )
        {
          v12 = v29();
          v25 = v30(a1, a2, 8, v12, 1279);
          if ( v25 )
          {
            *(_DWORD *)v25 = 1380011078;
            *(_DWORD *)(v25 + 4) = 1;
            *(_BYTE *)(v25 + 40) = 0;
            sub_11722(a1, a2, 0, v25 + 8, 32, v13, v18, v22);
            sub_11722(a1, a2, 0, v25 + 41, 32, v14, v19, v23);
            *(_DWORD *)(v25 + 73) = 0;
            *(_DWORD *)(v25 + 165) = 0;
            *(_QWORD *)(v25 + 169) = sub_DB36;
            *(_QWORD *)(v25 + 177) = sub_11722;
            *(_QWORD *)(v25 + 185) = sub_11876;
            *(_QWORD *)(v25 + 193) = sub_1180E;
            *(_QWORD *)(v25 + 473) = 0;
            *(_QWORD *)(v25 + 481) = 0;
            *(_QWORD *)(v25 + 489) = 0x80000000;
            *(_QWORD *)(v25 + 497) = 1;
            *(_QWORD *)(v25 + 505) = 3;
            *(_QWORD *)(v25 + 513) = 0x104;
            *(_QWORD *)(v25 + 521) = 0;
            *(_QWORD *)(v25 + 529) = 8;
            *(_QWORD *)(v25 + 537) = 0x202;
            *(_QWORD *)(v25 + 545) = 2;
            *(_QWORD *)(v25 + 553) = 1;
            *(_QWORD *)(v25 + 561) = 6;
            *(_QWORD *)(v25 + 569) = 3;
            *(_QWORD *)(v25 + 577) = 0;
            *(_QWORD *)(v25 + 585) = 0x98000001;
            *(_QWORD *)(v25 + 593) = 1;
            *(_QWORD *)(v25 + 601) = 0xFFFFFFFF80000002LL;
            *(_QWORD *)(v25 + 609) = 0x20019;
            *(_QWORD *)(v25 + 617) = 0x40;
            *(_QWORD *)(v25 + 625) = 0x3E8;
            *(_QWORD *)(v25 + 633) = 0x100;
            *(_QWORD *)(v25 + 641) = 0x10;
            *(_QWORD *)(v25 + 201) = 0;
            *(_QWORD *)(v25 + 209) = 0;
            *(_QWORD *)(v25 + 217) = 0;
            *(_QWORD *)(v25 + 225) = 0;
            if ( a4 )
              *a4 = v25;
            return 0;
          }
          else
          {
            return 8;
          }
        }
        else
        {
          return 50;
        }
      }
      else
      {
        return 50;
      }
    }
    else
    {
      return 50;
    }
  }
  else
  {
    if ( a4 )
      *a4 = v25;
    return 0;
  }
}


// ---- 9f6e
__int64 __fastcall sub_9F6E(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD a5, int a6)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-C8h]
  __int64 v14; // [rsp+0h] [rbp-C8h]
  __int64 v15; // [rsp+0h] [rbp-C8h]
  __int64 v16; // [rsp+0h] [rbp-C8h]
  __int64 v17; // [rsp+0h] [rbp-C8h]
  __int64 v18; // [rsp+0h] [rbp-C8h]
  int v19; // [rsp+8h] [rbp-C0h]
  __int64 v20; // [rsp+8h] [rbp-C0h]
  __int64 v21; // [rsp+8h] [rbp-C0h]
  __int64 v22; // [rsp+8h] [rbp-C0h]
  __int64 v23; // [rsp+8h] [rbp-C0h]
  __int64 v24; // [rsp+8h] [rbp-C0h]
  unsigned int v25; // [rsp+20h] [rbp-A8h]
  unsigned int v27; // [rsp+30h] [rbp-98h]
  unsigned int i; // [rsp+34h] [rbp-94h]
  unsigned int v29; // [rsp+38h] [rbp-90h]
  __int64 v30; // [rsp+40h] [rbp-88h]
  __int64 v31; // [rsp+48h] [rbp-80h]
  __int64 (__fastcall *v32)(__int64, __int64, __int64, _QWORD); // [rsp+50h] [rbp-78h] BYREF
  __int64 (*v33)(void); // [rsp+58h] [rbp-70h] BYREF
  __int64 (__fastcall *v34)(__int64, __int64, _QWORD, __int64, __int64); // [rsp+60h] [rbp-68h] BYREF
  unsigned int (__fastcall *v35)(__int64, __int64, _DWORD **, _QWORD); // [rsp+68h] [rbp-60h] BYREF
  void (__fastcall *v36)(__int64, __int64, _QWORD, __int64, __int64); // [rsp+70h] [rbp-58h] BYREF
  __int64 v37; // [rsp+78h] [rbp-50h]
  __int64 v38; // [rsp+80h] [rbp-48h]
  _DWORD *v39; // [rsp+88h] [rbp-40h] BYREF
  int v40; // [rsp+90h] [rbp-38h]
  __int64 v41; // [rsp+B0h] [rbp-18h]

  v30 = 0;
  v33 = nullptr;
  v32 = nullptr;
  v34 = nullptr;
  v35 = nullptr;
  v36 = nullptr;
  v41 = 0;
  sub_11722(a1, a2, 0, (unsigned int)&v39, 40, a6, v13, v19);
  v31 = sub_D68A(a1, a2, a3, 0x6BAE9059, v6, v7);
  v37 = sub_D68A(a1, a2, a3, 0xFFFFFFFF2989A626LL, v8, v9);
  if ( v31 )
  {
    if ( (unsigned int)sub_D7EA(a1, a2, 0x756BF4F9, v31, (unsigned int)&v33, a3, v14, v20) == 0 )
    {
      if ( (unsigned int)sub_D7EA(a1, a2, 0x8D4A2C5, v31, (unsigned int)&v36, a3, v15, v21) == 0 )
      {
        if ( (unsigned int)sub_D7EA(a1, a2, 0xFFFFFFFFB5FA7CFALL, v31, (unsigned int)&v32, a3, v16, v22) == 0 )
        {
          if ( (unsigned int)sub_D7EA(a1, a2, 0xFDD993F6, v37, (unsigned int)&v34, a3, v17, v23) == 0 )
          {
            if ( (unsigned int)sub_D7EA(a1, a2, 0xFFFFFFFF0AF0664BLL, v31, (unsigned int)&v35, a3, v18, v24) == 0 )
            {
              v27 = v32(a1, a2, 0, 0);
              if ( v27 )
              {
                v38 = 8LL * v27;
                v10 = v33();
                v30 = v34(a1, a2, 0, v10, v38);
                if ( v30 )
                {
                  v29 = v32(a1, a2, v30, v27);
                  if ( v29 )
                  {
                    if ( v29 <= v27 )
                    {
                      for ( i = 0; i < v29; ++i )
                      {
                        v39 = nullptr;
                        while ( v35(a1, a2, &v39, *(_QWORD *)(v30 + 8LL * i)) )
                        {
                          if ( v40 == 1279 && *v39 == 1380011078 )
                          {
                            *a4 = v39;
                            v25 = 0;
                            goto LABEL_31;
                          }
                        }
                      }
                      v25 = 1168;
                    }
                    else
                    {
                      v25 = 170;
                    }
                  }
                  else
                  {
                    v25 = 8;
                  }
                }
                else
                {
                  v25 = 8;
                }
              }
              else
              {
                v25 = 8;
              }
            }
            else
            {
              v25 = 50;
            }
          }
          else
          {
            v25 = 50;
          }
        }
        else
        {
          v25 = 50;
        }
      }
      else
      {
        v25 = 50;
      }
    }
    else
    {
      v25 = 50;
    }
  }
  else
  {
    v25 = 50;
  }
LABEL_31:
  if ( v30 )
  {
    v11 = v33();
    v36(a1, a2, 0, v11, v30);
  }
  return v25;
}


// ---- c8b2
__int64 __fastcall sub_C8B2(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v5; // [rsp+0h] [rbp-28h]
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 i; // [rsp+18h] [rbp-10h]

  v6 = 0;
  if ( !a4 )
    return 0;
  for ( i = 0; i < a3; ++i )
  {
    v5 = *(_BYTE *)(i + a4);
    if ( v5 >= 97 && v5 <= 122 )
      v5 -= 32;
    v6 = v5 + ((v6 >> 57) | (v6 << 7));
  }
  return v6 & 0x7FFFFFFFFFFFFFFFLL;
}


// ---- ca8e
__int64 __fastcall sub_CA8E(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r9d
  int v20; // eax
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // [rsp+0h] [rbp-138h]
  __int64 v28; // [rsp+8h] [rbp-130h]
  int i; // [rsp+28h] [rbp-110h]
  int j; // [rsp+2Ch] [rbp-10Ch]
  int k; // [rsp+30h] [rbp-108h]
  int m; // [rsp+34h] [rbp-104h]
  __int64 v33; // [rsp+38h] [rbp-100h] BYREF
  _BYTE v34[16]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v35[16]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v36[16]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v37[11]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v38[2]; // [rsp+7Bh] [rbp-BDh] BYREF
  _BYTE v39[8]; // [rsp+80h] [rbp-B8h]
  _BYTE v40[16]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v41[16]; // [rsp+98h] [rbp-A0h] BYREF
  _BYTE v42[16]; // [rsp+A8h] [rbp-90h]
  __int64 (__fastcall *v43)(__int64, __int64, __int64, _BYTE *); // [rsp+B8h] [rbp-80h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-78h]
  __int64 v45; // [rsp+C8h] [rbp-70h]
  __int64 v46; // [rsp+D0h] [rbp-68h]
  __int64 v47; // [rsp+D8h] [rbp-60h]
  __int64 v48; // [rsp+E0h] [rbp-58h]
  int v49; // [rsp+E8h] [rbp-50h]
  int v50; // [rsp+ECh] [rbp-4Ch]
  int v51; // [rsp+F0h] [rbp-48h]
  int v52; // [rsp+F4h] [rbp-44h]
  __int64 v53; // [rsp+F8h] [rbp-40h]
  __int64 v54; // [rsp+100h] [rbp-38h]
  __int64 v55; // [rsp+108h] [rbp-30h]
  __int64 v56; // [rsp+110h] [rbp-28h]
  __int64 v57; // [rsp+118h] [rbp-20h]
  __int64 v58; // [rsp+120h] [rbp-18h]
  __int64 v59; // [rsp+128h] [rbp-10h]

  v44 = sub_D68A(a1, a2, 0, 1806602329, a5, a6);
  v53 = sub_D68A(a1, a2, 0, 696886822, v6, v7);
  v33 = 0;
  if ( v44 )
  {
    v54 = 0;
    v10 = sub_D7EA(a1, a2, a4, v44, (unsigned int)&v33, 0, v27, v28);
    if ( v54 == v10 )
      return v33;
  }
  if ( v53 )
  {
    v55 = 0;
    v12 = sub_D7EA(a1, a2, a4, v53, (unsigned int)&v33, 0, v27, v28);
    if ( v55 == v12 )
      return v33;
  }
  v43 = nullptr;
  if ( v44 )
    sub_D7EA(a1, a2, 675168417, v44, (unsigned int)&v43, 0, v27, v28);
  if ( !v43 )
    return 0;
  v39[0] = 4;
  v39[1] = -110;
  v39[2] = -95;
  v39[3] = 70;
  v39[4] = -83;
  v39[5] = 72;
  v39[6] = -110;
  v39[7] = -36;
  v34[0] = 105;
  v34[1] = -31;
  v34[2] = -41;
  v34[3] = 37;
  v34[4] = -33;
  v34[5] = 60;
  v34[6] = -68;
  v34[7] = -72;
  v34[8] = 104;
  v34[9] = -2;
  v34[10] = -95;
  for ( i = 0; (unsigned __int64)i < 0xB; ++i )
  {
    v49 = (unsigned __int8)v34[i];
    v34[i] = v39[i % 8uLL] ^ v49;
  }
  qmemcpy(v41, "Sn", 2);
  v41[2] = 127;
  v41[3] = 120;
  v41[4] = 71;
  v41[5] = 114;
  v41[6] = 75;
  v41[7] = -11;
  v41[8] = -122;
  v41[9] = -47;
  v41[10] = -4;
  qmemcpy(v37, "2\n\t", 3);
  v37[3] = 25;
  v37[4] = 55;
  v37[5] = 27;
  v37[6] = 120;
  v37[7] = -57;
  v37[8] = -88;
  v37[9] = -75;
  v37[10] = -112;
  qmemcpy(v38, "?n", sizeof(v38));
  for ( j = 0; (unsigned __int64)j < 0xD; ++j )
  {
    v50 = (unsigned __int8)v37[j];
    v37[j] = v41[j % 0xBuLL] ^ v50;
  }
  v42[0] = -65;
  v42[1] = -72;
  v42[2] = 63;
  v42[3] = 52;
  v42[4] = -101;
  v42[5] = -88;
  v42[6] = 39;
  v42[7] = -35;
  v42[8] = -13;
  v42[9] = -27;
  v42[10] = 0x80;
  v42[11] = -56;
  v42[12] = -108;
  v42[13] = -83;
  v35[0] = -56;
  v35[1] = -53;
  v35[2] = 13;
  v35[3] = 107;
  v35[4] = -88;
  v35[5] = -102;
  v35[6] = 9;
  v35[7] = -71;
  v35[8] = -97;
  v35[9] = -119;
  v35[10] = 0x80;
  for ( k = 0; (unsigned __int64)k < 0xB; ++k )
  {
    v51 = (unsigned __int8)v35[k];
    v35[k] = v42[k % 0xEuLL] ^ v51;
  }
  qmemcpy(v40, "i_", 2);
  v40[2] = -76;
  v40[3] = 3;
  v40[4] = -93;
  v40[5] = -21;
  v40[6] = 72;
  v40[7] = 6;
  v40[8] = -85;
  v36[0] = 11;
  v36[1] = 60;
  v36[2] = -58;
  v36[3] = 122;
  v36[4] = -45;
  v36[5] = -97;
  v36[6] = 102;
  v36[7] = 98;
  v36[8] = -57;
  v36[9] = 5;
  v36[10] = 95;
  for ( m = 0; (unsigned __int64)m < 0xB; ++m )
  {
    v52 = (unsigned __int8)v36[m];
    v36[m] = v40[m % 9uLL] ^ v52;
  }
  v45 = sub_D68A(a1, a2, 0, 562720714, v8, v9);
  if ( !v45 )
    v45 = v43(a1, a2, v13, v34);
  if ( v45 )
  {
    v56 = 0;
    v16 = sub_D7EA(a1, a2, a4, v45, (unsigned int)&v33, 0, v27, v28);
    if ( v56 == v16 )
      return v33;
  }
  v46 = sub_D68A(a1, a2, 0, 1403424985, v14, v15);
  if ( !v46 )
    v46 = v43(a1, a2, v17, v37);
  if ( v46 )
  {
    v57 = 0;
    v20 = sub_D7EA(a1, a2, a4, v46, (unsigned int)&v33, 0, v27, v28);
    if ( v57 == v20 )
      return v33;
  }
  v47 = sub_D68A(a1, a2, 0, 25596153, v18, v19);
  if ( !v47 )
    v47 = v43(a1, a2, v21, v35);
  if ( v47 )
  {
    v58 = 0;
    v24 = sub_D7EA(a1, a2, a4, v47, (unsigned int)&v33, 0, v27, v28);
    if ( v58 == v24 )
      return v33;
  }
  v48 = sub_D68A(a1, a2, 0, -779473302, v22, v23);
  if ( !v48 )
    v48 = v43(a1, a2, v25, v36);
  if ( v48 && (v59 = 0, v26 = sub_D7EA(a1, a2, a4, v48, (unsigned int)&v33, 0, v27, v28), v59 == v26) )
    return v33;
  else
    return 0;
}


// ---- d626
__int64 __fastcall sub_D626(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return *(_QWORD *)(__readgsqword((a4 - 1853694736) ^ 0x9182DCC0) + ((a4 - 553579456) ^ 0xDF010C20));
}


// ---- d68a
__int64 __fastcall sub_D68A(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *i; // [rsp+20h] [rbp-48h]
  _QWORD *v6; // [rsp+28h] [rbp-40h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+78h] [rbp+10h]

  v11 = a3;
  v9 = 0;
  v7 = sub_D626(a1, a2, a3, a3);
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(v7 + ((v11 + 584416568) ^ 0x22D57D20u));
  if ( !v8 )
    return 0;
  v6 = (_QWORD *)(((v11 + 189795168) ^ 0xB500B40u) + v8);
  if ( !v6 )
    return 0;
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    if ( a4 == sub_C8B2(a1, a2, *((unsigned __int16 *)i + 36), i[10]) )
      return i[4];
  }
  return v9;
}


// ---- d7ea
__int64 __fastcall sub_D7EA(int a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  unsigned int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  int v14; // [rsp+50h] [rbp+18h]

  v14 = a5;
  if ( a5 )
  {
    v7 = sub_11D62(a1, a2, (a6 - 250694464) ^ 0xF10EB4C0, a4, (unsigned int)&v9, a6);
    if ( v7 == ((a6 + 654799424) ^ 0x27077240) )
    {
      v8 = sub_D94E(a1, a2, v9, a4, a3, v14);
      if ( v8 )
        return (a6 + (v8 ^ 0xE0771CA0)) ^ 0xE0771CA0;
      else
        return (a6 - 923686208) ^ 0xC8F1AAC0;
    }
  }
  else
  {
    return (a6 - 1156188393) ^ 0xBB15F740;
  }
  return v7;
}


// ---- d94e
__int64 __fastcall sub_D94E(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // [rsp+0h] [rbp-58h]
  __int64 v9; // [rsp+8h] [rbp-50h]
  unsigned int v10; // [rsp+20h] [rbp-38h]
  unsigned int v12; // [rsp+28h] [rbp-30h]
  _DWORD *v13; // [rsp+30h] [rbp-28h]
  unsigned __int16 *v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v10 = -1;
  if ( a3[5] )
  {
    if ( a5 >= 0 )
    {
      if ( !a3[6] )
        return 11;
      v12 = 0;
      v13 = (_DWORD *)((unsigned int)a3[8] + a4);
      v14 = (unsigned __int16 *)((unsigned int)a3[9] + a4);
      while ( v12 < a3[6] )
      {
        v15 = (unsigned int)*v13 + a4;
        v6 = sub_1180E(a1, a2, 64, *v13 + (int)a4, a5, (int)a6, v8, v9);
        if ( a5 == sub_C8B2(a1, a2, v6, v15) )
        {
          v10 = *v14;
          break;
        }
        ++v12;
        ++v13;
        ++v14;
      }
    }
    else
    {
      if ( (unsigned int)(unsigned __int16)a5 < a3[4] )
        return 11;
      v10 = (unsigned __int16)a5 - a3[4];
    }
    if ( v10 == -1 || v10 >= a3[5] )
    {
      return 1168;
    }
    else
    {
      *a6 = *(unsigned int *)((unsigned int)a3[7] + a4 + 4LL * v10) + a4;
      return 0;
    }
  }
  else
  {
    return 11;
  }
}


// ---- db36
__int64 __fastcall sub_DB36(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // eax
  unsigned __int16 v21; // ax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // [rsp+0h] [rbp-1C8h]
  int v45; // [rsp+8h] [rbp-1C0h]
  __int64 v46; // [rsp+10h] [rbp-1B8h]
  int v47; // [rsp+18h] [rbp-1B0h]
  __int64 v48; // [rsp+50h] [rbp-178h] BYREF
  __int64 v49; // [rsp+58h] [rbp-170h]
  __int64 v50; // [rsp+60h] [rbp-168h]
  unsigned int v51; // [rsp+68h] [rbp-160h]
  __int64 (__fastcall *v52)(__int64, __int64, __int64, _QWORD); // [rsp+70h] [rbp-158h]
  unsigned __int8 v53; // [rsp+78h] [rbp-150h]
  unsigned __int16 i; // [rsp+7Ch] [rbp-14Ch]
  unsigned int j; // [rsp+80h] [rbp-148h]
  unsigned __int16 v56; // [rsp+84h] [rbp-144h]
  unsigned __int16 v57; // [rsp+88h] [rbp-140h]
  unsigned int v58; // [rsp+8Ch] [rbp-13Ch]
  __int64 v59; // [rsp+90h] [rbp-138h]
  __int64 v60; // [rsp+98h] [rbp-130h]
  __int64 v61; // [rsp+A0h] [rbp-128h]
  __int64 v62; // [rsp+A8h] [rbp-120h]
  unsigned __int64 v63; // [rsp+B0h] [rbp-118h]
  __int64 v64; // [rsp+B8h] [rbp-110h]
  __int64 v65; // [rsp+C0h] [rbp-108h]
  __int64 v66; // [rsp+C8h] [rbp-100h]
  unsigned __int64 v67; // [rsp+D0h] [rbp-F8h]
  unsigned __int64 k; // [rsp+D8h] [rbp-F0h]
  void (*v69)(void); // [rsp+E0h] [rbp-E8h]
  unsigned __int64 v70; // [rsp+E8h] [rbp-E0h] BYREF
  unsigned __int64 v71; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v72; // [rsp+F8h] [rbp-D0h]
  unsigned __int64 v73; // [rsp+100h] [rbp-C8h]
  unsigned __int64 v74; // [rsp+108h] [rbp-C0h]
  __int64 v75; // [rsp+110h] [rbp-B8h]
  _QWORD *v76; // [rsp+118h] [rbp-B0h]
  __int64 v77; // [rsp+120h] [rbp-A8h]
  unsigned __int64 v78; // [rsp+128h] [rbp-A0h]
  __int64 v79; // [rsp+130h] [rbp-98h]
  __int64 v80; // [rsp+138h] [rbp-90h]
  __int64 v81; // [rsp+140h] [rbp-88h]
  __int64 v82; // [rsp+148h] [rbp-80h]
  __int64 v83; // [rsp+150h] [rbp-78h]
  __int64 v84; // [rsp+158h] [rbp-70h]
  __int64 v85; // [rsp+160h] [rbp-68h]
  __int64 v86; // [rsp+168h] [rbp-60h]
  __int64 v87; // [rsp+170h] [rbp-58h]
  __int64 v88; // [rsp+178h] [rbp-50h]
  __int64 v89; // [rsp+180h] [rbp-48h]
  __int64 v90; // [rsp+188h] [rbp-40h]
  _QWORD v91[7]; // [rsp+190h] [rbp-38h] BYREF

  v48 = 0;
  v49 = 0;
  result = sub_9F6E(a1, a2, 0, &v48, a5, a6);
  if ( v48 )
  {
    v50 = 0x7B5A3C1F;
    v61 = 0;
    v52 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          while ( 1 )
                          {
                            while ( 1 )
                            {
                              while ( 1 )
                              {
                                while ( 1 )
                                {
                                  while ( 1 )
                                  {
                                    while ( 1 )
                                    {
                                      while ( 1 )
                                      {
                                        result = v51;
                                        if ( v50 == v51 )
                                          return result;
                                        if ( v50 != 0x7B5A3C1F )
                                          break;
                                        if ( a4 )
                                        {
                                          v73 = __readgsqword0x60;
                                          v74 = v73;
                                          v75 = *(_QWORD *)(v73 + 0x18);
                                          v76 = (_QWORD *)(0x20 + v75);
                                          v65 = *(_QWORD *)(0x20 + *v76);
                                          v64 = *(unsigned int *)(v65 + 0x3C) + v65;
                                          v57 = *(_WORD *)(v64 + 6);
                                          v56 = *(_WORD *)(v64 + 0x14);
                                          v77 = v56 + 0x18 + v64;
                                          v66 = 0;
                                          v58 = 0;
                                          for ( i = 0; i < (int)v57; ++i )
                                          {
                                            v59 = 0x28 * i + v77;
                                            if ( *(unsigned __int8 *)(v59 + 0) == 0x2E
                                              && *(unsigned __int8 *)(v59 + 1) == 0x74
                                              && *(unsigned __int8 *)(v59 + 2) == 0x65
                                              && *(unsigned __int8 *)(v59 + 3) == 0x78
                                              && *(unsigned __int8 *)(v59 + 4) == 0x74 )
                                            {
                                              v66 = *(unsigned int *)(v59 + 0xC)
                                                  + v65;
                                              v58 = *(_DWORD *)(v59 + 0x10);
                                              break;
                                            }
                                          }
                                          if ( v66 && v58 )
                                          {
                                            v62 = 0x1505;
                                            v60 = 0;
                                            v67 = 0xCBF29CE484222325LL;
                                            v63 = 7;
                                            for ( j = 0; j < v58; ++j )
                                            {
                                              v53 = *(_BYTE *)(v66 + j);
                                              v62 += v53 + (v62 << 0xFFFFFFFFFFFFFF05LL);
                                              v60 = (v60 << 0x10)
                                                  + (v60 << 6)
                                                  + v53
                                                  - v60;
                                              v67 = 0x100000001B3LL * (v53 ^ v67);
                                              v63 = v53
                                                  + ((v63 >> ((unsigned __int8)v49 + 55))
                                                   | (v63 << ((unsigned __int8)v49 + 9)));
                                            }
                                            *(_QWORD *)((char *)v91 + 0) = v62;
                                            *(_QWORD *)((char *)v91 + 8) = v60;
                                            *(_QWORD *)((char *)v91 + 0x10) = v67;
                                            *(_QWORD *)((char *)v91 + 0x18) = v63;
                                          }
                                          else
                                          {
                                            sub_11722(
                                              a1,
                                              a2,
                                              0,
                                              (unsigned int)v91,
                                              0x20,
                                              v9,
                                              v44,
                                              v45);
                                          }
                                          v70 = *(_QWORD *)(a4 + 8);
                                          sub_1036A(
                                            a1,
                                            a2,
                                            0xFFFFFFFF00000020LL,
                                            (unsigned int)v91,
                                            (unsigned int)&v70,
                                            0xFFFFFFFF00000008LL,
                                            v44,
                                            v45,
                                            v46,
                                            v47);
                                          v61 = *(unsigned int *)(a4 + 16) ^ v70;
                                          *(_QWORD *)(v48 + 465) = v61;
                                        }
                                        else
                                        {
                                          v61 = *(_QWORD *)(v48 + 465);
                                        }
                                        v7 = 0x139C1264AD6A8020LL;
                                        v50 = 0x3039
                                            + 0x41C64E6D * (_DWORD)v50;
                                      }
                                      if ( v50 != 0x62B73B6C )
                                        break;
                                      v78 = (a4 ^ __rdtsc()) % 3;
                                      for ( k = 0; k < v78; ++k )
                                      {
                                        if ( (1 & __rdtsc()) != 0 )
                                          v71 = 0x43970E7F962FB058LL;
                                        else
                                          v71 = 0x4C834EA45A5D993CLL;
                                        v72 = v71;
                                        v69 = (void (*)(void))sub_CA8E(a1, a2, 0x913B5B087E5F9C60LL, v71, v8, v9);
                                        if ( v69 )
                                        {
                                          if ( v72 == 0x4C834EA45A5D993CLL )
                                            v69();
                                          else
                                            v69();
                                        }
                                      }
                                      v7 = 0x8C79EC502049D4E0LL;
                                      v50 = 0x3039
                                          + 0x41C64E6D * (unsigned int)v50;
                                    }
                                    if ( v50 != 0x3DA76535 )
                                      break;
                                    v52 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))sub_CA8E(a1, a2, v7, v61, v8, v9);
                                    if ( v52 )
                                      v50 = v61;
                                    else
                                      v50 = v51;
                                  }
                                  if ( v50 != 0x6A58DB63647E15F9LL )
                                    break;
                                  v79 = 240;
                                  v10 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v52)(
                                          a1,
                                          a2,
                                          *(_QWORD *)(v48 + 233),
                                          *(_QWORD *)(v48 + 473),
                                          *(unsigned int *)(v48 + 513));
                                  *(_QWORD *)(v48 + 157) = v10;
                                  v50 = v51;
                                }
                                if ( v50 != 0x4C8BB1238D6D1401LL )
                                  break;
                                v11 = v52(a1, a2, v7, *(_QWORD *)(v48 + 473));
                                *(_QWORD *)(v48 + 157) = v11;
                                v50 = v51;
                              }
                              if ( v50 != 0x4583522C693333C0LL )
                                break;
                              v80 = 264;
                              v12 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v52)(
                                      a1,
                                      a2,
                                      *(unsigned int *)(v48 + 489),
                                      *(_QWORD *)(v48 + 233),
                                      *(unsigned int *)(v48 + 497),
                                      *(_QWORD *)(v48 + 473));
                              *(_QWORD *)(v48 + 157) = v12;
                              v50 = v51;
                            }
                            if ( v50 != 0x4C8B427F362FB476LL )
                              break;
                            v13 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v52)(
                                    a1,
                                    a2,
                                    *(unsigned int *)(v48 + 265),
                                    *(_QWORD *)(v48 + 281),
                                    *(_QWORD *)(v48 + 473),
                                    *(unsigned int *)(v48 + 521));
                            *(_QWORD *)(v48 + 157) = v13;
                            v50 = v51;
                          }
                          if ( v50 != 0x4F87169F756BF4F9LL )
                            break;
LABEL_51:
                          *(_QWORD *)(v48 + 157) = ((__int64 (*)(void))v52)();
                          v50 = v51;
                        }
                        if ( v50 != 0x4F8707EEFDD993F6LL )
                          break;
                        v81 = 72;
                        v14 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v52)(
                                a1,
                                a2,
                                *(unsigned int *)(v48 + 529),
                                *(_QWORD *)(v48 + 305),
                                *(_QWORD *)(v48 + 273));
                        *(_QWORD *)(v48 + 157) = v14;
                        v50 = v51;
                      }
                      if ( v50 != 0xA5160C48D26645LL )
                        break;
                      v82 = 48;
                      v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64))v52)(
                              a1,
                              a2,
                              *(_QWORD *)(v48 + 289),
                              *(_QWORD *)(v48 + 281),
                              *(unsigned int *)(v48 + 273),
                              v48 + 745);
                      *(_QWORD *)(v48 + 157) = v15;
                      v50 = v51;
                    }
                    if ( v50 != 0x4FA7164419D1372BLL )
                      break;
                    v16 = v52(a1, a2, v7, *(_QWORD *)(v48 + 281));
                    *(_QWORD *)(v48 + 157) = v16;
                    v50 = v51;
                  }
                  if ( v50 != 0x4C834EA45A5D993CLL )
                    break;
                  *(_QWORD *)(v48 + 157) = ((unsigned int (*)(void))v52)();
                  v50 = v51;
                }
                if ( v50 != 0x91160D08D4A2C5LL )
                  break;
                v83 = 72;
                v17 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v52)(
                        a1,
                        a2,
                        *(unsigned int *)(v48 + 481),
                        *(_QWORD *)(v48 + 305),
                        *(_QWORD *)(v48 + 289));
                *(_QWORD *)(v48 + 157) = v17;
                v50 = v51;
              }
              if ( v50 != 0x53834EA41A552AFBLL )
                break;
              v18 = v52(a1, a2, v48 + 787, *(unsigned __int16 *)(v48 + 537));
              *(_QWORD *)(v48 + 157) = v18;
              v50 = v51;
            }
            if ( v50 != 0x4C835002F66D993CLL )
              break;
LABEL_65:
            *(_QWORD *)(v48 + 157) = ((int (*)(void))v52)();
            v50 = v51;
          }
          if ( v50 != 0x29CF872E2D4LL )
            break;
          v84 = 312;
          v19 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v52)(
                  a1,
                  a2,
                  *(unsigned int *)(v48 + 449),
                  *(unsigned int *)(v48 + 545),
                  *(unsigned int *)(v48 + 457));
          *(_QWORD *)(v48 + 157) = v19;
          v50 = v51;
        }
        if ( v50 != 0x499D16A5F8312252LL )
          break;
        v20 = v52(a1, a2, v7, *(_QWORD *)(v48 + 321));
        *(_QWORD *)(v48 + 157) = v20;
        v50 = v51;
      }
      if ( v50 == 0x48A93E753LL )
      {
LABEL_71:
        v21 = v52(a1, a2, v7, *(unsigned __int16 *)(v48 + 329));
        *(_QWORD *)(v48 + 157) = v21;
        v50 = v51;
      }
      else if ( v50 == 0x10E7CE9D161D4LL )
      {
        v22 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))v52)(
                a1,
                a2,
                v48 + 1259,
                *(_QWORD *)(v48 + 313),
                16);
        *(_QWORD *)(v48 + 157) = v22;
        v50 = v51;
      }
      else if ( v50 == 0x4FA7169CF872F3BALL )
      {
        v23 = v52(a1, a2, v7, *(_QWORD *)(v48 + 313));
        *(_QWORD *)(v48 + 157) = v23;
        v50 = v51;
      }
      else
      {
        if ( v50 == 0x53830E645833AAFBLL )
          goto LABEL_65;
        if ( v50 == 0x55A9A5AB8C6D5629LL )
        {
          v24 = v52(a1, a2, v48 + 749, *(_QWORD *)(v48 + 425));
          *(_QWORD *)(v48 + 157) = v24;
          v50 = v51;
        }
        else if ( v50 == 0x55A71694E83C542BLL )
        {
          v25 = v52(a1, a2, v48 + 753, *(_QWORD *)(v48 + 433));
          *(_QWORD *)(v48 + 157) = v25;
          v50 = v51;
        }
        else if ( v50 == 0x508B3A5C605A1E28LL )
        {
          v85 = 368;
          v26 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v52)(
                  a1,
                  a2,
                  *(_QWORD *)(v48 + 441),
                  *(_QWORD *)(v48 + 601),
                  *(unsigned int *)(v48 + 481),
                  *(unsigned int *)(v48 + 609));
          *(_QWORD *)(v48 + 157) = v26;
          v50 = v51;
        }
        else if ( v50 == 0x59ADAB7B95CC1DAALL )
        {
          v86 = 208;
          v27 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v52)(
                  a1,
                  a2,
                  *(_QWORD *)(v48 + 441),
                  *(_QWORD *)(v48 + 761),
                  *(_QWORD *)(v48 + 473),
                  *(_QWORD *)(v48 + 473));
          *(_QWORD *)(v48 + 157) = v27;
          v50 = v51;
        }
        else if ( v50 == 0x4787327D38B2F77BLL )
        {
          v28 = v52(a1, a2, v7, *(_QWORD *)(v48 + 761));
          *(_QWORD *)(v48 + 157) = v28;
          v50 = v51;
        }
        else
        {
          if ( v50 == 0x43970E7F962FB058LL )
            goto LABEL_51;
          if ( v50 == 0xA5161D6
            || v50 == 0xA716744 )
          {
            v29 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v52)(
                    a1,
                    a2,
                    *(_QWORD *)(v48 + 377),
                    *(_QWORD *)(v48 + 313),
                    *(unsigned int *)(v48 + 369),
                    *(unsigned int *)(v48 + 481));
            *(_QWORD *)(v48 + 157) = v29;
            v50 = v51;
          }
          else if ( v50 == 0x54AB0664199DFA2CLL )
          {
            v30 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v52)(
                    a1,
                    a2,
                    *(_QWORD *)(v48 + 273),
                    *(_QWORD *)(v48 + 409),
                    *(unsigned int *)(v48 + 449),
                    *(unsigned int *)(v48 + 457));
            *(_QWORD *)(v48 + 157) = v30;
            v50 = v51;
          }
          else if ( v50 == 0x52A9560CC8D4B869LL )
          {
            v87 = 176;
            v31 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v52)(
                    a1,
                    a2,
                    *(_QWORD *)(v48 + 273),
                    *(_QWORD *)(v48 + 409),
                    *(unsigned int *)(v48 + 449));
            *(_QWORD *)(v48 + 157) = v31;
            v50 = v51;
          }
          else if ( v50 == 0x41994297AF2BB6FELL )
          {
            v32 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64))v52)(
                    a1,
                    a2,
                    *(_QWORD *)(v48 + 273),
                    *(_QWORD *)(v48 + 409),
                    *(unsigned int *)(v48 + 617),
                    v48 + 781);
            *(_QWORD *)(v48 + 157) = v32;
            v50 = v51;
          }
          else if ( v50 == 0x54913E9D49D078A7LL )
          {
            v33 = v52(a1, a2, *(unsigned int *)(v48 + 633), *(_QWORD *)(v48 + 345));
            *(_QWORD *)(v48 + 157) = v33;
            v50 = v51;
          }
          else if ( v50 == 0x548312252933B531LL )
          {
            v34 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))v52)(
                    a1,
                    a2,
                    *(_QWORD *)(v48 + 473),
                    *(_QWORD *)(v48 + 345),
                    v48 + 1195,
                    v48 + 769);
            *(_QWORD *)(v48 + 157) = v34;
            v50 = v51;
          }
          else if ( v50 == 0x45831225293C77F1LL )
          {
            v52(a1, a2, v7, *(_QWORD *)(v48 + 769));
            v50 = v51;
          }
          else if ( v50 == 0x8526744 )
          {
            v35 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))v52)(
                    a1,
                    a2,
                    v48 + 1243,
                    *(_QWORD *)(v48 + 313),
                    16);
            *(_QWORD *)(v48 + 157) = v35;
            v50 = v51;
          }
          else if ( v50 == 0x499D16A5F9D527D0LL )
          {
            v36 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))v52)(
                    a1,
                    a2,
                    v48 + 1247,
                    *(unsigned int *)(v48 + 545),
                    *(_QWORD *)(v48 + 361),
                    *(_QWORD *)(v48 + 641));
            *(_QWORD *)(v48 + 157) = v36;
            v50 = v51;
          }
          else if ( v50 == 0xAF4E0C99F0EA4CLL )
          {
            v88 = v48 + 1275;
            a1 = v48;
            v37 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))v52)(
                    v48,
                    a2,
                    *(unsigned int *)(v48 + 585),
                    *(_QWORD *)(v48 + 313),
                    v48 + 1275,
                    4);
            *(_QWORD *)(v48 + 157) = v37;
            v50 = v51;
          }
          else
          {
            if ( v50 == 0x4EA93E453LL )
              goto LABEL_71;
            if ( v50 == 0x4584B64F28FF5207LL )
            {
              a1 = v48;
              v38 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))v52)(
                      v48,
                      a2,
                      *(_QWORD *)(v48 + 665),
                      v48 + 649,
                      *(_QWORD *)(v48 + 473),
                      *(unsigned int *)(v48 + 481));
              *(_QWORD *)(v48 + 157) = v38;
              v50 = v51;
            }
            else if ( v50 == 0x528B8BB2EEAA7EE9LL )
            {
              a1 = 240;
              v89 = v48 + 657;
              v90 = 416;
              v39 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))v52)(
                      240,
                      a2,
                      v48 + 657,
                      *(_QWORD *)(v48 + 649),
                      *(_QWORD *)(v48 + 473),
                      *(unsigned int *)(v48 + 481));
              *(_QWORD *)(v48 + 157) = v39;
              v50 = v51;
            }
            else if ( v50 == 0x5491069E9CCAC0A9LL )
            {
              a1 = v48;
              v40 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v52)(
                      v48,
                      a2,
                      *(_QWORD *)(v48 + 673),
                      *(_QWORD *)(v48 + 657),
                      *(unsigned int *)(v48 + 681),
                      *(unsigned int *)(v48 + 481));
              *(_QWORD *)(v48 + 157) = v40;
              v50 = v51;
            }
            else if ( v50 == 0x499DABAB1EAA7EEBLL )
            {
              a1 = v48;
              v41 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v52)(
                      v48,
                      a2,
                      *(_QWORD *)(v48 + 689),
                      *(_QWORD *)(v48 + 657),
                      *(unsigned int *)(v48 + 697),
                      *(unsigned int *)(v48 + 481));
              *(_QWORD *)(v48 + 157) = v41;
              v50 = v51;
            }
            else if ( v50 == 0x53EBD1C8661AFAEALL )
            {
              v42 = v52(a1, a2, v7, *(_QWORD *)(v48 + 657));
              *(_QWORD *)(v48 + 157) = v42;
              v50 = v51;
            }
            else if ( v50 == 0x14C3D3D387721F3LL )
            {
              v43 = v52(a1, a2, *(unsigned int *)(v48 + 481), *(_QWORD *)(v48 + 649));
              *(_QWORD *)(v48 + 157) = v43;
              v50 = v51;
            }
            else if ( v50 == 0x5399162D0LL )
            {
              v52(a1, a2, v7, *(unsigned int *)(v48 + 625));
              v50 = v51;
            }
          }
        }
      }
    }
  }
  return result;
}


// ---- fdaa
__int64 __fastcall sub_FDAA(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int i; // [rsp+0h] [rbp-28h]
  unsigned int v6; // [rsp+4h] [rbp-24h]

  v6 = 9271;
  for ( i = 0; i < a3; ++i )
    v6 = *(char *)(a4 + i) + 129 * v6;
  return v6;
}


// ---- fe4e
unsigned __int8 *__fastcall sub_FE4E(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int8 *a4, int *a5)
{
  unsigned __int8 v6; // [rsp+0h] [rbp-18h]
  unsigned __int8 i; // [rsp+1h] [rbp-17h]
  unsigned __int8 v8; // [rsp+2h] [rbp-16h]
  int v9; // [rsp+4h] [rbp-14h]
  unsigned __int8 *v11; // [rsp+20h] [rbp+8h]

  if ( (unsigned __int64)a4 >= a3 )
    return nullptr;
  v6 = *a4;
  v11 = a4 + 1;
  if ( (*a4 & 0x80) != 0 )
  {
    v8 = v6 & 0x7F;
    if ( (v6 & 0x7Fu) > 4 || (unsigned __int64)&v11[v8] > a3 )
      return nullptr;
    v9 = 0;
    for ( i = 0; i < (int)v8; ++i )
      v9 = *v11++ | (v9 << 8);
    *a5 = v9;
  }
  else
  {
    *a5 = v6;
  }
  return v11;
}


// ---- ff3a
unsigned __int8 *__fastcall sub_FF3A(__int64 a1, __int64 a2, int a3, unsigned __int8 *a4, int a5, unsigned int *a6)
{
  unsigned __int8 *v7; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v8; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v9; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v10; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v11; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v12; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v13; // [rsp+20h] [rbp-48h]
  unsigned int v14; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+2Ch] [rbp-3Ch] BYREF
  unsigned int v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int i; // [rsp+34h] [rbp-34h]
  int v18; // [rsp+38h] [rbp-30h]
  unsigned int v19; // [rsp+3Ch] [rbp-2Ch] BYREF
  unsigned __int8 *v20; // [rsp+40h] [rbp-28h]
  unsigned __int8 *v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+50h] [rbp-18h]
  int v23; // [rsp+54h] [rbp-14h]
  int v24; // [rsp+58h] [rbp-10h]
  int v25; // [rsp+5Ch] [rbp-Ch]

  v20 = &a4[a3];
  if ( a4 >= v20 )
    return nullptr;
  v22 = *a4;
  if ( v22 != 48 )
    return nullptr;
  v14 = 0;
  v7 = sub_FE4E(a1, a2, (unsigned __int64)v20, a4 + 1, (int *)&v14);
  if ( !v7 || &v7[v14] > v20 )
    return nullptr;
  v20 = &v7[v14];
  while ( v7 < v20 )
  {
    v23 = *v7;
    v8 = v7 + 1;
    if ( v23 != 48 )
      return nullptr;
    v15 = 0;
    v9 = sub_FE4E(a1, a2, (unsigned __int64)v20, v8, (int *)&v15);
    if ( !v9 || &v9[v15] > v20 )
      return nullptr;
    v21 = &v9[v15];
    v24 = *v9;
    v10 = v9 + 1;
    if ( v24 != 2 )
      return nullptr;
    v16 = 0;
    v11 = sub_FE4E(a1, a2, (unsigned __int64)v21, v10, (int *)&v16);
    if ( !v11 || &v11[v16] > v21 )
      return nullptr;
    v18 = 0;
    for ( i = 0; i < v16; ++i )
      v18 = *v11++ | (v18 << 8);
    v25 = *v11;
    v12 = v11 + 1;
    if ( v25 != 4 )
      return nullptr;
    v19 = 0;
    v13 = sub_FE4E(a1, a2, (unsigned __int64)v21, v12, (int *)&v19);
    if ( !v13 || &v13[v19] > v21 )
      return nullptr;
    if ( v18 == a5 )
    {
      *a6 = v19;
      return v13;
    }
    v7 = v21;
  }
  return nullptr;
}


// ---- 101e6
unsigned int *__fastcall sub_101E6(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12)
{
  int v12; // r9d
  unsigned int v13; // edx
  int v14; // r8d
  __int64 v16; // [rsp+0h] [rbp-58h]
  unsigned int v17; // [rsp+20h] [rbp-38h]
  unsigned int v18; // [rsp+20h] [rbp-38h]
  unsigned int v19; // [rsp+24h] [rbp-34h]
  unsigned int i; // [rsp+28h] [rbp-30h]
  unsigned int v21; // [rsp+2Ch] [rbp-2Ch]
  __int64 v22; // [rsp+34h] [rbp-24h] BYREF
  int v23; // [rsp+3Ch] [rbp-1Ch]
  _QWORD v24[3]; // [rsp+40h] [rbp-18h] BYREF

  v23 = 0;
  v22 = (unsigned int)sub_FDAA(a1, a2, a12, a11);
  v24[0] = &v22;
  v24[1] = (char *)&v22 + 4;
  v17 = 0;
  v19 = 0;
  while ( v17 < a3 )
  {
    *(_BYTE *)(a5 + v19++) = *(_BYTE *)(a4 + v17);
    v18 = v17 + 1;
    v13 = (unsigned int)sub_102F2(a1, a2, a5, (unsigned int)v24, a4, v12, v16) % 3;
    v21 = v13 + 1;
    for ( i = 0; i < v21; ++i )
      sub_102F2(a1, a2, v13, (unsigned int)v24, v14, v12, v16);
    v17 = v21 + v18;
  }
  *a6 = v19;
  return a6;
}


// ---- 102f2
__int64 __fastcall sub_102F2(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  *(_DWORD *)*a4 = ((*a4[1] - 565453543) ^ 0xDE4BED20) + ((*a4[1] - 1618107571) ^ 0xDE4BED20) * *(_DWORD *)*a4;
  return *(unsigned int *)*a4;
}


// ---- 1036a
__int64 __fastcall sub_1036A(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 result; // rax
  unsigned int j; // [rsp+0h] [rbp-28h]
  unsigned int i; // [rsp+4h] [rbp-24h]
  int v9; // [rsp+8h] [rbp-20h]
  int v10; // [rsp+Ch] [rbp-1Ch]

  v9 = 0;
  for ( i = 0; i < a3; ++i )
    v9 = *(unsigned __int8 *)(a4 + i) + 31 * v9;
  v10 = v9;
  for ( j = 0; ; ++j )
  {
    result = a6;
    if ( j >= a6 )
      break;
    v10 = 1103515245 * v10 + 12345;
    *(_BYTE *)(a5 + j) ^= v10;
  }
  return result;
}


// ---- 104b2
__int64 __fastcall sub_104B2(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 result; // rax
  int v7; // r9d
  __int64 v8; // [rsp+20h] [rbp-138h] BYREF
  __int64 v9; // [rsp+28h] [rbp-130h]
  _WORD v10[4]; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-120h]
  __int64 v12; // [rsp+40h] [rbp-118h]
  _DWORD v13[66]; // [rsp+50h] [rbp-108h] BYREF

  v8 = 0;
  v12 = 0;
  result = sub_9F6E(a1, a2, 0, &v8, a5, a6);
  if ( v8 )
  {
    v9 = a5;
    if ( a5 > 0x80uLL )
      v9 = 128;
    sub_11876(a1, a2, a3, (int)v13, v9, v7);
    *(_DWORD *)((char *)v13 + v9) = a4;
    v11 = v9 + 4;
    v10[0] = 77;
    v10[1] = 68;
    v10[2] = 53;
    v10[3] = 0;
    *(_QWORD *)(v8 + 665) = v10;
    *(_QWORD *)(v8 + 673) = v13;
    *(_QWORD *)(v8 + 681) = v11;
    *(_QWORD *)(v8 + 689) = a6;
    *(_QWORD *)(v8 + 697) = 16;
    *(_QWORD *)(v8 + 465) = 0x4584B64F28FF5207LL;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v8 + 169))(a1, a2, 0x4584B64F28FF5207LL, 0);
    *(_QWORD *)(v8 + 465) = 0x528B8BB2EEAA7EE9LL;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v8 + 169))(a1, a2, 0x528B8BB2EEAA7EE9LL, 0);
    *(_QWORD *)(v8 + 465) = 0x5491069E9CCAC0A9LL;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v8 + 169))(a1, a2, 0x5491069E9CCAC0A9LL, 0);
    *(_QWORD *)(v8 + 465) = 0x499DABAB1EAA7EEBLL;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v8 + 169))(a1, a2, 0x499DABAB1EAA7EEBLL, 0);
    *(_QWORD *)(v8 + 465) = 0x53EBD1C8661AFAEALL;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v8 + 169))(a1, a2, 0x53EBD1C8661AFAEALL, 0);
    *(_QWORD *)(v8 + 465) = 0x14C3D3D387721F3LL;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v8 + 169))(a1, a2, 0x14C3D3D387721F3LL, 0);
    return 0;
  }
  return result;
}


// ---- 1076a
__int64 __fastcall sub_1076A(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4, int a5, int a6)
{
  int v7; // r9d
  __int64 v8; // [rsp+20h] [rbp-288h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-280h]
  int v10; // [rsp+2Ch] [rbp-27Ch]
  __int64 v11; // [rsp+30h] [rbp-278h]
  int *v12; // [rsp+38h] [rbp-270h]
  __int64 v13; // [rsp+40h] [rbp-268h] BYREF
  int v14; // [rsp+48h] [rbp-260h] BYREF
  __int64 v15; // [rsp+50h] [rbp-258h]
  __int64 v16; // [rsp+58h] [rbp-250h]
  __int64 v17; // [rsp+60h] [rbp-248h]
  __int64 v18; // [rsp+68h] [rbp-240h]
  __int64 v19; // [rsp+70h] [rbp-238h]
  __int64 v20; // [rsp+78h] [rbp-230h]
  __int64 v21; // [rsp+80h] [rbp-228h]
  _BYTE v22[536]; // [rsp+90h] [rbp-218h] BYREF

  v9 = 0;
  v8 = 0;
  v20 = 0;
  sub_9F6E(a1, a2, 0, &v8, a5, a6);
  if ( !v8 )
    return 1168;
  v17 = 0;
  v19 = 0;
  v21 = 0;
  memset(&v13, 0, sizeof(v13));
  v10 = 0;
  v11 = -1;
  v15 = 0;
  v12 = nullptr;
  v16 = 0;
  v18 = 0;
  v14 = 0;
  *(_QWORD *)(v8 + 233) = v22;
  *(_QWORD *)(v8 + 465) = 0x6A58DB63647E15F9LL;
  (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0x6A58DB63647E15F9LL, 0);
  if ( !*(_QWORD *)(v8 + 157) )
  {
LABEL_10:
    *(_QWORD *)(v8 + 465) = 0x4C834EA45A5D993CLL;
    (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0x4C834EA45A5D993CLL, 0);
    v9 = *(_DWORD *)(v8 + 157);
    goto LABEL_19;
  }
  *(_QWORD *)(v8 + 465) = 0x4C8BB1238D6D1401LL;
  (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0x4C8BB1238D6D1401LL, 0);
  v18 = *(_QWORD *)(v8 + 157);
  v17 = v18;
  v19 = v18;
  v21 = *(int *)(v18 + 60) + v18;
  v13 = *(_QWORD *)(v21 + 8LL * (((_DWORD)v20 + 248308068) ^ 0xECCE160u) + 136);
  if ( (_DWORD)v13 && HIDWORD(v13) )
  {
    *(_QWORD *)(v8 + 233) = v22;
    *(_QWORD *)(v8 + 465) = 0x4583522C693333C0LL;
    (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0x4583522C693333C0LL, 0);
    v11 = *(_QWORD *)(v8 + 157);
    *(_QWORD *)(v8 + 281) = v11;
    if ( v11 != -1 )
    {
      *(_QWORD *)(v8 + 281) = v11;
      *(_QWORD *)(v8 + 265) = (unsigned int)v13;
      *(_QWORD *)(v8 + 465) = 0x4C8B427F362FB476LL;
      (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0x4C8B427F362FB476LL, 0);
      v14 = *(_DWORD *)(v8 + 157);
      if ( v14 != -1 )
      {
        *(_QWORD *)(v8 + 465) = 0x4F87169F756BF4F9LL;
        (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0x4F87169F756BF4F9LL, 0);
        v15 = *(_QWORD *)(v8 + 157);
        *(_QWORD *)(v8 + 305) = v15;
        *(_QWORD *)(v8 + 305) = v15;
        *(_QWORD *)(v8 + 273) = HIDWORD(v13);
        *(_QWORD *)(v8 + 465) = 0x4F8707EEFDD993F6LL;
        (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0x4F8707EEFDD993F6LL, 0);
        v12 = *(int **)(v8 + 157);
        if ( !v12 )
        {
          v9 = 8;
          goto LABEL_19;
        }
        *(_DWORD *)(v8 + 745) = 0;
        *(_QWORD *)(v8 + 281) = v11;
        *(_QWORD *)(v8 + 289) = v12;
        *(_QWORD *)(v8 + 273) = HIDWORD(v13);
        *(_QWORD *)(v8 + 465) = 0xA5160C48D26645LL;
        (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0xA5160C48D26645LL, 0);
        if ( *(_QWORD *)(v8 + 157) )
        {
          if ( *(_DWORD *)(v8 + 745) >= 8u )
          {
            v10 = *v12;
            *(_QWORD *)(v8 + 305) = v15;
            *(_QWORD *)(v8 + 273) = (unsigned int)(v10 - 8);
            *(_QWORD *)(v8 + 465) = 0x4F8707EEFDD993F6LL;
            (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0x4F8707EEFDD993F6LL, 0);
            v16 = *(_QWORD *)(v8 + 157);
            if ( v16 )
            {
              sub_11876((int)&v14, a2, (_DWORD)v12 + 8, v16, v10 - 8, v7);
              *a4 = v16;
              *a3 = v10 - 8;
            }
            else
            {
              v9 = 8;
            }
          }
          else
          {
            v9 = 13;
          }
          goto LABEL_19;
        }
      }
    }
    goto LABEL_10;
  }
  v9 = 1168;
LABEL_19:
  if ( v11 != -1 )
  {
    *(_QWORD *)(v8 + 281) = v11;
    *(_QWORD *)(v8 + 465) = 0x4FA7164419D1372BLL;
    (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0x4FA7164419D1372BLL, 0);
  }
  if ( v12 )
  {
    *(_QWORD *)(v8 + 305) = v15;
    *(_QWORD *)(v8 + 289) = v12;
    *(_QWORD *)(v8 + 465) = 0x91160D08D4A2C5LL;
    (*(void (__fastcall **)(int *, __int64, __int64, _QWORD))(v8 + 169))(&v14, a2, 0x91160D08D4A2C5LL, 0);
  }
  return v9;
}


// ---- 10f56
__int64 __fastcall sub_10F56(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        unsigned int a11,
        _QWORD *a12,
        _DWORD *a13)
{
  int v13; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  __int64 v18; // [rsp+0h] [rbp-98h]
  __int64 v19; // [rsp+0h] [rbp-98h]
  int v20; // [rsp+8h] [rbp-90h]
  int v21; // [rsp+8h] [rbp-90h]
  __int64 v22; // [rsp+10h] [rbp-88h]
  __int64 v23; // [rsp+18h] [rbp-80h]
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-60h] BYREF
  __int64 v26; // [rsp+40h] [rbp-58h]
  int v27; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-4Ch] BYREF
  __int64 v29; // [rsp+50h] [rbp-48h]
  __int64 v30; // [rsp+58h] [rbp-40h]
  unsigned __int8 *v31; // [rsp+60h] [rbp-38h]
  unsigned __int8 *v32; // [rsp+68h] [rbp-30h]
  __int64 v33; // [rsp+70h] [rbp-28h]
  _BYTE v34[32]; // [rsp+78h] [rbp-20h] BYREF

  v24 = 0;
  v33 = 0;
  sub_9F6E(a1, a2, 0, &v24, a5, a6);
  if ( !v24 )
    return 1168;
  v29 = 0;
  v25 = 0;
  v27 = 0;
  v31 = (unsigned __int8 *)sub_1159E(a1, a2, a5, a3, (unsigned int)&v27, v13);
  if ( !v31 )
    return 1168;
  v32 = sub_FF3A(a1, a2, v27, v31, a4, &v25);
  if ( !v32 )
    return 1168;
  *(_QWORD *)(v24 + 465) = 0x4F87169F756BF4F9LL;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v24 + 169))(a1, a2, 0x4F87169F756BF4F9LL, 0);
  v29 = *(_QWORD *)(v24 + 157);
  *(_QWORD *)(v24 + 305) = v29;
  v26 = 0;
  *(_QWORD *)(v24 + 305) = v29;
  *(_QWORD *)(v24 + 273) = v25;
  *(_QWORD *)(v24 + 465) = 0x4F8707EEFDD993F6LL;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v24 + 169))(a1, a2, 0x4F8707EEFDD993F6LL, 0);
  v26 = *(_QWORD *)(v24 + 157);
  if ( !v26 )
    return 8;
  sub_11876(a1, a2, (int)v32, v26, v25, v15);
  sub_104B2(a1, a2, a6, a4, a11, (__int64)v34);
  sub_1036A(a1, a2, 0x10u, (__int64)v34, v26, v25);
  v30 = 0;
  *(_QWORD *)(v24 + 409) = 0;
  *(_QWORD *)(v24 + 273) = v25;
  *(_QWORD *)(v24 + 449) = 12288;
  *(_QWORD *)(v24 + 457) = 64;
  *(_QWORD *)(v24 + 465) = 0x54AB0664199DFA2CLL;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v24 + 169))(a1, a2, 0x54AB0664199DFA2CLL, 0);
  v30 = *(_QWORD *)(v24 + 157);
  if ( v30 )
  {
    v28 = 0;
    sub_101E6(a1, a2, v25, v26, v30, &v28, v18, v20, v22, v23, a6, a11);
    sub_11722(a1, a2, 0, v26, v25, v17, v19, v21);
    *(_QWORD *)(v24 + 305) = v29;
    *(_QWORD *)(v24 + 289) = v26;
    *(_QWORD *)(v24 + 465) = 0x91160D08D4A2C5LL;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v24 + 169))(a1, a2, 0x91160D08D4A2C5LL, 0);
    *a12 = v30;
    *a13 = v28;
    return 0;
  }
  else
  {
    sub_11722(a1, a2, 0, v26, v25, v16, v18, v20);
    *(_QWORD *)(v24 + 305) = v29;
    *(_QWORD *)(v24 + 289) = v26;
    *(_QWORD *)(v24 + 465) = 0x91160D08D4A2C5LL;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v24 + 169))(a1, a2, 0x91160D08D4A2C5LL, 0);
    return 8;
  }
}


// ---- 113ae
__int64 __fastcall sub_113AE(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        unsigned int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 *a15)
{
  int v16; // r9d
  int v17; // [rsp+0h] [rbp-88h]
  __int64 v18; // [rsp+0h] [rbp-88h]
  __int64 v19; // [rsp+8h] [rbp-80h]
  int v20; // [rsp+8h] [rbp-80h]
  int v21; // [rsp+10h] [rbp-78h]
  __int64 v22; // [rsp+18h] [rbp-70h]
  unsigned int v23; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+48h] [rbp-40h] BYREF
  int v25; // [rsp+50h] [rbp-38h] BYREF
  __int64 (__fastcall *v26)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-30h] BYREF
  int v27; // [rsp+60h] [rbp-28h]
  __int64 v28; // [rsp+68h] [rbp-20h]
  __int64 (__fastcall *v29)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+70h] [rbp-18h]
  __int64 v30; // [rsp+78h] [rbp-10h]

  v24 = 0;
  v28 = 0;
  sub_9F6E(a1, a2, 0, &v24, a5, a6);
  if ( !v24 )
    return 1168;
  v26 = nullptr;
  v25 = 0;
  v23 = sub_10F56(a1, a2, a3, a4, a5, a6, v17, v19, v21, v22, a11, &v26, &v25);
  if ( v23 )
    return v23;
  v29 = v26;
  v30 = v26(a1, a2, a13, a12, a14);
  if ( a15 )
    *a15 = v30;
  sub_11722(a1, a2, 0, (_DWORD)v26, v25, v16, v18, v20);
  v27 = 0;
  *(_QWORD *)(v24 + 409) = v26;
  *(_QWORD *)(v24 + 273) = 0;
  *(_QWORD *)(v24 + 449) = 0x8000;
  *(_QWORD *)(v24 + 465) = 0x52A9560CC8D4B869LL;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v24 + 169))(a1, a2, 0x52A9560CC8D4B869LL, 0);
  return 0;
}


// ---- 1159e
unsigned __int8 *__fastcall sub_1159E(__int64 a1, __int64 a2, int a3, unsigned __int8 *a4, _DWORD *a5, int a6)
{
  __int64 v7; // [rsp+0h] [rbp-58h]
  __int64 v8; // [rsp+8h] [rbp-50h]
  __int64 v9; // [rsp+10h] [rbp-48h]
  int v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+24h] [rbp-34h]
  unsigned __int8 *v12; // [rsp+28h] [rbp-30h]
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 *i; // [rsp+38h] [rbp-20h]
  unsigned __int8 *v15; // [rsp+40h] [rbp-18h]
  unsigned __int8 *v16; // [rsp+48h] [rbp-10h]

  v13[0] = 43;
  v13[1] = 6;
  v13[2] = 1;
  v13[3] = 4;
  v13[4] = 1;
  v13[5] = -118;
  v13[6] = 57;
  v13[7] = 1;
  v12 = a4;
  v15 = &a4[a3];
  v16 = nullptr;
  for ( i = a4; i <= v15 - 8; ++i )
  {
    if ( !(unsigned int)sub_1177E(a1, a2, (unsigned int)v13, (_DWORD)i, 8, a6, v7, v8, v9) )
    {
      v16 = i;
      break;
    }
  }
  if ( !v16 )
    return nullptr;
  v12 = v16 + 8;
  if ( v16 + 8 >= v15 )
    return nullptr;
  if ( *v12 == 1 )
    v12 += 3;
  if ( v12 >= v15 )
    return nullptr;
  v11 = *v12++;
  if ( v11 != 4 )
    return nullptr;
  v10 = 0;
  v12 = sub_FE4E(a1, a2, (unsigned __int64)v15, v12, &v10);
  if ( !v12 || &v12[v10] > v15 )
    return nullptr;
  *a5 = v10;
  return v12;
}


// ---- 11722
_BYTE *__fastcall sub_11722(_DWORD a1, _DWORD a2, char a3, _BYTE *a4, __int64 a5)
{
  _BYTE *i; // [rsp+0h] [rbp-18h]

  for ( i = a4; a5--; ++i )
    *i = a3;
  return a4;
}


// ---- 1177e
__int64 __fastcall sub_1177E(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 *a4, __int64 a5)
{
  while ( a5-- )
  {
    if ( *a4 != *a3 )
      return *a4 - (unsigned int)*a3;
    ++a4;
    ++a3;
  }
  return 0;
}


// ---- 1180e
unsigned __int64 __fastcall sub_1180E(__int64 a1, __int64 a2, unsigned __int64 a3, _BYTE *a4)
{
  unsigned __int64 i; // [rsp+0h] [rbp-18h]
  _BYTE *v7; // [rsp+20h] [rbp+8h]

  v7 = a4;
  if ( !a4 )
    return 0;
  for ( i = 0; i < a3 && *v7; ++i )
    ++v7;
  return i;
}


// ---- 11876
void *__fastcall sub_11876(int a1, int a2, const void *a3, void *a4, unsigned __int64 a5)
{
  qmemcpy(a4, a3, a5);
  return a4;
}


// ---- 118a2
__int64 __fastcall sub_118A2(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // [rsp+0h] [rbp-38h]
  unsigned int i; // [rsp+4h] [rbp-34h]
  _BYTE v7[24]; // [rsp+20h] [rbp-18h]
  unsigned int v10; // [rsp+48h] [rbp+10h]

  v10 = a3;
  v5 = 0;
  if ( a3 )
  {
    while ( v10 )
    {
      v7[v5++] = v10 % 0xA + 48;
      v10 /= 0xAu;
    }
  }
  else
  {
    v7[0] = 48;
    v5 = 1;
  }
  for ( i = 0; i < v5; ++i )
    *(_BYTE *)(a4 + i) = v7[v5 - 1 - i];
  return v5;
}


// ---- 11a7e
__int64 __fastcall sub_11A7E(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-18h]
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v8 = sub_118A2(a1, a2, a4, a6);
  *(_BYTE *)(a6 + v8) = 45;
  v9 = sub_118A2(a1, a2, a3, v8 + 1 + a6) + v8 + 1;
  *(_BYTE *)(a6 + v9++) = 45;
  v6 = sub_118A2(a1, a2, a5, v9 + a6);
  *(_BYTE *)(a6 + v6 + v9) = 0;
  return v6 + v9;
}


// ---- 11bd6
__int64 __fastcall sub_11BD6(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int16 *a4, __int64 a5)
{
  _DWORD *v7; // [rsp+8h] [rbp-10h]

  if ( a4 )
  {
    if ( a3 )
    {
      if ( *a4 == ((a5 - 0x982DD70BC2BD4B3LL) ^ 0xF67D228F43D47100LL) )
      {
        v7 = (_DWORD *)((char *)a4 + *((int *)a4 + 15));
        if ( *v7 == ((a5 + 0x741C6B3314C9C810LL) ^ 0x741C6B3314C98D40LL) )
        {
          *a3 = v7;
          return (unsigned int)((a5 - 440489600) ^ 0xE5BEA980);
        }
        else
        {
          return (unsigned int)((a5 - 1345983477) ^ 0xAFC5EC00);
        }
      }
      else
      {
        return (unsigned int)((a5 - 556740661) ^ 0xDED0CFC0);
      }
    }
    else
    {
      return (unsigned int)((a5 - 1462234601) ^ 0xA8D81240);
    }
  }
  else
  {
    return (unsigned int)((a5 + 1532617399) ^ 0x5B59E2E0);
  }
}


// ---- 11d62
__int64 __fastcall sub_11D62(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 *a4, _QWORD *a5, __int64 a6)
{
  unsigned int v7; // [rsp+20h] [rbp-28h]
  _DWORD *v8; // [rsp+28h] [rbp-20h]
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+68h] [rbp+20h]

  v13 = a6;
  if ( !a4 || a5 )
  {
    v7 = sub_11BD6(a1, a2, v9, a4, a6);
    if ( v7 == ((v13 + 1092127840) ^ 0x41188C60) )
    {
      if ( a3 < *(_DWORD *)(v9[0] + 132LL) )
      {
        v8 = (_DWORD *)(v9[0] + 8LL * a3 + 136);
        if ( v9[0] + 8LL * a3 != -136 && *(_DWORD *)(v9[0] + 8LL * a3 + 140) && *v8 )
        {
          *a5 = (char *)a4 + (unsigned int)*v8;
          return (v13 - 1275600608) ^ 0xB3F7E120;
        }
        else
        {
          return (v13 + 813756624) ^ 0x3080F440u;
        }
      }
      else
      {
        return (v13 - 997230438) ^ 0xC48F7940;
      }
    }
  }
  else
  {
    return ((_DWORD)a6 + 186633911) ^ 0xB1FCEE0u;
  }
  return v7;
}


// ---- 4d712
__int64 nullsub_1()
{
  _BYTE retaddr[16]; // [rsp+0h] [rbp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_QWORD *)retaddr)();
}


// ---- 4d732
__int64 nullsub_2()
{
  _BYTE retaddr[16]; // [rsp+0h] [rbp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_QWORD *)retaddr)();
}


// ---- 4d792
__int64 nullsub_3()
{
  _BYTE retaddr[16]; // [rsp+0h] [rbp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_QWORD *)retaddr)();
}


// ---- 4d7b2
__int64 nullsub_4()
{
  _BYTE retaddr[16]; // [rsp+0h] [rbp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_QWORD *)retaddr)();
}


// ---- 4d7d9
void nullsub_7()
{
  ;
}


// ---- 4d812
__int64 nullsub_5()
{
  _BYTE retaddr[16]; // [rsp+0h] [rbp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_QWORD *)retaddr)();
}


// ---- 4d8cb
__int64 nullsub_8()
{
  _BYTE retaddr[16]; // [rsp+0h] [rbp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_QWORD *)retaddr)();
}


// ---- 4d8f2
void nullsub_6()
{
  ;
}


