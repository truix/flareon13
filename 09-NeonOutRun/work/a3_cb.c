// ---- 67e81e depth 0
__int64 __fastcall sub_67E81E(__int64 a1)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  volatile __int32 *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v12; // rsi
  double v13; // xmm1_8
  double v14; // xmm2_8
  volatile __int32 *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  int v22; // r9d
  int i; // r8d
  unsigned __int64 j; // r9
  __int64 *v25; // r15
  volatile __int32 *v26; // r12
  __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v31; // [rsp+20h] [rbp-C8h]
  __int64 v32; // [rsp+28h] [rbp-C0h] BYREF
  volatile __int32 *v33; // [rsp+30h] [rbp-B8h]
  __int64 *v34; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+40h] [rbp-A8h]
  __int128 v36; // [rsp+50h] [rbp-98h]
  __int128 v37; // [rsp+60h] [rbp-88h]
  __int64 v38; // [rsp+78h] [rbp-70h] BYREF
  __int64 v39; // [rsp+80h] [rbp-68h] BYREF
  __int64 v40[2]; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-50h]
  _QWORD v42[9]; // [rsp+A0h] [rbp-48h] BYREF

  v2 = sub_67E4F2();
  v38 = v2;
  v3 = sub_6F6550(a1);
  v39 = a1;
  v28 = v3;
  v4 = sub_618594(a1);
  v5 = sub_67E50C(&v38, sub_67EB09, v4, &v39);
  if ( !v5 )
    return sub_68CFCE(v2);
  v6 = v5;
  sub_6F65A0(&v28, v5);
  if ( !(unsigned __int8)sub_6F6120(v6) )
    return sub_68CFCE(v2);
  v7 = sub_617A48(v2);
  sub_61818C(&v29, v6, v7);
  sub_604A82((__int64)&v32, dword_1438590);
  v8 = v33;
  if ( (_BYTE)v32 )
    goto LABEL_5;
  v37 = *((unsigned __int64 *)v33 + 1);
  sub_69C4A0(v33);
  sub_604A82((__int64)&v32, dword_1438580);
  v8 = v33;
  if ( (_BYTE)v32 )
    goto LABEL_5;
  v36 = *((unsigned __int64 *)v33 + 1);
  v12 = (unsigned __int8)v34;
  sub_69C4A0(v33);
  if ( fabs(*(double *)&v37) <= 0.000001 )
    goto LABEL_6;
  v13 = fabs(*(double *)&v36);
  if ( v13 <= 0.000001 )
    goto LABEL_6;
  v14 = fabs(*(double *)&v37 - *(double *)&v36);
  if ( v14 >= 0.000001 )
    goto LABEL_6;
  sub_67E633(&v32, v12, 0.000001, v13, v14, *(double *)&v36);
  v15 = v33;
  if ( (_BYTE)v32 )
  {
    v8 = v33;
LABEL_5:
    sub_69C4A0(v8);
LABEL_6:
    v9 = v29;
    v10 = v30;
    goto LABEL_7;
  }
  sub_5CC332(v40, *((_QWORD *)v33 + 2), *((_QWORD *)v33 + 3));
  sub_69C4A0(v15);
  v16 = v29;
  v17 = v30;
  v18 = v31;
  v19 = v40[1];
  v20 = v41;
  v21 = v41;
  if ( v31 < v41 )
    v21 = v31;
  v22 = 0;
  for ( i = 2138955300; i == -1977242253; i ^= v22 )
  {
    v22 = 1766263494;
    if ( v18 >= 0x1F )
      *(_BYTE *)(v17 + 30) += 59;
LABEL_29:
    ;
  }
  if ( i == 2138955300 )
  {
    for ( j = 0; v20 != j; ++j )
    {
      if ( j < v21 )
        *(_BYTE *)(v17 + j) = *(_BYTE *)(v19 + j);
    }
    v22 = -178752681;
    goto LABEL_29;
  }
  if ( i != -480073803 )
    goto LABEL_29;
  v42[0] = v16;
  v42[1] = v17;
  v42[2] = v18;
  v25 = &v32;
  sub_4C2C31((__int64)&v32, (__int64)v42);
  if ( __OFSUB__(-v32, 1) )
  {
    v26 = v33;
    v25 = v34;
    v1 = v35;
  }
  else
  {
    sub_601B54(v32, (__int64)v33);
    v26 = (volatile __int32 *)0x8000000000000000LL;
  }
  sub_601B54(v40[0], v19);
  if ( v26 != (volatile __int32 *)0x8000000000000000LL )
  {
    v27 = sub_61834D(v2, (__int64)v25, v1);
    if ( v27 )
      sub_6F65A0(&v28, v27);
    v9 = (__int64)v26;
    v10 = (__int64)v25;
LABEL_7:
    sub_601B54(v9, v10);
  }
  return sub_68CFCE(v2);
}


// ---- 67eb83 depth 0
__int64 __fastcall sub_67EB83(__int64 a1, __int64 a2, double a3, double a4, double a5, double a6)
{
  __int64 v6; // rbx
  unsigned __int64 *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  volatile __int32 *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // r14
  unsigned __int8 v26; // al
  int v27; // ecx
  __int64 i; // rdx
  unsigned __int8 v29; // al
  unsigned __int8 v30; // al
  __int64 v31; // rsi
  unsigned __int8 v32; // al
  char v33; // dl
  __int128 v34; // xmm0
  double v35; // xmm2_8
  int v36; // r15d
  int v37; // eax
  int v38; // ebp
  volatile __int32 *v39; // r13
  unsigned int v40; // r14d
  int v41; // edi
  unsigned __int64 v42; // rax
  int v43; // r11d
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  int v47; // r8d
  unsigned __int64 v48; // rdi
  int v49; // ebp
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // rdi
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // rdi
  int v64; // r9d
  unsigned __int64 v65; // r14
  int v66; // r13d
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // r14
  unsigned __int64 v69; // r14
  int v70; // r10d
  unsigned __int64 v71; // r9
  int v72; // ebp
  int v73; // r10d
  unsigned __int64 v74; // r13
  int v75; // ebp
  unsigned __int64 v76; // r15
  unsigned __int64 v77; // r15
  unsigned __int64 v78; // r15
  __m128d v79; // xmm1
  double v80; // xmm0_8
  char v81; // [rsp+7h] [rbp-91h]
  double v82; // [rsp+8h] [rbp-90h]
  double v83; // [rsp+8h] [rbp-90h]
  double v84; // [rsp+8h] [rbp-90h]
  char v85[8]; // [rsp+10h] [rbp-88h] BYREF
  volatile __int32 *v86; // [rsp+18h] [rbp-80h]
  int v87; // [rsp+20h] [rbp-78h]
  __int64 v88; // [rsp+28h] [rbp-70h]
  double v89; // [rsp+30h] [rbp-68h]
  __int64 v90; // [rsp+38h] [rbp-60h] BYREF
  __int64 v91; // [rsp+40h] [rbp-58h] BYREF
  __int64 v92; // [rsp+48h] [rbp-50h] BYREF
  __int128 v93; // [rsp+50h] [rbp-48h]

  v6 = sub_67E4F2();
  v90 = v6;
  v91 = a1;
  v92 = sub_6F6550(a1);
  v7 = (unsigned __int64 *)sub_687E7D(nullptr);
  if ( !v7 )
    sub_64C070((__int64)&off_13CA750);
  v9 = v7;
  v10 = *v7;
  if ( v10 >= 0x7FFFFFFFFFFFFFFFLL )
    sub_5DA1F0(&off_13C7208, a2, v8);
  *v9 = v10 + 1;
  v11 = v9[1];
  if ( !v11 )
  {
    *v9 = v10;
    return sub_68CFCE(v6);
  }
  v12 = *(_QWORD *)(v9[2] + 64);
  v13 = sub_617A48(v6);
  sub_61824A((v12 == 0) + 1LL, v12, v13);
  sub_617A57(v6);
  v14 = sub_6F60A0(*(_QWORD *)(v6 + 56), v11);
  if ( !v14 )
    sub_5D8330();
  --*v9;
  v15 = sub_67E50C(&v90, sub_687E03, v14, &v91);
  if ( v15 )
  {
    sub_6F65A0(&v92, v15);
    if ( *(int *)(a1 + 16) >= 2 )
    {
      v16 = sub_61857A(a1, 1);
      v17 = sub_61821D(v16, v6);
      if ( v17 )
      {
        v82 = sub_6F62F0(v17);
        sub_67E679(v85);
        v18 = v86;
        v19 = (unsigned __int8)v87;
        if ( v85[0] )
          goto LABEL_207;
        v20 = *((_QWORD *)v86 + 4);
        if ( v20 )
        {
          v21 = *((_QWORD *)v86 + 3);
          v22 = *((_QWORD *)v86 + 2);
          v23 = 0;
          if ( (unsigned __int64)(v21 + 1) >= *((_QWORD *)v86 + 1) )
            v23 = *((_QWORD *)v86 + 1);
          *((_QWORD *)v86 + 3) = v21 - v23 + 1;
          *((_QWORD *)v18 + 4) = v20 - 1;
          v89 = *(double *)(v22 + 8 * v21);
        }
        sub_69C4A0(v18);
        if ( v20 )
        {
          sub_5DFF31(v85, v19);
          v18 = v86;
          if ( v85[0] )
            goto LABEL_207;
          v25 = *((_QWORD *)v86 + 1);
          *((_QWORD *)v86 + 1) = v25 + 1;
          sub_69C4A0(v18);
          v26 = 0;
          v27 = -1518639849;
          for ( i = 0; ; v27 ^= i )
          {
            switch ( v27 )
            {
              case -2037941332:
                v26 = __ROL1__(v26, 3);
                i = 1408948542;
                continue;
              case -2006821280:
                v26 -= 54;
                i = 249900492;
                continue;
              case -1558063198:
                v26 = __ROL1__(v26, 4);
                i = 4185981377LL;
                continue;
              case -1518639849:
                i = 106607285;
                v26 = 75;
                continue;
              case -713186670:
                v26 -= 114;
                i = 3294359514LL;
                continue;
              case -480397201:
                v26 += 51;
                i = 4194320334LL;
                continue;
              case 216115343:
                v26 += 94;
                i = 120771683;
                continue;
              case 229063973:
                v26 = __ROL1__(v26, 2);
                i = 4009395530LL;
                continue;
              case 287722824:
                v29 = __ROL1__(v26, 4);
                v30 = (4 * (v29 & 0x33)) | (v29 >> 2) & 0x33;
                v26 = (2 * (v30 & 0x55)) | (v30 >> 1) & 0x55;
                i = 233321489;
                continue;
              case 425559969:
                i = 1853802415;
                continue;
              case 483293529:
                v26 = __ROL1__(v26, 1);
                i = 271569366;
                continue;
              case 1028781814:
                v26 = __ROL1__(v26, 2);
                i = 821480403;
                continue;
              case 1494935210:
                v26 = __ROR1__(v26, 1);
                i = 3514347722LL;
                continue;
              case 1520490083:
                v26 -= 93;
                i = 1743855765;
                continue;
              case 1998798862:
                i = 775530148;
                continue;
            }
            if ( v27 == 198409452 )
              break;
          }
          v31 = v26;
          v32 = sub_67F9D8((unsigned int)v25, v26, i);
          v88 = sub_68003E(v32);
          v81 = v33;
          v34 = *(unsigned __int64 *)&v82;
          *(double *)&v34 = sub_13B2930(v82);
          v35 = fmax(0.0, *(double *)&v34);
          v36 = (unsigned __int8)(int)fmin(255.0, v35);
          v37 = 0;
          v38 = -257302408;
          v93 = v34;
          while ( 1 )
          {
            switch ( v38 )
            {
              case -257302408:
                v37 = -478991323;
                if ( *(double *)&v34 != (double)v36 )
                  return sub_68CFCE(v6);
                break;
              case 333106269:
                sub_67E633(v85, v31, *(double *)&v34, (double)v36, v35, a6);
                v39 = v86;
                v40 = (unsigned __int8)v87;
                if ( v85[0] )
                {
                  v18 = v86;
                  goto LABEL_207;
                }
                sub_687D50((_QWORD *)v86 + 1, v36);
                v31 = v40;
                sub_69C4A0(v39);
                v37 = -1563701988;
                *(_QWORD *)&v34 = v93;
                break;
              case -1324285631:
                v41 = -783651785;
                v42 = 0;
                v43 = 0;
                while ( 2 )
                {
                  switch ( v41 )
                  {
                    case -1029764736:
                      v42 ^= 0xD56A4AC4C785080FLL;
                      v43 = -198335488;
                      break;
                    case -783651785:
                      v43 = -2090903113;
                      v42 = 0xA450FDEDFA14869ALL;
                      break;
                    case -549014012:
                      v42 -= 0xC847BEB5C45CDCLL;
                      v43 = -570544695;
                      break;
                    case 45652941:
                      v42 = __ROL8__(v42, 43);
                      v43 = -1071148467;
                      break;
                    case 917679488:
                      v42 = __ROL8__(v42, 41);
                      v43 = 949402679;
                      break;
                    case 1377121664:
                      v44 = _byteswap_uint64(v42);
                      v45 = (v44 >> 4) & 0xF0F0F0F0F0F0F0FLL | (16 * (v44 & 0xF0F0F0F0F0F0F0FLL));
                      v46 = ((v45 >> 2) & 0x3333333333333333LL) + 4 * (v45 & 0x3333333333333333LL);
                      v42 = ((v46 >> 1) & 0x5555555555555555LL) + 2 * (v46 & 0x5555555555555555LL);
                      v43 = -1923906684;
                      break;
                    case 237244855:
                      v47 = 1496603451;
                      v48 = 0;
                      v49 = 0;
                      while ( 2 )
                      {
                        switch ( v47 )
                        {
                          case -2101727708:
                            v48 -= 0x2331797C232E6CDFLL;
                            v49 = 832137051;
                            goto LABEL_107;
                          case -1827432142:
                            v48 += 0x340938D1C77DC8B7LL;
                            v49 = 1153216901;
                            goto LABEL_107;
                          case -1729534232:
                            v48 = __ROL8__(v48, 26);
                            v49 = 441665740;
                            goto LABEL_107;
                          case -1544218936:
                            v61 = _byteswap_uint64(v48);
                            v62 = (v61 >> 4) & 0xF0F0F0F0F0F0F0FLL | (16 * (v61 & 0xF0F0F0F0F0F0F0FLL));
                            v63 = ((v62 >> 2) & 0x3333333333333333LL) + 4 * (v62 & 0x3333333333333333LL);
                            v50 = ((v63 >> 1) & 0x5555555555555555LL) + 2 * (v63 & 0x5555555555555555LL);
                            v49 = 991719456;
                            break;
                          case -1289533057:
                            v48 += 0x1B97977DC119A3DALL;
                            v49 = -673389879;
                            goto LABEL_107;
                          case -1185586754:
                            v51 = _byteswap_uint64(v48);
                            v52 = (v51 >> 4) & 0xF0F0F0F0F0F0F0FLL | (16 * (v51 & 0xF0F0F0F0F0F0F0FLL));
                            v53 = ((v52 >> 2) & 0x3333333333333333LL) + 4 * (v52 & 0x3333333333333333LL);
                            v50 = ((v53 >> 1) & 0x5555555555555555LL) + 2 * (v53 & 0x5555555555555555LL);
                            v49 = 446723958;
                            break;
                          case -676386633:
                            v48 ^= 0x45B45CAD9DAA24D8uLL;
                            v49 = -289858516;
                            goto LABEL_107;
                          case -241875634:
                            v55 = _byteswap_uint64(v48);
                            v56 = (v55 >> 4) & 0xF0F0F0F0F0F0F0FLL | (16 * (v55 & 0xF0F0F0F0F0F0F0FLL));
                            v57 = ((v56 >> 2) & 0x3333333333333333LL) + 4 * (v56 & 0x3333333333333333LL);
                            v50 = ((v57 >> 1) & 0x5555555555555555LL) + 2 * (v57 & 0x5555555555555555LL);
                            v49 = 233845394;
                            break;
                          case -147712318:
                            v48 = __ROL8__(v48, 28);
                            v49 = 111629196;
                            goto LABEL_107;
                          case -60459044:
                            v58 = _byteswap_uint64(v48);
                            v59 = (v58 >> 4) & 0xF0F0F0F0F0F0F0FLL | (16 * (v58 & 0xF0F0F0F0F0F0F0FLL));
                            v60 = ((v59 >> 2) & 0x3333333333333333LL) + 4 * (v59 & 0x3333333333333333LL);
                            v50 = ((v60 >> 1) & 0x5555555555555555LL) + 2 * (v60 & 0x5555555555555555LL);
                            v49 = -623635200;
                            break;
                          default:
                            v50 = _byteswap_uint64(v48);
                            switch ( v47 )
                            {
                              case 957756571:
                                v49 = -2143070939;
                                break;
                              case 1496603451:
                                v49 = -903364087;
                                v50 = 0x7524DC53EC0556CALL;
                                break;
                              case 1631942958:
                                v48 += 0x63BF51D49DD1EB3LL;
                                v49 = -1770557460;
                                goto LABEL_107;
                              case 1694477238:
                                v54 = (v50 >> 4) & 0xF0F0F0F0F0F0F0FLL | (16 * (v50 & 0xF0F0F0F0F0F0F0FLL));
                                v50 = (((((v54 >> 2) & 0x3333333333333333LL) + 4 * (v54 & 0x3333333333333333LL)) >> 1)
                                     & 0x5555555555555555LL)
                                    + 2
                                    * ((((v54 >> 2) & 0x3333333333333333LL) + 4 * (v54 & 0x3333333333333333LL))
                                     & 0x5555555555555555LL);
                                v49 = 96129688;
                                break;
                              case 649159388:
                                v64 = -198119762;
                                v65 = 0;
                                v66 = 0;
                                while ( 2 )
                                {
                                  if ( v64 == -2133502291 )
                                  {
                                    v68 = _byteswap_uint64(v65);
                                    v69 = (v68 >> 4) & 0xF0F0F0F0F0F0F0FLL | (16 * (v68 & 0xF0F0F0F0F0F0F0FLL));
                                    v67 = (((((v69 >> 2) & 0x3333333333333333LL) + 4 * (v69 & 0x3333333333333333LL)) >> 1)
                                         & 0x5555555555555555LL)
                                        + 2
                                        * ((((v69 >> 2) & 0x3333333333333333LL) + 4 * (v69 & 0x3333333333333333LL))
                                         & 0x5555555555555555LL);
                                    v66 = -407608283;
                                    goto LABEL_141;
                                  }
                                  v67 = _byteswap_uint64(v65);
                                  switch ( v64 )
                                  {
                                    case -1985615006:
                                      v66 = -618736007;
                                      break;
                                    case -1702715653:
                                      v65 ^= 0x61712E617D2C48E8uLL;
                                      v66 = -1446284250;
                                      goto LABEL_140;
                                    case -1451071839:
                                      v65 += 0x7D5851C198BE97F2LL;
                                      v66 = -1132003793;
                                      goto LABEL_140;
                                    case -1400518704:
                                      v65 -= 0x7CC00EAA26E48B67LL;
                                      v66 = 743477629;
                                      goto LABEL_140;
                                    case -1289157871:
                                      v65 ^= 0x94D176CCA779296uLL;
                                      v66 = -221262589;
                                      goto LABEL_140;
                                    case -198119762:
                                      v66 = 1488267646;
                                      v67 = 0x30BB5E2080CBA5A3LL;
                                      break;
                                    case 352622734:
                                      v65 -= 0x35D17419EE70563BLL;
                                      v66 = -1667140628;
                                      goto LABEL_140;
                                    case 860482269:
                                      v65 += 0x1F2F93DB233888B6LL;
                                      v66 = -2141132340;
                                      goto LABEL_140;
                                    case 1105645074:
                                      v65 ^= 0x3E3005400B113ECBuLL;
                                      v66 = 229067337;
                                      goto LABEL_140;
                                    case 1279362139:
                                      v66 = 597673201;
                                      break;
                                    case 1388002587:
                                      v65 -= 0x163B8AA29CC434BALL;
                                      v66 = -935746592;
                                      goto LABEL_140;
                                    case 1734423176:
                                      v65 -= 0x36CA5A23A9D00A6BLL;
                                      v66 = -823962583;
                                      goto LABEL_140;
                                    case 1747355230:
                                      v65 += 0x6AC5612A4D896887LL;
                                      v66 = 1663928055;
                                      goto LABEL_140;
                                    case 1876836522:
                                      v65 = __ROL8__(v65, 34);
                                      v66 = 133744372;
                                      goto LABEL_140;
                                    case 185270441:
                                      v70 = -1929533114;
                                      v71 = 0;
                                      v72 = 0;
                                      while ( 2 )
                                      {
                                        switch ( v70 )
                                        {
                                          case -1929533114:
                                            v72 = 1084885920;
                                            v71 = 0xBA2D50271EEC7060LL;
                                            break;
                                          case -1536169964:
                                            v71 = __ROL8__(v71, 29);
                                            v72 = -751929355;
                                            break;
                                          case -1310874298:
                                            v71 = __ROL8__(v71, 52);
                                            v72 = 1931826029;
                                            break;
                                          case -1023871445:
                                            v71 = __ROL8__(v71, 59);
                                            v72 = -46573801;
                                            break;
                                          case -866671898:
                                            v71 += 0x2DB212AB1C2D23BBLL;
                                            v72 = -867291903;
                                            break;
                                          default:
                                            if ( v70 == (_DWORD)&unk_198FE7 )
                                            {
                                              v71 = __ROL8__(v71, 35);
                                              v72 = -1312544095;
                                            }
                                            else
                                            {
                                              switch ( v70 )
                                              {
                                                case 468554590:
                                                  v71 ^= 0xADCE6E9A3B4E725ALL;
                                                  v72 = -1081967798;
                                                  break;
                                                case 1069654332:
                                                  v71 ^= 0xD13AA25DCA015150LL;
                                                  v72 = 1596940585;
                                                  break;
                                                case 1626259477:
                                                  v71 = _byteswap_uint64(v71);
                                                  v72 = 2063815499;
                                                  break;
                                                case 2000789473:
                                                  v71 = __ROL8__(v71, 36);
                                                  v72 = 395207551;
                                                  break;
                                                case 1624243358:
                                                  v73 = -891730002;
                                                  v74 = 0;
                                                  v75 = 0;
                                                  while ( 2 )
                                                  {
                                                    if ( v73 != -1989949567 )
                                                    {
                                                      switch ( v73 )
                                                      {
                                                        case -1660580710:
                                                          v74 ^= 0xBB96887981F4B16ALL;
                                                          v75 = 1964049424;
                                                          goto LABEL_199;
                                                        case -1618285497:
                                                          v74 += 0x996A7B1EA7D0629LL;
                                                          v75 = 42950877;
                                                          goto LABEL_199;
                                                        case -891730002:
                                                          v75 = -1956963775;
                                                          v76 = 0x22E8D59CE0DCB4F3LL;
                                                          break;
                                                        case -401307510:
                                                          v74 = __ROL8__(v74, 38);
                                                          v75 = -616984900;
                                                          goto LABEL_199;
                                                        default:
                                                          v76 = _byteswap_uint64(v74);
                                                          switch ( v73 )
                                                          {
                                                            case 858588726:
                                                              v75 = 1496976427;
                                                              break;
                                                            case 903378666:
                                                              v74 = __ROL8__(v74, 3);
                                                              v75 = -1075387675;
                                                              goto LABEL_199;
                                                            case 928540487:
                                                              v74 += 0x2B262EBD1DE35121LL;
                                                              v75 = 257613129;
                                                              goto LABEL_199;
                                                            case 939702798:
                                                              v74 = __ROL8__(v74, 37);
                                                              v75 = 232443108;
                                                              goto LABEL_199;
                                                            case 1099062767:
                                                              v77 = (v76 >> 4) & 0xF0F0F0F0F0F0F0FLL
                                                                  | (16 * (v76 & 0xF0F0F0F0F0F0F0FLL));
                                                              v78 = ((v77 >> 2) & 0x3333333333333333LL)
                                                                  + 4 * (v77 & 0x3333333333333333LL);
                                                              v76 = ((v78 >> 1) & 0x5555555555555555LL)
                                                                  + 2 * (v78 & 0x5555555555555555LL);
                                                              v75 = 315869862;
                                                              break;
                                                            case 1397856073:
                                                              v74 = __ROL8__(v74, 62);
                                                              v75 = 691592527;
                                                              break;
                                                            case 1608362329:
                                                              v74 ^= 0xC1A4C7369DB018D5LL;
                                                              v75 = 1753599518;
                                                              break;
                                                            case 1779894813:
                                                              v74 ^= 0x72DF00FF607BE1E2uLL;
                                                              v75 = 902472516;
                                                              break;
                                                            case 2053720582:
                                                              v74 ^= 0x31935C3B1D9856uLL;
                                                              v75 = -217412217;
                                                              break;
                                                            case -1975610353:
                                                              if ( (v81 & 1) != 0 )
                                                                *(double *)&v34 = -*(double *)&v34;
                                                              v79 = _mm_sub_pd(
                                                                      (__m128d)_mm_unpacklo_epi32(
                                                                                 (__m128i)((v42 << 7)
                                                                                         | (32 * v48)
                                                                                         | (16 * v65)
                                                                                         | (4 * v71)),
                                                                                 (__m128i)xmmword_1059F0),
                                                                      (__m128d)xmmword_105440);
                                                              v83 = 3.141592653589793
                                                                  / (_mm_unpackhi_pd(v79, v79).m128d_f64[0]
                                                                   + v79.m128d_f64[0])
                                                                  * ((double)(int)v88 + *(double *)&v34);
                                                              v80 = sub_13B2840(v83 / 6.283185307179586);
                                                              v84 = sub_687CFF(
                                                                      0,
                                                                      16 * v74,
                                                                      v83 - v80 * 6.283185307179586);
                                                              sub_604A82((__int64)v85, dword_1438590);
                                                              v18 = v86;
                                                              if ( !v85[0] )
                                                                *((double *)v86 + 1) = v89 * v84 + *((double *)v86 + 1);
LABEL_207:
                                                              sub_69C4A0(v18);
                                                              return sub_68CFCE(v6);
                                                            default:
LABEL_199:
                                                              v76 = v74;
                                                              break;
                                                          }
                                                          break;
                                                      }
                                                      v73 ^= v75;
                                                      v74 = v76;
                                                      continue;
                                                    }
                                                    break;
                                                  }
                                                  v74 -= 0x7BD6B25FC19E757ALL;
                                                  v75 = 384379846;
                                                  goto LABEL_199;
                                                default:
                                                  goto LABEL_167;
                                              }
                                            }
                                            break;
                                        }
LABEL_167:
                                        v70 ^= v72;
                                        continue;
                                      }
                                    default:
LABEL_140:
                                      v67 = v65;
                                      break;
                                  }
LABEL_141:
                                  v64 ^= v66;
                                  v65 = v67;
                                  continue;
                                }
                              default:
LABEL_107:
                                v50 = v48;
                                goto LABEL_108;
                            }
                            break;
                        }
LABEL_108:
                        v47 ^= v49;
                        v48 = v50;
                        continue;
                      }
                    default:
                      break;
                  }
                  v41 ^= v43;
                  continue;
                }
              default:
                break;
            }
            v38 ^= v37;
          }
        }
      }
    }
  }
  return sub_68CFCE(v6);
}


// ---- 67e4f2 depth 1
__int64 sub_67E4F2()
{
  __int64 v0; // rax
  __int64 v1; // rax

  v0 = sub_6F6540();
  v1 = sub_617EB6(v0);
  return sub_617F9C(v1, 0);
}


// ---- 618594 depth 1
__int64 __fastcall sub_618594(__int64 a1)
{
  __int64 result; // rax

  result = sub_6F6560(a1);
  if ( !result )
    sub_5D8330();
  return result;
}


// ---- 67e50c depth 1
unsigned __int64 __fastcall sub_67E50C(__int64 *a1, __int64 (__fastcall *a2)(_QWORD), __int64 a3, __int64 *a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rax
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v22; // [rsp+0h] [rbp-68h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  _QWORD *v25; // [rsp+18h] [rbp-50h]
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+28h] [rbp-40h]
  unsigned __int64 v28; // [rsp+30h] [rbp-38h]

  v6 = (_QWORD *)a2(0);
  if ( !v6 )
    sub_64C070((__int64)&off_13CA750);
  v8 = sub_67E6E7(v6, (__int64)&off_13C72E0, v7);
  v10 = 0;
  if ( *v8 )
  {
    v24 = a3;
    v25 = v9;
    v23 = *a1;
    v22 = sub_67E710(*a1, *v8, *(_QWORD *)(v8[1] + 64));
    v11 = *a4;
    v12 = sub_67DE74(*(int *)(*a4 + 16), 8, 8);
    v14 = v13;
    v26 = v12;
    v27 = v13;
    v28 = 0;
    v15 = *(unsigned int *)(v11 + 16);
    if ( (int)v15 <= 0 )
      v15 = 0;
    while ( v15 != v10 )
    {
      v18 = sub_61857A(v11, (unsigned int)v10);
      if ( v10 == v26 )
      {
        sub_5E8DF9(&v26, (unsigned int)v10, v16, v17, v19);
        v14 = v27;
      }
      *(_QWORD *)(v14 + 8 * v10++) = v18;
      v28 = v10;
    }
    v20 = v27;
    v10 = sub_6185AE(v22, v23, v24, v27, v10);
    sub_5E5443(v26, v20, 8, 8);
    v9 = v25;
  }
  --*v9;
  return v10;
}


// ---- 617a48 depth 1
__int64 __fastcall sub_617A48(__int64 a1)
{
  sub_617A57(a1);
  return *(_QWORD *)(a1 + 56);
}


// ---- 61818c depth 1
__int64 __fastcall sub_61818C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 result; // rax
  __int64 v7[2]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h]

  v4 = (int)sub_6F6270(a2, a3);
  sub_5E579B(v7, v4, 0, 1u, 1u);
  if ( LODWORD(v7[0]) == 1 )
    sub_5CC3A7(v7[1], v8);
  v5 = v8;
  LODWORD(v7[0]) = 0;
  result = (int)sub_6F6280(a2, a3, v8, (unsigned int)v4, v7, 10);
  *a1 = v4;
  a1[1] = v5;
  a1[2] = (int)result;
  return result;
}


// ---- 604a82 depth 1
__int64 __fastcall sub_604A82(__int64 a1, volatile signed __int32 *a2)
{
  __int64 result; // rax
  char v3; // dl

  if ( _InterlockedCompareExchange(a2, 1, 0) )
    sub_620AE0(a2);
  result = sub_4C2CE5(a2 + 1) & 1;
  *(_QWORD *)(a1 + 8) = a2;
  *(_BYTE *)(a1 + 16) = v3;
  *(_QWORD *)a1 = result;
  return result;
}


// ---- 69c4a0 depth 1
__int64 __fastcall sub_69C4A0(volatile __int32 *a1)
{
  __int64 result; // rax

  sub_67E6BF(a1 + 1);
  result = (unsigned int)_InterlockedExchange(a1, 0);
  if ( (_DWORD)result == 2 )
    return sub_647030(a1);
  return result;
}


// ---- 601b54 depth 1
// attributes: thunk
__int64 __fastcall sub_601B54(__int64 a1, __int64 a2)
{
  return sub_5E616F(a1, a2);
}


