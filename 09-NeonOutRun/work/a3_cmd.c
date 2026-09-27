// ---- 4ee779 depth 0
__int64 __fastcall sub_4EE779(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  _BYTE *v4; // r12
  unsigned __int64 v5; // rdi
  __int64 v6; // r13
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // al
  __int64 v9; // r12
  int v10; // r13d
  unsigned int v11; // ebx
  __int64 v12; // r14
  void *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // r14
  void *v17; // r13
  __int64 v18; // r12
  signed __int64 v19; // rbx
  _QWORD *v20; // r14
  __int64 v21; // r13
  signed __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  signed __int64 v27; // rdi
  unsigned int v28; // ebx
  __int64 v29; // r13
  __int64 v30; // rax
  unsigned int v31; // edx
  bool v32; // cc
  _QWORD *v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // r13
  __int128 *v36; // rbx
  unsigned __int8 v37; // r13
  unsigned __int64 v38; // rsi
  __int64 v39; // r14
  __int64 v40; // rbx
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int64 v44; // rdx
  signed __int64 v45; // rcx
  __int128 v46; // xmm0
  _QWORD *v47; // rax
  _QWORD *v48; // r14
  __int128 *v49; // r13
  __int64 v50; // rbx
  unsigned __int8 v51; // al
  __int64 v52; // r12
  unsigned __int64 *v53; // r14
  signed __int64 v54; // rax
  _QWORD *v55; // rbp
  __int64 v56; // rcx
  __int64 v57; // r13
  signed __int64 v58; // rbx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rsi
  unsigned int v61; // ebx
  __int64 v62; // r13
  __int64 v63; // rax
  unsigned int v64; // edx
  _QWORD *v65; // rax
  _QWORD *v66; // rbx
  __int64 v67; // r13
  _QWORD *v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // r14
  unsigned __int64 v72; // r13
  __int64 v73; // rcx
  __int64 v74; // r13
  unsigned __int8 v75; // al
  __int64 v76; // rdi
  __int64 v78; // rbx
  void *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rax
  signed __int32 v82[14]; // [rsp+0h] [rbp-878h] BYREF
  __int64 v83; // [rsp+38h] [rbp-840h]
  unsigned __int8 v84; // [rsp+45h] [rbp-833h]
  char v85; // [rsp+46h] [rbp-832h]
  unsigned __int8 v86; // [rsp+47h] [rbp-831h]
  __int64 v87; // [rsp+48h] [rbp-830h]
  void *ptr; // [rsp+50h] [rbp-828h]
  __int64 v89; // [rsp+58h] [rbp-820h]
  _BYTE *v90; // [rsp+60h] [rbp-818h]
  _BYTE *v91; // [rsp+68h] [rbp-810h] BYREF
  _BYTE v92[40]; // [rsp+70h] [rbp-808h]
  _BYTE v93[24]; // [rsp+98h] [rbp-7E0h] BYREF
  __int128 v94; // [rsp+B0h] [rbp-7C8h]
  __int64 v95; // [rsp+C0h] [rbp-7B8h]
  _BYTE v96[40]; // [rsp+C8h] [rbp-7B0h] BYREF
  _BYTE v97[40]; // [rsp+F0h] [rbp-788h] BYREF
  __int128 *v98; // [rsp+118h] [rbp-760h]
  const char *v99; // [rsp+120h] [rbp-758h]
  _OWORD *v100; // [rsp+128h] [rbp-750h]
  char *v101; // [rsp+130h] [rbp-748h]
  __int64 v102; // [rsp+138h] [rbp-740h]
  _OWORD v103[2]; // [rsp+140h] [rbp-738h] BYREF
  __int64 v104; // [rsp+160h] [rbp-718h]
  __int128 v105; // [rsp+170h] [rbp-708h] BYREF
  __int128 v106; // [rsp+180h] [rbp-6F8h]
  __int64 v107; // [rsp+190h] [rbp-6E8h]
  __int64 v108; // [rsp+198h] [rbp-6E0h]
  char v109; // [rsp+1A0h] [rbp-6D8h] BYREF
  int v110; // [rsp+1A8h] [rbp-6D0h]
  __int128 v111; // [rsp+1B0h] [rbp-6C8h]
  __int128 v112; // [rsp+1C0h] [rbp-6B8h]
  __int128 v113; // [rsp+1D0h] [rbp-6A8h]
  unsigned __int64 v114; // [rsp+1E0h] [rbp-698h]
  char v115[8]; // [rsp+1F0h] [rbp-688h] BYREF
  __int64 v116; // [rsp+1F8h] [rbp-680h]
  void *v117; // [rsp+200h] [rbp-678h]
  __int64 v118; // [rsp+208h] [rbp-670h]
  __int128 v119; // [rsp+210h] [rbp-668h]
  __int128 v120; // [rsp+220h] [rbp-658h]
  __int64 v121; // [rsp+238h] [rbp-640h] BYREF
  __int128 v122; // [rsp+240h] [rbp-638h] BYREF
  __int64 v123; // [rsp+250h] [rbp-628h]
  _BYTE v124[536]; // [rsp+260h] [rbp-618h] BYREF
  _BYTE v125[536]; // [rsp+478h] [rbp-400h] BYREF
  _BYTE v126[416]; // [rsp+690h] [rbp-1E8h] BYREF
  __int128 v127; // [rsp+830h] [rbp-48h]
  __int64 v128; // [rsp+840h] [rbp-38h]

  v2 = 1;
  LODWORD(v3) = sub_4C3A42(*(_QWORD *)(a2 + 480), *(_QWORD *)(a2 + 488), &unk_217E84, 1);
  if ( !(_BYTE)v3 )
  {
    sub_51B9D4(a2);
    return (unsigned int)v3;
  }
  qmemcpy(v125, (const void *)a2, sizeof(v125));
  v4 = v126;
  qmemcpy(v126, (const void *)(a2 + 536), sizeof(v126));
  v128 = *(_QWORD *)(a2 + 968);
  v127 = *(_OWORD *)(a2 + 952);
  qmemcpy(v124, (const void *)a2, sizeof(v124));
  v123 = *(_QWORD *)(a2 + 968);
  v122 = *(_OWORD *)(a2 + 952);
  v99 = aNeon;
  v100 = (_OWORD *)&byte_4;
  *(_QWORD *)v97 = &unk_217E84;
  *(_QWORD *)&v97[8] = 1;
  *(_QWORD *)&v97[16] = aInput_1;
  *(_QWORD *)&v97[24] = 5;
  *(_QWORD *)&v97[32] = v124;
  v98 = &v122;
  sub_5BDF08(v115);
  if ( v115[0] != 6 )
  {
    sub_527C86(v126, v115);
    goto LABEL_113;
  }
  v85 = v3;
  v89 = v116;
  ptr = v117;
  v108 = v118;
  v3 = sub_688C37(0x80u, 0x200u);
  *(_DWORD *)(v3 + 256) = 0;
  *(_BYTE *)(v3 + 260) = 0;
  *(_QWORD *)(v3 + 264) = 0;
  *(_OWORD *)v3 = 0;
  *(_OWORD *)(v3 + 128) = 0;
  *(_QWORD *)(v3 + 272) = 8;
  *(_OWORD *)(v3 + 280) = 0;
  *(_QWORD *)(v3 + 296) = 8;
  *(_QWORD *)(v3 + 304) = 0;
  *(_BYTE *)(v3 + 312) = 1;
  *(_QWORD *)(v3 + 384) = 1;
  *(_QWORD *)(v3 + 392) = 1;
  *(_BYTE *)(v3 + 400) = 0;
  v5 = (unsigned __int64)&v91;
  sub_687F2B(&v91);
  v6 = *(_QWORD *)v92;
  v7 = v92[8];
  if ( (_BYTE)v91 )
  {
    v90 = v126;
    v84 = v92[8];
    *(_QWORD *)v93 = 0;
    *(_QWORD *)&v93[8] = 1;
    *(_QWORD *)&v93[16] = 0;
    *(_QWORD *)&v97[16] = 1610612768;
    *(_QWORD *)v97 = v93;
    *(_QWORD *)&v97[8] = &off_13C7530;
    v8 = sub_5D6E80(v97, &unk_21E367, 41);
    sub_687F71(v8);
    v87 = *(_QWORD *)&v93[8];
    v9 = *(_QWORD *)v93;
    v86 = v93[16];
    v5 = v6;
    v10 = v93[23];
    v11 = *(unsigned __int16 *)&v93[21];
    v12 = *(unsigned int *)&v93[17];
    sub_687F99(v5, v84);
    v13 = (void *)v9;
    if ( !__OFSUB__(-v9, 1) )
    {
      v16 = v86 | ((((unsigned __int64)((v10 << 16) | v11) << 32) | v12) << 8);
      v4 = v90;
      v15 = v87;
      v17 = v13;
LABEL_26:
      sub_687FD8(1, v3);
      sub_688243(1, v3);
      sub_601B54(v89, ptr);
LABEL_110:
      LOBYTE(v3) = v85;
      goto LABEL_111;
    }
    v6 = v87;
    v7 = v86;
    v4 = v90;
  }
  v14 = *(_QWORD *)(v6 + 8);
  if ( v14 == 3 )
  {
    sub_687F99(v6, v7);
    v15 = 1;
    v16 = 0;
    v17 = nullptr;
    goto LABEL_26;
  }
  v90 = v4;
  *(_QWORD *)&v96[16] = v89;
  *(_QWORD *)&v96[24] = ptr;
  *(_QWORD *)&v96[32] = v108;
  *(_QWORD *)v96 = 1;
  *(_QWORD *)&v96[8] = v3;
  v18 = *(_QWORD *)(v6 + 16);
  v84 = v7;
  v87 = v6;
  if ( !v14 )
  {
    DWORD2(v105) = 1000000000;
    memset(v97, 0, sizeof(v97));
    while ( 1 )
    {
      *(_DWORD *)v93 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)(v18 + 128);
          v23 = *(_QWORD *)(v18 + 400);
          if ( (v22 & v23) != 0 )
          {
            if ( *(_QWORD *)v96 == 3 )
              goto LABEL_65;
            *(_QWORD *)v92 = *(_QWORD *)v96;
            *(_OWORD *)&v92[8] = *(_OWORD *)&v96[8];
            *(_OWORD *)&v92[24] = *(_OWORD *)&v96[24];
            v83 = 1;
LABEL_66:
            v40 = v83;
LABEL_73:
            if ( v40 == 2 )
              goto LABEL_77;
            if ( !v40 )
              sub_5D8350(aInternalErrorE, 40, &off_13CA5A0);
LABEL_75:
            v119 = *(_OWORD *)&v92[8];
            v120 = *(_OWORD *)&v92[24];
            if ( *(_QWORD *)v92 == 3 )
              goto LABEL_77;
            *(_QWORD *)v97 = *(_QWORD *)v92;
            *(_OWORD *)&v97[8] = v119;
            *(_OWORD *)&v97[24] = v120;
            v91 = nullptr;
            *(_OWORD *)v92 = 1u;
            *(_QWORD *)&v93[16] = 1610612768;
            *(_QWORD *)v93 = &v91;
            *(_QWORD *)&v93[8] = &off_13C7530;
            v51 = sub_5D6E80(v93, &unk_2215AE, 27);
            sub_687F71(v51);
            v52 = (__int64)v91;
            v16 = *(_QWORD *)&v92[8];
            v15 = *(_QWORD *)v92;
            v5 = (unsigned __int64)v97;
            sub_687FBA(v97);
            if ( __OFSUB__(-v52, 1) )
              goto LABEL_77;
            v79 = (void *)v52;
            sub_687F99(v6, v84);
            sub_687FD8(1, v3);
            LOBYTE(v3) = v85;
            v4 = v90;
            v17 = v79;
LABEL_111:
            *(_QWORD *)v93 = v17;
            *(_QWORD *)&v93[8] = v15;
            *(_QWORD *)&v93[16] = v16;
            sub_5C1103(v97);
            goto LABEL_112;
          }
          v24 = v22 & (v23 - 1);
          v5 = -*(_QWORD *)(v18 + 392);
          v25 = *(_QWORD *)(v18 + 408);
          v26 = *(_QWORD *)(v25 + 48 * v24);
          if ( v22 != v26 )
            break;
          if ( (unsigned __int64)(v24 + 1) >= *(_QWORD *)(v18 + 384) )
            v27 = *(_QWORD *)(v18 + 392) + (v22 & v5);
          else
            v27 = v22 + 1;
          if ( v22 == _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 128), v27, v22) )
          {
            v44 = 48 * v24 + v25;
            *(_QWORD *)v97 = v44;
            v45 = v22 + 1;
            *(_QWORD *)&v97[8] = v45;
            *(_QWORD *)(v44 + 40) = *(_QWORD *)&v96[32];
            v46 = *(_OWORD *)v96;
            *(_OWORD *)(v44 + 24) = *(_OWORD *)&v96[16];
            *(_OWORD *)(v44 + 8) = v46;
            *(_QWORD *)v44 = v45;
            v5 = v18 + 320;
            sub_688785(v18 + 320);
LABEL_65:
            v83 = 2;
            goto LABEL_66;
          }
