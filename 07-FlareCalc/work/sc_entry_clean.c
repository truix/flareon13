{
  __int64 (__fastcall *v78)(__int64, __int64, _QWORD, _BYTE *); // [rsp+198h] [rbp-3D0h] BYREF
  void (__fastcall *v79)(__int64, __int64, _QWORD, __int64, _QWORD, __int64 *); // [rsp+1A0h] [rbp-3C8h] BYREF

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
  v81 = a4 >> ((v33 - 32) ^ 0xC0);
  v82 = ((v33 - 1881370657) ^ 0x70237020) & a4;
  v67 = ((v33 + 1113481343) ^ 0xBDA19F80) & a3;
  v34 = sub_11A7E(a1, a2, v82, v81, v67, (__int64)v83);
  result = (v33 - 0x16315A070C65A300LL) ^ 0xE9CEA5F8F39A5D00LL;
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
  v52 = (v33 - 1391844521) ^ 0xAD0A0760;
  v80 = (v33 - 91736377) ^ 0xFA8836C0;
  for ( i = 0; i < v34; ++i )
    v52 += (char)v83[i] + (v52 << v80);
  *(_DWORD *)(v30 + 165) = v52;
  v86 = 1;
  result = sub_113AE(
             a1,
             a2,
             v36,
             (v33 + 24518254) ^ 0x1761080,
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
                  (v33 - 1296956433) ^ 0xB2B20D00,
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
                    (v33 + 1814149520) ^ 0x6C21B760,
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
                (v33 - 1621188943) ^ 0x9F5E9040,
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
                  (v33 + 2000783538) ^ 0x77418640,
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
                    (v33 + 1049422547) ^ 0x3E8CE420,
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
                    (v33 - 1945428620) ^ 0x8C0B1380,
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
                    (v33 - 645313515) ^ 0xD98942E0,
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
                  *(_DWORD *)(v30 + 73) = (v33 + 260229914) ^ 0xF820060;
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
                    *(_DWORD *)(v30 + 73) = (v33 - 1202005542) ^ 0xB85A12A0;
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
                  if ( *(_DWORD *)(v30 + 73) == (((_DWORD)v33 + 1909042309) ^ 0x71C9BD00) )
                  {
                    v65 = 0;
                    v53 = 0;
                    v48 = sub_10F56(
                            a1,
                            a2,
                            v36,
                            (v33 - 180318490) ^ 0xF540A9E0,
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
                                (v33 - 1364179515) ^ 0xAEB05440,
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
                          v77 = sub_D68A(a1, a2, v33, (v33 - 0x166BA2848413B267LL) ^ 0xC048D159E26ADD20LL);
                          if ( v77 )
                          {
                            sub_D7EA(a1, a2, (v33 - 8952197) ^ 0x17E49B00, v77, (__int64)&v78, v33);
                            sub_D7EA(a1, a2, (v33 - 1969410610) ^ 0xB2A179F0, v77, (__int64)&v79, v33);
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
                                v93 = (v33 + 0x77AC44B0E27E838BLL) ^ 0x77AC44B0218FA900LL;
                                v94 = v64 + 1;
                                v95 = v49;
                                v79(a1, a2, ((_DWORD)v33 + 168441706) ^ 0xA0A3720u, v85, 0, &v93);
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
                    *(_DWORD *)(v30 + 73) = (v33 + 1306420058) ^ 0x4DDEA820;
                    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(v30 + 177))(
                      a1,
                      a2,
                      0,
                      v30 + 41,
                      32);
                  }
                  break;
                default:
                  *(_DWORD *)(v30 + 73) = (v33 - 782934406) ^ 0xD1559500;
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