// ---- 68cfce depth 1
__int64 __fastcall sub_68CFCE(__int64 a1)
{
  int v2; // ecx
  char v3; // al
  __int64 v4; // rdi

  v2 = *(unsigned __int8 *)(a1 + 104);
  v3 = *(_BYTE *)(a1 + 105);
  if ( v2 == 1 )
  {
    if ( (v3 & 1) == 0 )
      return sub_617F14(a1);
LABEL_8:
    sub_5D8350((__int64)aInternalErrorE, 40);
  }
  if ( v2 != 2 || v3 == 1 )
    goto LABEL_8;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v4 )
    sub_5D8330();
  sub_617AAB(v4);
  return sub_617F14(a1);
}


// ---- 67e633 depth 1
_BOOL8 __fastcall sub_67E633(__int64 a1)
{
  _BOOL8 result; // rax
  char v2; // dl

  if ( _InterlockedCompareExchange(&dword_14284E0, 1, 0) )
    sub_620AE0(&dword_14284E0);
  result = sub_4C2CE5(byte_14284E4);
  *(_QWORD *)(a1 + 8) = &dword_14284E0;
  *(_BYTE *)(a1 + 16) = v2;
  *(_QWORD *)a1 = result;
  return result;
}


// ---- 5cc332 depth 1
void *__fastcall sub_5CC332(_QWORD *a1, const void *a2, size_t a3)
{
  void *result; // rax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]
  void *dest; // [rsp+10h] [rbp-28h]

  sub_5E579B(&v5, a3, 0, 1u, 1u);
  if ( (_DWORD)v5 == 1 )
    sub_5CC3A7(v6, (__int64)dest);
  result = dest;
  *a1 = v6;
  a1[1] = result;
  a1[2] = 0;
  if ( a3 )
  {
    result = memcpy(result, a2, a3);
    a1[2] = a3;
  }
  return result;
}


// ---- 4c2c31 depth 1
unsigned __int64 __fastcall sub_4C2C31(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+10h] [rbp-48h]
  __int128 v4; // [rsp+18h] [rbp-40h]
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]

  sub_5D8370(&v5, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( v5 == 1 )
  {
    v4 = v6;
    v3 = *(_QWORD *)(a2 + 16);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_QWORD *)(a1 + 32) = *((_QWORD *)&v4 + 1);
    *(_QWORD *)(a1 + 16) = v3;
    *(_QWORD *)(a1 + 24) = v4;
    return v4;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return 0x8000000000000000LL;
  }
}


// ---- 61834d depth 1
__int64 __fastcall sub_61834D(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a3;
    if ( a3 >> 31 )
    {
      return 0;
    }
    else
    {
      sub_617A57(a1);
      return sub_6F6260(*(_QWORD *)(a1 + 56), a2, 0, v3);
    }
  }
  else
  {
    sub_617A57(a1);
    result = sub_6F6250(*(_QWORD *)(a1 + 56));
    if ( !result )
      sub_5D8330();
  }
  return result;
}


// ---- 687e7d depth 1
unsigned __int64 __fastcall sub_687E7D(char *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 v2; // al
  char v4; // al
  __int128 v5; // xmm0
  __int64 v6; // [rsp+10h] [rbp-18h]

  v1 = __readfsqword(0) - 312;
  v2 = __readfsbyte(0xFFFFFEE0);
  if ( v2 != 1 )
  {
    if ( v2 )
    {
      return 0;
    }
    else
    {
      if ( a1 && (v4 = *a1, *(_QWORD *)a1 = 0, (v4 & 1) != 0) )
      {
        v6 = *((_QWORD *)a1 + 3);
        v5 = *(_OWORD *)(a1 + 8);
      }
      else
      {
        v5 = 0;
      }
      *(_QWORD *)(v1 + 16) = v6;
      *(_OWORD *)v1 = v5;
      __writefsbyte(0xFFFFFEE0, 1u);
      sub_645210(v1, sub_67E7F7);
    }
  }
  return v1;
}


// ---- 61824a depth 1
void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sub_61824A(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a1 != 1 )
      sub_61FB02(&unk_218F19, 51, &off_13C3F10);
    if ( a2 != a3 )
      sub_61FB02(&unk_218F4C, 56, &off_13C3F28);
  }
}


// ---- 617a57 depth 1
__int64 __fastcall sub_617A57(__int64 a1)
{
  int v2; // ecx
  char v3; // al
  __int64 v4; // rdi

  v2 = *(unsigned __int8 *)(a1 + 104);
  v3 = *(_BYTE *)(a1 + 105);
  if ( v2 == 1 )
  {
    if ( (v3 & 1) == 0 )
      return a1;
LABEL_8:
    sub_5D8350((__int64)aInternalErrorE, 40);
  }
  if ( v2 != 2 || v3 == 1 )
    goto LABEL_8;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v4 )
    sub_5D8330();
  sub_617AAB(v4);
  return a1;
}


// ---- 61857a depth 1
__int64 __fastcall sub_61857A(__int64 a1)
{
  __int64 result; // rax

  result = sub_6F6570(a1);
  if ( !result )
    sub_5D8330();
  return result;
}


// ---- 61821d depth 1
__int64 __fastcall sub_61821D(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  sub_617A57(a2);
  v2 = sub_617F4C(a2);
  return sub_6F6190(a1, v2);
}


// ---- 67e679 depth 1
_BOOL8 __fastcall sub_67E679(__int64 a1)
{
  _BOOL8 result; // rax
  char v2; // dl

  if ( _InterlockedCompareExchange(&dword_1428500, 1, 0) )
    sub_620AE0(&dword_1428500);
  result = sub_4C2CE5(byte_1428504);
  *(_QWORD *)(a1 + 8) = &dword_1428500;
  *(_BYTE *)(a1 + 16) = v2;
  *(_QWORD *)a1 = result;
  return result;
}


// ---- 5dff31 depth 1
bool __fastcall sub_5DFF31(__int64 a1)
{
  bool result; // al
  _BOOL8 v2; // rsi

  if ( _InterlockedCompareExchange(&dword_14385A0, 1, 0) )
    sub_620AE0(&dword_14385A0);
  if ( 2 * qword_14385B8 )
    result = !sub_620910();
  else
    result = 0;
  v2 = byte_14385A4 != 0;
  *(_QWORD *)(a1 + 8) = &dword_14385A0;
  *(_BYTE *)(a1 + 16) = result;
  *(_QWORD *)a1 = v2;
  return result;
}


// ---- 67f9d8 depth 1
unsigned __int8 __fastcall sub_67F9D8(char a1, char a2)
{
  int v2; // ecx
  char v3; // al
  int i; // edx
  int v5; // edx
  char v6; // cl
  int j; // r8d
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // cl
  unsigned __int8 result; // al
  int v15; // edx
  int v16; // esi
  int v17; // esi
  char v18; // cl
  int k; // edi
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // cl
  char v24; // di
  int v25; // esi
  int m; // edi
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // cl
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // cl

  v2 = -1026416159;
  v3 = 0;
  for ( i = 0; ; v2 ^= i )
  {
    switch ( v2 )
    {
      case -2059595641:
        i = -2031184756;
        continue;
      case -1933676283:
        v3 -= 24;
        i = -1593676050;
        continue;
      case -1657885612:
        v3 ^= 0x70u;
        i = 1291633583;
        continue;
      case -1425788635:
        v3 -= 60;
        i = 666517536;
        continue;
      case -1026416159:
        v3 = -14;
        i = -2041652105;
        continue;
      case -814614337:
        v3 -= 65;
        i = -973543915;
        continue;
      case -774737925:
        v3 = __ROL1__(v3, 3);
        i = 514037572;
        continue;
      case -594966907:
        v3 -= 32;
        i = 2005776288;
        continue;
      case -377685870:
        v3 -= 30;
        i = 1951552710;
        continue;
      case 64193547:
        v3 = __ROL1__(v3, 2);
        i = 95478245;
        continue;
      case 107177454:
        v3 ^= 0xD0u;
        i = 2061789589;
        continue;
      case 176758442:
        v3 ^= 0x96u;
        i = -1884025299;
        continue;
      case 1151139222:
        v3 = __ROL1__(v3, 5);
        i = -1377827580;
        continue;
      case 1586066839:
        v3 -= 71;
        i = -2113866990;
        continue;
      case 2089225339:
        v3 -= 3;
        i = 571374060;
        continue;
    }
    if ( v2 == 767303659 )
      break;
  }
  v5 = 718373391;
  v6 = 0;
  for ( j = 0; ; v5 ^= j )
  {
    switch ( v5 )
    {
      case -1588975424:
        v6 -= 53;
        j = -1242466212;
        continue;
      case -425408684:
        v6 += 95;
        j = -1559372356;
        continue;
      case -314682846:
        v8 = __ROL1__(v6, 4);
        v9 = (4 * (v8 & 0x33)) | (v8 >> 2) & 0x33;
        v6 = (2 * (v9 & 0x55)) | (v9 >> 1) & 0x55;
        j = 1282702050;
        continue;
      case -19608884:
        v6 ^= 0x8Du;
        j = -1683565145;
        continue;
      case 71740899:
        j = -41059986;
        continue;
      case 347820188:
        v6 += 126;
        j = 1005822508;
        continue;
      case 718373391:
        v6 = -54;
        j = -940584915;
        continue;
      case 793309872:
        v6 = __ROL1__(v6, 6);
        j = 1968931786;
        continue;
      case 936045392:
        v12 = __ROL1__(v6, 4);
        v13 = (4 * (v12 & 0x33)) | (v12 >> 2) & 0x33;
        v6 = (2 * (v13 & 0x55)) | (v13 >> 1) & 0x55;
        j = -920772196;
        continue;
      case 1168710376:
        j = 1106229003;
        continue;
      case 1222655992:
        v10 = __ROL1__(v6, 4);
        v11 = (4 * (v10 & 0x33)) | (v10 >> 2) & 0x33;
        v6 = (2 * (v11 & 0x55)) | (v11 >> 1) & 0x55;
        j = 2133513384;
        continue;
      case 1511223674:
        v6 = __ROL1__(v6, 6);
        j = 317935234;
        continue;
      case 1701977963:
        v6 += 120;
        j = -2083071937;
        continue;
    }
    if ( v5 == -104082291 )
      break;
  }
  result = a2 ^ (__ROL1__(a1 * v3, 3) * v6);
  v15 = -1945950286;
  v16 = 0;
LABEL_66:
  if ( v15 == -1945950286 )
  {
    v17 = -134859805;
    v18 = 0;
    for ( k = 0; ; v17 ^= k )
    {
      switch ( v17 )
      {
        case -2006344143:
          v18 = __ROR1__(v18, 1);
          k = -1717103168;
          break;
        case -1485106094:
          v18 += 71;
          k = 356449433;
          break;
        case -1304041269:
          v18 = __ROL1__(v18, 2);
          k = 975992570;
          break;
        case -883982786:
          v18 = __ROR1__(v18, 1);
          k = -1422718202;
          break;
        case -362323829:
          v18 ^= 0x19u;
          k = 556277429;
          break;
        case -134859805:
          v18 = 40;
          k = 262523948;
          break;
        case -128712753:
          v22 = __ROL1__(v18, 4);
          v23 = (4 * (v22 & 0x33)) | (v22 >> 2) & 0x33;
          v18 = (2 * (v23 & 0x55)) | (v23 >> 1) & 0x55;
          k = 305438532;
          break;
        case 298748913:
          v18 -= 34;
          k = -113822834;
          break;
        case 679862402:
          v20 = __ROL1__(v18, 4);
          v21 = (4 * (v20 & 0x33)) | (v20 >> 2) & 0x33;
          v18 = (2 * (v21 & 0x55)) | (v21 >> 1) & 0x55;
          k = 1485103023;
          break;
        case 1618769208:
          v18 = __ROL1__(v18, 5);
          k = 1224316346;
          break;
        case 1879129901:
          v18 -= 127;
          k = -679859329;
          break;
        case -386287489:
          v24 = result ^ (result >> 4);
          v16 = -467200656;
          goto LABEL_128;
      }
    }
  }
  if ( v15 == 130654771 )
  {
    result ^= result >> 4;
    v16 = -1689797289;
    goto LABEL_129;
  }
  if ( v15 == 1747202754 )
  {
    v25 = 412247894;
    v18 = 0;
    for ( m = 0; ; v25 ^= m )
    {
      switch ( v25 )
      {
        case -1775146153:
          v18 -= 110;
          m = -454826139;
          break;
        case -1138044293:
          v18 -= 105;
          m = -123432502;
          break;
        case -1131022668:
          v27 = __ROL1__(v18, 4);
          v28 = (4 * (v27 & 0x33)) | (v27 >> 2) & 0x33;
          v18 = (2 * (v28 & 0x55)) | (v28 >> 1) & 0x55;
          m = -1423071601;
          break;
        case -374399537:
          v18 -= 51;
          m = 2141091480;
          break;
        case 397955131:
          v31 = __ROL1__(v18, 4);
          v32 = (4 * (v31 & 0x33)) | (v31 >> 2) & 0x33;
          v18 = (2 * (v32 & 0x55)) | (v32 >> 1) & 0x55;
          m = 1100740358;
          break;
        case 412247894:
          v18 = -47;
          m = -1543007774;
          break;
        case 489247766:
          v29 = __ROL1__(v18, 4);
          v30 = (4 * (v29 & 0x33)) | (v29 >> 2) & 0x33;
          v18 = (2 * (v30 & 0x55)) | (v30 >> 1) & 0x55;
          m = -192525863;
          break;
        case 1069210115:
          v18 -= 26;
          m = 580095509;
          break;
        case 1150174129:
          v18 = __ROL1__(v18, 5);
          m = 2067044786;
          break;
        case 1445177149:
          v18 = __ROL1__(v18, 1);
          m = 870153956;
          break;
        case 1711200729:
          v18 ^= 0x15u;
          m = -640414814;
          break;
        case 1926401074:
          v18 ^= 0x93u;
          m = 17122638;
          break;
        case 1943521660:
          v24 = result ^ (result >> 3);
          v16 = 1877840113;
LABEL_128:
          result = v24 * v18;
LABEL_129:
          v15 ^= v16;
          goto LABEL_66;
      }
    }
  }
  if ( v15 != -1668407452 )
    goto LABEL_129;
  return result;
}