LABEL_38:
          v5 = (unsigned __int64)v93;
          sub_4C32DF(v93);
        }
        if ( *(_QWORD *)(v18 + 392) + v26 == v22 + 1 )
          break;
        v5 = (unsigned __int64)v93;
        sub_4C32B3(v93);
      }
      _InterlockedOr(v82, 0);
      if ( *(_QWORD *)(v18 + 392) + *(_QWORD *)v18 != v22 )
        goto LABEL_38;
      v28 = DWORD2(v105);
      if ( DWORD2(v105) != 1000000000 )
      {
        v29 = v105;
        v30 = sub_6465A0(v5);
        v32 = v30 < v29;
        if ( v30 == v29 )
        {
          v6 = v87;
          if ( v31 >= v28 )
          {
LABEL_127:
            v91 = nullptr;
            *(_OWORD *)v92 = *(_OWORD *)v96;
            *(_OWORD *)&v92[16] = *(_OWORD *)&v96[16];
            *(_QWORD *)&v92[32] = *(_QWORD *)&v96[32];
            v40 = 0;
            goto LABEL_73;
          }
        }
        else
        {
          v6 = v87;
          if ( !v32 )
            goto LABEL_127;
        }
      }
      v33 = (_QWORD *)sub_6884C9(v5);
      if ( v33 )
      {
        v34 = v33;
        v35 = *v33;
        *v33 = 0;
        if ( v35 )
        {
          *(_QWORD *)&v103[0] = v35;
          *(_QWORD *)(v35 + 24) = 0;
          *(_QWORD *)(v35 + 32) = 0;
          *(_QWORD *)v93 = v97;
          *(_QWORD *)&v93[8] = v18;
          *(_QWORD *)&v93[16] = &v105;
          sub_68D53F(v93, v103);
          *(_QWORD *)v93 = *v34;
          *v34 = v35;
          v5 = (unsigned __int64)v93;
          sub_6884ED(v93);
        }
        else
        {
          *(_QWORD *)&v103[0] = ((__int64 (*)(void))sub_646B40)();
          *(_QWORD *)v93 = v97;
          *(_QWORD *)&v93[8] = v18;
          *(_QWORD *)&v93[16] = &v105;
          sub_68D53F(v93, v103);
          v5 = (unsigned __int64)v103;
          sub_688390(v103);
        }
        v6 = v87;
      }
      else
      {
        *(_QWORD *)&v103[0] = ((__int64 (*)(void))sub_646B40)();
        *(_QWORD *)v93 = v97;
        *(_QWORD *)&v93[8] = v18;
        *(_QWORD *)&v93[16] = &v105;
        sub_68D53F(v93, v103);
        v5 = (unsigned __int64)v103;
        sub_688390(v103);
      }
    }
  }
  if ( (_DWORD)v14 != 1 )
  {
    v110 = 1000000000;
    memset(v103, 0, sizeof(v103));
    v104 = 0;
    sub_604A82(v97, v18);
    if ( *(_DWORD *)v97 == 1 )
    {
      *(_QWORD *)v93 = *(_QWORD *)&v97[8];
      v93[8] = v97[16];
      sub_5DA280(aCalledResultUn, 43, v93, &off_13C75C0, &off_13CA618);
    }
    v36 = *(__int128 **)&v97[8];
    v37 = v97[16];
    v5 = (unsigned __int64)v93;
    sub_4C2D7A(v93, *(_QWORD *)&v97[8] + 56LL);
    v38 = v37;
    if ( *(_QWORD *)v93 )
    {
      *(_OWORD *)v97 = *(_OWORD *)v93;
      v39 = *(_QWORD *)&v93[16];
      *(_QWORD *)&v97[16] = *(_QWORD *)&v93[16];
      v104 = *(_QWORD *)&v93[16];
      sub_69C4A0(v36, v37);
      if ( !v39 )
      {
        sub_687FBA(v96);
        sub_5D8330(&off_13CA630);
      }
      v40 = 2;
      *(_QWORD *)(v39 + 32) = *(_QWORD *)&v96[32];
      v41 = *(_OWORD *)v96;
      *(_OWORD *)(v39 + 16) = *(_OWORD *)&v96[16];
      *(_OWORD *)v39 = v41;
      *(_BYTE *)(v39 + 40) = 1;
      v91 = (_BYTE *)(&dword_0 + 2);
      v5 = (unsigned __int64)v97;
      sub_688390(v97);
      goto LABEL_72;
    }
    if ( *((_BYTE *)v36 + 104) )
    {
      v91 = (_BYTE *)(&dword_0 + 1);
      *(_OWORD *)v92 = *(_OWORD *)v96;
      *(_OWORD *)&v92[16] = *(_OWORD *)&v96[16];
      *(_QWORD *)&v92[32] = *(_QWORD *)&v96[32];
      v5 = (unsigned __int64)v36;
      sub_69C4A0(v36, v37);
      v40 = 1;
LABEL_72:
      v6 = v87;
      goto LABEL_73;
    }
    v112 = *(_OWORD *)&v96[24];
    v111 = *(_OWORD *)&v96[8];
    v47 = (_QWORD *)sub_6884C9(v93);
    v48 = v47;
    if ( v47 )
    {
      LOBYTE(ptr) = v37;
      v49 = v36;
      v50 = *v47;
      *v47 = 0;
      if ( v50 )
      {
        *(_QWORD *)(v50 + 24) = 0;
        *(_QWORD *)(v50 + 32) = 0;
        *(_QWORD *)v97 = 1;
        *(_OWORD *)&v97[8] = v111;
        *(_OWORD *)&v97[24] = v112;
        v98 = v49;
        LOBYTE(v99) = (_BYTE)ptr;
        v100 = v103;
        v101 = &v109;
        v102 = v18;
        v38 = (unsigned __int64)v97;
        sub_68884F(v93, v97, v50);
        *(_QWORD *)v97 = *v48;
        *v48 = v50;
        v5 = (unsigned __int64)v97;
        sub_6884ED(v97);
      }
      else
      {
        v121 = sub_646B40(v93, v38);
        v38 = (unsigned __int64)v97;
        *(_QWORD *)v97 = 1;
        *(_OWORD *)&v97[8] = *(_OWORD *)&v96[8];
        *(_OWORD *)&v97[24] = *(_OWORD *)&v96[24];
        v98 = v49;
        LOBYTE(v99) = (_BYTE)ptr;
        v100 = v103;
        v101 = &v109;
        v102 = v18;
        sub_68884F(v93, v97, v121);
        v5 = (unsigned __int64)&v121;
        sub_688390(&v121);
      }
      v40 = *(_QWORD *)v93;
      v105 = *(_OWORD *)&v93[8];
      v106 = v94;
      v107 = v95;
      if ( *(_QWORD *)v93 != 3 )
      {
        v91 = *(_BYTE **)v93;
        *(_OWORD *)v92 = v105;
        *(_OWORD *)&v92[16] = v106;
        *(_QWORD *)&v92[32] = v107;
        goto LABEL_72;
      }
      v2 = 3;
      v36 = v49;
      v37 = (unsigned __int8)ptr;
    }
    v81 = sub_646B40(v5, v38);
    *(_QWORD *)v93 = v81;
    if ( v48 )
      sub_5D8330(&off_13CA738);
    *(_QWORD *)v97 = v2;
    *(_OWORD *)&v97[8] = v111;
    *(_OWORD *)&v97[24] = v112;
    v98 = v36;
    LOBYTE(v99) = v37;
    v100 = v103;
    v101 = &v109;
    v102 = v18;
    sub_68884F(&v91, v97, v81);
    v5 = (unsigned __int64)v93;
    sub_688390(v93);
    v40 = (__int64)v91;
    goto LABEL_72;
  }
  *(_DWORD *)v97 = 0;
  v19 = *(_QWORD *)(v18 + 128);
  v20 = *(_QWORD **)(v18 + 136);
  ptr = nullptr;
  v89 = 0;
  while ( 1 )
  {
    if ( (v19 & 1) != 0 )
    {
      v21 = 0;
      v20 = nullptr;
      goto LABEL_56;
    }
    v21 = ((unsigned int)v19 >> 1) & 0x1F;
    if ( (_DWORD)v21 == 31 )
    {
      sub_4C32B3(v97);
      goto LABEL_16;
    }
    if ( !(v89 | v21 ^ 0x1E) )
    {
      v89 = sub_688B32();
      free_1(ptr);
      ptr = (void *)v89;
    }
    if ( v20 )
      break;
    v20 = (_QWORD *)sub_688B32();
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 136), (signed __int64)v20, 0) )
    {
      *(_QWORD *)(v18 + 8) = v20;
      break;
    }
    free_1(ptr);
    v89 = (__int64)v20;
    ptr = v20;
LABEL_16:
    v19 = *(_QWORD *)(v18 + 128);
    v20 = *(_QWORD **)(v18 + 136);
  }
  if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 128), v19 + 2, v19) )
  {
    sub_4C32DF(v97);
    goto LABEL_16;
  }
  if ( (_DWORD)v21 == 30 )
  {
    v80 = v89;
    if ( !v89 )
      sub_5D8330(&off_13CA5B8);
    *(_QWORD *)(v18 + 136) = v89;
    _InterlockedAdd64((volatile signed __int64 *)(v18 + 128), 2u);
    v20[186] = v80;
    v21 = 30;
LABEL_57:
    v42 = 6 * v21;
    v20[v42 + 4] = *(_QWORD *)&v96[32];
    v43 = *(_OWORD *)v96;
    *(_OWORD *)&v20[v42 + 2] = *(_OWORD *)&v96[16];
    *(_OWORD *)&v20[v42] = v43;
    _InterlockedOr64(&v20[6 * v21 + 5], 1u);
    v5 = v18 + 256;
    sub_688785(v18 + 256);
    goto LABEL_77;
  }
LABEL_56:
  v5 = (unsigned __int64)ptr;
  free_1(ptr);
  if ( v20 )
    goto LABEL_57;
  v6 = v87;
  if ( *(_QWORD *)v96 != 3 )
  {
    *(_QWORD *)v92 = *(_QWORD *)v96;
    *(_OWORD *)&v92[8] = *(_OWORD *)&v96[8];
    *(_OWORD *)&v92[24] = *(_OWORD *)&v96[24];
    goto LABEL_75;
  }
LABEL_77:
  v53 = (unsigned __int64 *)(v3 + 128);
  DWORD2(v105) = 1000000000;
  memset(v97, 0, sizeof(v97));
LABEL_78:
  LODWORD(v91) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v54 = *(_QWORD *)v3;
      v55 = *(_QWORD **)(v3 + 8);
      v56 = *(_QWORD *)v3 >> 1;
      v57 = v56 & 0x1F;
      if ( v57 != 31 )
      {
        v58 = v54 + 2;
        if ( (v54 & 1) == 0 )
        {
          _InterlockedOr(v82, 0);
          v59 = *v53;
          v60 = *v53 >> 1;
          if ( v56 == v60 )
          {
            if ( (v59 & 1) != 0 )
            {
              *(_QWORD *)&v97[16] = 0;
              v4 = v90;
              v74 = v87;
              goto LABEL_108;
            }
            v61 = DWORD2(v105);
            if ( DWORD2(v105) != 1000000000 )
            {
              v62 = v105;
              v63 = sub_6465A0(v5);
              if ( v63 == v62 )
              {
                if ( v64 >= v61 )
                  goto LABEL_120;
              }
              else if ( v63 >= v62 )
              {
LABEL_120:
                v93[8] = 0;
                v4 = v90;
                v74 = v87;
                goto LABEL_109;
              }
            }
            v65 = (_QWORD *)sub_6884C9(v5);
            if ( v65 && (v66 = v65, v67 = *v65, *v65 = 0, v67) )
            {
              *(_QWORD *)&v103[0] = v67;
              *(_QWORD *)(v67 + 24) = 0;
              *(_QWORD *)(v67 + 32) = 0;
              v91 = v97;
              *(_QWORD *)v92 = v3;
              *(_QWORD *)&v92[8] = &v105;
              sub_68850E(&v91, v103);
              v91 = (_BYTE *)*v66;
              *v66 = v67;
              v5 = (unsigned __int64)&v91;
              sub_6884ED(&v91);
            }
            else
            {
              *(_QWORD *)&v103[0] = sub_646B40(v5, v60);
              v91 = v97;
              *(_QWORD *)v92 = v3;
              *(_QWORD *)&v92[8] = &v105;
              sub_68850E(&v91, v103);
              v5 = (unsigned __int64)v103;
              sub_688390(v103);
            }
            goto LABEL_78;
          }
          v58 = ((v54 ^ v59) >= 0x40) | (unsigned __int64)v58;
        }
        if ( v55 )
          break;
      }
      v5 = (unsigned __int64)&v91;
      sub_4C32B3(&v91);
    }
    if ( v54 == _InterlockedCompareExchange64((volatile signed __int64 *)v3, v58, v54) )
      break;
    v5 = (unsigned __int64)&v91;
    sub_4C32DF(&v91);
  }
  if ( (_DWORD)v57 == 30 )
  {
    v68 = (_QWORD *)sub_68875B(v55);
    v69 = (v58 & 0xFFFFFFFFFFFFFFFELL) + (*v68 != 0) + 2;
    *(_QWORD *)(v3 + 8) = v68;
    *(_QWORD *)v3 = v69;
  }
  *(_QWORD *)&v97[16] = v55;
  *(_QWORD *)&v97[24] = v57;
  v70 = (__int64)&v55[5 * v57 + 1];
  sub_4FCD4C(v70);
  v71 = *(_QWORD *)v70;
  v114 = v55[5 * v57 + 4];
  v113 = *(_OWORD *)&v55[5 * v57 + 2];
  v72 = v57 + 1;
  v4 = v90;
  if ( v72 == 31 )
  {
    v72 = 0;
    goto LABEL_102;
  }
  if ( (_InterlockedOr64((volatile signed __int64 *)(v70 + 32), 2u) & 4) != 0 )
  {
LABEL_102:
    while ( v72 < 0x1E )
    {
      v73 = 5 * v72++;
      if ( (v55[v73 + 5] & 2) == 0 && (_InterlockedOr64(&v55[v73 + 5], 4u) & 2) == 0 )
        goto LABEL_107;
    }
    free(v55);
  }
