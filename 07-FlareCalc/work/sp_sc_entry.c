// add_func=True
__int64 __fastcall sub_6D3A(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // [rsp+0h] [rbp-568h]
  int v15; // [rsp+0h] [rbp-568h]
  int v16; // [rsp+0h] [rbp-568h]
  int v17; // [rsp+0h] [rbp-568h]
  __int64 v18; // [rsp+8h] [rbp-560h]
  __int64 v19; // [rsp+8h] [rbp-560h]
  __int64 v20; // [rsp+8h] [rbp-560h]
  __int64 v21; // [rsp+8h] [rbp-560h]
  int v22; // [rsp+10h] [rbp-558h]
  int v23; // [rsp+10h] [rbp-558h]
  int v24; // [rsp+10h] [rbp-558h]
  int v25; // [rsp+10h] [rbp-558h]
  __int64 v26; // [rsp+18h] [rbp-550h]
  __int64 v27; // [rsp+18h] [rbp-550h]
  __int64 v28; // [rsp+18h] [rbp-550h]
  __int64 v29; // [rsp+18h] [rbp-550h]
  __int64 v30; // [rsp+50h] [rbp-518h] BYREF
  char v31; // [rsp+58h] [rbp-510h] BYREF
  _BYTE v32[7]; // [rsp+59h] [rbp-50Fh] BYREF
  __int64 v33; // [rsp+60h] [rbp-508h]
  unsigned int v34; // [rsp+68h] [rbp-500h]
  int v35; // [rsp+6Ch] [rbp-4FCh] BYREF
  __int64 v36; // [rsp+70h] [rbp-4F8h] BYREF
  unsigned __int8 v37; // [rsp+78h] [rbp-4F0h]
  char v38; // [rsp+79h] [rbp-4EFh]
  char v39; // [rsp+7Ah] [rbp-4EEh] BYREF
  char v40; // [rsp+7Bh] [rbp-4EDh] BYREF
  int v41; // [rsp+7Ch] [rbp-4ECh]
  __int64 v42; // [rsp+80h] [rbp-4E8h]
  int k; // [rsp+88h] [rbp-4E0h]
  int m; // [rsp+8Ch] [rbp-4DCh]
  __int64 v45; // [rsp+90h] [rbp-4D8h]
  __int64 v46; // [rsp+98h] [rbp-4D0h]
  unsigned __int16 v47; // [rsp+A0h] [rbp-4C8h]
  int v48; // [rsp+A4h] [rbp-4C4h]
  __int64 v49; // [rsp+A8h] [rbp-4C0h]
  _BYTE v50[24]; // [rsp+B0h] [rbp-4B8h] BYREF
  unsigned int i; // [rsp+C8h] [rbp-4A0h]
  int v52; // [rsp+CCh] [rbp-49Ch]
  unsigned int v53; // [rsp+D0h] [rbp-498h] BYREF
  _BYTE v54[12]; // [rsp+D4h] [rbp-494h]
  _BYTE v55[16]; // [rsp+E0h] [rbp-488h] BYREF
  _BYTE v56[48]; // [rsp+F0h] [rbp-478h] BYREF
  __int64 v57; // [rsp+120h] [rbp-448h]
  int v58; // [rsp+128h] [rbp-440h]
  int v59; // [rsp+12Ch] [rbp-43Ch]
  int v60; // [rsp+130h] [rbp-438h]
  int v61; // [rsp+134h] [rbp-434h]
  BOOL v62; // [rsp+138h] [rbp-430h]
  __int64 j; // [rsp+140h] [rbp-428h]
  __int64 v64; // [rsp+148h] [rbp-420h] BYREF
  __int64 v65; // [rsp+150h] [rbp-418h] BYREF
  __int64 v66; // [rsp+158h] [rbp-410h] BYREF
  unsigned int v67; // [rsp+160h] [rbp-408h]
  int v68; // [rsp+164h] [rbp-404h]
  int v69; // [rsp+168h] [rbp-400h]
  BOOL v70; // [rsp+16Ch] [rbp-3FCh]
  int v71; // [rsp+170h] [rbp-3F8h]
  int v72; // [rsp+174h] [rbp-3F4h]
  int v73; // [rsp+178h] [rbp-3F0h]
  int v74; // [rsp+17Ch] [rbp-3ECh] BYREF
  unsigned int v75; // [rsp+180h] [rbp-3E8h]
  __int64 v76; // [rsp+188h] [rbp-3E0h] BYREF
  __int64 v77; // [rsp+190h] [rbp-3D8h]
  __int64 (__fastcall *v78)(__int64, __int64, _QWORD, _BYTE *); // [rsp+198h] [rbp-3D0h] BYREF
  void (__fastcall *v79)(__int64, __int64, _QWORD, __int64, _QWORD, __int64 *); // [rsp+1A0h] [rbp-3C8h] BYREF
  int v80; // [rsp+1A8h] [rbp-3C0h]
  unsigned int v81; // [rsp+1ACh] [rbp-3BCh]
  unsigned int v82; // [rsp+1B0h] [rbp-3B8h]
  _BYTE v83[32]; // [rsp+1B8h] [rbp-3B0h] BYREF
  __int64 v84; // [rsp+1D8h] [rbp-390h] BYREF
  __int64 v85; // [rsp+1E0h] [rbp-388h]
  __int64 v86; // [rsp+1E8h] [rbp-380h] BYREF
  __int64 v87; // [rsp+1F0h] [rbp-378h] BYREF
  __int64 v88; // [rsp+1F8h] [rbp-370h] BYREF
  __int64 v89; // [rsp+200h] [rbp-368h]
  __int64 v90; // [rsp+208h] [rbp-360h]
  _BYTE *v91; // [rsp+210h] [rbp-358h]
  _BYTE v92[16]; // [rsp+218h] [rbp-350h] BYREF
  __int64 v93; // [rsp+228h] [rbp-340h] BYREF
  int v94; // [rsp+230h] [rbp-338h]
  __int64 v95; // [rsp+238h] [rbp-330h]
  _BYTE v96[16]; // [rsp+240h] [rbp-328h] BYREF
  _BYTE v97[256]; // [rsp+250h] [rbp-318h] BYREF
  _BYTE v98[16]; // [rsp+350h] [rbp-218h] BYREF
  _BYTE v99[256]; // [rsp+360h] [rbp-208h] BYREF
  _BYTE v100[264]; // [rsp+460h] [rbp-108h] BYREF

  v33 = 0;
  v30 = 0;
  result = sub_97BE(a1, a2, 0, &v30, a5, a6);
  if ( !v30 )
    return result;
  v45 = 0;
  *(_QWORD *)(v30 + 465) = 0x4F87169F756BF4F9LL;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x4F87169F756BF4F9LL, 0);
  v45 = *(_QWORD *)(v30 + 157);
  *(_QWORD *)(v30 + 305) = v45;
  v36 = 0;
  v35 = 0;
  result = sub_1076A(a1, a2, &v35, &v36, v7, v8);
  v48 = result;
  if ( (_DWORD)result )
    return result;
  v81 = a4 >> 0xFFFFFFFFFFFFFF20LL;
  v82 = 0xFFFFFFFFFFFFFFFFLL & a4;
  v67 = 0xFFFFFFFF & a3;
  v34 = sub_11A7E(a1, a2, v82, v81, v67, (__int64)v83);
  result = 0;
  if ( v34 == (_DWORD)result )
  {
    if ( v36 )
    {
      *(_QWORD *)(v30 + 305) = v45;
      *(_QWORD *)(v30 + 289) = v36;
      *(_QWORD *)(v30 + 465) = 0x91160D08D4A2C5LL;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x91160D08D4A2C5LL, 0);
      return 0;
    }
    return result;
  }
  v52 = 0xFFFFFFFF00002437LL;
  v80 = 0xFFFFFFFF00000007LL;
  for ( i = 0; i < v34; ++i )
    v52 += (char)v83[i] + (v52 << v80);
  *(_DWORD *)(v30 + 165) = v52;
  v86 = 1;
  result = sub_113AE(
             a1,
             a2,
             v36,
             0xEEE,
             v35,
             (__int64)v83,
             v14,
             v18,
             v22,
             v26,
             v34,
             v30,
             0,
             0,
             &v86);
  v41 = result;
  if ( (_DWORD)result || v86 )
  {
    if ( v36 )
    {
      *(_QWORD *)(v30 + 305) = v45;
      *(_QWORD *)(v30 + 289) = v36;
      *(_QWORD *)(v30 + 465) = 0x91160D08D4A2C5LL;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x91160D08D4A2C5LL, 0);
      return 0;
    }
    return result;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, __int64))(v30 + 177))(a1, a2, 0, v97, 256);
  *(_QWORD *)(v30 + 345) = v97;
  *(_QWORD *)(v30 + 345) = v97;
  *(_QWORD *)(v30 + 465) = 0x54913E9D49D078A7LL;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x54913E9D49D078A7LL, 0);
  *(_QWORD *)(v30 + 157) = *(int *)(v30 + 157);
  result = v30;
  if ( *(_QWORD *)(v30 + 157) == -1 )
  {
    if ( v36 )
    {
      *(_QWORD *)(v30 + 305) = v45;
      *(_QWORD *)(v30 + 289) = v36;
      *(_QWORD *)(v30 + 465) = 0x91160D08D4A2C5LL;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x91160D08D4A2C5LL, 0);
      return 0;
    }
    return result;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(v30 + 177))(a1, a2, 0, v30 + 1195, 48);
  *(_DWORD *)(v30 + 1199) = 2;
  *(_DWORD *)(v30 + 1203) = 3;
  *(_QWORD *)(v30 + 345) = v97;
  *(_QWORD *)(v30 + 465) = 0x548312252933B531LL;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x548312252933B531LL, 0);
  *(_QWORD *)(v30 + 157) = *(int *)(v30 + 157);
  result = v30;
  if ( *(_QWORD *)(v30 + 157) )
  {
    if ( v36 )
    {
      *(_QWORD *)(v30 + 305) = v45;
      *(_QWORD *)(v30 + 289) = v36;
      *(_QWORD *)(v30 + 465) = 0x91160D08D4A2C5LL;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x91160D08D4A2C5LL, 0);
      return 0;
    }
    return result;
  }
  v37 = 0;
  for ( j = *(_QWORD *)(v30 + 769); j; j = *(_QWORD *)(j + 40) )
  {
    if ( *(_DWORD *)(j + 4) == 2 )
    {
      *(_OWORD *)(v30 + 1243) = *(_OWORD *)*(_QWORD *)(j + 32);
      v37 = 1;
      break;
    }
  }
  *(_QWORD *)(v30 + 465) = 0x45831225293C77F1LL;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x45831225293C77F1LL, 0);
  result = v37;
  if ( v37 )
  {
    while ( 1 )
    {
      v46 = -1;
      *(_QWORD *)(v30 + 449) = *(_QWORD *)(v30 + 569);
      *(_QWORD *)(v30 + 457) = *(_QWORD *)(v30 + 577);
      *(_QWORD *)(v30 + 465) = 0x29CF872E2D4LL;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x29CF872E2D4LL, 0);
      v46 = *(_QWORD *)(v30 + 157);
      *(_QWORD *)(v30 + 313) = v46;
      if ( v46 == -1 )
        goto LABEL_53;
      *(_WORD *)(v30 + 1245) = 0;
      *(_QWORD *)(v30 + 313) = v46;
      v58 = 0;
      v9 = v46;
      *(_QWORD *)(v30 + 313) = v46;
      *(_QWORD *)(v30 + 465) = 139618116;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, v9, 0);
      v58 = *(_DWORD *)(v30 + 157);
      if ( v58 == -1 )
        goto LABEL_37;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, __int64))(v30 + 177))(a1, a2, 0, v96, 16);
      *(_QWORD *)(v30 + 361) = v96;
      v89 = 0;
      *(_QWORD *)(v30 + 465) = 0x499D16A5F9D527D0LL;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x499D16A5F9D527D0LL, 0);
      v89 = *(_QWORD *)(v30 + 157);
      *(_DWORD *)(v30 + 1275) = *(_DWORD *)(v30 + 593);
      v59 = 0;
      *(_QWORD *)(v30 + 313) = v46;
      *(_QWORD *)(v30 + 313) = v46;
      *(_QWORD *)(v30 + 465) = 0xAF4E0C99F0EA4CLL;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0xAF4E0C99F0EA4CLL, 0);
      v59 = *(_DWORD *)(v30 + 157);
      if ( v59 == -1
        || (v75 = 0x10000,
            v57 = 0,
            *(_QWORD *)(v30 + 305) = v45,
            *(_QWORD *)(v30 + 273) = v75,
            *(_QWORD *)(v30 + 465) = 0x4F8707EEFDD993F6LL,
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x4F8707EEFDD993F6LL, 0),
            (v57 = *(_QWORD *)(v30 + 157)) == 0) )
      {
LABEL_37:
        *(_QWORD *)(v30 + 313) = v46;
        *(_QWORD *)(v30 + 465) = 0x4FA7169CF872F3BALL;
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x4FA7169CF872F3BALL, 0);
        *(_QWORD *)(v30 + 465) = 0x5399162D0LL;
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x5399162D0LL, 0);
      }
      else
      {
        v60 = 0;
        v47 = 0;
        v38 = 0;
        while ( 1 )
        {
          v76 = 0;
          v41 = sub_113AE(
                  a1,
                  a2,
                  v36,
                  0xFFFFFFFF00000EEFLL,
                  v35,
                  (__int64)v83,
                  v15,
                  v19,
                  v23,
                  v27,
                  v34,
                  v30,
                  v46,
                  v57,
                  &v76);
          if ( v41 )
            goto LABEL_45;
          if ( (int)v76 > 0 )
          {
            v66 = 0;
            v41 = sub_113AE(
                    a1,
                    a2,
                    v36,
                    0xEF0,
                    v35,
                    (__int64)v83,
                    v15,
                    v19,
                    v23,
                    v27,
                    v34,
                    v30,
                    v57,
                    v76,
                    &v66);
            if ( !v41 )
            {
              if ( v66 )
                break;
            }
          }
        }
        v60 = HIDWORD(v66);
        v47 = v66;
        v38 = 1;
LABEL_45:
        if ( v57 )
        {
          *(_QWORD *)(v30 + 305) = v45;
          *(_QWORD *)(v30 + 289) = v57;
          *(_QWORD *)(v30 + 465) = 0x91160D08D4A2C5LL;
          (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x91160D08D4A2C5LL, 0);
        }
        *(_QWORD *)(v30 + 313) = v46;
        *(_QWORD *)(v30 + 465) = 0x4FA7169CF872F3BALL;
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x4FA7169CF872F3BALL, 0);
        if ( !v38 )
          goto LABEL_53;
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, __int64))(v30 + 177))(a1, a2, 0, v92, 16);
        v74 = v60;
        *(_QWORD *)(v30 + 353) = &v74;
        *(_QWORD *)(v30 + 361) = v92;
        v90 = 0;
        *(_QWORD *)(v30 + 465) = 0x499D16A5F9D527D0LL;
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x499D16A5F9D527D0LL, 0);
        v90 = *(_QWORD *)(v30 + 157);
        v87 = 1;
        v41 = sub_113AE(
                a1,
                a2,
                v36,
                0xFFFFFFFF00000EF1LL,
                v35,
                (__int64)v83,
                v15,
                v19,
                v23,
                v27,
                v34,
                v30,
                (__int64)v92,
                v47,
                &v87);
        if ( v41
          || v87
          || (v42 = -1,
              *(_QWORD *)(v30 + 449) = *(_QWORD *)(v30 + 553),
              *(_QWORD *)(v30 + 457) = *(_QWORD *)(v30 + 561),
              *(_QWORD *)(v30 + 465) = 0x29CF872E2D4LL,
              (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x29CF872E2D4LL, 0),
              v42 = *(_QWORD *)(v30 + 157),
              *(_QWORD *)(v30 + 313) = v42,
              v42 == -1) )
        {
LABEL_53:
          *(_QWORD *)(v30 + 465) = 0x5399162D0LL;
          (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x5399162D0LL, 0);
        }
        else
        {
          v88 = 1;
          v41 = sub_113AE(
                  a1,
                  a2,
                  v36,
                  0xEF2,
                  v35,
                  (__int64)v83,
                  v15,
                  v19,
                  v23,
                  v27,
                  v34,
                  v30,
                  v42,
                  0,
                  &v88);
          if ( v41 || v88 )
          {
            *(_QWORD *)(v30 + 313) = v42;
            *(_QWORD *)(v30 + 465) = 0x4FA7169CF872F3BALL;
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x4FA7169CF872F3BALL, 0);
            *(_QWORD *)(v30 + 465) = 0x5399162D0LL;
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x5399162D0LL, 0);
          }
          else
          {
            v31 = 0;
            while ( 1 )
            {
              *(_QWORD *)(v30 + 313) = v42;
              *(_QWORD *)(v30 + 377) = &v31;
              *(_QWORD *)(v30 + 369) = 1;
              *(_QWORD *)(v30 + 313) = v42;
              *(_QWORD *)(v30 + 377) = &v31;
              *(_QWORD *)(v30 + 369) = 1;
              *(_QWORD *)(v30 + 465) = 173105622;
              (*(void (__fastcall **)(__int64, __int64, char *, _QWORD))(v30 + 169))(a1, a2, &v31, 0);
              *(_QWORD *)(v30 + 157) = *(int *)(v30 + 157);
              v73 = *(_DWORD *)(v30 + 157);
              if ( v73 <= 0 )
                break;
              switch ( v31 )
              {
                case 1:
                  (*(void (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, __int64))(v30 + 177))(a1, a2, 0, v98, 528);
                  sub_113AE(
                    a1,
                    a2,
                    v36,
                    0xEF3,
                    v35,
                    (__int64)v83,
                    v15,
                    v19,
                    v23,
                    v27,
                    v34,
                    v30,
                    (__int64)v100,
                    256,
                    nullptr);
                  sub_113AE(
                    a1,
                    a2,
                    v36,
                    0xFFFFFFFF00000EF4LL,
                    v35,
                    (__int64)v83,
                    v16,
                    v20,
                    v24,
                    v28,
                    v34,
                    v30,
                    (__int64)v98,
                    (__int64)v99,
                    nullptr);
                  sub_113AE(
                    a1,
                    a2,
                    v36,
                    0xFFFFFFFF00000EF5LL,
                    v35,
                    (__int64)v83,
                    v17,
                    v21,
                    v25,
                    v29,
                    v34,
                    v30,
                    v42,
                    (__int64)v98,
                    nullptr);
                  break;
                case 16:
                  *(_DWORD *)(v30 + 73) = 0xCB7A;
                  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(v30 + 177))(
                    a1,
                    a2,
                    0,
                    v30 + 41,
                    32);
                  v39 = 0;
                  *(_QWORD *)(v30 + 313) = v42;
                  *(_QWORD *)(v30 + 377) = &v39;
                  *(_QWORD *)(v30 + 369) = 1;
                  v72 = 0;
                  *(_QWORD *)(v30 + 313) = v42;
                  *(_QWORD *)(v30 + 377) = &v39;
                  *(_QWORD *)(v30 + 369) = 1;
                  *(_QWORD *)(v30 + 465) = 175204164;
                  (*(void (__fastcall **)(__int64, __int64, char *, _QWORD))(v30 + 169))(a1, a2, &v39, 0);
                  v72 = *(_DWORD *)(v30 + 157);
                  break;
                case 51:
                  v32[0] = 0;
                  *(_QWORD *)(v30 + 313) = v42;
                  *(_QWORD *)(v30 + 377) = v32;
                  *(_QWORD *)(v30 + 369) = 1;
                  *(_QWORD *)(v30 + 313) = v42;
                  *(_QWORD *)(v30 + 377) = v32;
                  *(_QWORD *)(v30 + 369) = 1;
                  *(_QWORD *)(v30 + 465) = 173105622;
                  (*(void (__fastcall **)(__int64, __int64, _BYTE *, _QWORD))(v30 + 169))(a1, a2, v32, 0);
                  *(_QWORD *)(v30 + 157) = *(int *)(v30 + 157);
                  if ( *(int *)(v30 + 157) <= 0 )
                    goto LABEL_91;
                  if ( !*(_DWORD *)(v30 + 73) )
                    *(_DWORD *)(v30 + 73) = 0xFFFFFFFF0000CB7ALL;
                  v84 = 0;
                  v41 = sub_113AE(
                          a1,
                          a2,
                          v36,
                          *(_DWORD *)(v30 + 73),
                          v35,
                          (__int64)v83,
                          v15,
                          v19,
                          v23,
                          v27,
                          v34,
                          v32[0],
                          v30 + 41,
                          0,
                          &v84);
                  if ( !v41 )
                    *(_DWORD *)(v30 + 73) = v84;
                  if ( *(_DWORD *)(v30 + 73) == 0x1185 )
                  {
                    v65 = 0;
                    v53 = 0;
                    v48 = sub_10F56(
                            a1,
                            a2,
                            v36,
                            0xFFFFFFFF00002706LL,
                            v35,
                            (__int64)v83,
                            v15,
                            v19,
                            v23,
                            v27,
                            v34,
                            &v65,
                            &v53);
                    if ( !v48 )
                    {
                      v49 = 0;
                      *(_QWORD *)(v30 + 305) = v45;
                      *(_QWORD *)(v30 + 273) = v53 + 1;
                      *(_QWORD *)(v30 + 465) = 0x4F8707EEFDD993F6LL;
                      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(
                        a1,
                        a2,
                        0x4F8707EEFDD993F6LL,
                        0);
                      v49 = *(_QWORD *)(v30 + 157);
                      if ( v49 )
                      {
                        v64 = 0;
                        v48 = sub_113AE(
                                a1,
                                a2,
                                v36,
                                0xFFFFFFFF00001185LL,
                                v35,
                                (__int64)v83,
                                v15,
                                v19,
                                v23,
                                v27,
                                v34,
                                v49,
                                v65,
                                v30 + 41,
                                &v64);
                        if ( !v48 )
                        {
                          *(_BYTE *)(v64 + v49) = 0;
                          v78 = nullptr;
                          v79 = nullptr;
                          v77 = sub_D68A(a1, a2, v33, 0x29DC8C22998690B9LL);
                          if ( v77 )
                          {
                            sub_D7EA(a1, a2, 0xFFFFFFFFE893FD7BLL, v77, (__int64)&v78, v33);
                            sub_D7EA(a1, a2, 0xFFFFFFFF383C543ELL, v77, (__int64)&v79, v33);
                          }
                          if ( v78 )
                          {
                            if ( v79 )
                            {
                              v54[0] = 0;
                              v54[1] = -119;
                              v54[2] = 120;
                              v54[3] = 3;
                              v54[4] = 45;
                              v54[5] = -81;
                              v56[0] = 70;
                              v56[1] = -119;
                              v56[2] = 20;
                              v56[3] = 3;
                              v56[4] = 76;
                              v56[5] = -81;
                              v56[6] = 114;
                              v56[7] = -119;
                              v56[8] = 29;
                              v56[9] = 3;
                              v56[10] = 0;
                              v56[11] = -81;
                              v56[12] = 79;
                              v56[13] = -119;
                              v56[14] = 22;
                              v56[15] = 3;
                              v56[16] = 110;
                              v56[17] = -81;
                              v56[18] = 97;
                              v56[19] = -119;
                              v56[20] = 20;
                              v56[21] = 3;
                              v56[22] = 78;
                              v56[23] = -81;
                              v56[24] = 117;
                              v56[25] = -119;
                              v56[26] = 20;
                              v56[27] = 3;
                              v56[28] = 76;
                              v56[29] = -81;
                              v56[30] = 116;
                              v56[31] = -119;
                              v56[32] = 23;
                              v56[33] = 3;
                              v56[34] = 95;
                              v56[35] = -81;
                              v56[36] = 67;
                              v56[37] = -119;
                              v56[38] = 20;
                              v56[39] = 3;
                              v56[40] = 76;
                              v56[41] = -81;
                              v56[42] = 115;
                              v56[43] = -119;
                              v56[44] = 11;
                              v56[45] = 3;
                              v56[46] = 45;
                              v56[47] = -81;
                              v91 = v56;
                              for ( k = 0; (unsigned __int64)k < 0x30; ++k )
                              {
                                v71 = (unsigned __int8)v56[k];
                                v56[k] = v54[k % 6uLL] ^ v71;
                              }
                              v85 = v78(a1, a2, 0, v91);
                              if ( v85 )
                              {
                                v93 = 0xC3F12A8B;
                                v94 = v64 + 1;
                                v95 = v49;
                                v79(a1, a2, 0x4A, v85, 0, &v93);
                              }
                            }
                          }
                          *(_QWORD *)(v30 + 313) = v42;
                          *(_QWORD *)(v30 + 377) = v49;
                          *(_QWORD *)(v30 + 369) = (unsigned int)v64;
                          v61 = 0;
                          *(_QWORD *)(v30 + 313) = v42;
                          *(_QWORD *)(v30 + 377) = v49;
                          v10 = v30;
                          *(_QWORD *)(v30 + 369) = (unsigned int)v64;
                          *(_QWORD *)(v30 + 465) = 175204164;
                          (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, v10, 0);
                          v61 = *(_DWORD *)(v30 + 157);
                          v40 = 10;
                          *(_QWORD *)(v30 + 313) = v42;
                          *(_QWORD *)(v30 + 377) = &v40;
                          *(_QWORD *)(v30 + 369) = 1;
                          *(_QWORD *)(v30 + 313) = v42;
                          *(_QWORD *)(v30 + 377) = &v40;
                          *(_QWORD *)(v30 + 369) = 1;
                          *(_QWORD *)(v30 + 465) = 175204164;
                          (*(void (__fastcall **)(__int64, __int64, char *, _QWORD))(v30 + 169))(a1, a2, &v40, 0);
                          v61 = *(_DWORD *)(v30 + 157);
                        }
                        (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(v30 + 177))(
                          a1,
                          a2,
                          0,
                          v49,
                          v53 + 1);
                        *(_QWORD *)(v30 + 289) = v49;
                        *(_QWORD *)(v30 + 305) = v45;
                        *(_QWORD *)(v30 + 289) = v49;
                        *(_QWORD *)(v30 + 465) = 0x91160D08D4A2C5LL;
                        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(
                          a1,
                          a2,
                          0x91160D08D4A2C5LL,
                          0);
                      }
                      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(v30 + 177))(
                        a1,
                        a2,
                        0,
                        v65,
                        v53);
                      v70 = 0;
                      *(_QWORD *)(v30 + 409) = v65;
                      *(_QWORD *)(v30 + 273) = 0;
                      *(_QWORD *)(v30 + 449) = 0x8000;
                      *(_QWORD *)(v30 + 465) = 0x52A9560CC8D4B869LL;
                      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(
                        a1,
                        a2,
                        0x52A9560CC8D4B869LL,
                        0);
                      v62 = *(_QWORD *)(v30 + 157) != 0;
                      v70 = v62;
                    }
                    *(_DWORD *)(v30 + 73) = 0xCB7A;
                    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(v30 + 177))(
                      a1,
                      a2,
                      0,
                      v30 + 41,
                      32);
                  }
                  break;
                default:
                  *(_DWORD *)(v30 + 73) = 0xFFFFFFFF0000CB7ALL;
                  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(v30 + 177))(
                    a1,
                    a2,
                    0,
                    v30 + 41,
                    32);
                  qmemcpy(v55, "G<", 2);
                  v55[2] = -4;
                  v55[3] = 112;
                  v55[4] = -59;
                  v55[5] = -2;
                  v55[6] = 77;
                  v55[7] = 31;
                  v55[8] = 46;
                  v55[9] = -37;
                  v55[10] = -77;
                  v55[11] = 68;
                  v55[12] = -118;
                  v50[0] = 28;
                  v50[1] = 17;
                  v50[2] = -95;
                  v50[3] = 80;
                  v50[4] = -112;
                  v50[5] = -112;
                  v50[6] = 38;
                  v50[7] = 113;
                  v50[8] = 65;
                  v50[9] = -84;
                  v50[10] = -35;
                  v50[11] = 100;
                  v50[12] = -23;
                  v50[13] = 40;
                  v50[14] = 81;
                  v50[15] = -111;
                  v50[16] = 17;
                  v50[17] = -85;
                  v50[18] = -102;
                  v50[19] = 99;
                  v50[20] = 21;
                  v50[21] = 46;
                  for ( m = 0; (unsigned __int64)m < 0x16; ++m )
                  {
                    v69 = (unsigned __int8)v50[m];
                    v50[m] = v55[m % 0xDuLL] ^ v69;
                  }
                  *(_QWORD *)(v30 + 313) = v42;
                  *(_QWORD *)(v30 + 377) = v50;
                  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(v30 + 193))(a1, a2, 1024, v50);
                  *(_QWORD *)(v30 + 369) = v11;
                  v68 = 0;
                  *(_QWORD *)(v30 + 313) = v42;
                  *(_QWORD *)(v30 + 377) = v50;
                  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(v30 + 193))(a1, a2, 1024, v50);
                  v13 = v30;
                  *(_QWORD *)(v30 + 369) = v12;
                  *(_QWORD *)(v30 + 465) = 175204164;
                  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, v13, 0);
                  v68 = *(_DWORD *)(v30 + 157);
                  break;
              }
            }
LABEL_91:
            *(_QWORD *)(v30 + 313) = v42;
            *(_QWORD *)(v30 + 465) = 0x4FA7169CF872F3BALL;
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x4FA7169CF872F3BALL, 0);
          }
        }
      }
    }
  }
  if ( v36 )
  {
    *(_QWORD *)(v30 + 305) = v45;
    *(_QWORD *)(v30 + 289) = v36;
    *(_QWORD *)(v30 + 465) = 0x91160D08D4A2C5LL;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v30 + 169))(a1, a2, 0x91160D08D4A2C5LL, 0);
    return 0;
  }
  return result;
}