// ---- 68003e depth 1
__int64 __fastcall sub_68003E(unsigned int a1)
{
  unsigned int v1; // eax
  __int128 v2; // rax
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  int i; // ebp
  unsigned __int64 v6; // r15
  bool v7; // cf
  __int128 v8; // rt0
  int v9; // ebx
  int v10; // edx
  __int64 v11; // r12
  __int64 v12; // r13
  int v13; // edx
  int v14; // r9d
  __int128 k; // rdi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r10
  __int128 v20; // rt0
  __int128 v21; // rt0
  int v22; // edx
  unsigned __int64 v23; // r15
  int v24; // r10d
  signed __int64 j; // r14
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r9
  __int128 v35; // rt0
  __int64 v36; // r14
  __int64 v37; // r8
  int v38; // edx
  int v39; // r8d
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rsi
  void *v44; // rdx
  int v45; // r8d
  __int64 v46; // r10
  __int128 v47; // rt0
  __int64 v48; // r15
  __int128 v49; // rt0
  __int64 v50; // r14
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // r8
  int v56; // edx
  int v57; // r10d
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r9
  __int128 v60; // rt0
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // r9
  unsigned __int64 v63; // rdi
  __int128 v64; // rt0
  __int128 v65; // rt0
  __int128 v66; // rt0
  int v67; // edx
  unsigned __int64 v68; // r8
  __int64 v69; // r10
  __int128 v70; // rt0
  __int64 v71; // r15
  unsigned __int64 v72; // r15
  unsigned __int64 v73; // r15
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // r14
  unsigned __int64 v76; // r9
  __int128 v77; // rt0
  __int128 v78; // rt0
  unsigned __int64 v79; // r15
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // r14
  unsigned __int64 v82; // r14
  unsigned __int64 v83; // r9
  int v84; // edx
  int v85; // r8d
  unsigned __int64 v86; // r9
  __int128 v87; // rt0
  __int128 v88; // rt0
  __int128 v89; // rt0
  int v90; // edx
  unsigned __int64 v91; // r8
  __int64 v92; // r10
  __int128 v93; // rt0
  __int64 v94; // r14
  __int128 v95; // rt0
  __int64 v96; // r14
  __int128 v97; // rt0
  unsigned __int64 v98; // r15
  unsigned __int64 v99; // r15
  unsigned __int64 v100; // r14
  unsigned __int64 v101; // r14
  unsigned __int64 v102; // r9
  int v103; // edx
  int v104; // r8d
  __int128 v105; // rt0
  __int128 v106; // rt0
  __int128 v107; // rt0
  __int128 v108; // rt0
  __int128 v109; // rt0
  int v110; // edx
  int v111; // r8d
  __int64 v112; // r14
  __int64 v113; // r14
  __int128 v114; // rt0
  __int64 v115; // r14
  int v116; // edx
  unsigned __int64 v117; // r8
  __int64 v118; // r10
  __int128 v119; // rt0
  __int64 v120; // rsi
  unsigned __int64 v121; // rsi
  unsigned __int64 v122; // rsi
  unsigned __int64 v123; // rsi
  __int64 v124; // rdi
  __int128 v125; // rt0
  unsigned __int64 v126; // rsi
  unsigned __int64 v127; // rsi
  unsigned __int64 v128; // rsi
  __int128 v129; // rt0
  __int128 v130; // rt0
  unsigned __int64 v131; // rsi
  unsigned __int64 v132; // rsi
  unsigned __int64 v133; // rsi
  unsigned __int64 v134; // rsi
  unsigned __int64 v135; // rsi
  unsigned __int64 v136; // rsi
  int v137; // edx
  int v138; // r8d
  __int128 v139; // rt0
  __int128 v140; // rt0
  unsigned __int64 v141; // r15
  unsigned __int64 v142; // r15
  unsigned __int64 v143; // r14
  unsigned __int64 v144; // r14
  unsigned __int64 v145; // r8
  __int128 v146; // rt0
  int v147; // edx
  int v148; // r8d
  unsigned __int64 v149; // r9
  unsigned __int64 v150; // r10
  __int128 v151; // rt0
  unsigned __int64 v152; // rdi
  __int128 v153; // rt0
  __int128 v154; // rt0
  int v155; // edx
  int v156; // r8d
  unsigned __int64 v157; // r10
  __int64 v158; // r14
  __int128 v159; // rt0
  int v160; // edx
  int v161; // r10d
  unsigned __int64 v162; // r8
  unsigned __int64 v163; // r9
  unsigned __int64 v164; // r8
  unsigned __int64 v165; // r9
  __int128 v166; // rt0
  unsigned __int64 v167; // r8
  unsigned __int64 v168; // r9
  unsigned __int64 v169; // rsi
  unsigned __int64 v170; // rsi
  unsigned __int64 v171; // rsi
  int v172; // edx
  int v173; // r10d
  unsigned __int64 v174; // r8
  __int128 v175; // rt0
  unsigned __int64 v176; // r8
  unsigned __int64 v177; // r8
  unsigned __int64 v178; // r9
  unsigned __int64 v179; // r9
  int v180; // edx
  int v181; // r9d
  unsigned __int64 v182; // r8
  __int64 v183; // r10
  __int64 v184; // rdi
  __int128 v185; // rt0
  __int128 v186; // rt0
  __int64 v187; // rsi
  unsigned __int64 v188; // rsi
  unsigned __int64 v189; // rsi
  unsigned __int64 v190; // rsi
  __int128 v191; // rt0
  __int128 v192; // rt0
  unsigned __int64 v193; // rsi
  unsigned __int64 v194; // rsi
  unsigned __int64 v195; // rsi
  unsigned __int64 v196; // rsi
  unsigned __int64 v197; // rsi
  unsigned __int64 v198; // rsi
  int v199; // edx
  unsigned __int64 v200; // r8
  __int64 v201; // r10
  __int128 v202; // rt0
  __int128 v203; // rt0
  __int64 v204; // r15
  __int64 v205; // r14
  unsigned __int64 v206; // r15
  unsigned __int64 v207; // r15
  unsigned __int64 v208; // r14
  unsigned __int64 v209; // r14
  unsigned __int64 v210; // r9
  __int128 v211; // rt0
  __int128 v212; // rt0
  __int128 v213; // rt0
  unsigned __int64 v214; // r15
  unsigned __int64 v215; // r15
  unsigned __int64 v216; // r14
  unsigned __int64 v217; // r14
  unsigned __int64 v218; // r9
  int v219; // edx
  int v220; // r10d
  unsigned __int64 v221; // r8
  unsigned __int64 v222; // r9
  unsigned __int64 v223; // r8
  unsigned __int64 v224; // r9
  __int128 v225; // rt0
  unsigned __int64 v226; // rsi
  __int128 v227; // rt0
  unsigned __int64 v228; // rsi
  unsigned __int64 v229; // rsi
  unsigned __int64 v230; // rsi
  __int128 v231; // rt0
  int v232; // edx
  int v233; // r8d
  unsigned __int64 v234; // r10
  unsigned __int64 v235; // r9
  unsigned __int64 v236; // r10
  __int128 v237; // rt0
  unsigned __int64 v238; // r14
  __int128 v239; // rt0
  __int128 v240; // rt0
  int v241; // edx
  int v242; // r8d
  __int64 v243; // r9
  __int128 v244; // rt0
  __int128 v245; // rt0
  int v246; // edx
  int v247; // r10d
  unsigned __int64 v248; // r8
  __int128 v249; // rt0
  unsigned __int64 v250; // r15
  __int128 v251; // rt0
  unsigned __int64 v252; // r8
  unsigned __int64 v253; // r8
  unsigned __int64 v254; // r9
  unsigned __int64 v255; // r9
  __int128 v256; // rt0
  __int128 v257; // rt0
  int v258; // edx
  int v259; // r8d
  unsigned __int64 v260; // r10
  __int64 v261; // r9
  __int128 v262; // rt0
  __int128 v263; // rt0
  unsigned __int64 v264; // r10
  unsigned __int64 v265; // r9
  __int128 v266; // rt0
  __int128 v267; // rt0
  unsigned __int64 v268; // r10
  unsigned __int64 v269; // r9
  int v270; // edx
  int v271; // r8d
  unsigned __int64 v272; // r15
  unsigned __int64 v273; // r15
  unsigned __int64 v274; // r14
  unsigned __int64 v275; // r14
  int v276; // edx
  int v277; // r8d
  __int64 v278; // r9
  __int128 v279; // rt0
  __int128 v280; // rt0
  __int128 v281; // rt0
  int v282; // edx
  int v283; // r8d
  __int64 v284; // r10
  __int128 v285; // rt0
  unsigned __int64 v286; // r15
  unsigned __int64 v287; // r15
  unsigned __int64 v288; // r14
  unsigned __int64 v289; // r14
  unsigned __int64 v290; // r8
  __int128 v291; // rt0
  __int64 v292; // r14
  __int128 v293; // rt0
  int v294; // edx
  int v295; // r9d
  unsigned __int64 v296; // r8
  unsigned __int64 v297; // r10
  __int128 v298; // rt0
  unsigned __int64 v299; // rsi
  __int128 v300; // rt0
  __int128 v301; // rt0
  __int128 v302; // rt0
  unsigned __int64 v303; // r8
  unsigned __int64 v304; // r10
  int v305; // edx
  int v306; // r8d
  __int64 v307; // r10
  unsigned __int64 v308; // r15
  unsigned __int64 v309; // r15
  unsigned __int64 v310; // r14
  unsigned __int64 v311; // r14
  unsigned __int64 v312; // r8
  __int128 v313; // rt0
  __int64 v314; // r15
  __int128 v315; // rt0
  __int128 v316; // rt0
  __int64 v317; // r14
  int v318; // edx
  int v319; // r8d
  unsigned __int64 v320; // r9
  __int128 v321; // rt0
  unsigned __int64 v322; // rsi
  unsigned __int64 v323; // rsi
  __int128 v324; // rt0
  unsigned __int64 v325; // rsi
  unsigned __int64 v326; // rsi
  int v327; // edx
  int v328; // r8d
  unsigned __int64 v329; // r10
  __int128 v330; // rt0
  unsigned __int64 v331; // r15
  __int128 v332; // rt0
  __int128 v333; // rt0
  unsigned __int64 v334; // r14
  __int128 v335; // rt0
  __int128 v336; // rt0
  int v337; // edx
  int v338; // r8d
  __int64 v339; // r9
  __int128 v340; // rt0
  __int128 v341; // rt0
  __int128 v342; // rt0
  int v343; // edx
  int v344; // r8d
  unsigned __int64 v345; // r10
  __int128 v346; // rt0
  unsigned __int64 v347; // r14
  __int128 v348; // rt0
  __int128 v349; // rt0
  int v350; // edx
  int v351; // r10d
  unsigned __int64 v352; // r8
  unsigned __int64 v353; // r9
  unsigned __int64 v354; // r8
  unsigned __int64 v355; // r9
  __int128 v356; // rt0
  unsigned __int64 v357; // r8
  unsigned __int64 v358; // r9
  int v359; // edx
  int v360; // r10d
  unsigned __int64 v361; // r8
  __int128 v362; // rt0
  __int64 v363; // r14
  unsigned __int64 v364; // r8
  unsigned __int64 v365; // r8
  unsigned __int64 v366; // r9
  unsigned __int64 v367; // r9
  __int128 v368; // rt0
  unsigned __int64 v369; // r15
  unsigned __int64 v370; // r8
  unsigned __int64 v371; // r8
  unsigned __int64 v372; // r9
  unsigned __int64 v373; // r9
  __int128 v374; // rt0
  int v375; // edx
  unsigned __int64 v376; // r8
  __int64 v377; // r10
  unsigned __int64 v378; // rsi
  unsigned __int64 v379; // rsi
  unsigned __int64 v380; // rsi
  __int128 v381; // rt0
  __int64 v382; // rdi
  __int128 v383; // rt0
  __int128 v384; // rt0
  int v385; // edx
  int v386; // r8d
  __int64 v387; // r14
  __int128 v388; // rt0
  int v389; // edx
  int v390; // r8d
  unsigned __int64 v391; // r9
  unsigned __int64 v392; // rsi
  unsigned __int64 v393; // rsi
  __int128 v394; // rt0
  __int128 v395; // rt0
  __int128 v396; // rt0
  int v397; // edx
  int v398; // r8d
  __int64 v399; // r10
  __int64 v400; // r14
  unsigned __int64 v401; // r15
  unsigned __int64 v402; // r15
  unsigned __int64 v403; // r14
  unsigned __int64 v404; // r14
  unsigned __int64 v405; // r8
  __int128 v406; // rt0
  __int64 v407; // r15
  __int128 v408; // rt0
  int v409; // edx
  int v410; // r8d
  unsigned __int64 v411; // r9
  __int64 v412; // r10
  unsigned __int64 v413; // rsi
  unsigned __int64 v414; // rsi
  unsigned __int64 v415; // rsi
  __int128 v416; // rt0
  __int64 v417; // rsi
  __int128 v418; // rt0
  int v419; // edx
  int v420; // r10d
  unsigned __int64 v421; // r8
  __int128 v422; // rt0
  __int128 v423; // rt0
  unsigned __int64 v424; // r8
  unsigned __int64 v425; // r8
  unsigned __int64 v426; // r9
  unsigned __int64 v427; // r9
  unsigned __int64 v428; // r8
  unsigned __int64 v429; // r8
  unsigned __int64 v430; // r9
  unsigned __int64 v431; // r9
  int v432; // edx
  int v433; // r8d
  unsigned __int128 v434; // kr1A0_16
  __int128 v435; // rt0
  int v436; // edx
  int v437; // r8d
  unsigned __int64 v438; // r10
  __int128 v439; // rt0
  __int128 v440; // rt0
  int v441; // edx
  int v442; // r8d
  __int128 v443; // rt0
  __int128 v444; // rt0
  __int128 v445; // rt0
  __int128 v446; // rt0
  int v447; // edx
  int v448; // r8d
  __int128 v449; // rt0
  int v450; // edx
  int v451; // r8d
  unsigned __int64 v452; // r9
  unsigned __int64 v453; // rsi
  unsigned __int64 v454; // rsi
  unsigned __int64 v455; // rsi
  int v456; // edx
  int v457; // r8d
  unsigned __int64 v458; // r10
  __int64 v459; // r14
  __int128 v460; // rt0
  unsigned __int64 v461; // r14
  __int128 v462; // rt0
  int v463; // edx
  int v464; // r9d
  unsigned __int128 v465; // kr1D0_16
  __int128 v466; // rt0
  int v467; // edx
  int v468; // r8d
  unsigned __int64 v469; // r10
  __int128 v470; // rt0
  unsigned __int64 v471; // r15
  __int128 v472; // rt0
  unsigned __int64 v473; // r14
  __int128 v474; // rt0
  __int128 v475; // rt0
  int v476; // edx
  int v477; // r8d
  __int64 v478; // r9
  __int128 v479; // rt0
  __int128 v480; // rt0
  int v481; // edx
  int v482; // r10d
  unsigned __int64 v483; // r8
  __int128 v484; // rt0
  __int128 v485; // rt0
  unsigned __int64 v486; // r14
  unsigned __int64 v487; // r8
  unsigned __int64 v488; // r8
  unsigned __int64 v489; // r9
  unsigned __int64 v490; // r9
  unsigned __int64 v491; // r8
  unsigned __int64 v492; // r8
  unsigned __int64 v493; // r9
  unsigned __int64 v494; // r9
  __int128 v495; // rt0
  int v496; // edx
  int v497; // r8d
  __int128 v498; // rt0
  __int128 v499; // rt0
  __int128 v500; // rt0
  __int128 v501; // rt0
  __int128 v502; // rt0
  int v503; // edx
  int v504; // r8d
  __int64 v505; // r14
  __int128 v506; // rt0
  __int128 v507; // rt0
  __int128 v508; // rt0
  __int64 v509; // r14
  unsigned __int64 v510; // r15
  unsigned __int64 v511; // r15
  unsigned __int64 v512; // r14
  unsigned __int64 v513; // r14
  unsigned __int64 v514; // r8
  __int128 v515; // rt0
  unsigned __int64 v516; // r15
  unsigned __int64 v517; // r15
  unsigned __int64 v518; // r14
  unsigned __int64 v519; // r14
  unsigned __int64 v520; // r8
  int v521; // edx
  int v522; // r8d
  unsigned __int64 v523; // r9
  __int64 v524; // r10
  __int128 v525; // rt0
  __int64 v526; // rsi
  unsigned __int64 v527; // rsi
  unsigned __int64 v528; // rsi
  unsigned __int64 v529; // rsi
  __int128 v530; // rt0
  int v531; // edx
  unsigned __int64 v532; // r8
  __int64 v533; // r10
  unsigned __int64 v534; // r15
  unsigned __int64 v535; // r15
  unsigned __int64 v536; // r14
  unsigned __int64 v537; // r14
  unsigned __int64 v538; // r9
  __int128 v539; // rt0
  __int64 v540; // r14
  __int128 v541; // rt0
  unsigned __int64 v542; // r15
  unsigned __int64 v543; // r15
  unsigned __int64 v544; // r14
  unsigned __int64 v545; // r14
  unsigned __int64 v546; // r9
  __int128 v547; // rt0
  unsigned __int128 v548; // rax
  __int64 v549; // rbp
  __int64 v550; // r13
  int v551; // r12d
  int v552; // edx
  unsigned __int64 v553; // r8
  int v554; // r9d
  unsigned __int64 v555; // r11
  unsigned __int64 v556; // rbx
  __int64 v557; // r11
  __int128 v558; // rt0
  int v559; // ecx
  unsigned __int64 v560; // r10
  int v561; // r11d
  unsigned __int64 v562; // r9
  __int64 v563; // rbx
  __int128 v564; // rt0
  __int128 v565; // rt0
  __int128 v566; // rt0
  unsigned __int64 v567; // r10
  unsigned __int64 v568; // r10
  unsigned __int64 v569; // r10
  unsigned __int64 v570; // r9
  unsigned __int64 v571; // r9
  unsigned __int64 v572; // r9
  unsigned __int64 v573; // r10
  unsigned __int64 v574; // r10
  unsigned __int64 v575; // r10
  unsigned __int64 v576; // r9
  unsigned __int64 v577; // r9
  unsigned __int64 v578; // r9
  __int128 v579; // rt0
  __int128 v580; // rt0
  int v581; // edx
  unsigned __int64 v582; // rcx
  int v583; // ebx
  int v584; // edx
  unsigned __int64 v585; // r10
  int v586; // r11d
  __int64 v587; // rbx
  unsigned __int64 v588; // r10
  unsigned __int64 v589; // r10
  unsigned __int64 v590; // r10
  unsigned __int64 v592; // [rsp-4h] [rbp-38h]

  v592 = __PAIR64__(a1, v1);
  DWORD2(v2) = 1330265132;
  *(_QWORD *)&v2 = 0;
  v3 = 0x316C04CB1F4765DDLL;
  v4 = 0;
  for ( i = 0; ; DWORD2(v2) ^= i )
  {
    if ( DWORD2(v2) == -750524388 )
    {
      *((_QWORD *)&v8 + 1) = v4;
      *(_QWORD *)&v8 = v2;
      v6 = v8 >> 39;
      *((_QWORD *)&v8 + 1) = v2;
      *(_QWORD *)&v8 = v4;
      *(_QWORD *)&v2 = v8 >> 39;
      i = 211589722;
      goto LABEL_16;
    }
    if ( DWORD2(v2) == -456768406 )
    {
      v7 = __CFADD__((_QWORD)v2, 0xDA93DB814EE5820ELL);
      *(_QWORD *)&v2 = v2 - 0x256C247EB11A7DF2LL;
      v4 += v7 + 0x710D6DD6D35FD5C1LL;
      i = 466392698;
      continue;
    }
    if ( DWORD2(v2) != -270060854 )
      break;
    v6 = _byteswap_uint64(v2);
    i = -1446800193;
    *(_QWORD *)&v2 = _byteswap_uint64(v4);
LABEL_16:
    v4 = v6;
LABEL_17:
    ;
  }
  switch ( DWORD2(v2) )
  {
    case 0xFF0AD210:
      v7 = __CFADD__((_QWORD)v2, 0xD543143876956A70LL);
      *(_QWORD *)&v2 = v2 - 0x2ABCEBC7896A9590LL;
      v4 += v7 + 0x316C04CB1F4765DDLL;
      i = 284025050;
      goto LABEL_17;
    case 0x4624A675:
      v7 = __CFADD__((_QWORD)v2, 0xD701D7C8B903B2AELL);
      *(_QWORD *)&v2 = v2 - 0x28FE283746FC4D52LL;
      v4 += v7 + 0x33AAE2EF65AFA888LL;
      i = -1788391831;
      goto LABEL_17;
    case 0x4F4A3C2C:
      i = -1416857530;
      *(_QWORD *)&v2 = 0xC78060E04AB459DELL;
      v4 = 0xD1B740714C81C288LL;
      goto LABEL_17;
  }
  if ( DWORD2(v2) != -539004346 )
    goto LABEL_17;
  v9 = -663934020;
  v10 = 0;
  v11 = 0xF0F0F0F0F0F0F0FLL;
  v12 = 0x3333333333333333LL;
  while ( 1 )
  {
    switch ( v9 )
    {
      case -2033816857:
        v276 = 649580563;
        v277 = 0;
        k = 0u;
        while ( 1 )
        {
          if ( v276 == -1805831916 )
          {
            v278 = k >> 50;
            *(_QWORD *)&v281 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v281 + 1) = k;
            *(_QWORD *)&k = v281 >> 50;
            v277 = 476109357;
            goto LABEL_656;
          }
          if ( v276 == -1627456034 )
            break;
          switch ( v276 )
          {
            case -930441097:
              v278 = k >> 37;
              *(_QWORD *)&v279 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v279 + 1) = k;
              *(_QWORD *)&k = v279 >> 37;
              v277 = -116304786;
LABEL_656:
              *((_QWORD *)&k + 1) = v278;
              break;
            case -334006550:
              k += __PAIR128__(0x468D8E79A6957270LL, 0x171A52646730B354LL);
              v277 = 2018134014;
              break;
            case 649580563:
              v277 = -297973660;
              *(_QWORD *)&k = 0x9600196D24C35D3DLL;
              *((_QWORD *)&k + 1) = 0xFA25CF9C0684C670LL;
              break;
            case 832293913:
              k += __PAIR128__(0x39318402BAF39641LL, 0xFAE1EF6B76C0EB4ALL);
              v277 = -1352322617;
              break;
            case -2009208007:
              v282 = 695213235;
              v23 = 0;
              v283 = 0;
              for ( j = 0; ; j = v3 )
              {
                switch ( v282 )
                {
                  case -1808818493:
                    *((_QWORD *)&v293 + 1) = v23;
                    *(_QWORD *)&v293 = j;
                    v3 = v293 >> 42;
                    *((_QWORD *)&v293 + 1) = j;
                    *(_QWORD *)&v293 = v23;
                    v292 = v293 >> 42;
                    v283 = -814861171;
                    break;
                  case 269027689:
                    v7 = __CFADD__(v23, 0x94871A64338CFC32LL);
                    v23 -= 0x6B78E59BCC7303CELL;
                    j = v7 + j - 0x4C950634ABBB0F32LL;
                    v283 = 202564709;
LABEL_679:
                    v284 = v23;
                    v3 = j;
                    goto LABEL_684;
                  case 280025319:
                    *((_QWORD *)&v285 + 1) = j;
                    *(_QWORD *)&v285 = v23;
                    v3 = v285 >> 62;
                    *((_QWORD *)&v285 + 1) = v23;
                    *(_QWORD *)&v285 = j;
                    v283 = 12177806;
                    v284 = v285 >> 62;
                    goto LABEL_684;
                  default:
                    v3 = _byteswap_uint64(v23);
                    v284 = _byteswap_uint64(j);
                    switch ( v282 )
                    {
                      case 471592204:
                        v283 = 751076690;
                        goto LABEL_684;
                      case 695213235:
                        v283 = 1266339879;
                        v284 = 0x3D08BE10587D3F51LL;
                        v3 = 0xB21AE9618ADD1465LL;
                        goto LABEL_684;
                      case 733858232:
                        v286 = _byteswap_uint64(v23);
                        v287 = v11 & (v286 >> 4) | (16 * (v11 & v286));
                        v3 = ((((v12 & (v287 >> 2)) + 4 * (v12 & v287)) >> 1) & 0x5555555555555555LL)
                           + 2 * (((v12 & (v287 >> 2)) + 4 * (v12 & v287)) & 0x5555555555555555LL);
                        v288 = _byteswap_uint64(j);
                        v289 = v11 & (v288 >> 4) | (16 * (v11 & v288));
                        v290 = (v12 & (v289 >> 2)) + 4 * (v12 & v289);
                        v284 = ((v290 >> 1) & 0x5555555555555555LL) + 2 * (v290 & 0x5555555555555555LL);
                        v283 = 2099168068;
                        goto LABEL_684;
                      case 819947614:
                        j = (__PAIR128__(j, v23) + __PAIR128__(0x2447611EDF4ED25CLL, 0x6F8AAF9BEE6B765CLL)) >> 64;
                        v23 += 0x6F8AAF9BEE6B765CLL;
                        v283 = 1500981565;
                        goto LABEL_679;
                    }
                    if ( v282 != 1453525756 )
                    {
                      switch ( v282 )
                      {
                        case 1531030094:
                          v283 = 671715116;
                          goto LABEL_684;
                        case 1644874900:
                          j = (__PAIR128__(j, v23) + __PAIR128__(0x286F559318B12B0DLL, 0x3EABB112294C2EE3LL)) >> 64;
                          v23 += 0x3EABB112294C2EE3LL;
                          v283 = 1236731180;
                          break;
                        case 1772634467:
                          j = (__PAIR128__(j, v23) + __PAIR128__(0x6E3FD6D4A8915835LL, 0x1017CA1E888656FELL)) >> 64;
                          v23 += 0x1017CA1E888656FELL;
                          v283 = -41427040;
                          break;
                        case 1934108002:
                          v37 = 1016467137;
                          goto LABEL_1412;
                      }
                      goto LABEL_679;
                    }
                    *((_QWORD *)&v291 + 1) = v23;
                    *(_QWORD *)&v291 = j;
                    v3 = v291 >> 56;
                    *((_QWORD *)&v291 + 1) = j;
                    *(_QWORD *)&v291 = v23;
                    v292 = v291 >> 56;
                    v283 = 1175704091;
                    break;
                }
                v284 = v292;
LABEL_684:
                v282 ^= v283;
                v23 = v284;
              }
              break;
          }
          v276 ^= v277;
        }
        *(_QWORD *)&v280 = *((_QWORD *)&k + 1);
        *((_QWORD *)&v280 + 1) = k;
        v278 = v280 >> 26;
        *(_QWORD *)&k = k >> 26;
        v277 = 1927908148;
        goto LABEL_656;
      case -1876681801:
        v496 = -1737238759;
        v497 = 0;
        k = 0u;
        while ( v496 != -1964152578 )
        {
          switch ( v496 )
          {
            case -1799306988:
              k += __PAIR128__(0x654CFF3F858BCEEELL, 0xC3C5E3D25641D6A7LL);
              v497 = 1338300240;
              break;
            case -1737238759:
              v497 = 213063181;
              *(_QWORD *)&k = 0x902C2DA7589C6BA7LL;
              *((_QWORD *)&k + 1) = 0xDBCA5A1B88015845LL;
              break;
            case -1195190477:
              *(_QWORD *)&v498 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v498 + 1) = k;
              v3 = v498 >> 6;
              *(_QWORD *)&k = k >> 6;
              v497 = 1523526343;
LABEL_1316:
              *((_QWORD *)&k + 1) = v3;
              break;
            case -620489148:
              *(_QWORD *)&v502 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v502 + 1) = k;
              v3 = v502 >> 7;
              *(_QWORD *)&k = k >> 7;
              v497 = -1686834594;
              goto LABEL_1316;
            case -502399500:
              k += __PAIR128__(0x72E8C26141B2DBC4LL, 0xC6983D00086B54C9LL);
              v497 = -1221012758;
              break;
            case -471748675:
              k += 0x846ED87683654BFBLL;
              *((_QWORD *)&k + 1) -= 0x3918A72CE1BE62A2LL;
              v497 = 1762445123;
              break;
            case 293586654:
              v3 = k >> 27;
              *(_QWORD *)&v501 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v501 + 1) = k;
              *(_QWORD *)&k = v501 >> 27;
              v497 = -1848284487;
              goto LABEL_1316;
            case 1081140250:
              k += __PAIR128__(0x1B7E8756A0AAB9C4LL, 0x56AE56E754841CC9LL);
              v497 = -122539223;
              break;
            case 1429548830:
              v3 = k >> 59;
              *(_QWORD *)&v500 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v500 + 1) = k;
              *(_QWORD *)&k = v500 >> 59;
              v497 = -1227587421;
              goto LABEL_1316;
            case -2136298393:
              v503 = 532622541;
              v23 = 0;
              v504 = 0;
              j = 0;
              while ( 1 )
              {
                switch ( v503 )
                {
                  case -2110906546:
                    *((_QWORD *)&v515 + 1) = v23;
                    *(_QWORD *)&v515 = j;
                    v3 = v515 >> 22;
                    *(_QWORD *)&v515 = v23;
                    *((_QWORD *)&v515 + 1) = j;
                    v23 = v515 >> 22;
                    v504 = 2031633877;
                    goto LABEL_1351;
                  case -2101206746:
                    v516 = _byteswap_uint64(v23);
                    v517 = v11 & (v516 >> 4) | (16 * (v11 & v516));
                    v3 = ((((v12 & (v517 >> 2)) + 4 * (v12 & v517)) >> 1) & 0x5555555555555555LL)
                       + 2 * (((v12 & (v517 >> 2)) + 4 * (v12 & v517)) & 0x5555555555555555LL);
                    v518 = _byteswap_uint64(j);
                    v519 = v11 & (v518 >> 4) | (16 * (v11 & v518));
                    v520 = (v12 & (v519 >> 2)) + 4 * (v12 & v519);
                    v23 = ((v520 >> 1) & 0x5555555555555555LL) + 2 * (v520 & 0x5555555555555555LL);
                    v504 = 912019394;
                    goto LABEL_1351;
                  case -1911350704:
                    v505 = (__PAIR128__(j, v23) + 0x7214D6F52449178DLL) >> 64;
                    v23 += 0x7214D6F52449178DLL;
                    j = v505 - 0x7B50E8742F6CD5D8LL;
                    v504 = 406681841;
                    goto LABEL_1352;
                  case -1264685340:
                    v7 = __CFADD__(v23, 0xBC3D166CF65C09E7LL);
                    v23 -= 0x43C2E99309A3F619LL;
                    j += v7 + 0x5268F833A6644B65LL;
                    v504 = 2092980871;
                    goto LABEL_1352;
                  case -1077239624:
                    v510 = _byteswap_uint64(v23);
                    v511 = v11 & (v510 >> 4) | (16 * (v11 & v510));
                    v3 = ((((v12 & (v511 >> 2)) + 4 * (v12 & v511)) >> 1) & 0x5555555555555555LL)
                       + 2 * (((v12 & (v511 >> 2)) + 4 * (v12 & v511)) & 0x5555555555555555LL);
                    v512 = _byteswap_uint64(j);
                    v513 = v11 & (v512 >> 4) | (16 * (v11 & v512));
                    v514 = (v12 & (v513 >> 2)) + 4 * (v12 & v513);
                    v23 = ((v514 >> 1) & 0x5555555555555555LL) + 2 * (v514 & 0x5555555555555555LL);
                    v504 = 1038401526;
                    goto LABEL_1351;
                  case -968231067:
                    v7 = __CFADD__(v23, 0xB2AC1C17CEDED53ELL);
                    v23 -= 0x4D53E3E831212AC2LL;
                    j = v7 + j - 0x378A78959AEE6CA8LL;
                    v504 = 1213918517;
                    goto LABEL_1352;
                }
                if ( v503 == -933350301 )
                  break;
                switch ( v503 )
                {
                  case -905306442:
                    v509 = (__PAIR128__(j, v23) + 0x664E09ADCDBC21D7LL) >> 64;
                    v23 += 0x664E09ADCDBC21D7LL;
                    j = v509 - 0x5BDEDA44D94E254CLL;
                    v504 = 205777363;
                    break;
                  case -80323941:
                    *((_QWORD *)&v506 + 1) = j;
                    *(_QWORD *)&v506 = v23;
                    v3 = v506 >> 7;
                    *((_QWORD *)&v506 + 1) = v23;
                    *(_QWORD *)&v506 = j;
                    v23 = v506 >> 7;
                    v504 = -1652997204;
                    goto LABEL_1351;
                  case 387695993:
                    *((_QWORD *)&v508 + 1) = j;
                    *(_QWORD *)&v508 = v23;
                    v3 = v508 >> 24;
                    *((_QWORD *)&v508 + 1) = v23;
                    *(_QWORD *)&v508 = j;
                    v23 = v508 >> 24;
                    v504 = 1305301116;
                    goto LABEL_1351;
                  case 532622541:
                    v504 = -1652748821;
                    v23 = 0xE23DB2ECD20EB893LL;
                    j = 0x61D40A0DCAF10A45LL;
                    break;
                  case 769788916:
                    v7 = __CFADD__(v23, 0xC5BA4F6F6A32422ELL);
                    v23 -= 0x3A45B09095CDBDD2LL;
                    j = v7 + j - 0x53C3ACC4BA4523FLL;
                    v504 = 989449869;
                    break;
                  case 986927881:
                    v7 = __CFADD__(v23, 0x84F87EA77335052DLL);
                    v23 -= 0x7B0781588CCAFAD3LL;
                    j = v7 + j - 0x7D3356B568066A09LL;
                    v504 = 389110013;
                    break;
                  case 1524012293:
                    v7 = __CFADD__(v23, 0xA5F573549DD765F6LL);
                    v23 -= 0x5A0A8CAB62289A0ALL;
                    j += v7 + 0x41D437A29C94D715LL;
                    v504 = -451136067;
                    break;
                  case 1716459831:
                    *((_QWORD *)&v507 + 1) = j;
                    *(_QWORD *)&v507 = v23;
                    v3 = v507 >> 49;
                    *((_QWORD *)&v507 + 1) = v23;
                    *(_QWORD *)&v507 = j;
                    v23 = v507 >> 49;
                    v504 = -1404762239;
                    goto LABEL_1351;
                  case -1775344991:
                    v37 = 2290256358LL;
                    goto LABEL_1412;
                }
LABEL_1352:
                v503 ^= v504;
              }
              v3 = _byteswap_uint64(v23);
              v504 = -225613974;
              v23 = _byteswap_uint64(j);
LABEL_1351:
              j = v3;
              goto LABEL_1352;
          }
          v496 ^= v497;
        }
        *(_QWORD *)&v499 = *((_QWORD *)&k + 1);
        *((_QWORD *)&v499 + 1) = k;
        v3 = v499 >> 41;
        *(_QWORD *)&k = k >> 41;
        v497 = -1684885984;
        goto LABEL_1316;
      case -1865239933:
        v375 = -441498879;
        v3 = 0;
        k = 0u;
        while ( v375 != -2101411225 )
        {
          if ( v375 == -996439850 )
          {
            *(_QWORD *)&k = _byteswap_uint64(k);
            *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
            *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
            v376 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
            v378 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
            v379 = v11 & (v378 >> 4) | (16 * (v11 & v378));
            v380 = (v12 & (v379 >> 2)) + 4 * (v12 & v379);
            v377 = ((v380 >> 1) & 0x5555555555555555LL) + 2 * (v380 & 0x5555555555555555LL);
            v3 = 2930889577LL;
            goto LABEL_934;
          }
          v376 = _byteswap_uint64(k);
          v377 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
          switch ( v375 )
          {
            case -773602500:
              v3 = 360205290;
              break;
            case -441498879:
              v3 = 877428797;
              v377 = 0x4C943DEF400F599FLL;
              v376 = 0x43878B197A20CC7CLL;
              break;
            case -299859831:
              k += 0xE4E0A59989156813LL;
              *((_QWORD *)&k + 1) -= 0x4D1F773D6304AE5CLL;
              v3 = 2995017699LL;
              goto LABEL_927;
            case -58092696:
              k += 0xDDFF269E1C16C3uLL;
              *((_QWORD *)&k + 1) -= 0x1499E4CB458B0C31LL;
              v3 = 3592882700LL;
              goto LABEL_927;
            case 236705770:
              *(_QWORD *)&v381 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v381 + 1) = k;
              v376 = v381 >> 9;
              v3 = 2359612813LL;
              v377 = k >> 9;
              break;
            case 1554306922:
              v376 = k >> 6;
              *(_QWORD *)&v383 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v383 + 1) = k;
              v382 = v383 >> 6;
              v3 = 1388249216;
LABEL_933:
              v377 = v382;
              break;
            case 1554779124:
              k ^= __PAIR128__(0x760968CD468779F3LL, 0x5C5AA81D1D348B15LL);
              v3 = 2686818460LL;
LABEL_927:
              v376 = *((_QWORD *)&k + 1);
              v377 = k;
              break;
            case 1781160895:
              v3 = 278263013;
              break;
            case 2059382618:
              v3 = 2493460435LL;
              break;
            case 716085604:
              v385 = -407539181;
              v23 = 0;
              v386 = 0;
              j = 0;
              while ( 1 )
              {
                switch ( v385 )
                {
                  case -1608682262:
                    *((_QWORD *)&v388 + 1) = j;
                    *(_QWORD *)&v388 = v23;
                    v3 = v388 >> 14;
                    *((_QWORD *)&v388 + 1) = v23;
                    *(_QWORD *)&v388 = j;
                    v23 = v388 >> 14;
                    v386 = -928304559;
                    j = v3;
                    break;
                  case -1514420049:
                    v23 ^= 0x472F7882C10FFF65uLL;
                    j ^= 0x5176D48AD1AE15C5uLL;
                    v386 = -597521978;
                    break;
                  case -1511546438:
                    v23 ^= 0x8CD1B94FAE5D4065LL;
                    j ^= 0x19FE920491869F54uLL;
                    v386 = 100324688;
                    break;
                  case -644813706:
                    v7 = __CFADD__(v23, 0xB3260371E638AF3BLL);
                    v23 -= 0x4CD9FC8E19C750C5LL;
                    j = v7 + j - 0x236F7673AD718928LL;
                    v386 = 149122356;
                    break;
                  case -407539181:
                    v386 = 1112724393;
                    v23 = 0x7B9CA1B3048039FELL;
                    j = 0xD8F56ED521057D49LL;
                    break;
                  case 1756776123:
                    v387 = (__PAIR128__(j, v23) + 0x7E56C60FE61F6AB2LL) >> 64;
                    v23 += 0x7E56C60FE61F6AB2LL;
                    j = v387 - 0x34BFB33F5DD3ACA8LL;
                    v386 = -854749676;
                    break;
                  case 2044281193:
                    v23 ^= 0x4F334E3301AE8360uLL;
                    j ^= 0x21A18B0C7AC1622CuLL;
                    v386 = -1605784289;
                    break;
                  case -780959422:
                    v37 = 3401386431LL;
                    goto LABEL_1412;
                }
                v385 ^= v386;
              }
            default:
              goto LABEL_927;
          }
LABEL_934:
          v375 ^= v3;
          *(_QWORD *)&k = v377;
          *((_QWORD *)&k + 1) = v376;
        }
        v376 = k >> 33;
        *(_QWORD *)&v384 = *((_QWORD *)&k + 1);
        *((_QWORD *)&v384 + 1) = k;
        v382 = v384 >> 33;
        v3 = 3725789587LL;
        goto LABEL_933;
      case -1831920538:
        v147 = 907322135;
        v148 = 0;
        for ( k = 0u; ; *((_QWORD *)&k + 1) = v149 )
        {
          v149 = _byteswap_uint64(k);
          v150 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
          if ( v147 == -1822512278 )
          {
            v148 = 1759370947;
            goto LABEL_358;
          }
          if ( v147 == -1514675902 )
          {
            k += __PAIR128__(0x286D37E2FAFB41DCLL, 0x7E3C211AB4709D7ALL);
            v148 = -1475913522;
            goto LABEL_353;
          }
          if ( v147 == -1131496000 )
            break;
          if ( v147 == -257261239 )
          {
            *(_QWORD *)&v151 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v151 + 1) = k;
            v149 = v151 >> 33;
            v148 = 1676945955;
            v150 = k >> 33;
            goto LABEL_358;
          }
          if ( v147 == -102922888 )
          {
            v148 = 158794801;
          }
          else
          {
            if ( v147 == -75270743 )
            {
              k ^= __PAIR128__(0x3F168B9B0193B97DLL, 0x6EDD5EAE01A8B682LL);
              v148 = -1777377404;
LABEL_353:
              v149 = *((_QWORD *)&k + 1);
              v150 = k;
              goto LABEL_358;
            }
            if ( v147 == 907322135 )
            {
              v148 = -1969611049;
              v150 = 0xC2DA9AE480FC6282LL;
              v149 = 0x58208B3887ADEAC4LL;
              goto LABEL_358;
            }
            if ( v147 == 1433617950 )
            {
              v148 = -255547556;
            }
            else
            {
              if ( v147 == 1837902381 )
              {
                v149 = k >> 40;
                *(_QWORD *)&v154 = *((_QWORD *)&k + 1);
                *((_QWORD *)&v154 + 1) = k;
                v152 = v154 >> 40;
                v148 = 468951646;
              }
              else
              {
                if ( v147 != 1988069491 )
                {
                  if ( v147 == 229685644 )
                  {
                    v155 = 977612238;
                    v23 = 0;
                    v156 = 0;
                    for ( j = 0; ; j = v3 )
                    {
                      if ( v155 == -2041218726 )
                      {
                        v7 = __CFADD__(v23, 0xCCE48879C9F5EA5ELL);
                        v23 -= 0x331B7786360A15A2LL;
                        j += v7 + 0x2D32A6038A3158C9LL;
                        v156 = -1257472386;
                        goto LABEL_372;
                      }
                      v3 = _byteswap_uint64(v23);
                      v157 = _byteswap_uint64(j);
                      switch ( v155 )
                      {
                        case -881743309:
                          v156 = 915722399;
                          break;
                        case -841973477:
                          *((_QWORD *)&v159 + 1) = v23;
                          *(_QWORD *)&v159 = j;
                          v3 = v159 >> 55;
                          *((_QWORD *)&v159 + 1) = j;
                          *(_QWORD *)&v159 = v23;
                          v156 = 1852283990;
                          v157 = v159 >> 55;
                          break;
                        case -35292500:
                          v156 = 808844215;
                          break;
                        case 72628681:
                          v7 = __CFADD__(v23, 0xAEF57ABB4575E78ELL);
                          v23 -= 0x510A8544BA8A1872LL;
                          j = v7 + j - 0x172C5859D6F3D9B8LL;
                          v156 = -2113847149;
                          goto LABEL_372;
                        case 861472548:
                          v158 = (__PAIR128__(j, v23) + 0x244CD3DAA78E1BA6LL) >> 64;
                          v23 += 0x244CD3DAA78E1BA6LL;
                          j = v158 - 0x6CBC5577D083A194LL;
                          v156 = -131551977;
LABEL_372:
                          v157 = v23;
                          v3 = j;
                          break;
                        case 977612238:
                          v156 = 1041306631;
                          v157 = 0x5F5928F04906126ELL;
                          v3 = 0x56C607CE1D462281LL;
                          break;
                        case -1548280499:
                          v37 = 1671274165;
                          goto LABEL_1412;
                        default:
                          goto LABEL_372;
                      }
                      v155 ^= v156;
                      v23 = v157;
                    }
                  }
                  goto LABEL_353;
                }
                v149 = k >> 25;
                *(_QWORD *)&v153 = *((_QWORD *)&k + 1);
                *((_QWORD *)&v153 + 1) = k;
                v152 = v153 >> 25;
                v148 = 588041837;
              }
              v150 = v152;
            }
          }