LABEL_107:
  v74 = v87;
  if ( v71 == 2 )
  {
LABEL_108:
    v93[8] = 1;
LABEL_109:
    *(_QWORD *)v93 = 0;
    *(_QWORD *)&v93[8] = 1;
    *(_QWORD *)&v93[16] = 0;
    *(_QWORD *)&v97[16] = 1610612768;
    *(_QWORD *)v97 = v93;
    *(_QWORD *)&v97[8] = &off_13C7530;
    v75 = sub_651BA0();
    sub_687F71(v75);
    v15 = *(_QWORD *)&v93[8];
    v16 = *(_QWORD *)&v93[16];
    v76 = v74;
    v17 = *(void **)v93;
    sub_687F99(v76, v84);
    sub_687FD8(1, v3);
    goto LABEL_110;
  }
  *(_OWORD *)&v93[8] = v113;
  v78 = v71;
  v16 = v114;
  v15 = *((_QWORD *)&v113 + 1);
  ptr = (void *)v113;
  sub_687F99(v87, v84);
  sub_687FD8(1, v3);
  if ( v78 == 1 )
  {
    LOBYTE(v3) = v85;
    v17 = ptr;
    goto LABEL_111;
  }
  *(_QWORD *)&v97[8] = ptr;
  *(_QWORD *)&v97[16] = v15;
  *(_QWORD *)&v97[24] = v16;
  v97[0] = 6;
  LOBYTE(v3) = v85;
LABEL_112:
  sub_55CACB(v4, v97);
LABEL_113:
  sub_5169C7(&v122);
  sub_51BF12(v124);
  return (unsigned int)v3;
}


// ---- 4c3a42 depth 1
bool __fastcall sub_4C3A42(const void *a1, size_t a2, const void *a3, __int64 a4)
{
  return a2 == a4 && bcmp(a1, a3, a2) == 0;
}


// ---- 5bdf08 depth 1
__int64 __fastcall sub_5BDF08(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h]
  _QWORD v9[12]; // [rsp+18h] [rbp-60h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  sub_4C4934(&v7);
  if ( __OFSUB__(0, (_QWORD)v7) )
  {
    v9[1] = v2;
    v9[2] = v3;
    v9[3] = v4;
    v9[4] = v5;
    v9[5] = *((_QWORD *)&v7 + 1);
    v9[0] = 0x8000000000000008LL;
    return sub_522581(a1, v9);
  }
  else
  {
    result = v8;
    *(_QWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
    *(_BYTE *)a1 = 6;
  }
  return result;
}


// ---- 688c37 depth 1
__int64 __fastcall sub_688C37(size_t alignment, size_t size)
{
  __int64 result; // rax

  result = sub_5CFFA4(size, alignment);
  if ( !result )
    sub_5CC4B1(alignment, size);
  return result;
}


// ---- 687f2b depth 1
__int64 __fastcall sub_687F2B(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  if ( _InterlockedCompareExchange(&dword_1428528, 1, 0) )
    sub_620AE0(&dword_1428528);
  result = sub_4C2CE5(&unk_142852C) & 1;
  *(_QWORD *)(a1 + 8) = &dword_1428528;
  *(_BYTE *)(a1 + 16) = v2;
  *(_QWORD *)a1 = (unsigned int)result;
  return result;
}


// ---- 5d6e80 depth 1
char __fastcall sub_5D6E80(__int64 *a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned int v4; // r14d
  unsigned __int64 v5; // r12
  __int64 i; // rax
  char *v7; // r15
  unsigned __int64 v8; // rdx
  char *v9; // r9
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  char v14; // dl
  unsigned __int64 v15; // rax
  char result; // al
  unsigned int v17; // r14d
  __int64 v18; // r13
  __int16 v19; // bx
  char v20; // cl
  __int16 v21; // r12
  unsigned __int16 v22; // r15
  __int16 v23; // [rsp+8h] [rbp-48h]
  __int16 v24; // [rsp+10h] [rbp-40h]
  __int16 v25; // [rsp+1Ch] [rbp-34h]
  __int64 v26; // [rsp+20h] [rbp-30h]

  v3 = a3;
  v4 = *((_DWORD *)a1 + 4);
  if ( (v4 & 0x18000000) == 0 )
    return (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64))(a1[1] + 24))(*a1, a2, v3);
  if ( (v4 & 0x10000000) != 0 )
  {
    if ( *((_WORD *)a1 + 11) )
    {
      v7 = &a2[a3];
      v8 = 0;
      v9 = a2;
      v10 = a2;
      v11 = *((unsigned __int16 *)a1 + 11);
      while ( 1 )
      {
        v13 = v8;
        if ( v10 == v7 )
          break;
        v14 = *v10;
        if ( *v10 >= 0 )
        {
          v12 = (__int64)(v10 + 1);
        }
        else if ( (unsigned __int8)v14 < 0xE0u )
        {
          v12 = (__int64)(v10 + 2);
        }
        else
        {
          v12 = (__int64)&v10[-((unsigned __int8)v14 < 0xF0u) + 4];
        }
        v8 = v13 + v12 - (_QWORD)v10;
        v10 = (char *)v12;
        if ( !--v11 )
        {
          v11 = 0;
          break;
        }
      }
      a2 = v9;
    }
    else
    {
      v8 = 0;
      v11 = 0;
    }
    v5 = *((unsigned __int16 *)a1 + 11) - v11;
    v3 = v8;
  }
  else if ( a3 >= 0x20 )
  {
    v5 = sub_5D7090(a2, a3);
  }
  else
  {
    v5 = 0;
    if ( a3 )
    {
      for ( i = 0; i != a3; ++i )
        v5 += a2[i] >= -64;
    }
  }
  v15 = *((unsigned __int16 *)a1 + 10);
  if ( v5 >= v15 )
    return (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64))(a1[1] + 24))(*a1, a2, v3);
  v24 = *((_WORD *)a1 + 10);
  v25 = v15 - v5;
  switch ( (v4 >> 29) & 3 )
  {
    case 0u:
    case 3u:
      LOWORD(v15) = 0;
      break;
    case 1u:
      LOWORD(v15) = v15 - v5;
      break;
    case 2u:
      LODWORD(v15) = (unsigned __int16)(v15 - v5) >> 1;
      break;
  }
  v17 = v4 & 0x1FFFFF;
  v18 = *a1;
  v26 = a1[1];
  v23 = v15;
  v19 = v15 + 1;
  while ( --v19 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(v26 + 32))(v18, v17) )
      return 1;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, char *, unsigned __int64))(v26 + 24))(v18, a2, v3);
  result = 1;
  if ( !v20 )
  {
    v21 = v5 + v23 - v24;
    v22 = -1;
    while ( v21 + v22 != 0xFFFF )
    {
      ++v22;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(v26 + 32))(v18, v17) )
        return v22 < (unsigned __int16)(v25 - v23);
    }
    v22 = v25 - v23;
    return v22 < (unsigned __int16)(v25 - v23);
  }
  return result;
}


// ---- 687f71 depth 1
__int64 __fastcall sub_687F71(int a1)
{
  __int64 result; // rax
  char v2; // [rsp+1h] [rbp-1h] BYREF

  if ( a1 )
  {
    v2 = HIBYTE(result);
    sub_5DA280(&unk_220F99, 55, &v2, &unk_13C7560, &off_13CA9A8);
  }
  return result;
}


// ---- 687f99 depth 1
__int64 __fastcall sub_687F99(volatile __int32 *a1)
{
  __int64 result; // rax

  sub_67E6BF(a1 + 1);
  result = (unsigned int)_InterlockedExchange(a1, 0);
  if ( (_DWORD)result == 2 )
    return sub_647030(a1);
  return result;
}


// ---- 51b9d4 depth 1
__int64 __fastcall sub_51B9D4(__int64 a1)
{
  sub_51BF12(a1);
  sub_51C032(a1 + 536);
  return sub_5169C7(a1 + 952);
}


// ---- 527c86 depth 1
__int64 __fastcall sub_527C86(__int64 a1, __int128 *a2)
{
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  __int128 v7; // [rsp+18h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 400);
  v3 = *a2;
  v7 = a2[1];
  v6 = v3;
  v5 = 1;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD, _QWORD))sub_527CCC)(
           a1,
           v2,
           &v5,
           a1 + 376,
           *(unsigned int *)(a1 + 408),
           *(unsigned int *)(a1 + 412));
}


// ---- 4c32b3 depth 1
int __fastcall sub_4C32B3(int *a1)
{
  int result; // eax
  char i; // cl

  result = *a1;
  if ( (unsigned int)*a1 > 6 )
  {
    result = sched_yield();
  }
  else
  {
    for ( i = 1; (i & 1) != 0; i = 0 )
      result *= result;
    while ( result-- != 0 )
      _mm_pause();
  }
  ++*a1;
  return result;
}


// ---- 688b32 depth 1
__int64 sub_688B32()
{
  __int64 result; // rax

  result = sub_5D0089(0x5D8u, 8u);
  if ( !result )
    sub_5CC4B1(8, 1496);
  return result;
}


// ---- 671c25 depth 1
// attributes: thunk
void free_1(void *ptr)
{
  free(ptr);
}


// ---- 4c32df depth 1
__int64 __fastcall sub_4C32DF(_DWORD *a1)
{
  __int64 result; // rax
  char i; // cl
  bool v3; // cf

  LODWORD(result) = 6;
  if ( *a1 < 6u )
    LODWORD(result) = *a1;
  for ( i = 1; (i & 1) != 0; i = 0 )
    LODWORD(result) = result * result;
  while ( 1 )
  {
    v3 = (_DWORD)result == 0;
    result = (unsigned int)(result - 1);
    if ( v3 )
      break;
    _mm_pause();
  }
  ++*a1;
  return result;
}


// ---- 687fd8 depth 1
char __fastcall sub_687FD8(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  _BYTE *v3; // r15
  signed __int64 v4; // r14
  unsigned __int64 v5; // rcx
  bool v6; // zf
  signed __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  signed __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  _QWORD *v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // r15
  __int64 v19; // r15
  _QWORD v21[7]; // [rsp-4h] [rbp-38h] BYREF

  v21[0] = v2;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( !_InterlockedDecrement64((volatile signed __int64 *)a2 + 49) )
      {
        if ( !_interlockedbittestandset64((volatile signed __int32 *)a2 + 32, 0) )
        {
          v3 = a2 + 16;
          LODWORD(v21[0]) = 0;
          while ( (~*v3 & 0x3E) == 0 )
            sub_4C32B3((int *)v21);
          v14 = *(_QWORD *)v3 >> 1;
          v15 = *a2;
          v16 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2 + 1, 0);
          if ( v15 >> 1 != v14 && v16 == nullptr )
          {
            do
            {
              sub_4C32B3((int *)v21);
              v16 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2 + 1, 0);
            }
            while ( !v16 );
          }
          while ( v15 >> 1 != v14 )
          {
            v17 = (v15 >> 1) & 0x1F;
            if ( v17 == 31 )
            {
              sub_68875B(v16);
              v18 = (_QWORD *)*v16;
              free(v16);
              v16 = v18;
            }
            else
            {
              v19 = (__int64)&v16[5 * v17 + 1];
              sub_4FCD4C(v19);
              sub_601B54(*(_QWORD *)(v19 + 8), *(_QWORD *)(v19 + 16));
            }
            v15 += 2LL;
          }
          free(v16);
          *a2 = v15 & 0xFFFFFFFFFFFFFFFELL;
        }
        LOBYTE(v2) = *((_BYTE *)a2 + 400);
        *((_BYTE *)a2 + 400) = 1;
        if ( (_BYTE)v2 )
          LOBYTE(v2) = sub_6883B0(a2);
      }
    }
    else if ( !_InterlockedDecrement64((volatile signed __int64 *)a2 + 15) )
    {
      sub_68830E(a2);
      LOBYTE(v2) = *((_BYTE *)a2 + 128);
      *((_BYTE *)a2 + 128) = 1;
      if ( (_BYTE)v2 )
        LOBYTE(v2) = sub_516CBD(a2);
    }
    return v2;
  }
  if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 65) )
    return v2;
  v4 = a2[16];
  v5 = a2[50];
  do
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 16, v5 | v4, v4);
    v6 = v4 == v7;
    v4 = v7;
  }
  while ( !v6 );
  v8 = a2[50];
  if ( (v4 & v8) == 0 )
  {
    sub_68843A(a2 + 32);
    v8 = a2[50];
  }
  v9 = *a2;
  v10 = ~v8 & v4;
  HIDWORD(v21[0]) = 0;
  while ( 1 )
  {
    v11 = v9 & (v8 - 1);
    v12 = a2[51];
    v13 = *(_QWORD *)(v12 + 40 * v11 + 32);
    if ( v9 + 1 != v13 )
      break;
    if ( v11 + 1 >= a2[48] )
      v13 = a2[49] + (-(__int64)a2[49] & v9);
    sub_601B54(*(_QWORD *)(40 * v11 + v12 + 8), *(_QWORD *)(40 * v11 + v12 + 16));
    v9 = v13;
LABEL_20:
    v8 = a2[50];
  }
  if ( v10 != v9 )
  {
    sub_4C32B3((int *)v21 + 1);
    goto LABEL_20;
  }
  LOBYTE(v2) = *((_BYTE *)a2 + 528);
  *((_BYTE *)a2 + 528) = 1;
  if ( (_BYTE)v2 )
    LOBYTE(v2) = sub_516E20(a2);
  return v2;
}