LABEL_358:
          v147 ^= v148;
          *(_QWORD *)&k = v150;
        }
        k += __PAIR128__(0x2B3542ED6A261B5ELL, 0xB2299DC292C6C87DLL);
        v148 = 1163081912;
        goto LABEL_353;
      case -1734369893:
        v258 = 1287548686;
        v259 = 0;
        k = 0u;
        while ( 1 )
        {
          v260 = _byteswap_uint64(k);
          v3 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
          switch ( v258 )
          {
            case -1754594310:
              v268 = v11 & (v260 >> 4) | (16 * (v11 & v260));
              *((_QWORD *)&k + 1) = ((((v12 & (v268 >> 2)) + 4 * (v12 & v268)) >> 1) & 0x5555555555555555LL)
                                  + 2 * (((v12 & (v268 >> 2)) + 4 * (v12 & v268)) & 0x5555555555555555LL);
              v269 = v11 & (v3 >> 4) | (16 * (v11 & v3));
              *(_QWORD *)&k = (v12 & (v269 >> 2)) + 4 * (v12 & v269);
              *(_QWORD *)&k = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
              v259 = 1802197025;
              break;
            case -1269158595:
              k += __PAIR128__(0x12A0C350C988C6FALL, 0x2F825CFC563FF5C5LL);
              v259 = -1165255324;
              break;
            case -499070421:
              k += __PAIR128__(0x55437E215CA6CF4ELL, 0x4D28B1F781C33152LL);
              v259 = 160391336;
              break;
            case -338711933:
              *(_QWORD *)&v262 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v262 + 1) = k;
              v261 = v262 >> 3;
              *(_QWORD *)&k = k >> 3;
              v259 = -405570114;
LABEL_617:
              *((_QWORD *)&k + 1) = v261;
              break;
            case -135115795:
              k += __PAIR128__(0x2B163369AB1883B7LL, 0x32C6A39A3F18ECA4LL);
              v259 = -1909059518;
              break;
            case -67085349:
              v261 = k >> 41;
              *(_QWORD *)&v263 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v263 + 1) = k;
              *(_QWORD *)&k = v263 >> 41;
              v259 = 1213888230;
              goto LABEL_617;
            case 94905117:
              *(_QWORD *)&v267 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v267 + 1) = k;
              v261 = v267 >> 37;
              *(_QWORD *)&k = k >> 37;
              v259 = 1706636357;
              goto LABEL_617;
            case 203216701:
              k ^= __PAIR128__(0x2CD6B85BA402185LL, 0x90252EB944990C3ALL);
              v259 = 162853920;
              break;
            case 248623193:
              k += 0x26C28FFBAED14457uLL;
              *((_QWORD *)&k + 1) -= 0x7FF65767ED059764LL;
              v259 = -115082316;
              break;
            case 1287548686:
              v259 = -606769932;
              *(_QWORD *)&k = 0x1B3D8319CF79FA67LL;
              *((_QWORD *)&k + 1) = 0xBE4B8E4A19F43807LL;
              break;
            case 1611732824:
              v264 = v11 & (v260 >> 4) | (16 * (v11 & v260));
              *((_QWORD *)&k + 1) = ((((v12 & (v264 >> 2)) + 4 * (v12 & v264)) >> 1) & 0x5555555555555555LL)
                                  + 2 * (((v12 & (v264 >> 2)) + 4 * (v12 & v264)) & 0x5555555555555555LL);
              v265 = v11 & (v3 >> 4) | (16 * (v11 & v3));
              *(_QWORD *)&k = (v12 & (v265 >> 2)) + 4 * (v12 & v265);
              *(_QWORD *)&k = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
              v259 = -106290997;
              break;
            case 2042911663:
              *(_QWORD *)&v266 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v266 + 1) = k;
              v261 = v266 >> 54;
              *(_QWORD *)&k = k >> 54;
              v259 = -1685810812;
              goto LABEL_617;
            case -1715783789:
              v270 = 1149618863;
              v23 = 0;
              v271 = 0;
              j = 0;
              while ( 1 )
              {
                switch ( v270 )
                {
                  case -2142865424:
                    v7 = __CFADD__(v23, 0xE29AE53E4F8CF9F0LL);
                    v23 -= 0x1D651AC1B0730610LL;
                    j = v7 + j - 0x5C1705600FDC73ALL;
                    v271 = -1250032824;
                    break;
                  case -287504339:
                    v7 = __CFADD__(v23, 0x8556537D81F5305FLL);
                    v23 -= 0x7AA9AC827E0ACFA1LL;
                    j += v7 + 0xCD0A6491F762A32LL;
                    v271 = -1937097818;
                    break;
                  case 442694292:
                    v7 = __CFADD__(v23, 0xE0F2649E0CE8C06DLL);
                    v23 -= 0x1F0D9B61F3173F93LL;
                    j = v7 + j - 0x5F5DBE4A214811F0LL;
                    v271 = 1106220635;
                    break;
                  case 892892344:
                    j = (__PAIR128__(j, v23) + __PAIR128__(0x5968D29F897907F8LL, 0x61687E0E4B8912ALL)) >> 64;
                    v23 += 0x61687E0E4B8912ALL;
                    v271 = 2035216356;
                    break;
                  case 1149618863:
                    v271 = -993804961;
                    v23 = 0x8C9ADCEF988A7D3ALL;
                    j = 0xD15742C4A7BBAE6FLL;
                    break;
                  case 1282841436:
                    v23 ^= 0x77DF5081C5882CFuLL;
                    j ^= 0x19D2E788575569E4uLL;
                    v271 = -1565813903;
                    break;
                  case 1649881995:
                    v272 = _byteswap_uint64(v23);
                    v273 = v11 & (v272 >> 4) | (16 * (v11 & v272));
                    v3 = ((((v12 & (v273 >> 2)) + 4 * (v12 & v273)) >> 1) & 0x5555555555555555LL)
                       + 2 * (((v12 & (v273 >> 2)) + 4 * (v12 & v273)) & 0x5555555555555555LL);
                    v274 = _byteswap_uint64(j);
                    v275 = v11 & (v274 >> 4) | (16 * (v11 & v274));
                    v23 = ((((v12 & (v275 >> 2)) + 4 * (v12 & v275)) >> 1) & 0x5555555555555555LL)
                        + 2 * (((v12 & (v275 >> 2)) + 4 * (v12 & v275)) & 0x5555555555555555LL);
                    v271 = 2016790815;
                    j = v3;
                    break;
                  case 1535995087:
                    v37 = 870459488;
                    goto LABEL_1412;
                }
                v270 ^= v271;
              }
          }
          v258 ^= v259;
        }
      case -1417824773:
        v13 = 595416519;
        v14 = 0;
        for ( k = 0u; ; *((_QWORD *)&k + 1) = v16 )
        {
          switch ( v13 )
          {
            case -1021891878:
              k += __PAIR128__(0x445B75BC2E60F4B2LL, 0xC745A988BDFDE761LL);
              v14 = 174555283;
              break;
            case -39866790:
              k ^= __PAIR128__(0x3DFFA1EFC11E00CCLL, 0x2D36C67568BD5755LL);
              v14 = -910847517;
              break;
            case 64306890:
              v16 = k >> 12;
              *(_QWORD *)&v21 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v21 + 1) = k;
              v14 = -1061022704;
              v17 = v21 >> 12;
              goto LABEL_65;
            case 595416519:
              v14 = 125150163;
              v17 = 0xBBABEF389C778968LL;
              v16 = 0x163823D5D39EBDA8LL;
              goto LABEL_65;
            default:
              v16 = _byteswap_uint64(k);
              v17 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
              switch ( v13 )
              {
                case 604567060:
                  v14 = 2110725328;
                  goto LABEL_65;
                case 875184057:
                  v18 = v11 & (v16 >> 4) | (16 * (v11 & v16));
                  v16 = ((((v12 & (v18 >> 2)) + 4 * (v12 & v18)) >> 1) & 0x5555555555555555LL)
                      + 2 * (((v12 & (v18 >> 2)) + 4 * (v12 & v18)) & 0x5555555555555555LL);
                  v19 = v11 & (v17 >> 4) | (16 * (v11 & v17));
                  v17 = ((((v12 & (v19 >> 2)) + 4 * (v12 & v19)) >> 1) & 0x5555555555555555LL)
                      + 2 * (((v12 & (v19 >> 2)) + 4 * (v12 & v19)) & 0x5555555555555555LL);
                  v14 = 939458931;
                  goto LABEL_65;
                case 1506273988:
                  *(_QWORD *)&v20 = *((_QWORD *)&k + 1);
                  *((_QWORD *)&v20 + 1) = k;
                  v16 = v20 >> 38;
                  v14 = -1537719138;
                  v17 = k >> 38;
                  goto LABEL_65;
                case -915363255:
                  v22 = 1168030717;
                  v23 = 0;
                  v24 = 0;
                  for ( j = 0; ; j = v26 )
                  {
                    if ( v22 == -1437495776 )
                    {
                      v36 = (__PAIR128__(j, v23) + 0x7BA1777AA1EF7EC2LL) >> 64;
                      v23 += 0x7BA1777AA1EF7EC2LL;
                      j = v36 - 0x35DD0F5B7F7E17E5LL;
                      v24 = -329351409;
                    }
                    else
                    {
                      v26 = _byteswap_uint64(v23);
                      v3 = _byteswap_uint64(j);
                      switch ( v22 )
                      {
                        case -798760863:
                          v24 = -1269260942;
                          goto LABEL_85;
                        case -99669903:
                          v23 ^= 0x7B5BAED4A9445FDEuLL;
                          j ^= 0x1E7D8D0E7F0DDE12uLL;
                          v24 = -1246994574;
                          break;
                        case -203113:
                          *((_QWORD *)&v35 + 1) = j;
                          *(_QWORD *)&v35 = v23;
                          v26 = v35 >> 10;
                          *((_QWORD *)&v35 + 1) = v23;
                          *(_QWORD *)&v35 = j;
                          v24 = 1437427895;
                          v3 = v35 >> 10;
                          goto LABEL_85;
                        case 607990745:
                          v27 = v11 & (v26 >> 4) | (16 * (v11 & v26));
                          v28 = (v12 & (v27 >> 2)) + 4 * (v12 & v27);
                          v26 = ((v28 >> 1) & 0x5555555555555555LL) + 2 * (v28 & 0x5555555555555555LL);
                          v29 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                          v30 = (v12 & (v29 >> 2)) + 4 * (v12 & v29);
                          v3 = ((v30 >> 1) & 0x5555555555555555LL) + 2 * (v30 & 0x5555555555555555LL);
                          v24 = -567141464;
                          goto LABEL_85;
                        case 1168030717:
                          v24 = -1778558052;
                          v3 = 0x5D0F30504BFA996ALL;
                          v26 = 0x78BB07F3EE135473LL;
                          goto LABEL_85;
                        case 1175449903:
                          j = (__PAIR128__(j, v23) + __PAIR128__(0x63430C35153A524LL, 0x7752820B9AE44DACLL)) >> 64;
                          v23 += 0x7752820B9AE44DACLL;
                          v24 = 1647493878;
                          break;
                        case 1681620243:
                          v31 = v11 & (v26 >> 4) | (16 * (v11 & v26));
                          v32 = (v12 & (v31 >> 2)) + 4 * (v12 & v31);
                          v26 = ((v32 >> 1) & 0x5555555555555555LL) + 2 * (v32 & 0x5555555555555555LL);
                          v33 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                          v34 = (v12 & (v33 >> 2)) + 4 * (v12 & v33);
                          v3 = ((v34 >> 1) & 0x5555555555555555LL) + 2 * (v34 & 0x5555555555555555LL);
                          v24 = -1681417340;
                          goto LABEL_85;
                        case 1336112899:
                          v37 = 3452586446LL;
                          goto LABEL_1412;
                      }
                    }
                    v3 = v23;
                    v26 = j;
LABEL_85:
                    v22 ^= v24;
                    v23 = v3;
                  }
                  break;
              }
              break;
          }
          v16 = *((_QWORD *)&k + 1);
          v17 = k;
LABEL_65:
          v13 ^= v14;
          *(_QWORD *)&k = v17;
        }
        break;
    }
    if ( v9 != -1369867093 )
      break;
    v521 = -868078072;
    v522 = 0;
    for ( k = 0u; ; *((_QWORD *)&k + 1) = v523 )
    {
      if ( v521 == -2020609930 )
      {
        k += 0xEC7F698885A8C1A3LL;
        *((_QWORD *)&k + 1) -= 0x580006A811C10E7ALL;
        v522 = 531125644;
        goto LABEL_1382;
      }
      if ( v521 == -1742232070 )
      {
        *(_QWORD *)&v525 = *((_QWORD *)&k + 1);
        *((_QWORD *)&v525 + 1) = k;
        v523 = v525 >> 36;
        v526 = k >> 36;
        v522 = -203888706;
LABEL_1375:
        v524 = v526;
        goto LABEL_1383;
      }
      v523 = _byteswap_uint64(k);
      v524 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
      if ( v521 == -1714347086 )
      {
        v522 = 2131349275;
        goto LABEL_1383;
      }
      if ( v521 == -1027784195 )
      {
        k += 0x5B5B1F3AA3C28F8AuLL;
        *((_QWORD *)&k + 1) -= 0x77971E3CFB18ABC2LL;
        v522 = -1091357625;
        goto LABEL_1382;
      }
      if ( v521 != -868078072 )
        break;
      v522 = 600805531;
      v524 = 0x1967480B9447B362LL;
      v523 = 0x6263641A1ADB4698LL;
LABEL_1383:
      v521 ^= v522;
      *(_QWORD *)&k = v524;
    }
    switch ( v521 )
    {
      case -421991255:
        k += 0xBE03AEB4EEEE67ECLL;
        *((_QWORD *)&k + 1) -= 0x7ACFE6522358D1E6LL;
        v522 = 249544422;
        goto LABEL_1382;
      case -402173361:
        v522 = -1792184473;
        goto LABEL_1383;
      case -298010687:
        *(_QWORD *)&k = _byteswap_uint64(k);
        *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
        *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
        v523 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
        v527 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
        v528 = v11 & (v527 >> 4) | (16 * (v11 & v527));
        v529 = (v12 & (v528 >> 2)) + 4 * (v12 & v528);
        v524 = ((v529 >> 1) & 0x5555555555555555LL) + 2 * (v529 & 0x5555555555555555LL);
        v522 = -1105333669;
        goto LABEL_1383;
      case -275923309:
        k += __PAIR128__(0x4611428F4C4B1269LL, 0xBAF8BACDE6F8F12LL);
        v522 = 1744981733;
        goto LABEL_1382;
      case 433302826:
        k ^= __PAIR128__(0xEC3AB2DBCBC61138LL, 0x911E3BD3D5A7C4A6LL);
        v522 = -2147316072;
LABEL_1382:
        v523 = *((_QWORD *)&k + 1);
        v524 = k;
        goto LABEL_1383;
      case 1344357786:
        *(_QWORD *)&v530 = *((_QWORD *)&k + 1);
        *((_QWORD *)&v530 + 1) = k;
        v523 = v530 >> 45;
        v526 = k >> 45;
        v522 = -1835269017;
        goto LABEL_1375;
      case 1811890756:
        k += __PAIR128__(0x5347907D81246C44LL, 0x25CCBC49CAAB0176LL);
        v522 = -2050755195;
        goto LABEL_1382;
      case 2085516730:
        v522 = 1704843408;
        goto LABEL_1383;
    }
    if ( v521 != 2099920168 )
      goto LABEL_1382;
    v531 = -1048484110;
    v23 = 0;
    v3 = 0;
    j = 0;
    while ( v531 == -1684168049 )
    {
      *((_QWORD *)&v547 + 1) = j;
      *(_QWORD *)&v547 = v23;
      v532 = v547 >> 27;
      *((_QWORD *)&v547 + 1) = v23;
      *(_QWORD *)&v547 = j;
      v3 = 3096374545LL;
      v533 = v547 >> 27;
LABEL_1410:
      v531 ^= v3;
      v23 = v533;
      j = v532;
    }
    switch ( v531 )
    {
      case -1614931851:
        j = (__PAIR128__(j, v23) + __PAIR128__(0x5732B947B4CB3FC9LL, 0x3CF18D07A81AFCB6LL)) >> 64;
        v23 += 0x3CF18D07A81AFCB6LL;
        v3 = 2867214205LL;
LABEL_1409:
        v533 = v23;
        v532 = j;
        goto LABEL_1410;
      case -1048484110:
        v3 = 3399735476LL;
        v533 = 0x29A3E70939F62F24LL;
        v532 = 0xBFBCEC9AC1434BABLL;
        goto LABEL_1410;
      case 36650209:
        v542 = _byteswap_uint64(v23);
        v543 = v11 & (v542 >> 4) | (16 * (v11 & v542));
        v532 = ((((v12 & (v543 >> 2)) + 4 * (v12 & v543)) >> 1) & 0x5555555555555555LL)
             + 2 * (((v12 & (v543 >> 2)) + 4 * (v12 & v543)) & 0x5555555555555555LL);
        v544 = _byteswap_uint64(j);
        v545 = v11 & (v544 >> 4) | (16 * (v11 & v544));
        v546 = (v12 & (v545 >> 2)) + 4 * (v12 & v545);
        v533 = ((v546 >> 1) & 0x5555555555555555LL) + 2 * (v546 & 0x5555555555555555LL);
        v3 = 296608516;
        goto LABEL_1410;
    }
    v532 = _byteswap_uint64(v23);
    v533 = _byteswap_uint64(j);
    switch ( v531 )
    {
      case 105556051:
        v3 = 1692439122;
        goto LABEL_1410;
      case 119055362:
        v7 = __CFADD__(v23, 0xB2249246803D93D2LL);
        v23 -= 0x4DDB6DB97FC26C2ELL;
        j = v7 + j - 0xF3F834542E47DB7LL;
        v3 = 2625963661LL;
        goto LABEL_1409;
      case 186826310:
        *((_QWORD *)&v539 + 1) = v23;
        *(_QWORD *)&v539 = j;
        v532 = v539 >> 45;
        *((_QWORD *)&v539 + 1) = j;
        *(_QWORD *)&v539 = v23;
        v540 = v539 >> 45;
        v3 = 2493294131LL;
LABEL_1406:
        v533 = v540;
        goto LABEL_1410;
      case 327344101:
        j = (__PAIR128__(j, v23) + __PAIR128__(0x31CF7CF1CFB07920LL, 0x265B0A4ECEBE45DLL)) >> 64;
        v23 += 0x265B0A4ECEBE45DLL;
        v3 = 365459382;
        goto LABEL_1409;
      case 588468126:
        v534 = _byteswap_uint64(v23);
        v535 = v11 & (v534 >> 4) | (16 * (v11 & v534));
        v532 = ((((v12 & (v535 >> 2)) + 4 * (v12 & v535)) >> 1) & 0x5555555555555555LL)
             + 2 * (((v12 & (v535 >> 2)) + 4 * (v12 & v535)) & 0x5555555555555555LL);
        v536 = _byteswap_uint64(j);
        v537 = v11 & (v536 >> 4) | (16 * (v11 & v536));
        v538 = (v12 & (v537 >> 2)) + 4 * (v12 & v537);
        v533 = ((v538 >> 1) & 0x5555555555555555LL) + 2 * (v538 & 0x5555555555555555LL);
        v3 = 407828868;
        goto LABEL_1410;
      case 894971656:
        v3 = 843090698;
        goto LABEL_1410;
      case 995997210:
        *((_QWORD *)&v541 + 1) = v23;
        *(_QWORD *)&v541 = j;
        v532 = v541 >> 62;
        *((_QWORD *)&v541 + 1) = j;
        *(_QWORD *)&v541 = v23;
        v540 = v541 >> 62;
        v3 = 963807995;
        goto LABEL_1406;
    }
    if ( v531 != 1655323137 )
      goto LABEL_1409;
    v37 = 919003440;
LABEL_1412:
    v548 = k + __PAIR128__(v4, v2) * BYTE4(v592);
    if ( !(j | v23) )
      sub_5DA620(&off_13C7220, *((_QWORD *)&k + 1), *((_QWORD *)&v548 + 1), 0, v37, v3, v592);
    if ( !((unsigned __int64)v548 | *((_QWORD *)&v548 + 1) ^ 0x8000000000000000LL) && (j & v23) == 0xFFFFFFFFFFFFFFFFLL )
      sub_5DA640(k, *((_QWORD *)&k + 1), *((_QWORD *)&v548 + 1), -1, v37, v3, v592);
    v549 = v12;
    v550 = v11;
    v551 = v37;
    *(_QWORD *)&v2 = sub_13B2A00(v548, *((_QWORD *)&v548 + 1), v23, j, v37, v3, v592);
    v4 = *((_QWORD *)&v2 + 1);
    if ( v2 < 0 )
    {
      v4 = (__PAIR128__((j >> 63) ^ (unsigned __int64)j, (j >> 63) ^ v23) - __PAIR128__(j >> 63, j >> 63) + v2) >> 64;
      *(_QWORD *)&v2 = ((j >> 63) ^ v23) - (j >> 63) + v2;
    }
    v10 = v551;
    v11 = v550;
    v12 = v549;
LABEL_1418:
    v9 ^= v10;
  }
  if ( v9 == -1169136602 )
  {
    v160 = -956789090;
    v161 = 0;
    for ( k = 0u; ; *((_QWORD *)&k + 1) = v162 )
    {
      if ( v160 == -1852890220 )
      {
        *(_QWORD *)&v166 = *((_QWORD *)&k + 1);
        *((_QWORD *)&v166 + 1) = k;
        v162 = v166 >> 39;
        v161 = 186140867;
        v163 = k >> 39;
      }
      else if ( v160 == -1701352617 )
      {
        *(_QWORD *)&k = _byteswap_uint64(k);
        *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
        *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
        v162 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
        v169 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
        v170 = v11 & (v169 >> 4) | (16 * (v11 & v169));
        v171 = (v12 & (v170 >> 2)) + 4 * (v12 & v170);
        v163 = ((v171 >> 1) & 0x5555555555555555LL) + 2 * (v171 & 0x5555555555555555LL);
        v161 = 797793150;
      }
      else
      {
        v162 = _byteswap_uint64(k);
        v163 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
        if ( v160 == -1285628043 )
        {
          v161 = -1145932799;
        }
        else
        {
          if ( v160 == -1256574935 )
          {
            k ^= __PAIR128__(0xAD4CF709AC242CCELL, 0x1B8E3C5FC2CBFCF9LL);
            v161 = 105181020;
LABEL_388:
            v162 = *((_QWORD *)&k + 1);
            v163 = k;
            goto LABEL_395;
          }
          if ( v160 == -1084126626 )
          {
            v164 = v11 & (v162 >> 4) | (16 * (v11 & v162));
            v162 = ((((v12 & (v164 >> 2)) + 4 * (v12 & v164)) >> 1) & 0x5555555555555555LL)
                 + 2 * (((v12 & (v164 >> 2)) + 4 * (v12 & v164)) & 0x5555555555555555LL);
            v165 = v11 & (v163 >> 4) | (16 * (v11 & v163));
            v163 = ((((v12 & (v165 >> 2)) + 4 * (v12 & v165)) >> 1) & 0x5555555555555555LL)
                 + 2 * (((v12 & (v165 >> 2)) + 4 * (v12 & v165)) & 0x5555555555555555LL);
            v161 = 1900711096;
          }
          else if ( v160 == -956789090 )
          {
            v161 = 1467460874;
            v163 = 0x14C632CF9FE9A1FDLL;
            v162 = 0x1E38EC2DB29D9F1BLL;
          }
          else
          {
            if ( v160 != 149728116 )
            {
              if ( v160 == -836040986 )
              {
                v172 = -320067576;
                v23 = 0;
                v173 = 0;
                for ( j = 0; ; j = v174 )
                {
                  if ( v172 == -1071304599 )
                  {
                    v23 ^= 0x8EDC986C53639411LL;
                    j ^= 0xED430BAB0FDA2CDuLL;
                    v173 = 306287060;
                  }
                  else if ( v172 == -1006205715 )
                  {
                    v7 = __CFADD__(v23, 0xC22553CA4E53F5E4LL);
                    v23 -= 0x3DDAAC35B1AC0A1CLL;
                    j = v7 + j - 0x4DFD9B8ABBD5E86ALL;
                    v173 = -1695689684;
                  }
                  else
                  {
                    v174 = _byteswap_uint64(v23);
                    v3 = _byteswap_uint64(j);
                    switch ( v172 )
                    {
                      case -765156931:
                        v173 = -603278972;
                        goto LABEL_413;
                      case -320067576:
                        v173 = 751376481;
                        v3 = 0xC837521FDFF64F0BLL;
                        v174 = 0x31C35663B9ECD896LL;
                        goto LABEL_413;
                      case 242094137:
                        v7 = __CFADD__(v23, 0xE78FDDCB88477621LL);
                        v23 -= 0x1870223477B889DFLL;
                        j += v7 + 0x3606DA60688AF368LL;
                        v173 = 653708906;
                        break;
                      case 681107027:
                        *((_QWORD *)&v175 + 1) = j;
                        *(_QWORD *)&v175 = v23;
                        v174 = v175 >> 51;
                        *((_QWORD *)&v175 + 1) = v23;
                        *(_QWORD *)&v175 = j;
                        v173 = -325166402;
                        v3 = v175 >> 51;
                        goto LABEL_413;
                      case 1592479937:
                        v176 = v11 & (v174 >> 4) | (16 * (v11 & v174));
                        v177 = (v12 & (v176 >> 2)) + 4 * (v12 & v176);
                        v174 = ((v177 >> 1) & 0x5555555555555555LL) + 2 * (v177 & 0x5555555555555555LL);
                        v178 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                        v179 = (v12 & (v178 >> 2)) + 4 * (v12 & v178);
                        v3 = ((v179 >> 1) & 0x5555555555555555LL) + 2 * (v179 & 0x5555555555555555LL);
                        v173 = -1330904080;
                        goto LABEL_413;
                      case -297315535:
                        v37 = 336140429;
                        goto LABEL_1412;
                    }
                  }
                  v3 = v23;
                  v174 = j;
LABEL_413:
                  v172 ^= v173;
                  v23 = v3;
                }
              }
              goto LABEL_388;
            }
            v167 = v11 & (v162 >> 4) | (16 * (v11 & v162));
            v162 = ((((v12 & (v167 >> 2)) + 4 * (v12 & v167)) >> 1) & 0x5555555555555555LL)
                 + 2 * (((v12 & (v167 >> 2)) + 4 * (v12 & v167)) & 0x5555555555555555LL);
            v168 = v11 & (v163 >> 4) | (16 * (v11 & v163));
            v163 = ((((v12 & (v168 >> 2)) + 4 * (v12 & v168)) >> 1) & 0x5555555555555555LL)
                 + 2 * (((v12 & (v168 >> 2)) + 4 * (v12 & v168)) & 0x5555555555555555LL);
            v161 = -1215487702;
          }
        }
      }
LABEL_395:
      v160 ^= v161;
      *(_QWORD *)&k = v163;
    }
  }
  if ( v9 == -1034881996 )
  {
    v432 = 313709017;
    v433 = 0;
    for ( k = 0u; ; k = v434 )
    {
      switch ( v432 )
      {
        case -2115087110:
          k += __PAIR128__(0x665F17F4CAF9BA17LL, 0xF3B813788B8B0820LL);
          v433 = -286642531;
          break;
        case -1985691069:
          *(_QWORD *)&v435 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v435 + 1) = k;
          v433 = -1473460057;
          v434 = __PAIR128__((unsigned __int128)(k * 0x200000000000000LL) >> 64, v435 >> 7);
          goto LABEL_1086;
        case -1281391316:
          k ^= __PAIR128__(0xB5DA0AAFE2721822LL, 0x1A6FAB5C6FB3981LL);
          v433 = 976963439;
          break;
        case -446323515:
          k += 0x99EFCC9E95F1EF14LL;
          *((_QWORD *)&k + 1) -= 0x6BACE57A8473C8CCLL;
          v433 = -820326611;
          break;
        case 313709017:
          v433 = -1590864651;
          v434 = __PAIR128__(0x77747A050DE4F120LL, 0xBB3548002365630ALL);
          goto LABEL_1086;
        case 562563812:
          k += __PAIR128__(0x1D6E159EFFA88679LL, 0x83566997D1B18DF2LL);
          v433 = 98644303;
          break;
        case 610876331:
          k += __PAIR128__(0x2981D2B2A493A690LL, 0x651F904010DDFCFALL);
          v433 = 1815390978;
          break;
        default:
          v434 = __PAIR128__(_byteswap_uint64(k), _byteswap_uint64(*((unsigned __int64 *)&k + 1)));
          switch ( v432 )
          {
            case 712993768:
              v433 = 1085061649;
              goto LABEL_1086;
            case 880441497:
              k ^= __PAIR128__(0xC669B218ED5A01F2LL, 0x5897E2513D577DF8LL);
              v433 = -1248580509;
              break;
            case 1214091433:
              v433 = 2082990128;
              goto LABEL_1086;
            case 1862564455:
              k ^= __PAIR128__(0x33770D87C354E1CFLL, 0xBCA6CBDB7FED3038LL);
              v433 = -1973297502;
              break;
            case 1792266745:
              v436 = -1057802694;
              v23 = 0;
              v437 = 0;
              j = 0;
              while ( v436 != -1994374887 )
              {
                if ( v436 == -1057802694 )
                {
                  v437 = -1507385437;
                  v438 = 0x533F43844E831E1CLL;
                  v3 = 0xEA1DBD374CB51396LL;
                  goto LABEL_1114;
                }
                if ( v436 == -923110882 )
                {
                  v23 ^= 0xBD45313E9780284FLL;
                  j ^= 0xF34652C4DC20BF49LL;
                  v437 = -1730824315;
LABEL_1113:
                  v438 = v23;
                  v3 = j;
                  goto LABEL_1114;
                }
                v3 = _byteswap_uint64(v23);
                v438 = _byteswap_uint64(j);
                switch ( v436 )
                {
                  case -236142575:
                    v437 = -2095098701;
                    break;
                  case 107348056:
                    v437 = -43525902;
                    break;
                  case 189886173:
                    v7 = __CFADD__(v23, 0xD8C6CE73E34B6EADLL);
                    v23 -= 0x2739318C1CB49153LL;
                    j = v7 + j - 0x5F3D1E137753DAA4LL;
                    v437 = -88232244;
                    break;
                  case 678389614:
                    v7 = __CFADD__(v23, 0xF664D09A652EAC5BLL);
                    v23 -= 0x99B2F659AD153A5LL;
                    j = v7 + j - 0x1E5CA2A5DECFBEE8LL;
                    v437 = 1481243782;
                    break;
                  case 1345308059:
                    v437 = 898172729;
                    break;
                  case 1560874510:
                    v437 = -735490281;
                    break;
                  case 1705427618:
                    v437 = 1305060812;
                    break;
                  case 1725180313:
                    v23 ^= 0x35E4AFBC4E377C60uLL;
                    j ^= 0x61473542A177DC8FuLL;
                    v437 = -1372693625;
                    break;
                  case 1881578472:
                    *((_QWORD *)&v439 + 1) = v23;
                    *(_QWORD *)&v439 = j;
                    v3 = v439 >> 36;
                    *((_QWORD *)&v439 + 1) = j;
                    *(_QWORD *)&v439 = v23;
                    v437 = 758093286;
                    v438 = v439 >> 36;
                    break;
                  case 1928565922:
                    *((_QWORD *)&v440 + 1) = j;
                    *(_QWORD *)&v440 = v23;
                    v3 = v440 >> 29;
                    *((_QWORD *)&v440 + 1) = v23;
                    *(_QWORD *)&v440 = j;
                    v437 = 1955960058;
                    v438 = v440 >> 29;
                    break;
                  case -83765078:
                    v37 = 1384269495;
                    goto LABEL_1412;
                  default:
                    goto LABEL_1113;
                }
LABEL_1114:
                v436 ^= v437;
                v23 = v438;
                j = v3;
              }
              v7 = __CFADD__(v23, 0xA73593C5B484CB44LL);
              v23 -= 0x58CA6C3A4B7B34BCLL;
              j = v7 + j - 0x7AFD01A8BAD75713LL;
              v437 = -2106511420;
              goto LABEL_1113;
          }
          break;
      }
      v434 = k;
LABEL_1086:
      v432 ^= v433;
    }
  }
  switch ( v9 )
  {
    case -858924887:
      v38 = 1379943803;
      v39 = 0;
      k = 0u;
      while ( 1 )
      {
        switch ( v38 )
        {
          case -1258324082:
            *(_QWORD *)&k = _byteswap_uint64(k);
            *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
            *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
            v40 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
            v41 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
            v42 = v11 & (v41 >> 4) | (16 * (v11 & v41));
            v43 = (v12 & (v42 >> 2)) + 4 * (v12 & v42);
            *(_QWORD *)&k = ((v43 >> 1) & 0x5555555555555555LL) + 2 * (v43 & 0x5555555555555555LL);
            v39 = -1326701748;
            *((_QWORD *)&k + 1) = v40;
            break;
          case -921166217:
            k += __PAIR128__(0x3C15C403130EB9E6LL, 0xDAE9C0C1268E91C1LL);
            v39 = -756913618;
            break;
          case 68377794:
            k += __PAIR128__(0x6276CFEE2CDF681DLL, 0x19B632A58AF35E42LL);
            v39 = -854900043;
            break;
          case 469398617:
            k ^= __PAIR128__(0x70804CEE4C3ACE29LL, 0x1DAB9431E9888F4BLL);
            v39 = 1530097948;
            break;
          case 1086915909:
            k += __PAIR128__(0x3090069DCBB046B0LL, 0x23B21B2C2B07FB81LL);
            v39 = 2115373143;
            break;
          case 1379943803:
            v39 = -423675147;
            *(_QWORD *)&k = 0x46AAE11CD984C684LL;
            *((_QWORD *)&k + 1) = 0x7CCCAB2FCCCD7C4FLL;
            break;
          case 1054805266:
            v44 = &loc_4F5B86;
            v23 = 0;
            v45 = 0;
            for ( j = 0; ; j = v3 )
            {
              if ( (_DWORD)v44 == -1147125216 )
              {
                *((_QWORD *)&v49 + 1) = j;
                *(_QWORD *)&v49 = v23;
                v3 = v49 >> 29;
                *((_QWORD *)&v49 + 1) = v23;
                *(_QWORD *)&v49 = j;
                v48 = v49 >> 29;
                v45 = -246500450;
                goto LABEL_116;
              }
              if ( (_DWORD)v44 == -929686239 )
              {
                *((_QWORD *)&v47 + 1) = j;
                *(_QWORD *)&v47 = v23;
                v3 = v47 >> 36;
                *((_QWORD *)&v47 + 1) = v23;
                *(_QWORD *)&v47 = j;
                v48 = v47 >> 36;
                v45 = -770490524;
LABEL_116:
                v46 = v48;
                goto LABEL_124;
              }
              if ( (_DWORD)v44 == -709043916 )
                break;
              if ( (_DWORD)v44 == (_DWORD)&loc_4F5B86 )
              {
                v45 = 289700526;
                v46 = 0xBAC643E930F0ED7ALL;
                v3 = 0x2101DE9BB41A33F7LL;
                goto LABEL_124;
              }
              v3 = _byteswap_uint64(v23);
              v46 = _byteswap_uint64(j);
              switch ( (_DWORD)v44 )
              {
                case 0x110B2128:
                  v45 = -644006903;
                  break;
                case 0x1A852245:
                  v50 = (__PAIR128__(j, v23) + 0x7861E527F3875AD8LL) >> 64;
                  v23 += 0x7861E527F3875AD8LL;
                  j = v50 - 0x483237495D0F46C0LL;
                  v45 = -818283663;
                  goto LABEL_121;
                case 0x1AE1913C:
                  v51 = _byteswap_uint64(v23);
                  v52 = v11 & (v51 >> 4) | (16 * (v11 & v51));
                  v3 = ((((v12 & (v52 >> 2)) + 4 * (v12 & v52)) >> 1) & 0x5555555555555555LL)
                     + 2 * (((v12 & (v52 >> 2)) + 4 * (v12 & v52)) & 0x5555555555555555LL);
                  v53 = _byteswap_uint64(j);
                  v54 = v11 & (v53 >> 4) | (16 * (v11 & v53));
                  v55 = (v12 & (v54 >> 2)) + 4 * (v12 & v54);
                  v46 = ((v55 >> 1) & 0x5555555555555555LL) + 2 * (v55 & 0x5555555555555555LL);
                  v45 = -4610531;
                  break;
                case 0x38BF3D36:
                  v23 ^= 0xCDAF0ECC9946C281LL;
                  j ^= 0x473A4C0D9243755AuLL;
                  v45 = -2095087850;
                  break;
                case 0x4AEEF1BE:
                  v45 = 1343185026;
                  break;
                case 0xE5583721:
                  v37 = 4039421854LL;
                  goto LABEL_1412;
                default:
                  goto LABEL_121;
              }
LABEL_124:
              LODWORD(v44) = v45 ^ (unsigned int)v44;
              v23 = v46;
            }
            v23 ^= 0xFB0CBF68D6F04A5uLL;
            j ^= 0x7EA7B6D020209FB1uLL;
            v45 = -318512126;
LABEL_121:
            v46 = v23;
            v3 = j;
            goto LABEL_124;
        }
        v38 ^= v39;
      }
    case -800246672:
      v294 = -1166872077;
      v295 = 0;
      for ( k = 0u; ; *((_QWORD *)&k + 1) = v296 )
      {
        v296 = _byteswap_uint64(k);
        v297 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
        if ( v294 == -1991302378 )
        {
          v295 = -414708586;
          goto LABEL_708;
        }
        if ( v294 == -1403096907 )
          break;
        switch ( v294 )
        {
          case -1166872077:
            v295 = -1151352378;
            v297 = 0xAC9F8A27F53153E8LL;
            v296 = 0x4B7D2B28A8C097FALL;
            break;
          case -309916818:
            v296 = k >> 4;
            *(_QWORD *)&v300 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v300 + 1) = k;
            v295 = 282839069;
            v297 = v300 >> 4;
            break;
          case -44252301:
            v303 = v11 & (v296 >> 4) | (16 * (v11 & v296));
            v296 = ((((v12 & (v303 >> 2)) + 4 * (v12 & v303)) >> 1) & 0x5555555555555555LL)
                 + 2 * (((v12 & (v303 >> 2)) + 4 * (v12 & v303)) & 0x5555555555555555LL);
            v304 = v11 & (v297 >> 4) | (16 * (v11 & v297));
            v297 = ((((v12 & (v304 >> 2)) + 4 * (v12 & v304)) >> 1) & 0x5555555555555555LL)
                 + 2 * (((v12 & (v304 >> 2)) + 4 * (v12 & v304)) & 0x5555555555555555LL);
            v295 = -457316768;
            break;
          default:
            if ( v294 == (_DWORD)byte_12D3035 )
            {
              *(_QWORD *)&v301 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v301 + 1) = k;
              v296 = v301 >> 41;
              v299 = k >> 41;
              v295 = -1384955776;
              goto LABEL_706;
            }
            switch ( v294 )
            {
              case 434185491:
                *(_QWORD *)&v302 = *((_QWORD *)&k + 1);
                *((_QWORD *)&v302 + 1) = k;
                v296 = v302 >> 62;
                v299 = k >> 62;
                v295 = -738498359;
                goto LABEL_706;
              case 1819458347:
                k += 0xE247BEA03D21E144LL;
                *((_QWORD *)&k + 1) -= 0x6FCA1BA96EC07697LL;
                v295 = -2114604987;
                break;
              case 1845964672:
                k += 0xD0BAB77D9B3220B5LL;
                *((_QWORD *)&k + 1) -= 0x40F0F4E97C550BBFLL;
                v295 = 41260203;
                break;
              case -904245798:
                v305 = -666024378;
                v23 = 0;
                v306 = 0;
                for ( j = 0; ; j = v3 )
                {
                  v3 = _byteswap_uint64(v23);
                  v307 = _byteswap_uint64(j);
                  switch ( v305 )
                  {
                    case -1596172234:
                      v306 = -1715753679;
                      break;
                    case -1391755830:
                      v317 = (__PAIR128__(j, v23) + 0x17B31C23AD8CD971LL) >> 64;
                      v23 += 0x17B31C23AD8CD971LL;
                      j = v317 - 0x6FCA4EFCBE19194ELL;
                      v306 = 1522369241;
                      break;
                    case -781681938:
                      v7 = __CFADD__(v23, 0xC39489EC9D8B5B2BLL);
                      v23 -= 0x3C6B76136274A4D5LL;
                      j = v7 + j - 0x3CB967665F2EE577LL;
                      v306 = -291141425;
                      break;
                    case -666024378:
                      v306 = 2022776432;
                      v307 = 0x42025923DC73C9E0LL;
                      v3 = 0xE791D7544512129BLL;
                      break;
                    case -481107405:
                      *((_QWORD *)&v316 + 1) = v23;
                      *(_QWORD *)&v316 = j;
                      v3 = v316 >> 61;
                      *((_QWORD *)&v316 + 1) = j;
                      *(_QWORD *)&v316 = v23;
                      v306 = -929702942;
                      v307 = v316 >> 61;
                      break;
                    case -429258123:
                      v306 = 87615558;
                      break;
                    case -139002093:
                      v308 = _byteswap_uint64(v23);
                      v309 = v11 & (v308 >> 4) | (16 * (v11 & v308));
                      v3 = ((((v12 & (v309 >> 2)) + 4 * (v12 & v309)) >> 1) & 0x5555555555555555LL)
                         + 2 * (((v12 & (v309 >> 2)) + 4 * (v12 & v309)) & 0x5555555555555555LL);
                      v310 = _byteswap_uint64(j);
                      v311 = v11 & (v310 >> 4) | (16 * (v11 & v310));
                      v312 = (v12 & (v311 >> 2)) + 4 * (v12 & v311);
                      v307 = ((v312 >> 1) & 0x5555555555555555LL) + 2 * (v312 & 0x5555555555555555LL);
                      v306 = -1924937882;
                      break;
                    case 200519630:
                      *((_QWORD *)&v315 + 1) = j;
                      *(_QWORD *)&v315 = v23;
                      v3 = v315 >> 60;
                      *((_QWORD *)&v315 + 1) = v23;
                      *(_QWORD *)&v315 = j;
                      v314 = v315 >> 60;
                      v306 = 1952514281;
                      goto LABEL_736;
                    case 734476753:
                      v7 = __CFADD__(v23, 0x9F98EA11E42BE9EFLL);
                      v23 -= 0x606715EE1BD41611LL;
                      j = v7 + j - 0x790477D5BC2B1B3BLL;
                      v306 = -2033433573;
                      break;
                    case 963114247:
                      v7 = __CFADD__(v23, 0xFF31C1FBB949E2A4LL);
                      v23 -= 0xCE3E0446B61D5CLL;
                      j = v7 + j - 0x3B1955E7F87EB592LL;
                      v306 = -401633303;
                      break;
                    case 1070461473:
                      v23 ^= 0xC02C257DE4F252BCLL;
                      j ^= 0xDD4532B9D2B5FD7ELL;
                      v306 = 1680286005;
                      break;
                    case 1456075358:
                      v23 ^= 0xAB56F676D54B8AA2LL;
                      j ^= 0x8EC90398E78C004CLL;
                      v306 = 1564106128;
                      break;
                    case 1542116116:
                      j = (__PAIR128__(j, v23) + __PAIR128__(0x1955E20511545A80LL, 0x33A72ECD3A2ED69FLL)) >> 64;
                      v23 += 0x33A72ECD3A2ED69FLL;
                      v306 = 727497107;
                      break;
                    case 1891003015:
                      *((_QWORD *)&v313 + 1) = j;
                      *(_QWORD *)&v313 = v23;
                      v3 = v313 >> 21;
                      *((_QWORD *)&v313 + 1) = v23;
                      *(_QWORD *)&v313 = j;
                      v314 = v313 >> 21;
                      v306 = -1763942158;
LABEL_736:
                      v307 = v314;
                      break;
                    case 2062891125:
                      v306 = 742181419;
                      break;
                    case 2140319527:
                      v37 = 1115826198;
                      goto LABEL_1412;
                    default:
                      v307 = v23;
                      v3 = j;
                      break;
                  }
                  v305 ^= v306;
                  v23 = v307;
                }
                break;
            }
            v296 = *((_QWORD *)&k + 1);
            v297 = k;
            break;
        }
LABEL_708:
        v294 ^= v295;
        *(_QWORD *)&k = v297;
      }
      *(_QWORD *)&v298 = *((_QWORD *)&k + 1);
      *((_QWORD *)&v298 + 1) = k;
      v296 = v298 >> 41;
      v299 = k >> 41;
      v295 = 621892515;
LABEL_706:
      v297 = v299;
      goto LABEL_708;
    case -663934020:
      v476 = 1691199934;
      v477 = 0;
      k = 0u;
      while ( v476 != -1920601668 )
      {
        switch ( v476 )
        {
          case -1852054541:
            k += 0x8CCF5A9031D51C39LL;
            *((_QWORD *)&k + 1) -= 0x17D8FD25204C79D6LL;
            v477 = 103228708;
            break;
          case -1749236009:
            k += 0x64665565C8D0C93BuLL;
            *((_QWORD *)&k + 1) -= 0x7D0E94E7DBFAB5CLL;
            v477 = 1281060878;
            break;
          case -727113712:
            k += __PAIR128__(0x29B9FB20C0559BA9LL, 0x343AC74AA09B3228LL);
            v477 = 1579489011;
            break;
          case -605571367:
            v478 = k >> 22;
            *(_QWORD *)&v479 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v479 + 1) = k;
            *(_QWORD *)&k = v479 >> 22;
            v477 = 1449281381;
LABEL_1269:
            *((_QWORD *)&k + 1) = v478;
            break;
          case 1691199934:
            v477 = -178894259;
            *(_QWORD *)&k = 0xBB5659C884AEE339LL;
            *((_QWORD *)&k + 1) = 0xCB28FA0055FDC3B6LL;
            break;
          case -1970522397:
            v481 = 35814262;
            v23 = 0;
            v482 = 0;
            j = 0;
            while ( v481 != -1685602115 )
            {
              if ( v481 == -1615407480 )
              {
                *((_QWORD *)&v484 + 1) = j;
                *(_QWORD *)&v484 = v23;
                v483 = v484 >> 4;
                *((_QWORD *)&v484 + 1) = v23;
                *(_QWORD *)&v484 = j;
                v482 = 2030070004;
                v3 = v484 >> 4;
                goto LABEL_1293;
              }
              v483 = _byteswap_uint64(v23);
              v3 = _byteswap_uint64(j);
              if ( v481 == -896645197 )
              {
                v482 = -1185793177;
                goto LABEL_1293;
              }
              if ( v481 == -424231300 )
              {
                v23 ^= 0x4AF17BD6A4C8C1C7uLL;
                j ^= 0xFDDEE583F19F8CEELL;
                v482 = -700447841;
LABEL_1289:
                v3 = v23;
                v483 = j;
                goto LABEL_1293;
              }
              if ( v481 != 35814262 )
              {
                if ( v481 == 821476835 )
                {
                  v23 ^= 0xBC934C469D80FEAuLL;
                  j ^= 0xF0C37796C4549B22LL;
                  v482 = -92734896;
                  goto LABEL_1289;
                }
                if ( v481 != 1100762667 )
                {
                  switch ( v481 )
                  {
                    case 1773829964:
                      v487 = v11 & (v483 >> 4) | (16 * (v11 & v483));
                      v488 = (v12 & (v487 >> 2)) + 4 * (v12 & v487);
                      v483 = ((v488 >> 1) & 0x5555555555555555LL) + 2 * (v488 & 0x5555555555555555LL);
                      v489 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                      v490 = (v12 & (v489 >> 2)) + 4 * (v12 & v489);
                      v3 = ((v490 >> 1) & 0x5555555555555555LL) + 2 * (v490 & 0x5555555555555555LL);
                      v482 = -230834191;
                      goto LABEL_1293;
                    case 1943829716:
                      v491 = v11 & (v483 >> 4) | (16 * (v11 & v483));
                      v492 = (v12 & (v491 >> 2)) + 4 * (v12 & v491);
                      v483 = ((v492 >> 1) & 0x5555555555555555LL) + 2 * (v492 & 0x5555555555555555LL);
                      v493 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                      v494 = (v12 & (v493 >> 2)) + 4 * (v12 & v493);
                      v3 = ((v494 >> 1) & 0x5555555555555555LL) + 2 * (v494 & 0x5555555555555555LL);
                      v482 = -345410024;
                      goto LABEL_1293;
                    case -1732965684:
                      v37 = 346092309;
                      goto LABEL_1412;
                  }
                  goto LABEL_1289;
                }
                *((_QWORD *)&v495 + 1) = v23;
                *(_QWORD *)&v495 = j;
                v483 = v495 >> 31;
                *((_QWORD *)&v495 + 1) = j;
                *(_QWORD *)&v495 = v23;
                v486 = v495 >> 31;
                v482 = -567633757;
                goto LABEL_1291;
              }
              v482 = 1805124666;
              v3 = 0xA67D1A7595093716LL;
              v483 = 0x9719EE996E1BC73LL;
LABEL_1293:
              v481 ^= v482;
              v23 = v3;
              j = v483;
            }
            *((_QWORD *)&v485 + 1) = v23;
            *(_QWORD *)&v485 = j;
            v483 = v485 >> 32;
            *((_QWORD *)&v485 + 1) = j;
            *(_QWORD *)&v485 = v23;
            v486 = v485 >> 32;
            v482 = -635728234;
LABEL_1291:
            v3 = v486;
            goto LABEL_1293;
        }
        v476 ^= v477;
      }
      v478 = k >> 43;
      *(_QWORD *)&v480 = *((_QWORD *)&k + 1);
      *((_QWORD *)&v480 + 1) = k;
      *(_QWORD *)&k = v480 >> 43;
      v477 = 1496109484;
      goto LABEL_1269;
    case -407068492:
      v450 = 765864818;
      v451 = 0;
      k = 0u;
      while ( 1 )
      {
        switch ( v450 )
        {
          case -813995864:
            k ^= __PAIR128__(0x6A5928E342EC2E9ELL, 0x4E2C93ABFE09123DLL);
            v451 = 1252901857;
            break;
          case 255426769:
            k ^= __PAIR128__(0xF350BD8BACD9B629LL, 0x359B239981446111LL);
            v451 = 1836785668;
            break;
          case 378159184:
            *(_QWORD *)&k = _byteswap_uint64(k);
            *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
            *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
            v452 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
            v453 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
            v454 = v11 & (v453 >> 4) | (16 * (v11 & v453));
            v455 = (v12 & (v454 >> 2)) + 4 * (v12 & v454);
            *(_QWORD *)&k = ((v455 >> 1) & 0x5555555555555555LL) + 2 * (v455 & 0x5555555555555555LL);
            v451 = 1228352649;
            *((_QWORD *)&k + 1) = v452;
            break;
          case 765864818:
            v451 = 580889507;
            *(_QWORD *)&k = 0x9F0EA196A149835ELL;
            *((_QWORD *)&k + 1) = 0xE722C13E8B185FF6LL;
            break;
          case 1606249689:
            k ^= __PAIR128__(0x1426E8690FFC6ED3LL, 0xF6B27C8677DB7B76LL);
            v451 = -1866070927;
            break;
          case 1648533717:
            k += __PAIR128__(0x295365B10811E97ELL, 0x76C86A330F61C2FLL);
            v451 = 1959321733;
            break;
          case -2049529015:
            v456 = -623140268;
            v23 = 0;
            v457 = 0;
            for ( j = 0; ; j = v3 )
            {
              if ( v456 == -1759012230 )
              {
                *((_QWORD *)&v462 + 1) = v23;
                *(_QWORD *)&v462 = j;
                v3 = v462 >> 33;
                *((_QWORD *)&v462 + 1) = j;
                *(_QWORD *)&v462 = v23;
                v461 = v462 >> 33;
                v457 = 173083773;
                goto LABEL_1194;
              }
              v3 = _byteswap_uint64(v23);
              v458 = _byteswap_uint64(j);
              switch ( v456 )
              {
                case -1653172729:
                  v457 = -1364729443;
                  break;
                case -1332209230:
                  v23 ^= 0xB201862219E36F0uLL;
                  j ^= 0xDC672658D54E1FF2LL;
                  v457 = -1135141007;
                  break;
                case -1167774124:
                  v23 ^= 0x8C5D49BDF5EAF7AELL;
                  j ^= 0x8E91FF3B272EE2EFLL;
                  v457 = -2069019800;
                  break;
                case -623140268:
                  v457 = -1751504437;
                  v458 = 0x7DA1090A29F9C760LL;
                  v3 = 0x3F9A597B8440DE45LL;
                  break;
                case -418628983:
                  v459 = (__PAIR128__(j, v23) + 0x44B4B5501134D649LL) >> 64;
                  v23 += 0x44B4B5501134D649LL;
                  j = v459 - 0x143DB3B3F5307850LL;
                  v457 = -1793305911;
                  break;
                case 191738181:
                  *((_QWORD *)&v460 + 1) = v23;
                  *(_QWORD *)&v460 = j;
                  v3 = v460 >> 9;
                  *((_QWORD *)&v460 + 1) = j;
                  *(_QWORD *)&v460 = v23;
                  v461 = v460 >> 9;
                  v457 = -1324835055;
LABEL_1194:
                  v458 = v461;
                  break;
                case 214894275:
                  v457 = -339526582;
                  break;
                case 307903051:
                  v7 = __CFADD__(v23, 0x96B8D2AE29F0AB4BLL);
                  v23 -= 0x69472D51D60F54B5LL;
                  j += v7 + 0x21E252C8682C338DLL;
                  v457 = 423070478;
                  break;
                case 1053322556:
                  v7 = __CFADD__(v23, 0x8E9B7994A6D87C73LL);
                  v23 -= 0x7164866B5927838DLL;
                  j += v7 + 0x7AF007BE534D59B8LL;
                  v457 = -1907329906;
                  break;
                case 1296141215:
                  v7 = __CFADD__(v23, 0xAF74A87B29074C18LL);
                  v23 -= 0x508B5784D6F8B3E8LL;
                  j += v7 + 0x3CBA6C2943C3ECA0LL;
                  v457 = 1595650516;
                  break;
                case 1913677888:
                  v457 = -449318342;
                  break;
                case 869365658:
                  v37 = 2162496036LL;
                  goto LABEL_1412;
                default:
                  v458 = v23;
                  v3 = j;
                  break;
              }
              v456 ^= v457;
              v23 = v458;
            }
            break;
        }
        v450 ^= v451;
      }
    case -246250797:
      v463 = -662350986;
      v464 = 0;
      for ( k = 0u; ; k = v465 )
      {
        switch ( v463 )
        {
          case -1374999244:
            *(_QWORD *)&k = _byteswap_uint64(k);
            *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
            *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
            *((_QWORD *)&k + 1) = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
            *((_QWORD *)&k + 1) = v11 & (*((_QWORD *)&k + 1) >> 4) | (16 * (v11 & *((_QWORD *)&k + 1)));
            *((_QWORD *)&k + 1) = (v12 & (*((_QWORD *)&k + 1) >> 2)) + 4 * (v12 & *((_QWORD *)&k + 1));
            v464 = 1398792080;
            v465 = __PAIR128__(
                     (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL),
                     ((*((_QWORD *)&k + 1) >> 1) & 0x5555555555555555LL)
                   + 2 * (*((_QWORD *)&k + 1) & 0x5555555555555555uLL));
            break;
          case -964323699:
            *(_QWORD *)&k = _byteswap_uint64(k);
            *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
            *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
            *((_QWORD *)&k + 1) = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
            *((_QWORD *)&k + 1) = v11 & (*((_QWORD *)&k + 1) >> 4) | (16 * (v11 & *((_QWORD *)&k + 1)));
            *((_QWORD *)&k + 1) = (v12 & (*((_QWORD *)&k + 1) >> 2)) + 4 * (v12 & *((_QWORD *)&k + 1));
            v464 = 775194046;
            v465 = __PAIR128__(
                     (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL),
                     ((*((_QWORD *)&k + 1) >> 1) & 0x5555555555555555LL)
                   + 2 * (*((_QWORD *)&k + 1) & 0x5555555555555555uLL));
            break;
          case -864769776:
            k += 0xC7EB6B4148976477LL;
            *((_QWORD *)&k + 1) -= 0x5FC2E2F9C52B6618LL;
            v464 = 673808584;
LABEL_1228:
            v465 = k;
            break;
          case -704429456:
            *(_QWORD *)&v466 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v466 + 1) = k;
            v464 = 1472432051;
            v465 = __PAIR128__((unsigned __int128)(k * 0x4000000000LL) >> 64, v466 >> 26);
            break;
          case -662350986:
            v464 = 647492865;
            v465 = __PAIR128__(0x18E402065DDC62C2LL, 0xB639159278D446FLL);
            break;
          default:
            v465 = __PAIR128__(_byteswap_uint64(k), _byteswap_uint64(*((unsigned __int64 *)&k + 1)));
            if ( v463 == -592002661 )
            {
              v464 = 637461487;
              break;
            }
            if ( v463 == -463656488 )
            {
              *(_QWORD *)&k = _byteswap_uint64(k);
              *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
              *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
              *((_QWORD *)&k + 1) = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
              *((_QWORD *)&k + 1) = v11 & (*((_QWORD *)&k + 1) >> 4) | (16 * (v11 & *((_QWORD *)&k + 1)));
              *((_QWORD *)&k + 1) = (v12 & (*((_QWORD *)&k + 1) >> 2)) + 4 * (v12 & *((_QWORD *)&k + 1));
              v464 = -1001778055;
              v465 = __PAIR128__(
                       (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL),
                       ((*((_QWORD *)&k + 1) >> 1) & 0x5555555555555555LL)
                     + 2 * (*((_QWORD *)&k + 1) & 0x5555555555555555uLL));
            }
            else
            {
              switch ( v463 )
              {
                case -455028793:
                  v464 = 1256973043;
                  goto LABEL_1233;
                case -391048397:
                  v464 = 616938019;
                  goto LABEL_1233;
                case -112713100:
                  *(_QWORD *)&k = _byteswap_uint64(k);
                  *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
                  *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
                  *((_QWORD *)&k + 1) = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
                  *((_QWORD *)&k + 1) = v11 & (*((_QWORD *)&k + 1) >> 4) | (16 * (v11 & *((_QWORD *)&k + 1)));
                  *((_QWORD *)&k + 1) = (v12 & (*((_QWORD *)&k + 1) >> 2)) + 4 * (v12 & *((_QWORD *)&k + 1));
                  v464 = 793468932;
                  v465 = __PAIR128__(
                           (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL),
                           ((*((_QWORD *)&k + 1) >> 1) & 0x5555555555555555LL)
                         + 2 * (*((_QWORD *)&k + 1) & 0x5555555555555555uLL));
                  goto LABEL_1233;
              }
              if ( v463 != -44764508 )
              {
                switch ( v463 )
                {
                  case -32332169:
                    k ^= __PAIR128__(0xC5BE26FD6A08042ALL, 0x174BB8243A516094LL);
                    v464 = 949432570;
                    break;
                  case 538394017:
                    *(_QWORD *)&k = _byteswap_uint64(k);
                    *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
                    *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
                    *((_QWORD *)&k + 1) = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
                    *((_QWORD *)&k + 1) = v11 & (*((_QWORD *)&k + 1) >> 4) | (16 * (v11 & *((_QWORD *)&k + 1)));
                    *((_QWORD *)&k + 1) = (v12 & (*((_QWORD *)&k + 1) >> 2)) + 4 * (v12 & *((_QWORD *)&k + 1));
                    v464 = -990383514;
                    v465 = __PAIR128__(
                             (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL),
                             ((*((_QWORD *)&k + 1) >> 1) & 0x5555555555555555LL)
                           + 2 * (*((_QWORD *)&k + 1) & 0x5555555555555555uLL));
                    goto LABEL_1233;
                  case 1671950848:
                    v464 = -1089391717;
                    goto LABEL_1233;
                  case -2118072893:
                    v467 = -692491511;
                    v23 = 0;
                    v468 = 0;
                    for ( j = 0; ; j = v3 )
                    {
                      v3 = _byteswap_uint64(v23);
                      v469 = _byteswap_uint64(j);
                      if ( v467 == -1723439523 )
                      {
                        v468 = -2085587457;
                        goto LABEL_1252;
                      }
                      if ( v467 == -692491511 )
                      {
                        v468 = -940426903;
                        v469 = 0x818FFFFFFFFFFFFELL;
                        v3 = 0x7E00000000000001LL;
                      }
                      else if ( v467 == (_DWORD)&loc_94CCF9 )
                      {
                        v468 = 1595048207;
                      }
                      else
                      {
                        switch ( v467 )
                        {
                          case 290148960:
                            *((_QWORD *)&v470 + 1) = j;
                            *(_QWORD *)&v470 = v23;
                            v3 = v470 >> 53;
                            *((_QWORD *)&v470 + 1) = v23;
                            *(_QWORD *)&v470 = j;
                            v471 = v470 >> 53;
                            v468 = 743633288;
LABEL_1246:
                            v469 = v471;
                            goto LABEL_1252;
                          case 452334498:
                            *((_QWORD *)&v474 + 1) = j;
                            *(_QWORD *)&v474 = v23;
                            v3 = v474 >> 16;
                            *((_QWORD *)&v474 + 1) = v23;
                            *(_QWORD *)&v474 = j;
                            v471 = v474 >> 16;
                            v468 = 968046449;
                            goto LABEL_1246;
                          case 591733971:
                            *((_QWORD *)&v472 + 1) = v23;
                            *(_QWORD *)&v472 = j;
                            v3 = v472 >> 46;
                            *((_QWORD *)&v472 + 1) = j;
                            *(_QWORD *)&v472 = v23;
                            v473 = v472 >> 46;
                            v468 = 600959018;
LABEL_1249:
                            v469 = v473;
                            goto LABEL_1252;
                          case 1025090536:
                            *((_QWORD *)&v475 + 1) = v23;
                            *(_QWORD *)&v475 = j;
                            v3 = v475 >> 4;
                            *((_QWORD *)&v475 + 1) = j;
                            *(_QWORD *)&v475 = v23;
                            v473 = v475 >> 4;
                            v468 = -1537227339;
                            goto LABEL_1249;
                          case 1602637302:
                            v37 = 2624463333LL;
                            goto LABEL_1412;
                        }
                        v469 = v23;
                        v3 = j;
                      }
LABEL_1252:
                      v467 ^= v468;
                      v23 = v469;
                    }
                    break;
                }
                goto LABEL_1228;
              }
              *(_QWORD *)&k = _byteswap_uint64(k);
              *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
              *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
              *((_QWORD *)&k + 1) = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
              *((_QWORD *)&k + 1) = v11 & (*((_QWORD *)&k + 1) >> 4) | (16 * (v11 & *((_QWORD *)&k + 1)));
              *((_QWORD *)&k + 1) = (v12 & (*((_QWORD *)&k + 1) >> 2)) + 4 * (v12 & *((_QWORD *)&k + 1));
              v464 = -1628241756;
              v465 = __PAIR128__(
                       (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL),
                       ((*((_QWORD *)&k + 1) >> 1) & 0x5555555555555555LL)
                     + 2 * (*((_QWORD *)&k + 1) & 0x5555555555555555uLL));
            }
            break;
        }
LABEL_1233:
        v463 ^= v464;
      }
      break;
  }
  switch ( v9 )
  {
    case 72424398:
      v56 = 2033817682;
      v57 = 0;
      for ( k = 0u; ; *((_QWORD *)&k + 1) = v58 )
      {
        if ( v56 == -2048983410 )
        {
          *(_QWORD *)&v60 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v60 + 1) = k;
          v58 = v60 >> 39;
          v57 = -858955820;
          v59 = k >> 39;
          goto LABEL_148;
        }
        v58 = _byteswap_uint64(k);
        v59 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
        if ( v56 == -157966937 )
        {
          v57 = -1457103516;
          goto LABEL_148;
        }
        if ( v56 == -24853130 )
          break;
        switch ( v56 )
        {
          case 477879536:
            v58 = k >> 28;
            *(_QWORD *)&v64 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v64 + 1) = k;
            v63 = v64 >> 28;
            v57 = 692376507;
            break;
          case 893325131:
            v58 = k >> 5;
            *(_QWORD *)&v66 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v66 + 1) = k;
            v63 = v66 >> 5;
            v57 = 1396477342;
            break;
          case 1226023258:
            k += 0xAB0B4100E1DA6808LL;
            *((_QWORD *)&k + 1) -= 0x7824C441BE0E0ABLL;
            v57 = -1214815188;
            goto LABEL_144;
          case 1506553681:
            v58 = k >> 29;
            *(_QWORD *)&v65 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v65 + 1) = k;
            v63 = v65 >> 29;
            v57 = -1353075978;
            break;
          default:
            switch ( v56 )
            {
              case 1605615811:
                v61 = v11 & (v58 >> 4) | (16 * (v11 & v58));
                v58 = ((((v12 & (v61 >> 2)) + 4 * (v12 & v61)) >> 1) & 0x5555555555555555LL)
                    + 2 * (((v12 & (v61 >> 2)) + 4 * (v12 & v61)) & 0x5555555555555555LL);
                v62 = v11 & (v59 >> 4) | (16 * (v11 & v59));
                v59 = ((((v12 & (v62 >> 2)) + 4 * (v12 & v62)) >> 1) & 0x5555555555555555LL)
                    + 2 * (((v12 & (v62 >> 2)) + 4 * (v12 & v62)) & 0x5555555555555555LL);
                v57 = 1137187891;
                goto LABEL_148;
              case 2033817682:
                v57 = -51943716;
                v59 = 0x18E9FC2DF0C589C4LL;
                v58 = 0x830EE5286E708EBFLL;
                goto LABEL_148;
              case 1711506133:
                v67 = 750524601;
                v23 = 0;
                v3 = 0;
                for ( j = 0; ; j = v68 )
                {
                  v68 = _byteswap_uint64(v23);
                  v69 = _byteswap_uint64(j);
                  switch ( v67 )
                  {
                    case -1995286563:
                      v3 = 1596218028;
                      break;
                    case -1855994720:
                      v79 = _byteswap_uint64(v23);
                      v80 = v11 & (v79 >> 4) | (16 * (v11 & v79));
                      v68 = ((((v12 & (v80 >> 2)) + 4 * (v12 & v80)) >> 1) & 0x5555555555555555LL)
                          + 2 * (((v12 & (v80 >> 2)) + 4 * (v12 & v80)) & 0x5555555555555555LL);
                      v81 = _byteswap_uint64(j);
                      v82 = v11 & (v81 >> 4) | (16 * (v11 & v81));
                      v83 = (v12 & (v82 >> 2)) + 4 * (v12 & v82);
                      v69 = ((v83 >> 1) & 0x5555555555555555LL) + 2 * (v83 & 0x5555555555555555LL);
                      v3 = 4007543478LL;
                      break;
                    case -1627996353:
                      *((_QWORD *)&v70 + 1) = j;
                      *(_QWORD *)&v70 = v23;
                      v68 = v70 >> 11;
                      *((_QWORD *)&v70 + 1) = v23;
                      *(_QWORD *)&v70 = j;
                      v71 = v70 >> 11;
                      v3 = 2049251940;
LABEL_179:
                      v69 = v71;
                      break;
                    case -1185664327:
                      v7 = __CFADD__(v23, 0xB0D2BECB2A132F78LL);
                      v23 -= 0x4F2D4134D5ECD088LL;
                      j = v7 + j - 0x58D9A2044862BD02LL;
                      v3 = 2703266108LL;
                      goto LABEL_175;
                    case -780684897:
                      v3 = 3632308162LL;
                      break;
                    case -757893694:
                      v3 = 1804027771;
                      break;
                    case -731231093:
                      j = (__PAIR128__(j, v23) + __PAIR128__(0xA7BCF570E96FE68LL, 0x28AE4911350F767ELL)) >> 64;
                      v23 += 0x28AE4911350F767ELL;
                      v3 = 112802121;
LABEL_175:
                      v69 = v23;
                      v68 = j;
                      break;
                    case -701100687:
                      *((_QWORD *)&v77 + 1) = v23;
                      *(_QWORD *)&v77 = j;
                      v68 = v77 >> 5;
                      *((_QWORD *)&v77 + 1) = j;
                      *(_QWORD *)&v77 = v23;
                      v3 = 1220588110;
                      v69 = v77 >> 5;
                      break;
                    case 167194205:
                      v23 ^= 0xA939C5A4B70B2F7uLL;
                      j ^= 0x30D014529A26E8A0uLL;
                      v3 = 2561207037LL;
                      goto LABEL_175;
                    case 410297221:
                      v72 = _byteswap_uint64(v23);
                      v73 = v11 & (v72 >> 4) | (16 * (v11 & v72));
                      v68 = ((((v12 & (v73 >> 2)) + 4 * (v12 & v73)) >> 1) & 0x5555555555555555LL)
                          + 2 * (((v12 & (v73 >> 2)) + 4 * (v12 & v73)) & 0x5555555555555555LL);
                      v74 = _byteswap_uint64(j);
                      v75 = v11 & (v74 >> 4) | (16 * (v11 & v74));
                      v76 = (v12 & (v75 >> 2)) + 4 * (v12 & v75);
                      v69 = ((v76 >> 1) & 0x5555555555555555LL) + 2 * (v76 & 0x5555555555555555LL);
                      v3 = 3372421658LL;
                      break;
                    case 750524601:
                      v3 = 2020750905;
                      v69 = 0xC6AE5DB3E38103EBLL;
                      v68 = 0x325CBE8DB7491F64LL;
                      break;
                    case 836246027:
                      v3 = 3853670016LL;
                      break;
                    case 1283493505:
                      *((_QWORD *)&v78 + 1) = j;
                      *(_QWORD *)&v78 = v23;
                      v68 = v78 >> 30;
                      *((_QWORD *)&v78 + 1) = v23;
                      *(_QWORD *)&v78 = j;
                      v71 = v78 >> 30;
                      v3 = 2102957194;
                      goto LABEL_179;
                    case 1422798464:
                      v3 = 407805953;
                      break;
                    case 2139194902:
                      v3 = 4136882635LL;
                      break;
                    case -455891621:
                      v37 = 900385553;
                      goto LABEL_1412;
                    default:
                      goto LABEL_175;
                  }
                  v67 ^= v3;
                  v23 = v69;
                }
                break;
            }
            goto LABEL_144;
        }
        v59 = v63;