// ---- 688243 depth 1
void __fastcall sub_688243(__int64 a1, __int64 a2)
{
  char v2; // al
  signed __int64 v3; // rax
  __int64 v4; // rcx
  signed __int64 v5; // rtt
  char v6; // al
  char v7; // al

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 384)) )
      {
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 128), 0) )
          sub_68843A(a2 + 256);
        v2 = *(_BYTE *)(a2 + 400);
        *(_BYTE *)(a2 + 400) = 1;
        if ( v2 )
          sub_6883B0(a2);
      }
    }
    else if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 112)) )
    {
      sub_68830E(a2);
      v7 = *(_BYTE *)(a2 + 128);
      *(_BYTE *)(a2 + 128) = 1;
      if ( v7 )
        sub_516CBD((void *)a2);
    }
  }
  else if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 512)) )
  {
    v3 = *(_QWORD *)(a2 + 128);
    v4 = *(_QWORD *)(a2 + 400);
    do
    {
      v5 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v4 | v3, v3);
    }
    while ( v5 != v3 );
    if ( (v3 & *(_QWORD *)(a2 + 400)) == 0 )
      sub_68843A(a2 + 320);
    v6 = *(_BYTE *)(a2 + 528);
    *(_BYTE *)(a2 + 528) = 1;
    if ( v6 )
      sub_516E20((void *)a2);
  }
}


// ---- 601b54 depth 1
// attributes: thunk
__int64 __fastcall sub_601B54(__int64 a1, __int64 a2)
{
  return sub_5E616F(a1, a2);
}


// ---- 6465a0 depth 1
__int64 sub_6465A0()
{
  return sub_6465B0(1);
}


// ---- 6884c9 depth 1
unsigned __int64 sub_6884C9()
{
  unsigned __int64 result; // rax

  result = __readfsqword(0) - 88;
  if ( __readfsbyte(0xFFFFFFB0) != 1 )
    return sub_6B0F93(result);
  return result;
}


// ---- 68d53f depth 1
__int64 __fastcall sub_68D53F(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r13
  __int64 result; // rax
  __int128 v5; // [rsp+8h] [rbp-60h] BYREF
  __int64 v6; // [rsp+18h] [rbp-50h]
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]

  v2 = *a1;
  v3 = (_QWORD *)a1[1];
  sub_6885F3(v3 + 32, *a1, *a2);
  if ( v3[49] + *v3 != (v3[16] & ~v3[50]) || (v3[16] & v3[50]) != 0 )
    _InterlockedCompareExchange64((volatile signed __int64 *)(*a2 + 24LL), 1, 0);
  result = sub_4C2F00(*a2, *(_QWORD *)a1[2], *(unsigned int *)(a1[2] + 8));
  if ( (unsigned __int64)(result - 1) >= 2 )
  {
    if ( result != 3 )
      sub_5D8350(aInternalErrorE, 40, &off_13CA708);
  }
  else
  {
    sub_6886A9(&v5, v3 + 32, v2);
    if ( !(_QWORD)v5 )
      sub_5D8330(&off_13CA720);
    v8 = v6;
    v7 = v5;
    return sub_688390(&v7);
  }
  return result;
}


// ---- 6884ed depth 1
__int64 __fastcall sub_6884ED(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_688390(a1);
  return result;
}


// ---- 646b40 depth 1
char *sub_646B40()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rt0
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rax
  char *result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9[5]; // [rsp+8h] [rbp-28h] BYREF

  v0 = __readfsqword(0xFFFFFE98);
  if ( v0 <= 2 )
  {
    if ( v0 == 2 )
    {
      v3 = __readfsqword(0xFFFFFEA0);
      if ( !v3 )
      {
        v4 = qword_1438528;
        do
        {
          if ( v4 == -1 )
            sub_646A80();
          v3 = v4 + 1;
          v5 = v4;
          v4 = _InterlockedCompareExchange64(&qword_1438528, v4 + 1, v4);
        }
        while ( v5 != v4 );
        __writefsqword(0xFFFFFEA0, v3);
      }
      v9[0] = 0x8000000000000000LL;
      v6 = sub_646D60(v3, v9);
    }
    else
    {
      v6 = sub_646C50(v0);
    }
    v2 = v6;
  }
  else
  {
    v1 = _InterlockedIncrement64((volatile signed __int64 *)(v0 - 16));
    if ( (v1 < 0) ^ __OFSUB__(v0, 2) | (v1 == 0) )
      BUG();
    v2 = v0 - 16;
  }
  result = (char *)malloc(0x30u);
  if ( !result )
    sub_5CC4B1(8, 48);
  v8 = __readfsqword(0) - 424;
  *(_QWORD *)result = 1;
  *((_QWORD *)result + 1) = 1;
  *((_QWORD *)result + 2) = v2;
  *(_OWORD *)(result + 24) = 0;
  *((_QWORD *)result + 5) = v8;
  return result;
}


// ---- 688390 depth 1
void *__fastcall sub_688390(void **a1)
{
  void *result; // rax

  result = *a1;
  if ( !_InterlockedDecrement64((volatile signed __int64 *)*a1) )
    return (void *)sub_6B0AAC(*a1);
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


// ---- 4c2d7a depth 1
__int64 __fastcall sub_4C2D7A(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  signed __int64 *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r15
  signed __int64 v9; // rdi
  signed __int64 v10; // rax
  __int64 v11; // rdi

  result = *(_QWORD *)(a2 + 16);
  if ( result )
  {
    v5 = __readfsqword(0) - 424;
    v6 = *(signed __int64 **)(a2 + 8);
    v7 = 24 * result;
    v8 = 0;
    while ( v7 )
    {
      v9 = *v6;
      if ( *(_QWORD *)(*v6 + 40) != v5 )
      {
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), v6[1], 0);
        if ( !result )
        {
          v10 = v6[2];
          if ( v10 )
            *(_QWORD *)(v9 + 32) = v10;
          v11 = *(_QWORD *)(v9 + 16);
          if ( _InterlockedExchange((volatile __int32 *)(v11 + 40), 1) == -1 )
            sub_6519A0(v11 + 40);
          return sub_6B0F06(a1, a2, v8, &off_13CA400);
        }
      }
      v6 += 3;
      ++v8;
      v7 -= 24;
    }
  }
  *a1 = 0;
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


// ---- 688785 depth 1
char __fastcall sub_688785(__int64 a1)
{
  char result; // al
  __int64 v2; // r14
  bool v3; // al
  void *v4; // [rsp+8h] [rbp-50h] BYREF
  __int64 v5; // [rsp+10h] [rbp-48h]
  char v6; // [rsp+18h] [rbp-40h]
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  char v8; // [rsp+28h] [rbp-30h]

  result = *(_BYTE *)(a1 + 56);
  if ( !result )
  {
    sub_604A82((__int64)&v4, (volatile signed __int32 *)a1);
    if ( (_DWORD)v4 == 1 )
    {
      v7 = v5;
      v8 = v6;
      sub_5DA280(aCalledResultUn, 43, &v7, &off_13C7580, &off_13CA460);
    }
    v2 = v5;
    if ( !*(_BYTE *)(a1 + 56) )
    {
      sub_4C2D7A(&v4, v5 + 8);
      if ( v4 )
        sub_688390(&v4);
      sub_4C2E51(v2 + 8);
      if ( *(_QWORD *)(v2 + 24) )
        v3 = 0;
      else
        v3 = *(_QWORD *)(v2 + 48) == 0;
      *(_BYTE *)(a1 + 56) = v3;
    }
    return sub_69C4A0((volatile __int32 *)v2);
  }
  return result;
}


// ---- 68884f depth 1
__int64 __fastcall sub_68884F(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  __int64 v3; // r14
  __int128 v4; // xmm1
  volatile __int32 *v5; // r13
  volatile __int32 *v7; // r15
  __int64 v8; // rax
  __int128 v9; // xmm0
  volatile __int32 *v10; // r15
  __int128 v11; // xmm0
  char **v13; // r8
  __int128 v14; // [rsp+8h] [rbp-90h] BYREF
  _BYTE *v15; // [rsp+18h] [rbp-80h]
  _BYTE v16[40]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v17; // [rsp+48h] [rbp-50h]
  __int128 v18; // [rsp+50h] [rbp-48h] BYREF
  _BYTE *v19; // [rsp+60h] [rbp-38h]

  v3 = *(_QWORD *)(a2 + 56);
  v17 = 256;
  v4 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)v16 = *(_OWORD *)a2;
  *(_OWORD *)&v16[16] = v4;
  *(_QWORD *)&v16[32] = *(_QWORD *)(a2 + 32);
  v5 = *(volatile __int32 **)(a2 + 40);
  if ( _InterlockedIncrement64(a3) <= 0 )
    BUG();
  *((_QWORD *)&v14 + 1) = v3;
  v15 = v16;
  *(_QWORD *)&v14 = a3;
  sub_66E938(v5 + 2);
  sub_4C2E51(v5 + 14);
  sub_69C4A0(v5);
  switch ( sub_4C2F00(a3, **(_QWORD **)(a2 + 64), *(unsigned int *)(*(_QWORD *)(a2 + 64) + 8LL)) )
  {
    case 0LL:
      sub_5D8350(aInternalErrorE, 40, &off_13CA648);
    case 1LL:
      sub_604A82((__int64)&v14, *(volatile signed __int32 **)(a2 + 72));
      if ( (_DWORD)v14 == 1 )
      {
        *(_QWORD *)&v18 = *((_QWORD *)&v14 + 1);
        BYTE8(v18) = (_BYTE)v15;
        v13 = &off_13CA660;
LABEL_17:
        sub_5DA280(aCalledResultUn, 43, &v18, &off_13C75C0, v13);
      }
      v7 = *((volatile __int32 **)&v14 + 1);
      sub_4C2E1B(&v14, *((_QWORD *)&v14 + 1) + 8LL, v3);
      if ( !(_QWORD)v14 )
        sub_5D8330(&off_13CA678);
      v19 = v15;
      v18 = v14;
      sub_688390((void **)&v18);
      sub_69C4A0(v7);
      v8 = *(_QWORD *)v16;
      *(_QWORD *)v16 = 3;
      if ( v8 == 3 )
        sub_5D8330(&off_13CA690);
      v9 = *(_OWORD *)&v16[8];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v16[24];
      *(_OWORD *)(a1 + 16) = v9;
      *(_QWORD *)a1 = 0;
LABEL_12:
      *(_QWORD *)(a1 + 8) = v8;
      return sub_688B28(v16);
    case 2LL:
      sub_604A82((__int64)&v14, *(volatile signed __int32 **)(a2 + 72));
      if ( (_DWORD)v14 != 1 )
      {
        v10 = *((volatile __int32 **)&v14 + 1);
        sub_4C2E1B(&v14, *((_QWORD *)&v14 + 1) + 8LL, v3);
        if ( !(_QWORD)v14 )
          sub_5D8330(&off_13CA6C0);
        v19 = v15;
        v18 = v14;
        sub_688390((void **)&v18);
        sub_69C4A0(v10);
        v8 = *(_QWORD *)v16;
        *(_QWORD *)v16 = 3;
        if ( v8 == 3 )
          sub_5D8330(&off_13CA6D8);
        v11 = *(_OWORD *)&v16[8];
        *(_OWORD *)(a1 + 32) = *(_OWORD *)&v16[24];
        *(_OWORD *)(a1 + 16) = v11;
        *(_QWORD *)a1 = 1;
        goto LABEL_12;
      }
      *(_QWORD *)&v18 = *((_QWORD *)&v14 + 1);
      BYTE8(v18) = (_BYTE)v15;
      v13 = &off_13CA6A8;
      goto LABEL_17;
    case 3LL:
      sub_688AFF(v16);
      *(_QWORD *)a1 = 2;
      return sub_688B28(v16);
  }
}


// ---- 687fba depth 1
void __fastcall sub_687FBA(__int64 *a1)
{
  sub_601B54(a1[2], a1[3]);
  sub_688243(*a1, a1[1]);
}


// ---- 68850e depth 1
char *__fastcall sub_68850E(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r13
  char *result; // rax
  __int128 v5; // [rsp+8h] [rbp-60h] BYREF
  __int64 v6; // [rsp+18h] [rbp-50h]
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]

  v2 = *a1;
  v3 = (_QWORD *)a1[1];
  sub_6885F3(v3 + 32, *a1, *a2);
  if ( (*v3 ^ v3[16]) >= 2 || (v3[16] & 1) != 0 )
    _InterlockedCompareExchange64((volatile signed __int64 *)(*a2 + 24LL), 1, 0);
  result = (char *)sub_4C2F00(*a2, *(_QWORD *)a1[2], *(unsigned int *)(a1[2] + 8));
  if ( (unsigned __int64)(result - 1) >= 2 )
  {
    if ( result != (_BYTE *)&dword_0 + 3 )
      sub_5D8350(aInternalErrorE, 40, &off_13C73E8);
  }
  else
  {
    sub_6886A9(&v5, v3 + 32, v2);
    if ( !(_QWORD)v5 )
      sub_5D8330(&off_13C7400);
    v8 = v6;
    v7 = v5;
    return (char *)sub_688390((void **)&v7);
  }
  return result;
}