LABEL_148:
        v56 ^= v57;
        *(_QWORD *)&k = v59;
      }
      k += __PAIR128__(0x2BA0C13092DAC2E0LL, 0x1C2EBB7DCDDBF2C2LL);
      v57 = -1488393689;
LABEL_144:
      v58 = *((_QWORD *)&k + 1);
      v59 = k;
      goto LABEL_148;
    case 413569617:
      v389 = -1870213146;
      v390 = 0;
      k = 0u;
      while ( 1 )
      {
        switch ( v389 )
        {
          case -2103649433:
            k += 0xF1D9E9172C36ABE6LL;
            *((_QWORD *)&k + 1) -= 0x76A433A65E1E31ABLL;
            v390 = 1904987337;
            break;
          case -1911468681:
            *(_QWORD *)&k = _byteswap_uint64(k);
            *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
            *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
            v391 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
            v392 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
            v393 = v11 & (v392 >> 4) | (16 * (v11 & v392));
            *((_QWORD *)&k + 1) = (v12 & (v393 >> 2)) + 4 * (v12 & v393);
            *(_QWORD *)&k = ((*((_QWORD *)&k + 1) >> 1) & 0x5555555555555555LL)
                          + 2 * (*((_QWORD *)&k + 1) & 0x5555555555555555LL);
            v390 = -2024947997;
LABEL_971:
            *((_QWORD *)&k + 1) = v391;
            break;
          case -1870213146:
            v390 = 513245841;
            *(_QWORD *)&k = 0xBFDA5AF6C25B8576LL;
            *((_QWORD *)&k + 1) = 0x23956420E740C38BLL;
            break;
          case -1304966826:
            k += 0xA5D91021F2288AB7LL;
            *((_QWORD *)&k + 1) -= 0x5B9F90CB97FE984ALL;
            v390 = 2095575929;
            break;
          case -1227276995:
            v391 = k >> 35;
            *(_QWORD *)&v395 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v395 + 1) = k;
            *(_QWORD *)&k = v395 >> 35;
            v390 = 82769003;
            goto LABEL_971;
          case -825214417:
            k += 0x67CB980FCADC6230uLL;
            *((_QWORD *)&k + 1) -= 0x1EC68AC8EE84EC00LL;
            v390 = 856983523;
            break;
          case -661390929:
            *(_QWORD *)&v396 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v396 + 1) = k;
            v391 = v396 >> 55;
            *(_QWORD *)&k = k >> 55;
            v390 = 1510941384;
            goto LABEL_971;
          case -216590418:
            k ^= __PAIR128__(0xBDF16ACE6B7CF1EALL, 0x6F044692DAD0E8DBLL);
            v390 = -1919802032;
            break;
          case 157086612:
            *(_QWORD *)&v394 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v394 + 1) = k;
            v391 = v394 >> 26;
            *(_QWORD *)&k = k >> 26;
            v390 = -774960581;
            goto LABEL_971;
          case 1459191337:
            k += __PAIR128__(0x1E38ACC42C3D6853LL, 0xC8B5BA55B4FD27C0LL);
            v390 = -534756588;
            break;
          case 2122658558:
            k += __PAIR128__(0x25C06D6A5EC9D2CDLL, 0x41AE00F79463E0E0LL);
            v390 = 679234775;
            break;
          case -37438004:
            v397 = -189792296;
            v23 = 0;
            v398 = 0;
            for ( j = 0; ; j = v3 )
            {
              v3 = _byteswap_uint64(v23);
              v399 = _byteswap_uint64(j);
              switch ( v397 )
              {
                case -2117526906:
                  v398 = 381091916;
                  goto LABEL_1003;
                case -1948191532:
                  v23 ^= 0x5443ADDC72131FAuLL;
                  j ^= 0x5AE2481D4C70C048uLL;
                  v398 = 1476878041;
                  goto LABEL_998;
                case -1753343286:
                  v401 = _byteswap_uint64(v23);
                  v402 = v11 & (v401 >> 4) | (16 * (v11 & v401));
                  v3 = ((((v12 & (v402 >> 2)) + 4 * (v12 & v402)) >> 1) & 0x5555555555555555LL)
                     + 2 * (((v12 & (v402 >> 2)) + 4 * (v12 & v402)) & 0x5555555555555555LL);
                  v403 = _byteswap_uint64(j);
                  v404 = v11 & (v403 >> 4) | (16 * (v11 & v403));
                  v405 = (v12 & (v404 >> 2)) + 4 * (v12 & v404);
                  v399 = ((v405 >> 1) & 0x5555555555555555LL) + 2 * (v405 & 0x5555555555555555LL);
                  v398 = 869939575;
                  goto LABEL_1003;
                case -1532746819:
                  v7 = __CFADD__(v23, 0xE28102F8C874F417LL);
                  v23 -= 0x1D7EFD07378B0BE9LL;
                  j = v7 + j - 0x63CA5463978999D1LL;
                  v398 = 793040745;
                  goto LABEL_998;
                case -739792371:
                  *((_QWORD *)&v406 + 1) = j;
                  *(_QWORD *)&v406 = v23;
                  v3 = v406 >> 18;
                  *((_QWORD *)&v406 + 1) = v23;
                  *(_QWORD *)&v406 = j;
                  v407 = v406 >> 18;
                  v398 = 1022269343;
                  break;
                case -284607086:
                  v400 = (__PAIR128__(j, v23) + 0xAC266358DE4DD86LL) >> 64;
                  v23 += 0xAC266358DE4DD86LL;
                  j = v400 - 0x74CE048354247828LL;
                  v398 = -2076381927;
LABEL_998:
                  v399 = v23;
                  v3 = j;
                  goto LABEL_1003;
                case -189792296:
                  v398 = -1383741116;
                  v399 = 0xBDB9CD121BF58D01LL;
                  v3 = 0x2B74F5CE3C2CB40BLL;
                  goto LABEL_1003;
                case 781327250:
                  v398 = -1966467313;
                  goto LABEL_1003;
                case 1495938716:
                  *((_QWORD *)&v408 + 1) = j;
                  *(_QWORD *)&v408 = v23;
                  v3 = v408 >> 52;
                  *((_QWORD *)&v408 + 1) = v23;
                  *(_QWORD *)&v408 = j;
                  v407 = v408 >> 52;
                  v398 = -656200678;
                  break;
                case 1798688907:
                  v23 ^= 0x4E021B5A1CA43B48uLL;
                  j ^= 0x13BD3E3124DA6E5FuLL;
                  v398 = 1168624409;
                  break;
                case -1537733475:
                  v37 = 485984671;
                  goto LABEL_1412;
                default:
                  goto LABEL_998;
              }
              v399 = v407;
LABEL_1003:
              v397 ^= v398;
              v23 = v399;
            }
            break;
        }
        v389 ^= v390;
      }
    case 415219216:
      v441 = 262096825;
      v442 = 0;
      k = 0u;
      while ( 1 )
      {
        if ( v441 == -1353719818 )
        {
          *(_QWORD *)&v446 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v446 + 1) = k;
          v3 = v446 >> 22;
          *(_QWORD *)&k = k >> 22;
          v442 = -957167375;
          goto LABEL_1136;
        }
        if ( v441 == -1278770018 )
          break;
        switch ( v441 )
        {
          case -1072453453:
            k += 0x5A22B5028ECBF806uLL;
            *((_QWORD *)&k + 1) -= 0x66702D7A9EDC3D5ALL;
            v442 = -603619478;
            break;
          case -735655065:
            k += 0xE2FE7A8B3E0CD697LL;
            *((_QWORD *)&k + 1) -= 0x264454ADE0B36765LL;
            v442 = -145643937;
            break;
          case 262096825:
            v442 = 2093606068;
            *(_QWORD *)&k = 0xD549CA98DC36D49CLL;
            *((_QWORD *)&k + 1) = 0x30D1BBB2CE874DCFLL;
            break;
          case 471259097:
            k += 0x2212688E3D7F28CCuLL;
            *((_QWORD *)&k + 1) -= 0x1CD94144CA33685ELL;
            v442 = -936371010;
            break;
          case 1773999879:
            v3 = k >> 44;
            *(_QWORD *)&v443 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v443 + 1) = k;
            *(_QWORD *)&k = v443 >> 44;
            v442 = -629501031;
LABEL_1136:
            *((_QWORD *)&k + 1) = v3;
            break;
          case 1935057677:
            v3 = k >> 63;
            *(_QWORD *)&v445 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v445 + 1) = k;
            *(_QWORD *)&k = v445 >> 63;
            v442 = -602309381;
            goto LABEL_1136;
          case 595029304:
            v447 = 166775643;
            v23 = 0;
            v448 = 0;
            j = 0;
            while ( 1 )
            {
              if ( v447 == -1679634700 )
              {
                j = (__PAIR128__(j, v23) + __PAIR128__(0x172887BF3FE5FCC9LL, 0x79373DB3E62A4B46LL)) >> 64;
                v23 += 0x79373DB3E62A4B46LL;
                v448 = -537087197;
                goto LABEL_1155;
              }
              if ( v447 == -1142364605 )
                break;
              switch ( v447 )
              {
                case -376286423:
                  v3 = _byteswap_uint64(v23);
                  v448 = -1969775856;
                  v23 = _byteswap_uint64(j);
LABEL_1154:
                  j = v3;
                  break;
                case 166775643:
                  v448 = 324398238;
                  v23 = 0x93A4868E2B3207A8LL;
                  j = 0x156F1895E7AE4E4CLL;
                  break;
                case 447031237:
                  v7 = __CFADD__(v23, 0xD1A629C15AB1471FLL);
                  v23 -= 0x2E59D63EA54EB8E1LL;
                  j += v7 + 0x662D0ECEFC671B2BLL;
                  v448 = 1335238886;
                  break;
                case 1142848983:
                  v7 = __CFADD__(v23, 0xD9109A714E8D1D01LL);
                  v23 -= 0x26EF658EB172E2FFLL;
                  j += v7 + 0x78236E6766CED43FLL;
                  v448 = -1383321858;
                  break;
                case 1429407523:
                  v7 = __CFADD__(v23, 0xF6E0AB20C9D247CALL);
                  v23 -= 0x91F54DF362DB836LL;
                  j = v7 + j - 0x4C2945FCD062B6E3LL;
                  v448 = -287579808;
                  break;
                case 1661323321:
                  v37 = 1747679455;
                  goto LABEL_1412;
              }
LABEL_1155:
              v447 ^= v448;
            }
            *((_QWORD *)&v449 + 1) = j;
            *(_QWORD *)&v449 = v23;
            v3 = v449 >> 49;
            *((_QWORD *)&v449 + 1) = v23;
            *(_QWORD *)&v449 = j;
            v23 = v449 >> 49;
            v448 = 537536695;
            goto LABEL_1154;
        }
        v441 ^= v442;
      }
      *(_QWORD *)&v444 = *((_QWORD *)&k + 1);
      *((_QWORD *)&v444 + 1) = k;
      v3 = v444 >> 43;
      *(_QWORD *)&k = k >> 43;
      v442 = 1943284781;
      goto LABEL_1136;
    case 730598370:
      v84 = 2091725519;
      v85 = 0;
      k = 0u;
      while ( 1 )
      {
        if ( v84 == -565820218 )
        {
          v86 = _byteswap_uint64(k);
          v85 = 1019308627;
          *(_QWORD *)&k = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
          goto LABEL_199;
        }
        if ( v84 == -494457195 )
        {
          *(_QWORD *)&v89 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v89 + 1) = k;
          v86 = v89 >> 10;
          *(_QWORD *)&k = k >> 10;
          v85 = -1115535217;
          goto LABEL_199;
        }
        if ( v84 == 610995595 )
          break;
        switch ( v84 )
        {
          case 1594189338:
            v86 = k >> 40;
            *(_QWORD *)&v88 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v88 + 1) = k;
            *(_QWORD *)&k = v88 >> 40;
            v85 = -840224950;
            goto LABEL_199;
          case 1683196356:
            k ^= __PAIR128__(0xFE9A9F10DF31CF40LL, 0x2C6B13CC8002F80CLL);
            v85 = 1077445711;
            break;
          case 2091725519:
            v85 = 419347211;
            *(_QWORD *)&k = 0xF28CE4A6D802F80CLL;
            *((_QWORD *)&k + 1) = 0xFE9A9F10D8922BA3LL;
            break;
          case -1829877424:
            v90 = -171881461;
            v23 = 0;
            v3 = 0;
            for ( j = 0; ; j = v91 )
            {
              if ( v90 == -2093356979 )
              {
                v96 = (__PAIR128__(j, v23) + 0x60988013266FCE40LL) >> 64;
                v23 += 0x60988013266FCE40LL;
                j = v96 - 0x277A6F32DD92CEF1LL;
                v3 = 1270199054;
              }
              else
              {
                v91 = _byteswap_uint64(v23);
                v92 = _byteswap_uint64(j);
                switch ( v90 )
                {
                  case -2032972094:
                    v3 = 3857767406LL;
                    goto LABEL_231;
                  case -1700960939:
                    v7 = __CFADD__(v23, 0xD441629D67869A7ALL);
                    v23 -= 0x2BBE9D6298796586LL;
                    j += v7 + 0x33F57430A9A45F6ALL;
                    v3 = 474885015;
                    break;
                  case -1283182814:
                    v23 ^= 0xF3FCBE8ED2F6847ELL;
                    j ^= 0xFEA14FA6BC764B73LL;
                    v3 = 1372932281;
                    break;
                  case -1043198918:
                    v7 = __CFADD__(v23, 0xDE0985A13101AE6DLL);
                    v23 -= 0x21F67A5ECEFE5193LL;
                    j = v7 + j - 0x6510FEC40A01EAB3LL;
                    v3 = 3623433463LL;
                    break;
                  case -930325693:
                    *((_QWORD *)&v97 + 1) = j;
                    *(_QWORD *)&v97 = v23;
                    v91 = v97 >> 13;
                    *((_QWORD *)&v97 + 1) = v23;
                    *(_QWORD *)&v97 = j;
                    v3 = 157177721;
                    v92 = v97 >> 13;
                    goto LABEL_231;
                  case -497981541:
                    v98 = _byteswap_uint64(v23);
                    v99 = v11 & (v98 >> 4) | (16 * (v11 & v98));
                    v91 = ((((v12 & (v99 >> 2)) + 4 * (v12 & v99)) >> 1) & 0x5555555555555555LL)
                        + 2 * (((v12 & (v99 >> 2)) + 4 * (v12 & v99)) & 0x5555555555555555LL);
                    v100 = _byteswap_uint64(j);
                    v101 = v11 & (v100 >> 4) | (16 * (v11 & v100));
                    v102 = (v12 & (v101 >> 2)) + 4 * (v12 & v101);
                    v92 = ((v102 >> 1) & 0x5555555555555555LL) + 2 * (v102 & 0x5555555555555555LL);
                    v3 = 87998246;
                    goto LABEL_231;
                  case -412100419:
                    v23 ^= 0x5048F65222F0DA3EuLL;
                    j ^= 0x752EB6D9BABEE9AuLL;
                    v3 = 2113060328;
                    break;
                  case -171881461:
                    v3 = 3698177186LL;
                    v92 = 0x163F73997F01CF3ALL;
                    v91 = 0xB5937AB70281CD49LL;
                    goto LABEL_231;
                  case 699201705:
                    *((_QWORD *)&v93 + 1) = v23;
                    *(_QWORD *)&v93 = j;
                    v91 = v93 >> 29;
                    *((_QWORD *)&v93 + 1) = j;
                    *(_QWORD *)&v93 = v23;
                    v94 = v93 >> 29;
                    v3 = 1358468390;
LABEL_222:
                    v92 = v94;
                    goto LABEL_231;
                  case 1663276332:
                    *((_QWORD *)&v95 + 1) = v23;
                    *(_QWORD *)&v95 = j;
                    v91 = v95 >> 5;
                    *((_QWORD *)&v95 + 1) = j;
                    *(_QWORD *)&v95 = v23;
                    v94 = v95 >> 5;
                    v3 = 3759832417LL;
                    goto LABEL_222;
                  case 1725172361:
                    v3 = 3578799531LL;
                    goto LABEL_231;
                  case 2035576207:
                    v3 = 528508678;
                    goto LABEL_231;
                  case 371931341:
                    v37 = 2907332869LL;
                    goto LABEL_1412;
                }
              }
              v92 = v23;
              v91 = j;
LABEL_231:
              v90 ^= v3;
              v23 = v92;
            }
            break;
        }
LABEL_200:
        v84 ^= v85;
      }
      v86 = k >> 11;
      *(_QWORD *)&v87 = *((_QWORD *)&k + 1);
      *((_QWORD *)&v87 + 1) = k;
      *(_QWORD *)&k = v87 >> 11;
      v85 = -97695411;
LABEL_199:
      *((_QWORD *)&k + 1) = v86;
      goto LABEL_200;
    case 838586591:
      v116 = 1996632682;
      v3 = 0;
      for ( k = 0u; ; *((_QWORD *)&k + 1) = v117 )
      {
        if ( v116 == -1764705624 )
        {
          *(_QWORD *)&k = _byteswap_uint64(k);
          *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
          *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
          v117 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
          v131 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
          v132 = v11 & (v131 >> 4) | (16 * (v11 & v131));
          v133 = (v12 & (v132 >> 2)) + 4 * (v12 & v132);
          v118 = ((v133 >> 1) & 0x5555555555555555LL) + 2 * (v133 & 0x5555555555555555LL);
          v3 = 2812292135LL;
        }
        else if ( v116 == -1759879035 )
        {
          *(_QWORD *)&k = _byteswap_uint64(k);
          *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
          *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
          v117 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
          v134 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
          v135 = v11 & (v134 >> 4) | (16 * (v11 & v134));
          v136 = (v12 & (v135 >> 2)) + 4 * (v12 & v135);
          v118 = ((v136 >> 1) & 0x5555555555555555LL) + 2 * (v136 & 0x5555555555555555LL);
          v3 = 1793476606;
        }
        else
        {
          switch ( v116 )
          {
            case -1706219339:
              k += 0xAECF912612590A7uLL;
              *((_QWORD *)&k + 1) -= 0x7045BB63130B0DD0LL;
              v3 = 2464606944LL;
LABEL_309:
              v117 = *((_QWORD *)&k + 1);
              v118 = k;
              goto LABEL_316;
            case -1417799981:
              v117 = k >> 58;
              *(_QWORD *)&v125 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v125 + 1) = k;
              v124 = v125 >> 58;
              v3 = 1013216854;
LABEL_313:
              v118 = v124;
              goto LABEL_316;
            case -1359500696:
              v117 = k >> 8;
              *(_QWORD *)&v130 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v130 + 1) = k;
              v124 = v130 >> 8;
              v3 = 1662291500;
              goto LABEL_313;
            case -997692807:
              k ^= __PAIR128__(0x8EED310211EC477FLL, 0xAC75BDC25FECEAC6LL);
              v3 = 354187678;
              goto LABEL_309;
            case -869734521:
              k += 0x967F414E07EACF09LL;
              *((_QWORD *)&k + 1) -= 0x6AFBE71C98915E43LL;
              v3 = 3687250752LL;
              goto LABEL_309;
            case -840752060:
              *(_QWORD *)&k = _byteswap_uint64(k);
              *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
              *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
              v117 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
              v126 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
              v127 = v11 & (v126 >> 4) | (16 * (v11 & v126));
              v128 = (v12 & (v127 >> 2)) + 4 * (v12 & v127);
              v118 = ((v128 >> 1) & 0x5555555555555555LL) + 2 * (v128 & 0x5555555555555555LL);
              v3 = 1530109676;
              goto LABEL_316;
            case -778824729:
              *(_QWORD *)&v119 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v119 + 1) = k;
              v117 = v119 >> 16;
              v120 = k >> 16;
              v3 = 3189051422LL;
              break;
            default:
              v117 = _byteswap_uint64(k);
              v118 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
              switch ( v116 )
              {
                case -33806469:
                  v3 = 963923202;
                  goto LABEL_316;
                case 145474133:
                  *(_QWORD *)&k = _byteswap_uint64(k);
                  *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
                  *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
                  v117 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
                  v121 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
                  v122 = v11 & (v121 >> 4) | (16 * (v11 & v121));
                  v123 = (v12 & (v122 >> 2)) + 4 * (v12 & v122);
                  v118 = ((v123 >> 1) & 0x5555555555555555LL) + 2 * (v123 & 0x5555555555555555LL);
                  v3 = 1231657494;
                  goto LABEL_316;
                case 401480903:
                  k += 0xB44669FFDB58A6F3LL;
                  *((_QWORD *)&k + 1) -= 0x1CFB600D930C3824LL;
                  v3 = 2376283250LL;
                  goto LABEL_309;
              }
              if ( v116 != 829462159 )
              {
                switch ( v116 )
                {
                  case 1870726137:
                    v3 = 2745820286LL;
                    goto LABEL_316;
                  case 1996632682:
                    v3 = 3656751106LL;
                    v118 = 0x5EC91683057E449CLL;
                    v117 = 0xEDFC186A759A3A62LL;
                    goto LABEL_316;
                  case 1103255619:
                    v137 = 680774573;
                    v23 = 0;
                    v138 = 0;
                    j = 0;
                    while ( 1 )
                    {
                      switch ( v137 )
                      {
                        case 188136411:
                          v7 = __CFADD__(v23, 0x9A1A60CCA022E4E7LL);
                          v23 -= 0x65E59F335FDD1B19LL;
                          j = v7 + j - 0x77D666444155977ALL;
                          v138 = 1360299108;
                          break;
                        case 680774573:
                          v138 = 2014762384;
                          v23 = 0x34F74D541111335FLL;
                          j = 0x70C6C5DFD677CD3DLL;
                          break;
                        case 1172211862:
                          *((_QWORD *)&v139 + 1) = v23;
                          *(_QWORD *)&v139 = j;
                          v3 = v139 >> 2;
                          *(_QWORD *)&v139 = v23;
                          *((_QWORD *)&v139 + 1) = j;
                          v23 = v139 >> 2;
                          v138 = -426079835;
LABEL_329:
                          j = v3;
                          break;
                        case 1350901309:
                          v141 = _byteswap_uint64(v23);
                          v142 = v11 & (v141 >> 4) | (16 * (v11 & v141));
                          v3 = ((((v12 & (v142 >> 2)) + 4 * (v12 & v142)) >> 1) & 0x5555555555555555LL)
                             + 2 * (((v12 & (v142 >> 2)) + 4 * (v12 & v142)) & 0x5555555555555555LL);
                          v143 = _byteswap_uint64(j);
                          v144 = v11 & (v143 >> 4) | (16 * (v11 & v143));
                          v145 = (v12 & (v144 >> 2)) + 4 * (v12 & v144);
                          v23 = ((v145 >> 1) & 0x5555555555555555LL) + 2 * (v145 & 0x5555555555555555LL);
                          v138 = 608583351;
                          goto LABEL_329;
                        case 1512193983:
                          *((_QWORD *)&v140 + 1) = j;
                          *(_QWORD *)&v140 = v23;
                          v3 = v140 >> 39;
                          *((_QWORD *)&v140 + 1) = v23;
                          *(_QWORD *)&v140 = j;
                          v23 = v140 >> 39;
                          v138 = 536655657;
                          goto LABEL_329;
                        case 1958944906:
                          *((_QWORD *)&v146 + 1) = v23;
                          *(_QWORD *)&v146 = j;
                          v3 = v146 >> 5;
                          *(_QWORD *)&v146 = v23;
                          *((_QWORD *)&v146 + 1) = j;
                          v23 = v146 >> 5;
                          v138 = 2146802513;
                          goto LABEL_329;
                        case -1555824333:
                          v37 = 590338857;
                          goto LABEL_1412;
                      }
                      v137 ^= v138;
                    }
                }
                goto LABEL_309;
              }
              *(_QWORD *)&v129 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v129 + 1) = k;
              v117 = v129 >> 46;
              v120 = k >> 46;
              v3 = 2584641628LL;
              break;
          }
          v118 = v120;
        }
LABEL_316:
        v116 ^= v3;
        *(_QWORD *)&k = v118;
      }
      break;
  }
  if ( v9 == 1007253303 )
  {
    v409 = -1439599713;
    v410 = 0;
    for ( k = 0u; ; *((_QWORD *)&k + 1) = v411 )
    {
      switch ( v409 )
      {
        case -1675812711:
          *(_QWORD *)&k = _byteswap_uint64(k);
          *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
          *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
          v411 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
          v413 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
          v414 = v11 & (v413 >> 4) | (16 * (v11 & v413));
          v415 = (v12 & (v414 >> 2)) + 4 * (v12 & v414);
          v412 = ((v415 >> 1) & 0x5555555555555555LL) + 2 * (v415 & 0x5555555555555555LL);
          v410 = 1142079051;
          goto LABEL_1033;
        case -1452728716:
          *(_QWORD *)&v418 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v418 + 1) = k;
          v411 = v418 >> 63;
          v417 = k >> 63;
          v410 = 1740551160;
          break;
        case -1439599713:
          v410 = 1279978057;
          v412 = 0x2B7C2E441A493E01LL;
          v411 = 0xC44D7F45B2EBB670LL;
          goto LABEL_1033;
        case -1085100703:
          k ^= __PAIR128__(0x2B5F72A8F5FF53B9LL, 0xDBFC28652DB1DB69LL);
          v410 = -1285995640;
LABEL_1030:
          v411 = *((_QWORD *)&k + 1);
          v412 = k;
          goto LABEL_1033;
        case -824726132:
          *(_QWORD *)&v416 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v416 + 1) = k;
          v411 = v416 >> 3;
          v417 = k >> 3;
          v410 = 1389006101;
          break;
        default:
          v411 = _byteswap_uint64(k);
          v412 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
          switch ( v409 )
          {
            case -670064942:
              v410 = -381303098;
              goto LABEL_1033;
            case -428107306:
              v410 = 1326614434;
              goto LABEL_1033;
            case 202108649:
              k += __PAIR128__(0x44265DCF720F41BDLL, 0x116FD79BAB89DE46LL);
              v410 = 384500536;
              break;
            case 450948561:
              k += __PAIR128__(0x5D13E5C677D62C8BLL, 0x351EF35E52088698LL);
              v410 = -1287321404;
              break;
            case 826955796:
              k += __PAIR128__(0x715C46705C0145B0LL, 0x95B4605B63D634B9LL);
              v410 = 159503937;
              break;
            case 952864341:
              k += 0x8009B7483E048D5CLL;
              *((_QWORD *)&k + 1) -= 0x5A2E4C24AB96A9BCLL;
              v410 = 1725984557;
              break;
            case 1579934072:
              k ^= __PAIR128__(0x27789941D980A58DLL, 0x727712322F30DCC1LL);
              v410 = -512144359;
              break;
            case -1448745707:
              v419 = -984983028;
              v23 = 0;
              v420 = 0;
              for ( j = 0; ; j = v421 )
              {
                v421 = _byteswap_uint64(v23);
                v3 = _byteswap_uint64(j);
                switch ( v419 )
                {
                  case -1922126939:
                    v420 = -1840250049;
                    break;
                  case -1354194568:
                    v7 = __CFADD__(v23, 0x8C852FC06A4B017ALL);
                    v23 -= 0x737AD03F95B4FE86LL;
                    j = v7 + j - 0x62F7CF79619A2A6ALL;
                    v420 = -1115554833;
                    break;
                  case -984983028:
                    v420 = 251828436;
                    v3 = 0x986430AF63032D32LL;
                    v421 = 0x530C14C9C426A463LL;
                    break;
                  case -901201192:
                    v420 = -97873943;
                    break;
                  case 97215239:
                    v23 ^= 0x466238E84FE0A1BuLL;
                    j ^= 0xBCA6D5C2BBFDB7E0LL;
                    v420 = -2069191285;
                    break;
                  case 315185815:
                    *((_QWORD *)&v423 + 1) = v23;
                    *(_QWORD *)&v423 = j;
                    v421 = v423 >> 45;
                    *((_QWORD *)&v423 + 1) = j;
                    *(_QWORD *)&v423 = v23;
                    v420 = 905287423;
                    v3 = v423 >> 45;
                    break;
                  case 524200090:
                    j = (__PAIR128__(j, v23) + __PAIR128__(0x4E7071366CD05CA3LL, 0x38861111C991003ELL)) >> 64;
                    v23 += 0x38861111C991003ELL;
                    v420 = 2063230616;
                    break;
                  case 658295912:
                    v23 ^= 0x615570CEE70FCE63uLL;
                    j ^= 0xEA7FAC8AF40A648BLL;
                    v420 = -1437440051;
                    break;
                  case 811748657:
                    *((_QWORD *)&v422 + 1) = j;
                    *(_QWORD *)&v422 = v23;
                    v421 = v422 >> 31;
                    *((_QWORD *)&v422 + 1) = v23;
                    *(_QWORD *)&v422 = j;
                    v420 = 2079051571;
                    v3 = v422 >> 31;
                    break;
                  case 1267302914:
                    v424 = v11 & (v421 >> 4) | (16 * (v11 & v421));
                    v425 = (v12 & (v424 >> 2)) + 4 * (v12 & v424);
                    v421 = ((v425 >> 1) & 0x5555555555555555LL) + 2 * (v425 & 0x5555555555555555LL);
                    v426 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                    v427 = (v12 & (v426 >> 2)) + 4 * (v12 & v426);
                    v3 = ((v427 >> 1) & 0x5555555555555555LL) + 2 * (v427 & 0x5555555555555555LL);
                    v420 = -457104518;
                    break;
                  case 1707396610:
                    v428 = v11 & (v421 >> 4) | (16 * (v11 & v421));
                    v429 = (v12 & (v428 >> 2)) + 4 * (v12 & v428);
                    v421 = ((v429 >> 1) & 0x5555555555555555LL) + 2 * (v429 & 0x5555555555555555LL);
                    v430 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                    v431 = (v12 & (v430 >> 2)) + 4 * (v12 & v430);
                    v3 = ((v431 >> 1) & 0x5555555555555555LL) + 2 * (v431 & 0x5555555555555555LL);
                    v420 = 1611640069;
                    break;
                  case -2124298612:
                    v37 = 3686127491LL;
                    goto LABEL_1412;
                  default:
                    v3 = v23;
                    v421 = j;
                    break;
                }
                v419 ^= v420;
                v23 = v3;
              }
              break;
          }
          goto LABEL_1030;
      }
      v412 = v417;