// ---- 68875b depth 1
__int64 __fastcall sub_68875B(__int64 *a1)
{
  __int64 result; // rax
  int v2[5]; // [rsp+0h] [rbp-14h] BYREF

  v2[0] = 0;
  while ( 1 )
  {
    result = *a1;
    if ( *a1 )
      break;
    sub_4C32B3(v2);
  }
  return result;
}


// ---- 4fcd4c depth 1
__int64 __fastcall sub_4FCD4C(__int64 a1)
{
  __int64 result; // rax
  int v2[5]; // [rsp+0h] [rbp-14h] BYREF

  v2[0] = 0;
  while ( 1 )
  {
    result = *(_QWORD *)(a1 + 32);
    if ( (result & 1) != 0 )
      break;
    sub_4C32B3(v2);
  }
  return result;
}


// ---- 651ba0 depth 1
char __fastcall sub_651BA0(__int64 *a1)
{
  return sub_5D6E80(a1, aReceivingOnACl, 0x1Du);
}


// ---- 5c1103 depth 1
__int64 __fastcall sub_5C1103(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  _OWORD v4[2]; // [rsp+0h] [rbp-68h] BYREF
  _OWORD v5[4]; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2[1];
  sub_5C3DB8(v5, v2, a2[2]);
  sub_601B54(*a2, v2);
  if ( LOBYTE(v5[0]) == 6 )
  {
    *((_QWORD *)&v4[0] + 1) = *((_QWORD *)&v5[0] + 1);
    LOBYTE(v4[0]) = 6;
  }
  else
  {
    v4[1] = v5[1];
    v4[0] = v5[0];
  }
  return ((__int64 (__fastcall *)(__int64, _OWORD *))sub_51F887)(a1, v4);
}


// ---- 55cacb depth 1
__int64 __fastcall sub_55CACB(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int128 v4; // xmm0
  _BYTE v6[40]; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v7[31]; // [rsp+31h] [rbp-A7h]
  _BYTE v8[48]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v9; // [rsp+80h] [rbp-58h]
  __int128 v10; // [rsp+90h] [rbp-48h]
  __int128 v11; // [rsp+A0h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 400);
  if ( *(_BYTE *)a2 == 6 )
  {
    sub_50F392(v8, (char *)a2 + 8);
    if ( *(_QWORD *)v8 == 0x8000000000000023LL )
    {
      *(_OWORD *)&v6[24] = *(_OWORD *)&v8[24];
      *(_OWORD *)&v6[8] = *(_OWORD *)&v8[8];
      v3 = 0;
    }
    else
    {
      v11 = *(_OWORD *)&v8[32];
      v10 = *(_OWORD *)&v8[16];
      v9 = *(_OWORD *)v8;
      sub_50F205(v6);
      *(_QWORD *)&v7[23] = *(_QWORD *)&v6[16];
      *(_OWORD *)&v7[7] = *(_OWORD *)v6;
      sub_51BA08(v8);
      v6[8] = 3;
      *(_OWORD *)&v6[9] = *(_OWORD *)v7;
      *(_OWORD *)&v6[24] = *(_OWORD *)&v7[15];
      v3 = 1;
    }
    *(_QWORD *)v6 = v3;
  }
  else
  {
    v4 = *a2;
    *(_OWORD *)&v6[24] = a2[1];
    *(_OWORD *)&v6[8] = v4;
    *(_QWORD *)v6 = 1;
  }
  return sub_527CCC(a1, v2, v6, a1 + 376, *(unsigned int *)(a1 + 408), *(unsigned int *)(a1 + 412));
}


// ---- 5169c7 depth 1
__int64 __fastcall sub_5169C7(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // r14

  v1 = *a1;
  result = -*a1;
  if ( !__OFSUB__(result, 1) )
  {
    v3 = a1[1];
    sub_697D98(v3, a1[2]);
    return sub_697DF2(v1, v3);
  }
  return result;
}


// ---- 51bf12 depth 1
__int64 __fastcall sub_51BF12(__int64 a1)
{
  sub_51BE3D();
  sub_51D325(a1 + 528);
  sub_601B54(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480));
  sub_51BC82(a1 + 496);
  return sub_51C109(a1 + 376);
}


// ---- 5d8350 depth 1
void __fastcall __noreturn sub_5D8350(__int64 a1, __int64 a2)
{
  sub_5D6C90(a1, 2 * a2 + 1);
}


// ---- 5da280 depth 1
void __fastcall __noreturn sub_5DA280(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v4[4]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-10h] BYREF

  v6[0] = a1;
  v6[1] = a2;
  v5[0] = a3;
  v5[1] = a4;
  v4[0] = v6;
  v4[1] = sub_5D6C40;
  v4[2] = v5;
  v4[3] = sub_5D6C80;
  sub_5D6C90(&unk_1102A1, v4);
}


// ---- 5d8330 depth 1
void __noreturn sub_5D8330()
{
  sub_5D8350((__int64)aCalledOptionUn, 43);
}


// ---- 4c4934 depth 2
__int64 __fastcall sub_4C4934(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx

  if ( sub_55DBED(a2) != 1 )
    return sub_4C9F91(a1, v2);
  a1[1] = v2;
  *a1 = 0x8000000000000000LL;
  return 0x8000000000000000LL;
}


// ---- 522581 depth 2
__int64 __fastcall sub_522581(__int64 a1, __int64 a2)
{
  _BYTE v3[23]; // [rsp+9h] [rbp-4Fh]
  __int64 v4; // [rsp+20h] [rbp-38h]
  __int128 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  sub_50F205(&v5);
  v4 = v6;
  *(_OWORD *)&v3[7] = v5;
  *(_BYTE *)a1 = 3;
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v3;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v3[15];
  *(_QWORD *)(a1 + 24) = v4;
  return sub_51BA08(a2);
}


// ---- 5cffa4 depth 2
void *__fastcall sub_5CFFA4(size_t size, size_t alignment)
{
  size_t v3; // rax
  void *v4; // [rsp+0h] [rbp-8h] BYREF

  if ( alignment <= size && alignment < 0x11 )
    return malloc(size);
  v4 = nullptr;
  v3 = 8;
  if ( alignment >= 9 )
    v3 = alignment;
  if ( posix_memalign(&v4, v3, size) )
    return nullptr;
  else
    return v4;
}


// ---- 5cc4b1 depth 2
void __fastcall __noreturn sub_5CC4B1(__int64 a1, __int64 a2)
{
  sub_6464A0(a2, a1);
}


// ---- 4c2ce5 depth 2
bool __fastcall sub_4C2CE5(_BYTE *a1)
{
  if ( 2 * qword_14385B8 )
    sub_620910();
  return *a1 != 0;
}


// ---- 620ae0 depth 2
__int64 __fastcall sub_620AE0(volatile __int32 *a1)
{
  __int64 result; // rax
  int v2; // ecx
  bool v3; // zf
  int v4; // ecx
  __int64 v5; // [rsp+0h] [rbp-40h]

  LODWORD(result) = *a1;
  if ( *a1 == 1 )
  {
    v2 = -99;
    do
    {
      _mm_pause();
      LODWORD(result) = *a1;
      if ( *a1 != 1 )
        break;
      v3 = v2++ == 0;
    }
    while ( !v3 );
  }
  if ( (_DWORD)result || (result = (unsigned int)_InterlockedCompareExchange(a1, 1, 0), (_DWORD)result) )
  {
    while ( 1 )
    {
      if ( (_DWORD)result != 2 )
      {
        result = (unsigned int)_InterlockedExchange(a1, 2);
        if ( !(_DWORD)result )
          break;
      }
      do
      {
        if ( *a1 != 2 )
          break;
        LODWORD(v5) = -1;
        if ( syscall(202, a1, 137, 2, 0, 0, v5) >= 0 )
          break;
      }
      while ( *_errno_location() == 4 );
      LODWORD(result) = *a1;
      if ( *a1 == 1 )
      {
        v4 = -99;
        do
        {
          _mm_pause();
          LODWORD(result) = *a1;
          if ( *a1 != 1 )
            break;
          v3 = v4++ == 0;
        }
        while ( !v3 );
      }
    }
  }
  return result;
}


// ---- 5d7090 depth 2
__int64 __fastcall sub_5D7090(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 result; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r9
  __int64 v12; // r10
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // r9

  v2 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v3 = a2 - (v2 - a1);
  v4 = 0;
  if ( v2 != a1 )
  {
    v5 = 0;
    do
      v4 += *(_BYTE *)(a1 + v5++) >= 0xC0;
    while ( v2 - a1 != v5 );
  }
  if ( (v3 & 7) != 0 )
  {
    v6 = 0;
    v7 = 0;
    do
      v6 += *(_BYTE *)(v2 + (v3 & 0x7FFFFFFFFFFFFFF8LL) + v7++) >= 0xC0;
    while ( (v3 & 7) != v7 );
  }
  else
  {
    v6 = 0;
  }
  result = v4 + v6;
  v9 = v3 >> 3;
  while ( v9 )
  {
    v11 = v2;
    v12 = 192;
    if ( v9 < 0xC0 )
      v12 = v9;
    if ( ((8 * (_WORD)v12) & 0x7E0) != 0 )
    {
      v13 = (_QWORD *)v2;
      v10 = 0;
      do
      {
        v10 += (((~*v13 >> 7) | (*v13 >> 6)) & 0x101010101010101LL)
             + (((~v13[1] >> 7) | (v13[1] >> 6)) & 0x101010101010101LL)
             + (((~v13[2] >> 7) | (v13[2] >> 6)) & 0x101010101010101LL)
             + (((~v13[3] >> 7) | (v13[3] >> 6)) & 0x101010101010101LL);
        v13 += 4;
      }
      while ( v13 != (_QWORD *)(v2 + ((8 * (_WORD)v12) & 0x7E0)) );
    }
    else
    {
      v10 = 0;
    }
    v2 += (unsigned int)(8 * v12);
    v9 -= v12;
    result += (0x1000100010001LL * ((v10 & 0xFF00FF00FF00FFLL) + ((v10 >> 8) & 0xFF00FF00FF00FFLL))) >> 48;
    if ( (v12 & 3) != 0 )
    {
      v14 = v11 + 8LL * ((unsigned __int8)v12 & 0xFC);
      v15 = 0;
      v16 = 0;
      do
      {
        v15 += ((~*(_QWORD *)(v14 + v16) >> 7) | (*(_QWORD *)(v14 + v16) >> 6)) & 0x101010101010101LL;
        v16 += 8;
      }
      while ( 8 * (v12 & 3) != v16 );
      result += (0x1000100010001LL * ((v15 & 0xFF00FF00FF00FFLL) + ((v15 >> 8) & 0xFF00FF00FF00FFLL))) >> 48;
      return result;
    }
  }
  return result;
}


// ---- 67e6bf depth 2
void __fastcall sub_67E6BF(_BYTE *a1, char a2)
{
  if ( (a2 & 1) == 0 && 2 * qword_14385B8 && !(unsigned __int8)sub_620910() )
    *a1 = 1;
}


// ---- 51c032 depth 2
__int64 __fastcall sub_51C032(__int64 a1)
{
  sub_51BE3D();
  sub_51B886(a1 + 400);
  return sub_601B54(*(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
}


// ---- 527ccc depth 2
__int64 __fastcall sub_527CCC(const void *a1, __int64 a2, __int64 a3, __int128 *a4, int a5, int a6)
{
  bool v10; // al
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 v15; // r12
  __int128 v16; // xmm1
  __int64 v18; // [rsp+18h] [rbp-200h] BYREF
  _OWORD v19[2]; // [rsp+20h] [rbp-1F8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-1D8h]
  _BYTE v21[376]; // [rsp+48h] [rbp-1D0h] BYREF
  __int128 v22; // [rsp+1C0h] [rbp-58h] BYREF
  __int64 v23; // [rsp+1D0h] [rbp-48h]
  int v24; // [rsp+1D8h] [rbp-40h]
  int v25; // [rsp+1DCh] [rbp-3Ch]

  v18 = a2;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), 1, 0) )
    sub_620AE0((volatile __int32 *)(a2 + 16));
  v10 = sub_4C2CE5((_BYTE *)(a2 + 20));
  v12 = v11;
  if ( v10 )
  {
    *(_QWORD *)&v19[0] = a2 + 16;
    BYTE8(v19[0]) = v11;
    sub_5DA280((__int64)aCalledResultUn, 43, (__int64)v19, (__int64)&off_13B6A80);
  }
  v13 = *(_QWORD *)(a2 + 24);
  v14 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = 0;
  if ( !v13 )
    sub_5DA240(&unk_1D907C, 17, &off_13B6FE8, v12);
  v15 = v12;
  qmemcpy(v21, a1, sizeof(v21));
  v23 = *((_QWORD *)a4 + 2);
  v22 = *a4;
  v16 = *(_OWORD *)(a3 + 16);
  v19[0] = *(_OWORD *)a3;
  v19[1] = v16;
  v20 = *(_QWORD *)(a3 + 32);
  v24 = a5;
  v25 = a6;
  sub_5C91C3(v13, v14, (unsigned int)v21, (unsigned int)&v22, (unsigned int)v19, a5, a6);
  sub_516087(a2 + 16, v15);
  return sub_51B886(&v18);
}


// ---- 5d0089 depth 2
void *__fastcall sub_5D0089(size_t n, size_t alignment)
{
  void *v2; // rax
  size_t v4; // rax
  int v5; // eax
  void *v6; // r14
  void *v7; // [rsp-8h] [rbp-18h] BYREF

  v7 = v2;
  if ( alignment <= n && alignment < 0x11 )
    return calloc(n, 1u);
  v7 = nullptr;
  v4 = 8;
  if ( alignment >= 9 )
    v4 = alignment;
  v5 = posix_memalign(&v7, v4, n);
  v6 = v7;
  if ( v5 != 0 || v7 == nullptr )
    return nullptr;
  memset(v7, 0, n);
  return v6;
}


// ---- 68843a depth 2
__int64 __fastcall sub_68843A(__int64 a1)
{
  __int64 v1; // r14
  bool v2; // al
  int v4; // [rsp+8h] [rbp-40h] BYREF
  __int64 v5; // [rsp+10h] [rbp-38h]
  char v6; // [rsp+18h] [rbp-30h]
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]

  sub_604A82((__int64)&v4, (volatile signed __int32 *)a1);
  if ( v4 == 1 )
  {
    v7 = v5;
    v8 = v6;
    sub_5DA280((__int64)aCalledResultUn, 43, (__int64)&v7, (__int64)&off_13C7580);
  }
  v1 = v5;
  sub_4C2D0F(v5 + 8);
  if ( *(_QWORD *)(v1 + 24) )
    v2 = 0;
  else
    v2 = *(_QWORD *)(v1 + 48) == 0;
  *(_BYTE *)(a1 + 56) = v2;
  return sub_69C4A0((volatile __int32 *)v1);
}


// ---- 68830e depth 2
__int64 __fastcall sub_68830E(volatile signed __int32 *a1)
{
  volatile __int32 *v1; // rbx
  int v3; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+8h] [rbp-30h]
  char v5; // [rsp+10h] [rbp-28h]
  __int64 v6; // [rsp+18h] [rbp-20h] BYREF
  char v7; // [rsp+20h] [rbp-18h]

  sub_604A82((__int64)&v3, a1);
  if ( v3 == 1 )
  {
    v6 = v4;
    v7 = v5;
    sub_5DA280((__int64)aCalledResultUn, 43, (__int64)&v6, (__int64)&off_13C75C0);
  }
  v1 = (volatile __int32 *)v4;
  if ( !*(_BYTE *)(v4 + 104) )
  {
    *(_BYTE *)(v4 + 104) = 1;
    sub_4C2D0F(v1 + 2);
    sub_4C2D0F(v1 + 14);
  }
  return sub_69C4A0(v1);
}


// ---- 6885f3 depth 2
__int64 __fastcall sub_6885F3(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  bool v4; // of
  __int64 v5; // r14
  __int64 v6; // rt0
  bool v7; // al
  volatile signed __int64 *v9; // [rsp+8h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h]
  __int64 v11; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]

  sub_604A82((__int64)&v9, (volatile signed __int32 *)a1);
  v4 = __OFSUB__((_DWORD)v9, 1);
  if ( (_DWORD)v9 == 1 )
  {
    v12 = v10;
    v13 = v11;
    sub_5DA280((__int64)aCalledResultUn, 43, (__int64)&v12, (__int64)&off_13C7580);
  }
  v5 = v10;
  v6 = _InterlockedIncrement64(a3);
  if ( (v6 < 0) ^ v4 | (v6 == 0) )
    BUG();
  v10 = a2;
  v11 = 0;
  v9 = a3;
  sub_66E938(v5 + 8);
  if ( *(_QWORD *)(v5 + 24) )
    v7 = 0;
  else
    v7 = *(_QWORD *)(v5 + 48) == 0;
  *(_BYTE *)(a1 + 56) = v7;
  return sub_69C4A0((volatile __int32 *)v5);
}


// ---- 4c2f00 depth 2
__int64 __fastcall sub_4C2F00(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  unsigned int v7; // edx
  bool v8; // dl
  bool v9; // si
  __int64 v10; // rax
  unsigned __int64 v11; // rcx

  while ( 1 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( result )
      break;
    if ( a3 == 1000000000 )
    {
      sub_64BD20(*(_QWORD *)(a1 + 16));
    }
    else
    {
      v6 = sub_6465A0();
      v8 = v7 < a3;
      v9 = v6 < a2;
      if ( v6 == a2 )
        v9 = v8;
      if ( !v9 )
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), 1, 0);
        result = 3;
        if ( v11 < 3 )
          result = v11;
        if ( !v11 )
          return 1;
        return result;
      }
      v10 = sub_651A00(a2, a3, v6);
      sub_64BC30(*(_QWORD *)(a1 + 16), v10);
    }
  }
  if ( (unsigned __int64)(result - 1) >= 2 )
    return 3;
  return result;
}


// ---- 6886a9 depth 2
__int64 __fastcall sub_6886A9(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  bool v5; // al
  __int128 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h]
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+28h] [rbp-30h]

  sub_604A82((__int64)&v7, (volatile signed __int32 *)a2);
  if ( (_DWORD)v7 == 1 )
  {
    v9 = *((_QWORD *)&v7 + 1);
    v10 = v8;
    sub_5DA280((__int64)aCalledResultUn, 43, (__int64)&v9, (__int64)&off_13C7580);
  }
  v4 = *((_QWORD *)&v7 + 1);
  sub_4C2E1B(&v7, *((_QWORD *)&v7 + 1) + 8LL, a3);
  if ( *(_QWORD *)(v4 + 24) )
    v5 = 0;
  else
    v5 = *(_QWORD *)(v4 + 48) == 0;
  *(_BYTE *)(a2 + 56) = v5;
  *(_QWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  return sub_69C4A0((volatile __int32 *)v4);
}


// ---- 646d60 depth 2
_QWORD *__fastcall sub_646D60(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *result; // rax
  __int64 v11; // [rsp+0h] [rbp-40h] BYREF
  __int64 v12; // [rsp+8h] [rbp-38h]
  unsigned __int64 v13; // [rsp+10h] [rbp-30h]
  __int64 v14; // [rsp+18h] [rbp-28h]

  v3 = *a2;
  if ( __OFSUB__(-*a2, 1) )
  {
    v4 = 0;
  }
  else
  {
    v5 = a2[1];
    v6 = a2[2];
    if ( v6 > 0xF )
    {
      a2 = (__int64 *)a2[1];
      v7 = sub_5DA400(0, a2, v6);
    }
    else if ( v6 )
    {
      v7 = 0;
      v8 = 0;
      while ( *(_BYTE *)(v5 + v8) )
      {
        if ( v6 == ++v8 )
        {
          v8 = a2[2];
          goto LABEL_12;
        }
      }
      v7 = 1;
    }
    else
    {
      v8 = 0;
      v7 = 0;
    }
LABEL_12:
    if ( (v7 & 1) != 0 )
    {
      v11 = v3;
      v12 = v5;
      v13 = v6;
      v14 = v8;
      sub_5DA280((__int64)aThreadNameMayN, 47, (__int64)&v11, (__int64)&off_13C4B18);
    }
    v11 = v3;
    v12 = v5;
    v13 = v6;
    v4 = ((__int64 (__fastcall *)(__int64 *, __int64 *, __int64))sub_5CE100)(&v11, a2, v8);
    v2 = v9;
  }
  result = malloc(0x30u);
  if ( !result )
    sub_5CC4B1(8, 48);
  *result = 1;
  result[1] = 1;
  result[3] = v4;
  result[4] = v2;
  result[2] = a1;
  *((_DWORD *)result + 10) = 0;
  return result;
}


// ---- 646a80 depth 2
void __noreturn sub_646A80()
{
  sub_5D6C90(&unk_21B132, 111);
}


// ---- 646c50 depth 2
volatile signed __int64 *__fastcall sub_646C50(__int64 a1)
{
  unsigned __int64 v1; // rdi
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  volatile signed __int64 *v4; // rbx
  __int64 v5; // rt0
  char v6; // of
  __int64 v8[3]; // [rsp+0h] [rbp-30h] BYREF
  _BYTE v9[17]; // [rsp+1Fh] [rbp-11h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v8[0] = sub_6206C0(v9, &unk_21AEBA, 243);
      sub_620760(v8);
      sub_620770();
    }
    sub_5D6C90(&unk_21AE5C, 189);
  }
  __writefsqword(0xFFFFFE98, 1u);
  v1 = __readfsqword(0xFFFFFEA0);
  if ( !v1 )
  {
    v2 = qword_1438528;
    do
    {
      if ( v2 == -1 )
        sub_646A80();
      v1 = v2 + 1;
      v3 = v2;
      v2 = _InterlockedCompareExchange64(&qword_1438528, v2 + 1, v2);
    }
    while ( v3 != v2 );
    __writefsqword(0xFFFFFEA0, v1);
  }
  v8[0] = 0x8000000000000000LL;
  v4 = sub_646D60(v1, v8);
  sub_645310();
  v5 = _InterlockedIncrement64(v4);
  if ( (v5 < 0) ^ v6 | (v5 == 0) )
    BUG();
  __writefsqword(0xFFFFFE98, (unsigned __int64)(v4 + 2));
  return v4;
}


// ---- 6519a0 depth 2
__int64 __fastcall sub_6519A0(__int64 a1)
{
  return syscall(202, a1, 129, 1);
}


// ---- 4c2e51 depth 2
__int64 __fastcall sub_4C2E51(__int64 a1)
{
  __int128 *v1; // rax
  __int64 v2; // rdx
  __int128 *v3; // rcx
  __int64 v4; // rdi
  __int128 v6; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h]
  __int128 *v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v1 = *(__int128 **)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0;
  v3 = (__int128 *)((char *)v1 + 24 * v2);
  v11 = v2;
  v12 = 0;
  v8 = v1;
  v9 = v3;
  v10 = a1 + 24;
  while ( v1 != v3 )
  {
    v8 = (__int128 *)((char *)v1 + 24);
    v6 = *v1;
    v7 = *((_QWORD *)v1 + 2);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), *((signed __int64 *)&v6 + 1), 0) )
    {
      v4 = *(_QWORD *)(v6 + 16);
      if ( _InterlockedExchange((volatile __int32 *)(v4 + 40), 1) == -1 )
        sub_6519A0(v4 + 40);
    }
    sub_688390((void **)&v6);
    v1 = v8;
    v3 = v9;
  }
  return sub_6B0ADC(&v8);
}


// ---- 66e938 depth 2
__int64 __fastcall sub_66E938(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[2];
  if ( v2 == *a1 )
    sub_604FD8(a1);
  result = a1[1];
  v4 = 24 * v2;
  *(_QWORD *)(result + v4 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(result + v4) = *(_OWORD *)a2;
  a1[2] = v2 + 1;
  return result;
}


// ---- 4c2e1b depth 2
__int64 __fastcall sub_4C2E1B(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax
  bool v6; // zf

  v3 = *(_QWORD *)(a2 + 8);
  v4 = 24LL * *(_QWORD *)(a2 + 16);
  result = -1;
  while ( v4 )
  {
    ++result;
    v4 -= 24;
    v6 = *(_QWORD *)(v3 + 8) == a3;
    v3 += 24;
    if ( v6 )
      return sub_6B0F06(a1, a2, result, &off_13CA418);
  }
  *a1 = 0;
  return result;
}


// ---- 688aff depth 2
char __fastcall sub_688AFF(__int64 a1)
{
  char result; // al
  int v2[5]; // [rsp+0h] [rbp-14h] BYREF

  v2[0] = 0;
  while ( 1 )
  {
    result = *(_BYTE *)(a1 + 40);
    if ( result )
      break;
    sub_4C32B3(v2);
  }
  return result;
}


// ---- 688b28 depth 2
void __fastcall sub_688B28(__int64 *a1)
{
  if ( *(_DWORD *)a1 != 3 )
    sub_687FBA(a1);
}


// ---- 5c3db8 depth 2
__int64 __fastcall sub_5C3DB8(__int64 a1)
{
  _BYTE v2[23]; // [rsp+1h] [rbp-47h]
  __int64 v3; // [rsp+18h] [rbp-30h]
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_5C8B43(&v4);
  v3 = v5;
  *(_OWORD *)&v2[7] = v4;
  *(_BYTE *)a1 = 3;
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v2[15];
  *(_QWORD *)(a1 + 24) = v3;
  return *(_QWORD *)&v2[15];
}


// ---- 51f887 depth 2
__int64 __fastcall sub_51F887(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  _BYTE v4[23]; // [rsp+1h] [rbp-57h]
  __int64 v5; // [rsp+18h] [rbp-40h]
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]

  if ( *(_BYTE *)a2 == 6 )
  {
    v6 = *((_QWORD *)a2 + 1);
    sub_50EF17(&v7, &v6);
    v5 = v8;
    *(_OWORD *)&v4[7] = v7;
    *(_BYTE *)a1 = 3;
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v4;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v4[15];
    *(_QWORD *)(a1 + 24) = v5;
    return sub_51BE7D(&v6);
  }
  else
  {
    v3 = *a2;
    *(_OWORD *)(a1 + 16) = a2[1];
    *(_OWORD *)a1 = v3;
  }
  return result;
}


// ---- 50f392 depth 2
__int64 __fastcall sub_50F392(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  __int128 v8; // [rsp+10h] [rbp-38h]

  v2 = a2[1];
  sub_4C6188(&v7, v2, a2[2]);
  v3 = v7;
  if ( __OFSUB__(-v7, 1) )
  {
    v4 = v8;
    v5 = 0x8000000000000005LL;
  }
  else
  {
    *(_OWORD *)(a1 + 24) = v8;
    *(_QWORD *)(a1 + 16) = v3;
    v5 = 0x8000000000000023LL;
    v4 = 0;
  }
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = v5;
  return sub_601B54(*a2, v2);
}