LABEL_1033:
      v409 ^= v410;
      *(_QWORD *)&k = v412;
    }
  }
  switch ( v9 )
  {
    case 1194275147:
      v318 = -1213103084;
      v319 = 0;
      k = 0u;
      while ( 1 )
      {
        switch ( v318 )
        {
          case -2119825752:
            k ^= __PAIR128__(0x4680A5F7D642E38ALL, 0x59397EFEEA26C347LL);
            v319 = 944111730;
            break;
          case -1213103084:
            v319 = -1660020677;
            *(_QWORD *)&k = 0x320EE4E57FCA538ALL;
            *((_QWORD *)&k + 1) = 0x1B8274C44EDE5389LL;
            break;
          case -1176500518:
            k += __PAIR128__(0x760AC9B635349690LL, 0xE6A5B63F05C3528LL);
            v319 = 1704918174;
            break;
          case -1022425343:
            *(_QWORD *)&k = _byteswap_uint64(k);
            *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
            *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
            v320 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
            v322 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
            v323 = v11 & (v322 >> 4) | (16 * (v11 & v322));
            *((_QWORD *)&k + 1) = (v12 & (v323 >> 2)) + 4 * (v12 & v323);
            *(_QWORD *)&k = ((*((_QWORD *)&k + 1) >> 1) & 0x5555555555555555LL)
                          + 2 * (*((_QWORD *)&k + 1) & 0x5555555555555555LL);
            v319 = -391020936;
            goto LABEL_775;
          case -849091678:
            *(_QWORD *)&k = _byteswap_uint64(k);
            *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
            *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
            v320 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
            v325 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
            v326 = v11 & (v325 >> 4) | (16 * (v11 & v325));
            *((_QWORD *)&k + 1) = (v12 & (v326 >> 2)) + 4 * (v12 & v326);
            *(_QWORD *)&k = ((*((_QWORD *)&k + 1) >> 1) & 0x5555555555555555LL)
                          + 2 * (*((_QWORD *)&k + 1) & 0x5555555555555555LL);
            v319 = -939604568;
            goto LABEL_775;
          case -127550712:
            k ^= __PAIR128__(0xAEF9B2029DC907CCLL, 0x52F145FE71F0D72BLL);
            v319 = -347137000;
            break;
          case -85853747:
            k += __PAIR128__(0x9B4A8F44BA75880LL, 0x9CA733FE35A9D21BLL);
            v319 = -1062843756;
            break;
          case 101852225:
            k += __PAIR128__(0x4BA5FFD10F543F33LL, 0xDCD914DEDB40441LL);
            v319 = 1842759477;
            break;
          case 178071050:
            k += __PAIR128__(0x8CD939C0CF2A1B7LL, 0xF1EDB1A2CFDEFBCLL);
            v319 = -260251705;
            break;
          case 321562384:
            k ^= __PAIR128__(0x1A31EAC334D9E6DBLL, 0xF312E9C252B1FBD7LL);
            v319 = -565623630;
            break;
          case 717200431:
            k += __PAIR128__(0x67CC93A89C8760FBLL, 0xE57D7B266E4E506DLL);
            v319 = -374301906;
            break;
          case 733903225:
            v320 = _byteswap_uint64(k);
            v319 = -740572559;
            *(_QWORD *)&k = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
            goto LABEL_775;
          case 977777497:
            v320 = k >> 28;
            *(_QWORD *)&v324 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v324 + 1) = k;
            *(_QWORD *)&k = v324 >> 28;
            v319 = 1012242200;
            goto LABEL_775;
          case 1469099529:
            k += __PAIR128__(0x2ECFD5D76E0C4526LL, 0xA5D13660B667B49LL);
            v319 = -701060959;
            break;
          case 1808032628:
            v320 = k >> 6;
            *(_QWORD *)&v321 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v321 + 1) = k;
            *(_QWORD *)&k = v321 >> 6;
            v319 = 1012190589;
LABEL_775:
            *((_QWORD *)&k + 1) = v320;
            break;
          case -595658172:
            v327 = -126218235;
            v23 = 0;
            v328 = 0;
            j = 0;
            while ( v327 != -459821072 )
            {
              if ( v327 == -305080243 )
              {
                *((_QWORD *)&v336 + 1) = j;
                *(_QWORD *)&v336 = v23;
                v3 = v336 >> 27;
                *((_QWORD *)&v336 + 1) = v23;
                *(_QWORD *)&v336 = j;
                v331 = v336 >> 27;
                v328 = 155678653;
              }
              else
              {
                if ( v327 == -126218235 )
                {
                  v328 = -428803960;
                  v329 = 0xE4E4B2925B85E4B6LL;
                  v3 = 0xAC44977E03370083LL;
                  goto LABEL_808;
                }
                v3 = _byteswap_uint64(v23);
                v329 = _byteswap_uint64(j);
                switch ( v327 )
                {
                  case 102951594:
                    v328 = -143625235;
                    goto LABEL_808;
                  case 290493541:
                    j = (__PAIR128__(j, v23) + __PAIR128__(0x2247FD956F278FCLL, 0x2E721D3B2F09A817LL)) >> 64;
                    v23 += 0x2E721D3B2F09A817LL;
                    v328 = 393379535;
                    goto LABEL_802;
                  case 325754317:
                    *((_QWORD *)&v330 + 1) = j;
                    *(_QWORD *)&v330 = v23;
                    v3 = v330 >> 62;
                    *((_QWORD *)&v330 + 1) = v23;
                    *(_QWORD *)&v330 = j;
                    v331 = v330 >> 62;
                    v328 = 1025498316;
                    break;
                  case 504031373:
                    v23 ^= 0xFE6E1FD77C393455LL;
                    j ^= 0x19CE31799D5858C8uLL;
                    v328 = -203804480;
                    goto LABEL_802;
                  case 779436289:
                    v7 = __CFADD__(v23, 0xAAF6C1AB65FAB18BLL);
                    v23 -= 0x55093E549A054E75LL;
                    j = v7 + j - 0x1B5E4C20F52A93E3LL;
                    v328 = 1736228215;
LABEL_802:
                    v329 = v23;
                    v3 = j;
                    goto LABEL_808;
                  case 1078935541:
                    v328 = 820834893;
                    goto LABEL_808;
                  case 1225391222:
                    *((_QWORD *)&v335 + 1) = v23;
                    *(_QWORD *)&v335 = j;
                    v3 = v335 >> 12;
                    *((_QWORD *)&v335 + 1) = j;
                    *(_QWORD *)&v335 = v23;
                    v334 = v335 >> 12;
                    v328 = 707959358;
                    goto LABEL_805;
                  case 1664837192:
                    v328 = 1919676973;
                    goto LABEL_808;
                  case 1889783224:
                    *((_QWORD *)&v332 + 1) = j;
                    *(_QWORD *)&v332 = v23;
                    v3 = v332 >> 11;
                    *((_QWORD *)&v332 + 1) = v23;
                    *(_QWORD *)&v332 = j;
                    v331 = v332 >> 11;
                    v328 = 1674137717;
                    break;
                  case -246245049:
                    v37 = 1603309403;
                    goto LABEL_1412;
                  default:
                    goto LABEL_802;
                }
              }
              v329 = v331;
LABEL_808:
              v327 ^= v328;
              v23 = v329;
              j = v3;
            }
            *((_QWORD *)&v333 + 1) = v23;
            *(_QWORD *)&v333 = j;
            v3 = v333 >> 36;
            *((_QWORD *)&v333 + 1) = j;
            *(_QWORD *)&v333 = v23;
            v334 = v333 >> 36;
            v328 = -1529311227;
LABEL_805:
            v329 = v334;
            goto LABEL_808;
        }
        v318 ^= v319;
      }
    case 1275658820:
      v350 = 993056713;
      v351 = 0;
      for ( k = 0u; ; *((_QWORD *)&k + 1) = v352 )
      {
        v352 = _byteswap_uint64(k);
        v353 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
        if ( v350 == -2000022459 )
        {
          v351 = -2122230772;
          goto LABEL_873;
        }
        if ( v350 == -1658382544 )
        {
          v351 = -38864669;
          goto LABEL_873;
        }
        if ( v350 == -631166829 )
          break;
        if ( v350 == 155926601 )
        {
          *(_QWORD *)&v356 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v356 + 1) = k;
          v352 = v356 >> 19;
          v351 = 475977510;
          v353 = k >> 19;
          goto LABEL_873;
        }
        if ( v350 != 353736559 )
        {
          switch ( v350 )
          {
            case 993056713:
              v351 = -514719910;
              v353 = 0xF3CE3B2A07044FF6LL;
              v352 = 0xB6D75A2352E69D62LL;
              goto LABEL_873;
            case 1105062428:
              k += __PAIR128__(0x75DA79818D6D9CFELL, 0xD574FFA8E2B5BAD1LL);
              v351 = -921174439;
              break;
            case 1122692960:
              v354 = v11 & (v352 >> 4) | (16 * (v11 & v352));
              v352 = ((((v12 & (v354 >> 2)) + 4 * (v12 & v354)) >> 1) & 0x5555555555555555LL)
                   + 2 * (((v12 & (v354 >> 2)) + 4 * (v12 & v354)) & 0x5555555555555555LL);
              v355 = v11 & (v353 >> 4) | (16 * (v11 & v353));
              v353 = ((((v12 & (v355 >> 2)) + 4 * (v12 & v355)) >> 1) & 0x5555555555555555LL)
                   + 2 * (((v12 & (v355 >> 2)) + 4 * (v12 & v355)) & 0x5555555555555555LL);
              v351 = 1369555501;
              goto LABEL_873;
            case 1619652563:
              v357 = v11 & (v352 >> 4) | (16 * (v11 & v352));
              v352 = ((((v12 & (v357 >> 2)) + 4 * (v12 & v357)) >> 1) & 0x5555555555555555LL)
                   + 2 * (((v12 & (v357 >> 2)) + 4 * (v12 & v357)) & 0x5555555555555555LL);
              v358 = v11 & (v353 >> 4) | (16 * (v11 & v353));
              v353 = ((((v12 & (v358 >> 2)) + 4 * (v12 & v358)) >> 1) & 0x5555555555555555LL)
                   + 2 * (((v12 & (v358 >> 2)) + 4 * (v12 & v358)) & 0x5555555555555555LL);
              v351 = 576913587;
              goto LABEL_873;
            case 323693901:
              v359 = 224289627;
              v23 = 0;
              v360 = 0;
              for ( j = 0; ; j = v361 )
              {
                switch ( v359 )
                {
                  case -1746612318:
                    *((_QWORD *)&v374 + 1) = j;
                    *(_QWORD *)&v374 = v23;
                    v361 = v374 >> 38;
                    *((_QWORD *)&v374 + 1) = v23;
                    *(_QWORD *)&v374 = j;
                    v369 = v374 >> 38;
                    v360 = -1339282961;
                    break;
                  case -1360407151:
                    *((_QWORD *)&v362 + 1) = v23;
                    *(_QWORD *)&v362 = j;
                    v361 = v362 >> 16;
                    *((_QWORD *)&v362 + 1) = j;
                    *(_QWORD *)&v362 = v23;
                    v360 = 957159987;
                    v3 = v362 >> 16;
                    goto LABEL_904;
                  case -1173687062:
                    j = (__PAIR128__(j, v23) + __PAIR128__(0x1A6882CCD0A5B3EFLL, 0x3D11D0FA0F7EFB18LL)) >> 64;
                    v23 += 0x3D11D0FA0F7EFB18LL;
                    v360 = -2122656335;
                    goto LABEL_903;
                  case -790942810:
                    v7 = __CFADD__(v23, 0xEF4CBA7556217B7ELL);
                    v23 -= 0x10B3458AA9DE8482LL;
                    j = v7 + j - 0x303B46832C240DA9LL;
                    v360 = 588254831;
                    goto LABEL_903;
                  case -586556471:
                    v23 ^= 0xDAA206A5EB283AB3LL;
                    j ^= 0x15690867BED63C91uLL;
                    v360 = -2077796594;
LABEL_903:
                    v3 = v23;
                    v361 = j;
                    goto LABEL_904;
                  case -204790327:
                    v363 = (__PAIR128__(j, v23) + 0x3C1CDF443B1D338LL) >> 64;
                    v23 += 0x3C1CDF443B1D338LL;
                    j = v363 - 0x5DF3B0A6AA5F5023LL;
                    v360 = 1150549690;
                    goto LABEL_903;
                  case 224289627:
                    v360 = -799557486;
                    v3 = 0x531F17B2E440AAEALL;
                    v361 = 0xE9918251728B39ECLL;
                    goto LABEL_904;
                  case 494082106:
                    v23 ^= 0xE90F52799DBE9A14LL;
                    j ^= 0x676E3A5A6E91DBDDuLL;
                    v360 = 1638805382;
                    goto LABEL_903;
                  case 667477581:
                    *((_QWORD *)&v368 + 1) = j;
                    *(_QWORD *)&v368 = v23;
                    v361 = v368 >> 7;
                    *((_QWORD *)&v368 + 1) = v23;
                    *(_QWORD *)&v368 = j;
                    v369 = v368 >> 7;
                    v360 = -1648225625;
                    break;
                  default:
                    v361 = _byteswap_uint64(v23);
                    v3 = _byteswap_uint64(j);
                    switch ( v359 )
                    {
                      case 902900723:
                        v360 = -452329387;
                        goto LABEL_904;
                      case 992278008:
                        v7 = __CFADD__(v23, 0xC3AD270DB984D51CLL);
                        v23 -= 0x3C52D8F2467B2AE4LL;
                        j += v7 + 0x4A5ED03068797891LL;
                        v360 = 250994187;
                        break;
                      case 997204315:
                        v364 = v11 & (v361 >> 4) | (16 * (v11 & v361));
                        v365 = (v12 & (v364 >> 2)) + 4 * (v12 & v364);
                        v361 = ((v365 >> 1) & 0x5555555555555555LL) + 2 * (v365 & 0x5555555555555555LL);
                        v366 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                        v367 = (v12 & (v366 >> 2)) + 4 * (v12 & v366);
                        v3 = ((v367 >> 1) & 0x5555555555555555LL) + 2 * (v367 & 0x5555555555555555LL);
                        v360 = 5559459;
                        goto LABEL_904;
                      case 1496222919:
                        v370 = v11 & (v361 >> 4) | (16 * (v11 & v361));
                        v371 = (v12 & (v370 >> 2)) + 4 * (v12 & v370);
                        v361 = ((v371 >> 1) & 0x5555555555555555LL) + 2 * (v371 & 0x5555555555555555LL);
                        v372 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                        v373 = (v12 & (v372 >> 2)) + 4 * (v12 & v372);
                        v3 = ((v373 >> 1) & 0x5555555555555555LL) + 2 * (v373 & 0x5555555555555555LL);
                        v360 = 1146983677;
                        goto LABEL_904;
                      case 2094872508:
                        v7 = __CFADD__(v23, 0x8ED6511D36630613LL);
                        v23 -= 0x7129AEE2C99CF9EDLL;
                        j += v7 + 0x361A692CC57E03B0LL;
                        v360 = -768286163;
                        break;
                      case -1218913421:
                        v37 = 2621716020LL;
                        goto LABEL_1412;
                    }
                    goto LABEL_903;
                }
                v3 = v369;
LABEL_904:
                v359 ^= v360;
                v23 = v3;
              }
              break;
          }
          goto LABEL_871;
        }
        v351 = -2009956257;
LABEL_873:
        v350 ^= v351;
        *(_QWORD *)&k = v353;
      }
      k ^= __PAIR128__(0x3CF2FD30C284E45ALL, 0xEB3C3B7D1A4E0AD9LL);
      v351 = -1682128241;
LABEL_871:
      v352 = *((_QWORD *)&k + 1);
      v353 = k;
      goto LABEL_873;
    case 1517271868:
      v337 = -664690723;
      v338 = 0;
      k = 0u;
      while ( 1 )
      {
        switch ( v337 )
        {
          case -1977490793:
            k ^= __PAIR128__(0x710CFE6AF194D820LL, 0xDC5D1DF415E0889ELL);
            v338 = 2138762465;
            break;
          case -664690723:
            v338 = -326531980;
            *(_QWORD *)&k = 0xC5F2E84B4CD10141LL;
            *((_QWORD *)&k + 1) = 0x89BDD5463F1BF224LL;
            break;
          case -178581898:
            v339 = k >> 1;
            *(_QWORD *)&v342 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v342 + 1) = k;
            *(_QWORD *)&k = v342 >> 1;
            v338 = -2020505389;
            goto LABEL_825;
          case 52064173:
            *(_QWORD *)&v340 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v340 + 1) = k;
            v339 = v340 >> 1;
            *(_QWORD *)&k = k >> 1;
            v338 = 305423334;
LABEL_825:
            *((_QWORD *)&k + 1) = v339;
            break;
          case 430393169:
            k += 0xE4403132DDEC0158LL;
            *((_QWORD *)&k + 1) -= 0x7ABFD6C0AF17CFA9LL;
            v338 = -1819892282;
            break;
          case 887626665:
            v339 = k >> 14;
            *(_QWORD *)&v341 = *((_QWORD *)&k + 1);
            *((_QWORD *)&v341 + 1) = k;
            *(_QWORD *)&k = v341 >> 14;
            v338 = 760175864;
            goto LABEL_825;
          case 1925875365:
            k += __PAIR128__(0x65725D10EC8DC553LL, 0x8273A0275E461B1BLL);
            v338 = 1909516552;
            break;
          case 288230475:
            v343 = 230591874;
            v23 = 0;
            v344 = 0;
            for ( j = 0; ; j = v3 )
            {
              if ( v343 == -1675690006 )
              {
                v23 ^= 0xD4DAD6B27991B105LL;
                j ^= 0x69F108FF23191FC2uLL;
                v344 = 1361386651;
              }
              else
              {
                if ( v343 == -851713167 )
                {
                  *((_QWORD *)&v346 + 1) = v23;
                  *(_QWORD *)&v346 = j;
                  v3 = v346 >> 50;
                  *((_QWORD *)&v346 + 1) = j;
                  *(_QWORD *)&v346 = v23;
                  v347 = v346 >> 50;
                  v344 = -31300359;
LABEL_843:
                  v345 = v347;
                  goto LABEL_850;
                }
                v3 = _byteswap_uint64(v23);
                v345 = _byteswap_uint64(j);
                switch ( v343 )
                {
                  case -455915553:
                    v344 = -2002701937;
                    goto LABEL_850;
                  case 230591874:
                    v344 = 1769038827;
                    v345 = 0x8D28A79637C51236LL;
                    v3 = 0x95C02857818E4158LL;
                    goto LABEL_850;
                  case 857311112:
                    v23 ^= 0xDE60621377D5F8B2LL;
                    j ^= 0x4E17BCD599DF393uLL;
                    v344 = -674578345;
                    break;
                  case 1691348585:
                    v344 = 227554591;
                    goto LABEL_850;
                  case 1767889782:
                    v344 = -180280164;
                    v345 = j;
                    v3 = v23;
                    goto LABEL_850;
                  case 1819440720:
                    *((_QWORD *)&v348 + 1) = v23;
                    *(_QWORD *)&v348 = j;
                    v3 = v348 >> 63;
                    *((_QWORD *)&v348 + 1) = j;
                    *(_QWORD *)&v348 = v23;
                    v347 = v348 >> 63;
                    v344 = 492539964;
                    goto LABEL_843;
                  case 1898571372:
                    *((_QWORD *)&v349 + 1) = j;
                    *(_QWORD *)&v349 = v23;
                    v3 = v349 >> 33;
                    *((_QWORD *)&v349 + 1) = v23;
                    *(_QWORD *)&v349 = j;
                    v344 = 325495130;
                    v345 = v349 >> 33;
                    goto LABEL_850;
                  case 1649364790:
                    v37 = 3393953931LL;
                    goto LABEL_1412;
                }
              }
              v345 = v23;
              v3 = j;
LABEL_850:
              v343 ^= v344;
              v23 = v345;
            }
            break;
        }
        v337 ^= v338;
      }
    case 1723333685:
      v180 = 871101138;
      v181 = 0;
      for ( k = 0u; ; *((_QWORD *)&k + 1) = v182 )
      {
        if ( v180 == -2137444011 )
        {
          *(_QWORD *)&k = _byteswap_uint64(k);
          *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
          *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
          v182 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
          v196 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
          v197 = v11 & (v196 >> 4) | (16 * (v11 & v196));
          v198 = (v12 & (v197 >> 2)) + 4 * (v12 & v197);
          v183 = ((v198 >> 1) & 0x5555555555555555LL) + 2 * (v198 & 0x5555555555555555LL);
          v181 = -264599311;
        }
        else
        {
          if ( v180 == -2007133668 )
          {
            k ^= __PAIR128__(0x96AAC386F8765C88LL, 0x99452912E5726F85LL);
            v181 = -377249364;
          }
          else
          {
            if ( v180 == -1907120411 )
            {
              v182 = k >> 51;
              *(_QWORD *)&v185 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v185 + 1) = k;
              v184 = v185 >> 51;
              v181 = -407642452;
LABEL_439:
              v183 = v184;
              goto LABEL_450;
            }
            v182 = _byteswap_uint64(k);
            v183 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
            switch ( v180 )
            {
              case -1355722648:
                v181 = -1010459820;
                goto LABEL_450;
              case -633865047:
                v181 = 1671233605;
                goto LABEL_450;
              case 788992628:
                *(_QWORD *)&v186 = *((_QWORD *)&k + 1);
                *((_QWORD *)&v186 + 1) = k;
                v182 = v186 >> 9;
                v187 = k >> 9;
                v181 = -181342499;
LABEL_441:
                v183 = v187;
                goto LABEL_450;
              case 832625434:
                k += 0x921A1B895DBDAD6uLL;
                *((_QWORD *)&k + 1) -= 0x63ED2A33EE2D39ADLL;
                v181 = -1174583034;
                break;
              case 871101138:
                v181 = 1146844106;
                v183 = 0x3DE95A82B0E0C573LL;
                v182 = 0x78B1BD3CD7766BE4LL;
                goto LABEL_450;
              case 1247617172:
                v181 = 1700410080;
                goto LABEL_450;
              case 1328078062:
                *(_QWORD *)&v192 = *((_QWORD *)&k + 1);
                *((_QWORD *)&v192 + 1) = k;
                v182 = v192 >> 34;
                v187 = k >> 34;
                v181 = -535196538;
                goto LABEL_441;
              case 1641952176:
                v182 = k >> 19;
                *(_QWORD *)&v191 = *((_QWORD *)&k + 1);
                *((_QWORD *)&v191 + 1) = k;
                v184 = v191 >> 19;
                v181 = 730010404;
                goto LABEL_439;
              case 1776318537:
                k ^= __PAIR128__(0xC04D23FEF551EB8LL, 0xBB9DD49158E32D12LL);
                v181 = -377927396;
                break;
              case 1827982140:
                *(_QWORD *)&k = _byteswap_uint64(k);
                *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
                *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
                v182 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
                v193 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
                v194 = v11 & (v193 >> 4) | (16 * (v11 & v193));
                v195 = (v12 & (v194 >> 2)) + 4 * (v12 & v194);
                v183 = ((v195 >> 1) & 0x5555555555555555LL) + 2 * (v195 & 0x5555555555555555LL);
                v181 = -492343847;
                goto LABEL_450;
              case 1889778084:
                *(_QWORD *)&k = _byteswap_uint64(k);
                *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
                *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
                v182 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
                v188 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
                v189 = v11 & (v188 >> 4) | (16 * (v11 & v188));
                v190 = (v12 & (v189 >> 2)) + 4 * (v12 & v189);
                v183 = ((v190 >> 1) & 0x5555555555555555LL) + 2 * (v190 & 0x5555555555555555LL);
                v181 = 1090740926;
                goto LABEL_450;
              case 2008056088:
                v181 = 949509622;
                goto LABEL_450;
              case -1179976468:
                v199 = 1587227755;
                v23 = 0;
                v3 = 0;
                for ( j = 0; ; j = v200 )
                {
                  if ( v199 == -622012119 )
                  {
                    v214 = _byteswap_uint64(v23);
                    v215 = v11 & (v214 >> 4) | (16 * (v11 & v214));
                    v200 = ((((v12 & (v215 >> 2)) + 4 * (v12 & v215)) >> 1) & 0x5555555555555555LL)
                         + 2 * (((v12 & (v215 >> 2)) + 4 * (v12 & v215)) & 0x5555555555555555LL);
                    v216 = _byteswap_uint64(j);
                    v217 = v11 & (v216 >> 4) | (16 * (v11 & v216));
                    v218 = (v12 & (v217 >> 2)) + 4 * (v12 & v217);
                    v201 = ((v218 >> 1) & 0x5555555555555555LL) + 2 * (v218 & 0x5555555555555555LL);
                    v3 = 98749769;
                  }
                  else
                  {
                    v200 = _byteswap_uint64(v23);
                    v201 = _byteswap_uint64(j);
                    if ( v199 == -567353015 )
                    {
                      v3 = 79837280;
                      goto LABEL_482;
                    }
                    if ( v199 == -552725408 )
                    {
                      v206 = _byteswap_uint64(v23);
                      v207 = v11 & (v206 >> 4) | (16 * (v11 & v206));
                      v200 = ((((v12 & (v207 >> 2)) + 4 * (v12 & v207)) >> 1) & 0x5555555555555555LL)
                           + 2 * (((v12 & (v207 >> 2)) + 4 * (v12 & v207)) & 0x5555555555555555LL);
                      v208 = _byteswap_uint64(j);
                      v209 = v11 & (v208 >> 4) | (16 * (v11 & v208));
                      v210 = (v12 & (v209 >> 2)) + 4 * (v12 & v209);
                      v201 = ((v210 >> 1) & 0x5555555555555555LL) + 2 * (v210 & 0x5555555555555555LL);
                      v3 = 3636275883LL;
                    }
                    else
                    {
                      switch ( v199 )
                      {
                        case -437886053:
                          *((_QWORD *)&v213 + 1) = j;
                          *(_QWORD *)&v213 = v23;
                          v200 = v213 >> 35;
                          *((_QWORD *)&v213 + 1) = v23;
                          *(_QWORD *)&v213 = j;
                          v204 = v213 >> 35;
                          v3 = 2329288429LL;
                          break;
                        case -330593190:
                          *((_QWORD *)&v202 + 1) = v23;
                          *(_QWORD *)&v202 = j;
                          v200 = v202 >> 25;
                          *((_QWORD *)&v202 + 1) = j;
                          *(_QWORD *)&v202 = v23;
                          v3 = 162394049;
                          v201 = v202 >> 25;
                          goto LABEL_482;
                        case -9530566:
                          v3 = 2561081669LL;
                          goto LABEL_482;
                        case 129187531:
                          *((_QWORD *)&v211 + 1) = j;
                          *(_QWORD *)&v211 = v23;
                          v200 = v211 >> 49;
                          *((_QWORD *)&v211 + 1) = v23;
                          *(_QWORD *)&v211 = j;
                          v204 = v211 >> 49;
                          v3 = 208150075;
                          break;
                        case 198910192:
                          v205 = (__PAIR128__(j, v23) + 0x7F3B6E4AD8B3CD32LL) >> 64;
                          v23 += 0x7F3B6E4AD8B3CD32LL;
                          j = v205 - 0x76F5E810852426DELL;
                          v3 = 862928956;
LABEL_476:
                          v201 = v23;
                          v200 = j;
                          goto LABEL_482;
                        case 649902851:
                          v7 = __CFADD__(v23, 0x98E55A6FFC6EC197LL);
                          v23 -= 0x671AA59003913E69LL;
                          j += v7 + 0x1FF45CABC7AE74BDLL;
                          v3 = 98937105;
                          goto LABEL_476;
                        case 727847369:
                          j = (__PAIR128__(j, v23) + __PAIR128__(0x694B1B806247AB44LL, 0x13BA7EB834CACFACLL)) >> 64;
                          v23 += 0x13BA7EB834CACFACLL;
                          v3 = 232696522;
                          goto LABEL_476;
                        case 951345356:
                          *((_QWORD *)&v212 + 1) = j;
                          *(_QWORD *)&v212 = v23;
                          v200 = v212 >> 29;
                          *((_QWORD *)&v212 + 1) = v23;
                          *(_QWORD *)&v212 = j;
                          v204 = v212 >> 29;
                          v3 = 3573542038LL;
                          break;
                        case 1587227755:
                          v3 = 2159398178LL;
                          v201 = 0x73D93AE5F7C77277LL;
                          v200 = 0x8F35BD051685D114LL;
                          goto LABEL_482;
                        case 1741263487:
                          j = (__PAIR128__(j, v23) + __PAIR128__(0x4FA46487273F872LL, 0x695938EC464AFB93LL)) >> 64;
                          v23 += 0x695938EC464AFB93LL;
                          v3 = 1286308790;
                          goto LABEL_476;
                        case 1865448822:
                          *((_QWORD *)&v203 + 1) = j;
                          *(_QWORD *)&v203 = v23;
                          v200 = v203 >> 15;
                          *((_QWORD *)&v203 + 1) = v23;
                          *(_QWORD *)&v203 = j;
                          v204 = v203 >> 15;
                          v3 = 2422140492LL;
                          break;
                        case 593039890:
                          v37 = 2766604289LL;
                          goto LABEL_1412;
                        default:
                          goto LABEL_476;
                      }
                      v201 = v204;
                    }
                  }
LABEL_482:
                  v199 ^= v3;
                  v23 = v201;
                }
                break;
            }
          }
          v182 = *((_QWORD *)&k + 1);
          v183 = k;
        }