// ---- 50f205 depth 2
__int64 __fastcall sub_50F205(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 result; // rax
  __int128 v4; // [rsp+8h] [rbp-40h] BYREF
  __int64 v5; // [rsp+18h] [rbp-30h]
  __int128 *v6; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall **v7)(); // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  *(_QWORD *)&v4 = 0;
  *((_QWORD *)&v4 + 1) = 1;
  v5 = 0;
  v8 = 1610612768;
  v6 = &v4;
  v7 = &off_13B64B0;
  v2 = sub_675653(a2);
  sub_51F9DD(v2);
  result = v5;
  *(_QWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  return result;
}


// ---- 51ba08 depth 2
__int64 __fastcall sub_51BA08(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *a1;
  result = 10;
  if ( v2 < 0 )
    result = v2 ^ 0x8000000000000000LL;
  switch ( result )
  {
    case 0LL:
      result = sub_51BB27(a1 + 1);
      break;
    case 1LL:
    case 2LL:
    case 4LL:
    case 33LL:
      result = sub_601B54(a1[1], a1[2]);
      break;
    case 5LL:
      result = sub_51BE7D(a1 + 1);
      break;
    case 6LL:
    case 7LL:
    case 22LL:
      result = sub_6584DF(a1 + 1);
      break;
    case 8LL:
      result = sub_51BE7D(a1 + 5);
      break;
    case 9LL:
      result = sub_518D84(a1 + 1);
      break;
    case 10LL:
      sub_601B54(v2, a1[1]);
      result = sub_601B54(a1[3], a1[4]);
      break;
    case 12LL:
      result = sub_5191C3(a1[2], a1[3]);
      break;
    case 17LL:
      result = sub_51B9BE(a1 + 1);
      break;
    case 18LL:
      result = sub_51B9F9(a1 + 1);
      break;
    case 26LL:
      result = (**(__int64 (__fastcall ***)(__int64))a1[1])(a1[1]);
      break;
    case 29LL:
      result = sub_516A82((void *)a1[1]);
      break;
    default:
      return result;
  }
  return result;
}


// ---- 697d98 depth 2
__int64 __fastcall sub_697D98(__int64 a1, __int64 a2)
{
  _QWORD *i; // r14
  __int64 result; // rax

  for ( i = (_QWORD *)(a1 + 64); a2-- != 0; i += 12 )
  {
    if ( !__OFSUB__(0, *i) )
    {
      if ( !_InterlockedDecrement64((volatile signed __int64 *)i[3]) )
        sub_697DFD((void *)i[3]);
      sub_5E616F(*i, i[1]);
    }
    sub_6914A0(i - 6);
    result = sub_6914A0(i - 3);
  }
  return result;
}


// ---- 51be3d depth 2
__int64 __fastcall sub_51BE3D(__int64 a1)
{
  sub_5160A8(a1 + 344);
  sub_5174A7(a1);
  sub_51D316(a1 + 352);
  sub_51BB75(a1 + 184);
  return sub_5169A3(a1 + 360);
}


// ---- 51d325 depth 2
void *__fastcall sub_51D325(void **a1)
{
  void *result; // rax

  result = *a1;
  if ( !_InterlockedDecrement64((volatile signed __int64 *)*a1) )
    return (void *)sub_6597D9(*a1);
  return result;
}


// ---- 51bc82 depth 2
__int64 __fastcall sub_51BC82(__int64 a1)
{
  if ( *(_BYTE *)a1 == 6 )
    return sub_601B54(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  else
    return sub_51BEB5();
}


// ---- 5d6c90 depth 2
void __fastcall __noreturn sub_5D6C90(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v3[2]; // [rsp+8h] [rbp-28h] BYREF
  __int16 v4; // [rsp+18h] [rbp-18h]
  _QWORD v5[2]; // [rsp+20h] [rbp-10h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  v3[0] = v5;
  v3[1] = a3;
  v4 = 1;
  sub_646480(v3);
}


// ---- 55dbed depth 3
__int64 __fastcall sub_55DBED(__int64 a1)
{
  size_t v1; // rsi
  void *v3; // rsi
  __int64 *v4; // rbx
  _QWORD v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+18h] [rbp-30h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 (__fastcall *v9)(); // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 32) + 496LL) == 6 )
    {
      v6 = a1;
      v7 = sub_617A36;
      v8 = a1 + 16;
      v9 = sub_617A36;
      v3 = &unk_140BA2;
    }
    else
    {
      if ( sub_61F082(*(void **)(a1 + 16), v1) )
        return 0;
      v6 = a1;
      v7 = sub_617A36;
      v8 = a1 + 16;
      v9 = sub_617A36;
      v3 = &unk_1170C0;
    }
    v4 = v5;
  }
  else
  {
    v5[0] = a1;
    v5[1] = sub_617A36;
    v3 = &unk_13CBD6;
    v4 = &v6;
  }
  sub_4C3758(v4, v3);
  sub_6936DF(v4);
  return 1;
}


// ---- 6464a0 depth 3
void __fastcall __noreturn sub_6464A0(__int64 a1, __int64 a2)
{
  sub_6464C0(a2, a1);
}


// ---- 620910 depth 3
bool sub_620910()
{
  return __readfsqword(0xFFFFFE88) == 0;
}


// ---- 51b886 depth 3
void *__fastcall sub_51B886(void **a1)
{
  void *result; // rax

  result = *a1;
  if ( !_InterlockedDecrement64((volatile signed __int64 *)*a1) )
    return (void *)sub_65975D(*a1);
  return result;
}


// ---- 5c91c3 depth 3
__int64 __fastcall sub_5C91C3(
        __int64 a1,
        __int64 a2,
        const void *a3,
        __int128 *a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  __int128 v7; // xmm1
  _OWORD v9[2]; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v10; // [rsp+20h] [rbp-1B8h]
  _BYTE v11[376]; // [rsp+28h] [rbp-1B0h] BYREF
  __int128 v12; // [rsp+1A0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+1B0h] [rbp-28h]
  unsigned int v14; // [rsp+1B8h] [rbp-20h]
  int v15; // [rsp+1BCh] [rbp-1Ch]

  qmemcpy(v11, a3, sizeof(v11));
  v13 = *((_QWORD *)a4 + 2);
  v12 = *a4;
  v7 = *(_OWORD *)(a5 + 16);
  v9[0] = *(_OWORD *)a5;
  v9[1] = v7;
  v10 = *(_QWORD *)(a5 + 32);
  v14 = a6;
  v15 = a7;
  (*(void (__fastcall **)(__int64, _BYTE *, __int128 *, _OWORD *, _QWORD))(a2 + 24))(a1, v11, &v12, v9, a6);
  return sub_5C10E7(a1, a2);
}


// ---- 516087 depth 3
__int64 __fastcall sub_516087(volatile __int32 *a1)
{
  __int64 result; // rax

  sub_4C2CBD(a1 + 1);
  result = (unsigned int)_InterlockedExchange(a1, 0);
  if ( (_DWORD)result == 2 )
    return sub_647030(a1);
  return result;
}


// ---- 5da240 depth 3
void __fastcall __noreturn sub_5DA240(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-20h] BYREF
  _QWORD v4[2]; // [rsp+10h] [rbp-10h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v3[0] = v4;
  v3[1] = sub_5D6C40;
  sub_5D6C90((__int64)&unk_1397F1, (__int64)v3, a3);
}


// ---- 4c2d0f depth 3
__int64 __fastcall sub_4C2D0F(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 i; // r12
  __int64 v5; // rdi

  v2 = 24LL * *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  for ( i = 0; v2 != i; i += 24 )
  {
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(v3 + i) + 24LL), 2, 0) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v3 + i) + 16LL);
      if ( _InterlockedExchange((volatile __int32 *)(v5 + 40), 1) == -1 )
        sub_6519A0(v5 + 40);
    }
  }
  return sub_4C2E51(a1);
}


// ---- 64bd20 depth 3
void __fastcall sub_64BD20(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // [rsp+0h] [rbp-58h]

  if ( _InterlockedDecrement((volatile signed __int32 *)(a1 + 40)) )
  {
    v1 = (volatile signed __int32 *)(a1 + 40);
    do
    {
      do
      {
        if ( *v1 != -1 )
          break;
        LODWORD(v2) = -1;
        if ( syscall(202, v1, 137, 0xFFFFFFFFLL, 0, 0, v2) >= 0 )
          break;
      }
      while ( *_errno_location() == 4 );
    }
    while ( _InterlockedCompareExchange(v1, 0, 1) != 1 );
  }
}


// ---- 651a00 depth 3
__int64 __fastcall sub_651A00(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+8h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-30h]
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  int v10; // [rsp+38h] [rbp-8h]

  v9 = a1;
  v10 = a2;
  v7 = a3;
  v8 = a4;
  sub_6464D0(v5, &v9, &v7);
  result = 0;
  if ( !v5[0] )
    return v6;
  return result;
}


// ---- 64bc30 depth 3
void __fastcall sub_64BC30(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  int v5; // edx
  bool v6; // of
  __int64 v7; // rax
  unsigned int v8; // edx
  char v9; // al
  volatile __int32 *v10; // rbx
  _QWORD *v11; // r8
  __int64 v12; // [rsp+0h] [rbp-48h]
  char v13; // [rsp+8h] [rbp-40h]
  _QWORD v14[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( !_InterlockedDecrement((volatile signed __int32 *)(a1 + 40)) )
    return;
  v4 = sub_6465B0(1);
  v6 = __OFADD__(a2, v4);
  v7 = a2 + v4;
  if ( v6 != a2 < 0 )
    goto LABEL_5;
  v8 = a3 + v5;
  if ( v8 >= 0x3B9ACA00 )
  {
    v6 = __OFADD__(1, v7++);
    if ( v6 )
    {
LABEL_5:
      v9 = 0;
      goto LABEL_8;
    }
    v8 -= 1000000000;
  }
  v14[0] = v7;
  v14[1] = v8;
  v9 = 1;
LABEL_8:
  v10 = (volatile __int32 *)(a1 + 40);
  v13 = v9;
  do
  {
    if ( *v10 != -1 )
      break;
    v11 = nullptr;
    if ( v13 )
      v11 = v14;
    LODWORD(v12) = -1;
    if ( syscall(202, v10, 137, 0xFFFFFFFFLL, v11, 0, v12) >= 0 )
      break;
  }
  while ( *_errno_location() == 4 );
  _InterlockedExchange(v10, 0);
}


// ---- 5da400 depth 3
__int64 __fastcall sub_5DA400(unsigned __int8 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx

  v3 = ((a2 + 7) & 0xFFFFFFFFFFFFFFF8LL) - a2;
  if ( !v3 )
  {
    v4 = a3 - 16;
    v3 = 0;
    do
    {
LABEL_10:
      if ( (((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v3 + 8)
           | (0x101010101010100LL - ((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v3 + 8))))
          & ((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v3)
           | (0x101010101010100LL - ((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v3))))
          & 0x8080808080808080LL) != 0x8080808080808080LL )
        break;
      v3 += 16LL;
    }
    while ( v3 <= v4 );
    goto LABEL_12;
  }
  if ( a3 < v3 )
    v3 = a3;
  if ( a3 )
  {
    v5 = 0;
    while ( *(_BYTE *)(a2 + v5) != a1 )
    {
      if ( v3 == ++v5 )
        goto LABEL_9;
    }
    return 1;
  }
LABEL_9:
  v4 = a3 - 16;
  if ( v3 <= a3 - 16 )
    goto LABEL_10;
LABEL_12:
  v6 = a3 - v3;
  if ( !v6 )
    return 0;
  v8 = v3 + a2;
  result = 0;
  v9 = 0;
  while ( *(_BYTE *)(v8 + v9) != a1 )
  {
    if ( v6 == ++v9 )
      return result;
  }
  return 1;
}


// ---- 5ce100 depth 3
_BYTE *__fastcall sub_5CE100(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  _BYTE *result; // rax
  unsigned __int64 v4; // rbx
  int v5; // [rsp+0h] [rbp-30h] BYREF
  _BYTE *v6; // [rsp+8h] [rbp-28h]
  __int64 v7; // [rsp+10h] [rbp-20h]

  v1 = *a1;
  v2 = a1[2];
  if ( *a1 == v2 )
  {
    sub_5CC430(&v5, v2);
    if ( v5 == 1 )
      sub_5CC3A7(v6, v7);
    result = v6;
    v6[v2] = 0;
  }
  else
  {
    result = (_BYTE *)a1[1];
    result[v2] = 0;
    v4 = v2 + 1;
    if ( v1 > v4 )
    {
      if ( v4 )
      {
        result = (_BYTE *)sub_5CFFEB(result);
        if ( !result )
          sub_5CC3A7(1, v4);
      }
      else
      {
        free(result);
        return (_BYTE *)(&dword_0 + 1);
      }
    }
  }
  return result;
}


// ---- 645310 depth 3
int sub_645310()
{
  pthread_key_t v0; // edi
  pthread_key_t v1; // ebx
  signed __int64 v2; // rax
  pthread_key_t v3; // ebx
  void *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // [rsp+8h] [rbp-18h] BYREF
  pthread_key_t key; // [rsp+10h] [rbp-10h] BYREF
  _BYTE v9[9]; // [rsp+17h] [rbp-9h] BYREF

  v0 = qword_1428418;
  if ( qword_1428418 )
    return pthread_setspecific(v0, (char *)&dword_0 + 1);
  key = 0;
  if ( pthread_key_create(&key, destr_function) )
    goto LABEL_9;
  v1 = key;
  if ( key )
    goto LABEL_6;
  key = 0;
  if ( pthread_key_create(&key, destr_function) )
  {
LABEL_9:
    v5 = &unk_21B030;
    v6 = 95;
    goto LABEL_11;
  }
  v1 = key;
  pthread_key_delete(0);
  if ( !v1 )
  {
    v5 = &unk_21A5D3;
    v6 = 155;
LABEL_11:
    v7 = sub_6206C0(v9, v5, v6);
    sub_620760(&v7);
    sub_620770();
  }
LABEL_6:
  v0 = v1;
  v2 = _InterlockedCompareExchange64(&qword_1428418, v1, 0);
  if ( v2 )
  {
    v3 = v2;
    pthread_key_delete(v0);
    v0 = v3;
  }
  return pthread_setspecific(v0, (char *)&dword_0 + 1);
}


// ---- 6206c0 depth 3
__int64 __fastcall sub_6206C0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // cl
  __int64 result; // rax
  __int64 v5; // [rsp+10h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+18h] [rbp-18h] BYREF

  v5 = a1;
  v6[0] = 0;
  v3 = sub_5D6CC0(&v5, &off_13C4728, a2, a3);
  result = v6[0];
  if ( v3 )
  {
    if ( !v6[0] )
      sub_5D6C90((__int64)&unk_21A27E, 173, (__int64)&off_13C46E0);
  }
  else
  {
    if ( v6[0] )
      sub_6209A0(v6);
    return 0;
  }
  return result;
}