LABEL_450:
        v180 ^= v181;
        *(_QWORD *)&k = v183;
      }
      break;
  }
  if ( v9 == 1733931664 )
  {
    v103 = 107052767;
    v104 = 0;
    k = 0u;
    while ( 1 )
    {
      switch ( v103 )
      {
        case -1596245807:
          v3 = _byteswap_uint64(k);
          v104 = -1833437802;
          *(_QWORD *)&k = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
          goto LABEL_258;
        case -1467688406:
          k += __PAIR128__(0x272C93824F81FFD9LL, 0x8CA47EA1293507D8LL);
          v104 = -1158291858;
          break;
        case -1332854075:
          *(_QWORD *)&v105 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v105 + 1) = k;
          v3 = v105 >> 2;
          *(_QWORD *)&k = k >> 2;
          v104 = 403347695;
LABEL_258:
          *((_QWORD *)&k + 1) = v3;
          break;
        case -784289932:
          *(_QWORD *)&v106 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v106 + 1) = k;
          v3 = v106 >> 2;
          *(_QWORD *)&k = k >> 2;
          v104 = 1640951217;
          goto LABEL_258;
        case 107052767:
          v104 = -685649493;
          *(_QWORD *)&k = 0x5B41964770CD3AB0LL;
          *((_QWORD *)&k + 1) = 0x6156AFC89E290C1CLL;
          break;
        case 289845660:
          k ^= __PAIR128__(0xF9D1F44AA13AE5DCLL, 0xA818439B2E3800EDLL);
          v104 = 609736830;
          break;
        case 309396548:
          k ^= __PAIR128__(0x822C514AED4188ADLL, 0x8D9E0DE74F6B106DLL);
          v104 = 739631271;
          break;
        case 845991239:
          *(_QWORD *)&v107 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v107 + 1) = k;
          v3 = v107 >> 51;
          *(_QWORD *)&k = k >> 51;
          v104 = -1802918219;
          goto LABEL_258;
        case 890333666:
          *(_QWORD *)&v108 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v108 + 1) = k;
          v3 = v108 >> 59;
          *(_QWORD *)&k = k >> 59;
          v104 = 1838089489;
          goto LABEL_258;
        case 1046799587:
          *(_QWORD *)&v109 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v109 + 1) = k;
          v3 = v109 >> 10;
          *(_QWORD *)&k = k >> 10;
          v104 = 1530677880;
          goto LABEL_258;
        case 1486777587:
          k += __PAIR128__(0x57BF4772FFB2BBEDLL, 0x5822A40814A8FA84LL);
          v104 = -129674206;
          break;
        case 1700310683:
          k ^= __PAIR128__(0x975D2DDADE742CB1LL, 0x40EDB7FA3E81A1FDLL);
          v104 = 1948131079;
          break;
        case -1494914062:
          v110 = -155659747;
          v23 = 0;
          v111 = 0;
          j = 0;
          while ( 1 )
          {
            switch ( v110 )
            {
              case -1180804647:
                v7 = __CFADD__(v23, 0xE6554B99AD13EDF8LL);
                v23 -= 0x19AAB46652EC1208LL;
                j += v7 + 0x49501625127A2FF5LL;
                v111 = 1879610416;
                break;
              case -912863767:
                v113 = (__PAIR128__(j, v23) + 0xA44AD7EE6503801LL) >> 64;
                v23 += 0xA44AD7EE6503801LL;
                j = v113 - 0x521E1E86548EAABBLL;
                v111 = -1174734298;
                break;
              case -612703146:
                v115 = (__PAIR128__(j, v23) + 0x319705660BBD43B1LL) >> 64;
                v23 += 0x319705660BBD43B1LL;
                j = v115 - 0x783BFAAF99047AA2LL;
                v111 = -311354267;
                break;
              case -452025420:
                v23 ^= 0xB7352EDE89905C3uLL;
                j ^= 0x3C4CD6BD021DD27DuLL;
                v111 = 1047807970;
                break;
              case -155659747:
                v111 = -1883830087;
                v23 = 0x1598950BC94F47BALL;
                j = 0x87483BFC711A71D1LL;
                break;
              case 906754099:
                v112 = (__PAIR128__(j, v23) + 0x14B4DE3D080C885LL) >> 64;
                v23 += 0x14B4DE3D080C885LL;
                j = v112 - 0xD8F51CA136EBED8LL;
                v111 = 260737186;
                break;
              case 1886140367:
                v23 ^= 0x7402F64C64F23467uLL;
                j ^= 0x851F86251E51BC2DLL;
                v111 = -1788701573;
                break;
              case 2031082148:
                *((_QWORD *)&v114 + 1) = j;
                *(_QWORD *)&v114 = v23;
                v3 = v114 >> 2;
                *((_QWORD *)&v114 + 1) = v23;
                *(_QWORD *)&v114 = j;
                v23 = v114 >> 2;
                v111 = -1064205443;
                j = v3;
                break;
              case 964784273:
                v37 = 544637915;
                goto LABEL_1412;
            }
            v110 ^= v111;
          }
      }
      v103 ^= v104;
    }
  }
  if ( v9 == 1832690486 )
  {
    v219 = -430212626;
    v220 = 0;
    for ( k = 0u; ; *((_QWORD *)&k + 1) = v221 )
    {
      if ( v219 == -1722003657 )
      {
        *(_QWORD *)&k = _byteswap_uint64(k);
        *(_QWORD *)&k = v11 & ((unsigned __int64)k >> 4) | (16 * (v11 & k));
        *(_QWORD *)&k = (v12 & ((unsigned __int64)k >> 2)) + 4 * (v12 & k);
        v221 = (((unsigned __int64)k >> 1) & 0x5555555555555555LL) + 2 * (k & 0x5555555555555555LL);
        v228 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
        v229 = v11 & (v228 >> 4) | (16 * (v11 & v228));
        v230 = (v12 & (v229 >> 2)) + 4 * (v12 & v229);
        v222 = ((v230 >> 1) & 0x5555555555555555LL) + 2 * (v230 & 0x5555555555555555LL);
        v220 = -134306755;
        goto LABEL_510;
      }
      v221 = _byteswap_uint64(k);
      v222 = _byteswap_uint64(*((unsigned __int64 *)&k + 1));
      switch ( v219 )
      {
        case -1613775802:
          v220 = 1725567449;
          break;
        case -1471884734:
          k ^= __PAIR128__(0xF83183FC301F2F8FLL, 0x8A97F474ACC2B08DLL);
          v220 = -1442360214;
LABEL_509:
          v221 = *((_QWORD *)&k + 1);
          v222 = k;
          break;
        case -1294487487:
          k ^= __PAIR128__(0xADA4F6E0D152E7BCLL, 0x7976A602FDA2CF43LL);
          v220 = 445866499;
          goto LABEL_509;
        case -914881945:
          k += 0x974B2B3670BC7C5DLL;
          *((_QWORD *)&k + 1) -= 0x5380D14B7BE41CA2LL;
          v220 = 1454882337;
          goto LABEL_509;
        case -600694332:
          k ^= __PAIR128__(0xE20184128B6664C8LL, 0x4C4A5A7DC49784F3LL);
          v220 = 357180323;
          goto LABEL_509;
        case -430212626:
          v220 = -1990474354;
          v222 = 0x486DE408128D9A83LL;
          v221 = 0x3E5E86E295D753AFLL;
          break;
        case 37979688:
          *(_QWORD *)&v227 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v227 + 1) = k;
          v221 = v227 >> 2;
          v226 = k >> 2;
          v220 = 1015191228;
          goto LABEL_505;
        case 331266531:
          v220 = -1964837164;
          break;
        case 1052840084:
          v221 = k >> 46;
          *(_QWORD *)&v231 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v231 + 1) = k;
          v220 = 763341175;
          v222 = v231 >> 46;
          break;
        default:
          switch ( v219 )
          {
            case 1856170762:
              v223 = v11 & (v221 >> 4) | (16 * (v11 & v221));
              v221 = ((((v12 & (v223 >> 2)) + 4 * (v12 & v223)) >> 1) & 0x5555555555555555LL)
                   + 2 * (((v12 & (v223 >> 2)) + 4 * (v12 & v223)) & 0x5555555555555555LL);
              v224 = v11 & (v222 >> 4) | (16 * (v11 & v222));
              v222 = ((((v12 & (v224 >> 2)) + 4 * (v12 & v224)) >> 1) & 0x5555555555555555LL)
                   + 2 * (((v12 & (v224 >> 2)) + 4 * (v12 & v224)) & 0x5555555555555555LL);
              v220 = -1299133746;
              goto LABEL_510;
            case 1862319200:
              *(_QWORD *)&v225 = *((_QWORD *)&k + 1);
              *((_QWORD *)&v225 + 1) = k;
              v221 = v225 >> 47;
              v226 = k >> 47;
              v220 = -573109215;
LABEL_505:
              v222 = v226;
              goto LABEL_510;
            case -116019809:
              v232 = 1725684340;
              v23 = 0;
              v233 = 0;
              for ( j = 0; ; j = v3 )
              {
                if ( v232 == -1635494186 )
                {
                  v23 ^= 0x7D69C3DB1E6F58C1uLL;
                  j ^= 0xDB62EB444752EF14LL;
                  v233 = -745048847;
                  goto LABEL_537;
                }
                v3 = _byteswap_uint64(v23);
                v234 = _byteswap_uint64(j);
                switch ( v232 )
                {
                  case -1627419547:
                    v233 = -580499067;
                    break;
                  case -1434011577:
                    v235 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                    v3 = ((((v12 & (v235 >> 2)) + 4 * (v12 & v235)) >> 1) & 0x5555555555555555LL)
                       + 2 * (((v12 & (v235 >> 2)) + 4 * (v12 & v235)) & 0x5555555555555555LL);
                    v236 = v11 & (v234 >> 4) | (16 * (v11 & v234));
                    v234 = ((((v12 & (v236 >> 2)) + 4 * (v12 & v236)) >> 1) & 0x5555555555555555LL)
                         + 2 * (((v12 & (v236 >> 2)) + 4 * (v12 & v236)) & 0x5555555555555555LL);
                    v233 = -1549219466;
                    break;
                  case -1010594752:
                    v23 ^= 0xD2D693F66AFBAFDDLL;
                    j ^= 0x31136E4696803006uLL;
                    v233 = -789869412;
LABEL_537:
                    v234 = v23;
                    v3 = j;
                    break;
                  case -773476253:
                    v7 = __CFADD__(v23, 0xB7BB40877284A9D9LL);
                    v23 -= 0x4844BF788D7B5627LL;
                    j += v7 + 0x5B56FCD889C01F87LL;
                    v233 = 2070087716;
                    goto LABEL_537;
                  case 154038577:
                    *((_QWORD *)&v237 + 1) = v23;
                    *(_QWORD *)&v237 = j;
                    v3 = v237 >> 15;
                    *((_QWORD *)&v237 + 1) = j;
                    *(_QWORD *)&v237 = v23;
                    v238 = v237 >> 15;
                    v233 = 1964917083;
LABEL_539:
                    v234 = v238;
                    break;
                  case 321388764:
                    v7 = __CFADD__(v23, 0xC9998C5D2AB3E1B9LL);
                    v23 -= 0x366673A2D54C1E47LL;
                    j += v7 + 0x318B12E6D8502286LL;
                    v233 = -1026707265;
                    goto LABEL_537;
                  case 1134151136:
                    v7 = __CFADD__(v23, 0xB2A2C67FF2023518LL);
                    v23 -= 0x4D5D39800DFDCAE8LL;
                    j += v7 + 0x7EE046A0568D21F9LL;
                    v233 = -585264330;
                    goto LABEL_537;
                  case 1498975377:
                    *((_QWORD *)&v240 + 1) = v23;
                    *(_QWORD *)&v240 = j;
                    v3 = v240 >> 30;
                    *((_QWORD *)&v240 + 1) = j;
                    *(_QWORD *)&v240 = v23;
                    v238 = v240 >> 30;
                    v233 = -945356556;
                    goto LABEL_539;
                  case 1725684340:
                    v233 = -1525131724;
                    v234 = 0x8EF64EF0292238B0LL;
                    v3 = 0x44BAF86CC7F06783LL;
                    break;
                  case 2078557763:
                    v23 ^= 0x6CA1A7C09C321872uLL;
                    j ^= 0x701CB17C63623183uLL;
                    v233 = 582798034;
                    goto LABEL_537;
                  case 2083532906:
                    *((_QWORD *)&v239 + 1) = v23;
                    *(_QWORD *)&v239 = j;
                    v3 = v239 >> 41;
                    *((_QWORD *)&v239 + 1) = j;
                    *(_QWORD *)&v239 = v23;
                    v238 = v239 >> 41;
                    v233 = 131364393;
                    goto LABEL_539;
                  case 1293099559:
                    v37 = 1185982676;
                    goto LABEL_1412;
                  default:
                    goto LABEL_537;
                }
                v232 ^= v233;
                v23 = v234;
              }
              break;
          }
          goto LABEL_509;
      }
LABEL_510:
      v219 ^= v220;
      *(_QWORD *)&k = v222;
    }
  }
  if ( v9 == 1888798415 )
  {
    v241 = 1666406009;
    v242 = 0;
    k = 0u;
    while ( v241 != -780060444 )
    {
      switch ( v241 )
      {
        case 535400289:
          k ^= __PAIR128__(0xC3BD8FA2D0E0945ELL, 0x45F65A67AFA1F394LL);
          v242 = -831998075;
          break;
        case 1219757392:
          k ^= __PAIR128__(0x2082CDF5D7A00B58LL, 0xD560BB56F1FD68B4LL);
          v242 = 1465748017;
          break;
        case 1482204860:
          *(_QWORD *)&v244 = *((_QWORD *)&k + 1);
          *((_QWORD *)&v244 + 1) = k;
          v243 = v244 >> 17;
          *(_QWORD *)&k = k >> 17;
          v242 = 1759335849;
LABEL_558:
          *((_QWORD *)&k + 1) = v243;
          break;
        case 1666406009:
          v242 = 736580393;
          *(_QWORD *)&k = 0xEC279833FBD8ACAFLL;
          *((_QWORD *)&k + 1) = 0x4B2E0E496518DB58LL;
          break;
        case 2137159777:
          k ^= __PAIR128__(0xF962F2054B084500LL, 0x25781FBB546288BCLL);
          v242 = 658169565;
          break;
        case 814084885:
          v246 = 674787150;
          v23 = 0;
          v247 = 0;
          for ( j = 0; ; j = v248 )
          {
            v248 = _byteswap_uint64(v23);
            v3 = _byteswap_uint64(j);
            if ( v246 == -2025445987 )
            {
              v247 = -1639742277;
              goto LABEL_594;
            }
            if ( v246 == -1370565264 )
            {
              *((_QWORD *)&v257 + 1) = j;
              *(_QWORD *)&v257 = v23;
              v248 = v257 >> 44;
              *((_QWORD *)&v257 + 1) = v23;
              *(_QWORD *)&v257 = j;
              v250 = v257 >> 44;
              v247 = 688451821;
              goto LABEL_593;
            }
            if ( v246 == -964652066 )
              break;
            switch ( v246 )
            {
              case -638310220:
                *((_QWORD *)&v256 + 1) = v23;
                *(_QWORD *)&v256 = j;
                v248 = v256 >> 26;
                *((_QWORD *)&v256 + 1) = j;
                *(_QWORD *)&v256 = v23;
                v247 = -342994124;
                v3 = v256 >> 26;
                goto LABEL_594;
              case -589934294:
                v247 = -895451603;
                goto LABEL_594;
              case -564098153:
                v23 ^= 0x531268F81AC7A27DuLL;
                j ^= 0x44A9F069E2F68B35uLL;
                v247 = 45537981;
LABEL_588:
                v3 = v23;
                v248 = j;
                goto LABEL_594;
              case -355189729:
                *((_QWORD *)&v251 + 1) = j;
                *(_QWORD *)&v251 = v23;
                v248 = v251 >> 61;
                *((_QWORD *)&v251 + 1) = v23;
                *(_QWORD *)&v251 = j;
                v250 = v251 >> 61;
                v247 = -2131223726;
                goto LABEL_593;
              case -139248904:
                v247 = 1509814152;
                goto LABEL_594;
              case 376844039:
                v7 = __CFADD__(v23, 0xEA78CA82D22DC4B2LL);
                v23 -= 0x1587357D2DD23B4ELL;
                j = v7 + j - 0x5ACFBA1D052D84BELL;
                v247 = 2020194917;
                goto LABEL_588;
              case 674787150:
                v247 = -238270470;
                v3 = 0xD67CD0F21D46CB01LL;
                v248 = 0x38D5B7B7FFCF4BECLL;
                goto LABEL_594;
              case 846887808:
                v23 ^= 0xBB162BF0EFF674C5LL;
                j ^= 0x896948289108B9D8LL;
                v247 = -184883106;
                goto LABEL_588;
              case 1614357222:
                v7 = __CFADD__(v23, 0xAAE68BFCDAE5097CLL);
                v23 -= 0x55197403251AF684LL;
                j += v7 + 0x17D6C3DD5C49348CLL;
                v247 = 339771009;
                goto LABEL_588;
            }
            if ( v246 != 1781278541 )
            {
              switch ( v246 )
              {
                case 1847563618:
                  v252 = v11 & (v248 >> 4) | (16 * (v11 & v248));
                  v253 = (v12 & (v252 >> 2)) + 4 * (v12 & v252);
                  v248 = ((v253 >> 1) & 0x5555555555555555LL) + 2 * (v253 & 0x5555555555555555LL);
                  v254 = v11 & (v3 >> 4) | (16 * (v11 & v3));
                  v255 = (v12 & (v254 >> 2)) + 4 * (v12 & v254);
                  v3 = ((v255 >> 1) & 0x5555555555555555LL) + 2 * (v255 & 0x5555555555555555LL);
                  v247 = -1716736102;
                  goto LABEL_594;
                case 1954110567:
                  j = (__PAIR128__(j, v23) + __PAIR128__(0x5899F00438485ED1LL, 0x2E6CA6DC8F36D31ALL)) >> 64;
                  v23 += 0x2E6CA6DC8F36D31ALL;
                  v247 = -1441146896;
                  break;
                case 419799334:
                  v37 = 1016972427;
                  goto LABEL_1412;
              }
              goto LABEL_588;
            }
            v247 = 169149867;
LABEL_594:
            v246 ^= v247;
            v23 = v3;
          }
          *((_QWORD *)&v249 + 1) = j;
          *(_QWORD *)&v249 = v23;
          v248 = v249 >> 33;
          *((_QWORD *)&v249 + 1) = v23;
          *(_QWORD *)&v249 = j;
          v250 = v249 >> 33;
          v247 = 743747521;
LABEL_593:
          v3 = v250;
          goto LABEL_594;
      }
      v241 ^= v242;
    }
    *(_QWORD *)&v245 = *((_QWORD *)&k + 1);
    *((_QWORD *)&v245 + 1) = k;
    v243 = v245 >> 63;
    *(_QWORD *)&k = k >> 63;
    v242 = -1360838523;
    goto LABEL_558;
  }
  if ( v9 != 315886582 )
    goto LABEL_1418;
  v552 = 1639731022;
  v553 = 0;
  v554 = 0;
  v555 = 0;
  while ( 2 )
  {
    switch ( v552 )
    {
      case -1565238404:
        *((_QWORD *)&v558 + 1) = v555;
        *(_QWORD *)&v558 = v553;
        v556 = v558 >> 25;
        *((_QWORD *)&v558 + 1) = v553;
        *(_QWORD *)&v558 = v555;
        v553 = v558 >> 25;
        v554 = -136935192;
        goto LABEL_1432;
      case 1150989078:
        v555 = (__PAIR128__(v555, v553) + __PAIR128__(0x31C0FF11765628CALL, 0x25F9210C0C0A9C0CLL)) >> 64;
        v553 += 0x25F9210C0C0A9C0CLL;
        v554 = -433133462;
        goto LABEL_1436;
      case 1432540052:
        v7 = __CFADD__(v553, 0xA2FA4E6F4E6C8118LL);
        v553 -= 0x5D05B190B1937EE8LL;
        v555 += v7 + 0x166CDE76038727E3LL;
        v554 = 218433974;
        goto LABEL_1436;
      case 1483201058:
        v556 = _byteswap_uint64(v553);
        v554 = -1254848675;
        v553 = _byteswap_uint64(v555);
LABEL_1432:
        v555 = v556;
        goto LABEL_1436;
      case 1639731022:
        v554 = 107580363;
        v553 = 0x7834344F21A7426DLL;
        v555 = 0xA4CDC9E8F672B280LL;
        goto LABEL_1436;
      case 1742062725:
        v557 = (__PAIR128__(v555, v553) + 0x4946B077B8E670B0LL) >> 64;
        v553 += 0x4946B077B8E670B0LL;
        v555 = v557 - 0xC1FF7F0AB953FADLL;
        v554 = 366268229;
        goto LABEL_1436;
      case 1912671168:
        v555 = (__PAIR128__(v555, v553) + __PAIR128__(0x56F455F4109F8AA5LL, 0x2C84EBDB7021BC3ALL)) >> 64;
        v553 += 0x2C84EBDB7021BC3ALL;
        v554 = 916175062;
        goto LABEL_1436;
    }
    if ( v552 != -313303681 )
    {
LABEL_1436:
      v552 ^= v554;
      continue;
    }
    break;
  }
  if ( (__int128)__PAIR128__(v4, v2) < (__int128)__PAIR128__(v555, v553) )
    goto LABEL_1463;
  v559 = 1420175095;
  v560 = 0;
  v561 = 0;
  v562 = 0;
  while ( 2 )
  {
    switch ( v559 )
    {
      case -1818378020:
        v567 = _byteswap_uint64(v560);
        v568 = v11 & (v567 >> 4) | (16 * (v11 & v567));
        v569 = (v12 & (v568 >> 2)) + 4 * (v12 & v568);
        v563 = ((v569 >> 1) & 0x5555555555555555LL) + 2 * (v569 & 0x5555555555555555LL);
        v570 = _byteswap_uint64(v562);
        v571 = v11 & (v570 >> 4) | (16 * (v11 & v570));
        v572 = (v12 & (v571 >> 2)) + 4 * (v12 & v571);
        v560 = ((v572 >> 1) & 0x5555555555555555LL) + 2 * (v572 & 0x5555555555555555LL);
        v561 = 1343977644;
        goto LABEL_1461;
      case -1291893491:
        v573 = _byteswap_uint64(v560);
        v574 = v11 & (v573 >> 4) | (16 * (v11 & v573));
        v575 = (v12 & (v574 >> 2)) + 4 * (v12 & v574);
        v563 = ((v575 >> 1) & 0x5555555555555555LL) + 2 * (v575 & 0x5555555555555555LL);
        v576 = _byteswap_uint64(v562);
        v577 = v11 & (v576 >> 4) | (16 * (v11 & v576));
        v578 = (v12 & (v577 >> 2)) + 4 * (v12 & v577);
        v560 = ((v578 >> 1) & 0x5555555555555555LL) + 2 * (v578 & 0x5555555555555555LL);
        v561 = 2141711018;
        goto LABEL_1461;
      case -1014581136:
        *((_QWORD *)&v565 + 1) = v560;
        *(_QWORD *)&v565 = v562;
        v563 = v565 >> 5;
        *(_QWORD *)&v565 = v560;
        *((_QWORD *)&v565 + 1) = v562;
        v560 = v565 >> 5;
        v561 = -1118293502;
        goto LABEL_1461;
      case -362122896:
        *((_QWORD *)&v566 + 1) = v560;
        *(_QWORD *)&v566 = v562;
        v563 = v566 >> 20;
        *(_QWORD *)&v566 = v560;
        *((_QWORD *)&v566 + 1) = v562;
        v560 = v566 >> 20;
        v561 = 453564085;
        goto LABEL_1461;
      case -245192763:
        *((_QWORD *)&v579 + 1) = v562;
        *(_QWORD *)&v579 = v560;
        v563 = v579 >> 35;
        *((_QWORD *)&v579 + 1) = v560;
        *(_QWORD *)&v579 = v562;
        v560 = v579 >> 35;
        v561 = 1134420680;
        goto LABEL_1461;
      case 672830055:
        *((_QWORD *)&v564 + 1) = v562;
        *(_QWORD *)&v564 = v560;
        v563 = v564 >> 11;
        *((_QWORD *)&v564 + 1) = v560;
        *(_QWORD *)&v564 = v562;
        v560 = v564 >> 11;
        v561 = 1319747137;
LABEL_1461:
        v562 = v563;
        goto LABEL_1462;
      case 1420175095:
        v561 = 713143666;
        v560 = 0x5FE5E5FB126BD0CELL;
        v562 = 0x7339968D01613CCALL;
        goto LABEL_1462;
      case 1723018278:
        v563 = _byteswap_uint64(v560);
        v561 = -181474054;
        v560 = _byteswap_uint64(v562);
        goto LABEL_1461;
      case 2116522885:
        *((_QWORD *)&v580 + 1) = v562;
        *(_QWORD *)&v580 = v560;
        v563 = v580 >> 44;
        *((_QWORD *)&v580 + 1) = v560;
        *(_QWORD *)&v580 = v562;
        v560 = v580 >> 44;
        v561 = 1446838754;
        goto LABEL_1461;
      case 2128513650:
        v560 ^= 0xC275A2C2021CF14FLL;
        v562 ^= 0xEEE16486D8A3D634LL;
        v561 = -1800078590;
        goto LABEL_1462;
    }
    if ( v559 != -849825881 )
    {
LABEL_1462:
      v559 ^= v561;
      continue;
    }
    break;
  }
  *(_QWORD *)&v2 = v2 - v560;
LABEL_1463:
  v581 = -1366854212;
  v582 = 0;
  v583 = 0;
  while ( 2 )
  {
    switch ( v581 )
    {
      case -1806369332:
        v582 = _byteswap_uint64(v582);
        v583 = 2015472986;
        goto LABEL_1488;
      case -1605159171:
        v582 ^= 0x5EAA3BF19261765BuLL;
        v583 = -709958165;
        goto LABEL_1488;
      case -1366854212:
        v583 = -2029173045;
        v582 = 0x716EBF893A6D82B3LL;
        goto LABEL_1488;
      case -1336080524:
        v582 = __ROL8__(v582, 9);
        v583 = -530675252;
        goto LABEL_1488;
      case -327855978:
        v582 -= 0x4D19064B19FC224ELL;
        v583 = 1277585003;
        goto LABEL_1488;
      case -227180536:
        v582 = __ROL8__(v582, 25);
        v583 = 1109952380;
        goto LABEL_1488;
      case 696922999:
        v582 ^= 0xEC4C83FAB4AD6B57LL;
        v583 = -603999361;
        goto LABEL_1488;
      case 1342410424:
        v582 -= 0x76013B88647E7C8ELL;
        v583 = -1000901772;
        goto LABEL_1488;
      case 1585416024:
        v582 = __ROL8__(v582, 40);
        v583 = 969550936;
        goto LABEL_1488;
      case 1739959040:
        v582 = __ROL8__(v582, 50);
        v583 = 627330511;
        goto LABEL_1488;
      case 1979568918:
        v582 += 0x5209C80A9DF169D4LL;
        v583 = 729961550;
        goto LABEL_1488;
    }
    if ( v581 != 1121052367 )
    {
LABEL_1488:
      v581 ^= v583;
      continue;
    }
    break;
  }
  v584 = -977049005;
  v585 = 0;
  v586 = 0;
  while ( 1 )
  {
    switch ( v584 )
    {
      case -1089355969:
        v585 += 0x2897CA841D0F6333LL;
        v586 = 1155007203;
        goto LABEL_1511;
      case -977049005:
        v586 = -1735032012;
        v587 = 0x52A2D377ED4483FALL;
        goto LABEL_1512;
      case -746448492:
        v588 = _byteswap_uint64(v585);
        v589 = v11 & (v588 >> 4) | (16 * (v11 & v588));
        v590 = (v12 & (v589 >> 2)) + 4 * (v12 & v589);
        v587 = ((v590 >> 1) & 0x5555555555555555LL) + 2 * (v590 & 0x5555555555555555LL);
        v586 = -262789166;
        goto LABEL_1512;
    }
    v587 = _byteswap_uint64(v585);
    switch ( v584 )
    {
      case -466352087:
        v586 = 934678973;
        goto LABEL_1512;
      case -235766860:
        v585 += 0x2852C648551A4EADLL;
        v586 = -212916555;
        break;
      case 45964545:
        v585 = __ROL8__(v585, 10);
        v586 = -427207384;
        break;
      case 436258623:
        v585 ^= 0x5EB2340B7064D969uLL;
        v586 = -1525581824;
        break;
      case 601112134:
        v586 = 970258809;
        goto LABEL_1512;
      case 1565976935:
        v585 = __ROL8__(v585, 21);
        v586 = 1037973611;
        break;
      case 1619579148:
        v585 = __ROL8__(v585, 2);
        v586 = -1854231880;
        break;
      case -70664740:
        return v2;
    }
LABEL_1511:
    v587 = v585;
LABEL_1512:
    v584 ^= v586;
    v585 = v587;
  }
}


// ---- 687d50 depth 1
__int64 __fastcall sub_687D50(_QWORD *a1, char a2)
{
  __int64 v2; // r14
  __int64 result; // rax

  v2 = a1[2];
  if ( v2 == *a1 )
    sub_5CE090(a1);
  result = a1[1];
  *(_BYTE *)(result + v2) = a2;
  a1[2] = v2 + 1;
  return result;
}


// ---- 687cff depth 1
double __fastcall sub_687CFF(unsigned __int64 a1, unsigned __int64 a2, double a3)
{
  double result; // xmm0_8
  double v5; // [rsp+8h] [rbp-18h]

  result = 0.0;
  if ( a1 < a2 )
  {
    v5 = sub_687D80(a3);
    return sub_687CFF(a1 + 1, a2, a3) + v5;
  }
  return result;
}


// ---- 5da1f0 depth 1
void __fastcall __noreturn sub_5DA1F0(__int64 a1)
{
  _QWORD v1[2]; // [rsp+8h] [rbp-18h] BYREF
  char v2; // [rsp+1Fh] [rbp-1h] BYREF

  v1[0] = &v2;
  v1[1] = sub_5DA220;
  sub_5D6C90((__int64)&unk_1397F1, (__int64)v1, a1);
}


// ---- 5d8330 depth 1
void __noreturn sub_5D8330()
{
  sub_5D8350((__int64)aCalledOptionUn, 43);
}


// ---- 64c070 depth 1
void __fastcall __noreturn sub_64C070(__int64 a1)
{
  _QWORD v1[2]; // [rsp+8h] [rbp-18h] BYREF
  char v2; // [rsp+1Fh] [rbp-1h] BYREF

  v1[0] = &v2;
  v1[1] = sub_64C3B0;
  sub_5D6C90((__int64)&unk_15FE67, (__int64)v1, a1);
}