// ---- 620760 depth 3
__int64 __fastcall sub_620760(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_6209A0(a1);
  return result;
}


// ---- 620770 depth 3
void __noreturn sub_620770()
{
  sub_645890();
}


// ---- 6b0adc depth 3
unsigned __int64 __fastcall sub_6B0ADC(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx

  v2 = *a1;
  v3 = a1[1];
  *a1 = 8;
  a1[1] = 8;
  result = v3 - v2;
  if ( result )
    result = sub_6B0A86(v2, result / 0x18, result % 0x18);
  v5 = a1[4];
  if ( v5 )
  {
    v6 = a1[2];
    result = a1[3];
    v7 = *(_QWORD *)(v6 + 16);
    if ( result != v7 )
      result = (unsigned __int64)memmove(
                                   (void *)(*(_QWORD *)(v6 + 8) + 24 * v7),
                                   (const void *)(*(_QWORD *)(v6 + 8) + 24 * result),
                                   24 * v5);
    *(_QWORD *)(v6 + 16) = v7 + v5;
  }
  return result;
}


// ---- 604fd8 depth 3
void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sub_604FD8(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = sub_5E5603(a1, *a1, 1, 8, 24);
  if ( v1 != 0x8000000000000001LL )
    sub_5CC3A7(v1, v2);
}


// ---- 5c8b43 depth 3
void *__fastcall sub_5C8B43(_QWORD *a1, const void *a2, size_t a3)
{
  void *result; // rax
  void *v5; // rdx

  result = (void *)sub_525A90(a3, 1);
  *a1 = result;
  a1[1] = v5;
  a1[2] = 0;
  if ( a3 )
  {
    result = memcpy(v5, a2, a3);
    a1[2] = a3;
  }
  return result;
}


// ---- 50ef17 depth 3
__int64 __fastcall sub_50EF17(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 result; // rax
  __int128 v4; // [rsp+8h] [rbp-40h] BYREF
  __int64 v5; // [rsp+18h] [rbp-30h]
  __int128 *v6; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall **v7)(); // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  *(_QWORD *)&v4 = 0;
  *((_QWORD *)&v4 + 1) = 1;
  v5 = 0;
  v8 = 1610612768;
  v6 = &v4;
  v7 = &off_13B64B0;
  v2 = sub_61F05B(a2);
  sub_51F9DD(v2);
  result = v5;
  *(_QWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  return result;
}


// ---- 51be7d depth 3
void __fastcall sub_51BE7D(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax

  v1 = *a1;
  v2 = **a1;
  if ( v2 == 1 )
  {
    sub_6584DF(v1 + 1);
  }
  else if ( !v2 && v1[2] )
  {
    free((void *)v1[1]);
  }
  free(v1);
}


// ---- 4c6188 depth 3
unsigned __int64 __fastcall sub_4C6188(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  sub_52518C(v6, 128);
  sub_6958A5(v6, a2, a3);
  result = v6[0];
  v5 = v6[1];
  if ( __OFSUB__(-v6[0], 1) )
    result = 0x8000000000000000LL;
  else
    a1[2] = v6[2];
  a1[1] = v5;
  *a1 = result;
  return result;
}


// ---- 675653 depth 3
__int64 __fastcall sub_675653(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  void *v5; // rdx
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int128 v9; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, void *, __int64); // rax
  void *v12; // rsi
  __int128 v13; // xmm0
  __int128 v14; // [rsp+8h] [rbp-70h] BYREF
  __int128 *v15; // [rsp+18h] [rbp-60h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+20h] [rbp-58h]
  __int128 *v17; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall *v18)(); // [rsp+30h] [rbp-48h]
  __int64 *v19; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall *v20)(); // [rsp+40h] [rbp-38h]
  __int128 v21; // [rsp+48h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-20h] BYREF

  v2 = 10;
  if ( *(__int64 *)a1 < 0 )
    v2 = *(_QWORD *)a1 ^ 0x8000000000000000LL;
  switch ( v2 )
  {
    case 0uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_674EE2;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_140D48;
      goto LABEL_46;
    case 1uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_6A24B8;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_157E2A;
      goto LABEL_46;
    case 2uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_6A24B8;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_15C211;
      goto LABEL_46;
    case 3uLL:
      return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(a2[1] + 24LL))(*a2, &unk_21CCE3, 42);
    case 4uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_6A24B8;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_148886;
      goto LABEL_46;
    case 5uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_696FE8;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_16EE6B;
      goto LABEL_46;
    case 6uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_5E6D15;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1397F1;
      goto LABEL_46;
    case 7uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_5E6D15;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1449EA;
      goto LABEL_46;
    case 8uLL:
      v13 = *(_OWORD *)(a1 + 8);
      v21 = *(_OWORD *)(a1 + 24);
      v14 = v13;
      v22 = a1 + 40;
      v15 = &v21;
      v16 = sub_617A36;
      v17 = &v14;
      v18 = sub_617A36;
      v19 = &v22;
      v20 = sub_696FE8;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_17DB74;
      goto LABEL_46;
    case 9uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_674F88;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_14C158;
      goto LABEL_46;
    case 0xAuLL:
      *(_QWORD *)&v21 = a1;
      *(_QWORD *)&v14 = a1 + 24;
      v15 = &v21;
      v16 = sub_6A24B8;
      v17 = &v14;
      v18 = sub_6A24B8;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_17DB9B;
      goto LABEL_46;
    case 0xBuLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_674EEA;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_14FEDA;
      goto LABEL_46;
    case 0xCuLL:
      v7 = *a2;
      v8 = a2[1];
      if ( *(_QWORD *)(a1 + 16) )
      {
        *(_QWORD *)&v9 = sub_69E796(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
        if ( (_QWORD)v9 )
        {
          v14 = v9;
          v15 = (__int128 *)(a1 + 8);
          v16 = sub_6A2254;
          v17 = &v14;
          v18 = sub_615D65;
          v5 = &unk_17A44F;
        }
        else
        {
          v15 = (__int128 *)(a1 + 8);
          v16 = sub_6A2254;
          v5 = &unk_140E2D;
        }
      }
      else
      {
        v15 = (__int128 *)(a1 + 8);
        v16 = sub_6A2254;
        v5 = &unk_13CFC8;
      }
      v3 = v7;
      v4 = v8;
      goto LABEL_46;
    case 0xDuLL:
      v14 = *(_OWORD *)(a1 + 8);
      v15 = &v14;
      v16 = sub_617A36;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_140D5A;
      goto LABEL_46;
    case 0xEuLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_696FE0;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_181AD1;
      goto LABEL_46;
    case 0xFuLL:
      v10 = *a2;
      v11 = *(__int64 (__fastcall **)(__int64, void *, __int64))(a2[1] + 24LL);
      v12 = &unk_21CD0D;
      return v11(v10, v12, 55);
    case 0x10uLL:
      return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(a2[1] + 24LL))(*a2, &unk_21CD44, 25);
    case 0x11uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_674EDA;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_17DBC0;
      goto LABEL_46;
    case 0x12uLL:
      return sub_60F6AB(a1 + 8);
    case 0x13uLL:
      return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(a2[1] + 24LL))(*a2, &unk_21CD5D, 27);
    case 0x14uLL:
      return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(a2[1] + 24LL))(*a2, &unk_21CD78, 31);
    case 0x15uLL:
      return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(a2[1] + 24LL))(*a2, &unk_21CD97, 29);
    case 0x16uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_5E6D15;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_157E53;
      goto LABEL_46;
    case 0x17uLL:
      return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(a2[1] + 24LL))(*a2, &unk_21CDB4, 12);
    case 0x18uLL:
      return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(a2[1] + 24LL))(*a2, &unk_106870, 16);
    case 0x19uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_6A2496;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1449CA;
      goto LABEL_46;
    case 0x1AuLL:
      return sub_5CFE85(a1 + 8);
    case 0x1BuLL:
      return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(a2[1] + 24LL))(*a2, &unk_21CDC0, 17);
    case 0x1CuLL:
      v10 = *a2;
      v11 = *(__int64 (__fastcall **)(__int64, void *, __int64))(a2[1] + 24LL);
      v12 = &unk_21CDD1;
      return v11(v10, v12, 55);
    case 0x1DuLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_68E664;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_14889A;
      goto LABEL_46;
    case 0x1EuLL:
      return sub_611D68(*(unsigned int *)(a1 + 8), *a2, a2[1]);
    case 0x1FuLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_674EF2;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1488B8;
      goto LABEL_46;
    case 0x20uLL:
      return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(a2[1] + 24LL))(*a2, &unk_21CE08, 54);
    case 0x21uLL:
      *(_QWORD *)&v14 = a1 + 8;
      v15 = &v14;
      v16 = sub_6A249E;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_15FF85;
LABEL_46:
      result = sub_60F6A6(v3, v4, v5, &v15);
      break;
    case 0x22uLL:
      result = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(a2[1] + 24LL))(*a2, &unk_2200F5, 14);
      break;
  }
  return result;
}


// ---- 51f9dd depth 3
__int64 __fastcall sub_51F9DD(int a1)
{
  __int64 result; // rax
  char v2; // [rsp+1h] [rbp-1h] BYREF

  if ( a1 )
  {
    v2 = HIBYTE(result);
    sub_5DA280((__int64)&unk_220F99, 55, (__int64)&v2, (__int64)&unk_13B65E0);
  }
  return result;
}


// ---- 697dfd depth 3
void __fastcall sub_697DFD(volatile signed __int64 *ptr)
{
  sub_691C6D(ptr + 2);
  sub_691C6D(ptr + 26);
  sub_691C6D(ptr + 50);
  sub_691C6D(ptr + 74);
  sub_691C6D(ptr + 98);
  sub_691C6D(ptr + 122);
  sub_691C6D(ptr + 146);
  sub_691C6D(ptr + 170);
  if ( ptr != (volatile signed __int64 *)-1LL && !_InterlockedDecrement64(ptr + 1) )
    free((void *)ptr);
}


// ---- 5e616f depth 3
__int64 __fastcall sub_5E616F(__int64 a1, __int64 a2)
{
  return sub_5E5443(a1, a2, 1, 1);
}


// ---- 6914a0 depth 3
__int64 __fastcall sub_6914A0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 i; // r15

  v1 = a1[1];
  v2 = a1[2];
  for ( i = v1 + 24; v2-- != 0; i += 56 )
  {
    sub_5E616F(*(_QWORD *)(i - 24), *(_QWORD *)(i - 16));
    sub_5E834E(i);
  }
  return sub_5E5443(*a1, v1, 8, 56);
}


// ---- 5160a8 depth 3
volatile signed __int64 *__fastcall sub_5160A8(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( !_InterlockedDecrement64(*a1) )
    return (volatile signed __int64 *)sub_659901();
  return result;
}


// ---- 5174a7 depth 3
__int64 __fastcall sub_5174A7(__int64 a1)
{
  sub_601B54(*(_QWORD *)(a1 + 160), *(_QWORD *)(a1 + 168));
  sub_5169B5(a1 + 144);
  return sub_51DC65(a1);
}


// ---- 51d316 depth 3
volatile signed __int64 *__fastcall sub_51D316(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( !_InterlockedDecrement64(*a1) )
    return (volatile signed __int64 *)sub_65BF49();
  return result;
}


// ---- 51bb75 depth 3
volatile signed __int64 *__fastcall sub_51BB75(__int64 a1)
{
  volatile signed __int64 *result; // rax

  sub_51DC65(a1);
  sub_51D316((volatile signed __int64 **)(a1 + 144));
  result = *(volatile signed __int64 **)(a1 + 152);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_65D7B2(*(_QWORD *)(a1 + 152));
  return result;
}


// ---- 646480 depth 3
void __fastcall __noreturn sub_646480(_OWORD *a1)
{
  __int128 v1; // [rsp+8h] [rbp-18h] BYREF
  _OWORD *v2; // [rsp+18h] [rbp-8h]

  v1 = *a1;
  v2 = a1;
  sub_645FA0(&v1);
}


