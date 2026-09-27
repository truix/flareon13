// ---- 4ceca8 depth 0
__int64 sub_4CECA8()
{
  __int64 result; // rax
  unsigned int *v1; // r14
  __int64 v2; // r15
  unsigned int v3; // eax
  __int128 v4; // rax
  unsigned __int64 v5; // rax
  __int64 i; // rcx
  unsigned __int64 v7; // rtt
  __int128 v8; // kr10_16
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r15
  __int128 v12; // kr20_16
  __int64 v13; // rbp
  __int128 v14; // kr30_16
  __int64 v15; // r15
  __int128 v16; // kr40_16
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int128 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r14
  unsigned __int8 v23; // bl
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int128 *v26; // rdi
  void *v27; // r12
  __int64 v28; // r14
  __int64 v29; // r13
  int v30; // eax
  _BOOL8 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 j; // rdx
  unsigned int v36; // edi
  __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // kr00_8
  __int64 v40; // r9
  bool v41; // cf
  __int128 *v42; // rdx
  __int64 (__fastcall **v43)(); // rcx
  __int64 v44; // rax
  volatile signed __int64 *v45; // r13
  __int64 v46; // rbx
  __int64 v47; // rt0
  char v48; // of
  __int64 v49; // rax
  __int128 v50; // xmm1
  __int64 v51; // rt0
  __int64 v52; // r14
  volatile signed __int64 **v53; // rax
  char v54; // al
  pthread_t v55; // rdx
  pthread_t v56; // r12
  _DWORD *v57; // r13
  __int64 k; // r14
  char v59; // bl
  _BYTE *v60; // rax
  __int64 v61; // r14
  __int128 v62; // kr50_16
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rbp
  void *v66; // rbx
  void *v67; // rax
  volatile __int32 *v68; // r12
  void *v69; // r14
  volatile __int32 *v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  void *v75; // rbx
  __int64 v76; // r15
  volatile signed __int64 *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdi
  int v83; // ebx
  __int64 v84; // [rsp+18h] [rbp-5F0h]
  _DWORD *v85; // [rsp+18h] [rbp-5F0h]
  __int64 v86; // [rsp+20h] [rbp-5E8h]
  __int64 v87; // [rsp+20h] [rbp-5E8h]
  __int64 v88; // [rsp+28h] [rbp-5E0h]
  char v89; // [rsp+28h] [rbp-5E0h]
  __int128 v90; // [rsp+30h] [rbp-5D8h] BYREF
  __int64 v91; // [rsp+40h] [rbp-5C8h]
  __int64 v92; // [rsp+48h] [rbp-5C0h] BYREF
  __int64 v93; // [rsp+50h] [rbp-5B8h]
  __int64 v94; // [rsp+58h] [rbp-5B0h]
  __int128 v95; // [rsp+60h] [rbp-5A8h] BYREF
  __int64 v96; // [rsp+70h] [rbp-598h]
  __int64 v97; // [rsp+80h] [rbp-588h]
  __int64 v98; // [rsp+88h] [rbp-580h]
  __int64 v99; // [rsp+90h] [rbp-578h]
  volatile __int32 *v100; // [rsp+98h] [rbp-570h]
  __int64 v101; // [rsp+A0h] [rbp-568h] BYREF
  __int64 v102; // [rsp+A8h] [rbp-560h]
  __int64 v103; // [rsp+B0h] [rbp-558h]
  int v104; // [rsp+B8h] [rbp-550h] BYREF
  volatile __int32 *v105; // [rsp+C0h] [rbp-548h]
  _OWORD v106[20]; // [rsp+D0h] [rbp-538h] BYREF
  __int128 v107; // [rsp+210h] [rbp-3F8h] BYREF
  __int128 v108; // [rsp+220h] [rbp-3E8h]
  __int64 v109; // [rsp+230h] [rbp-3D8h]
  void *v110; // [rsp+240h] [rbp-3C8h]
  void *v111; // [rsp+248h] [rbp-3C0h]
  __int64 v112[3]; // [rsp+2F8h] [rbp-310h] BYREF
  _OWORD v113[24]; // [rsp+310h] [rbp-2F8h] BYREF
  _BYTE v114[320]; // [rsp+498h] [rbp-170h] BYREF

  sub_50D9AF(&v104);
  if ( (_BYTE)v104 )
    return sub_516087(v105);
  v100 = v105;
  v1 = (unsigned int *)&v95;
  v95 = 0;
  v2 = 16;
  v3 = sub_673E0A(&v95, 16);
  if ( v3 )
  {
    v42 = v113;
    *(_QWORD *)&v113[0] = 0x800000000000001FLL;
    *((_QWORD *)&v113[0] + 1) = v3;
    v43 = &off_13C6838;
    goto LABEL_42;
  }
  *(_QWORD *)&v4 = sub_6586F3(20, 1);
  v106[0] = v4;
  *(_QWORD *)&v106[1] = 0;
  while ( v2 )
  {
    LODWORD(v92) = 0;
    BYTE4(v92) = 0;
    v5 = _byteswap_ulong(*v1);
    for ( i = 5; i; --i )
    {
      v7 = v5;
      v5 /= 0x55u;
      *((_BYTE *)&v91 + i + 7) = byte_21D53D[v7 % 0x55];
    }
    sub_5D8370(v113, &v92, 5);
    if ( LODWORD(v113[0]) == 1 )
    {
      v42 = &v107;
      v107 = *(_OWORD *)((char *)v113 + 8);
      v43 = (__int64 (__fastcall **)())&unk_13C68D8;
      goto LABEL_42;
    }
    v2 -= 4;
    ++v1;
    sub_658793(v106, *((_QWORD *)&v113[0] + 1), *(_QWORD *)&v113[1]);
  }
  v8 = v106[0];
  v9 = *(_QWORD *)&v106[1];
  v86 = sub_6595AE(1, 0);
  v99 = sub_6595AE(1, 0);
  v88 = v9;
  sub_5CE7F0(v112, *((_QWORD *)&v8 + 1), v9);
  v84 = v112[1];
  v10 = v112[2];
  sub_6588DE(&v107, aCopyright20192_8, 1187);
  v11 = *((_QWORD *)&v107 + 1);
  sub_67373E(
    (unsigned int)&v101,
    (unsigned int)aCopyright20192_7,
    3390,
    (unsigned int)&unk_21DA97,
    30,
    DWORD2(v107),
    v108);
  sub_5E616F(v107, v11);
  sub_67383A(&v107, &unk_21D4F3, 5);
  if ( !(_QWORD)v107 )
  {
    *((_QWORD *)&v90 + 1) = *((_QWORD *)&v107 + 1);
    *(_QWORD *)&v90 = 0x8000000000000000LL;
    v13 = v102;
LABEL_78:
    sub_5E616F(v101, v13);
    goto LABEL_79;
  }
  v97 = *((_QWORD *)&v8 + 1);
  v98 = v8;
  sub_61F67E(&v95, v107, *((_QWORD *)&v107 + 1));
  v12 = v95;
  v13 = v102;
  sub_67373E((unsigned int)&v92, v102, v103, (unsigned int)&unk_21B90C, 20, DWORD2(v95), v96);
  sub_5E616F(v12, *((__int64 *)&v12 + 1));
  sub_67383A(&v90, aPluginTauriCha, 30);
  if ( !(_QWORD)v90 )
  {
    *(_QWORD *)&v90 = 0x8000000000000000LL;
    v15 = v93;
LABEL_77:
    sub_5E616F(v92, v15);
    goto LABEL_78;
  }
  sub_61F67E(v106, v90, *((_QWORD *)&v90 + 1));
  v14 = v106[0];
  v15 = v93;
  sub_67373E((unsigned int)&v107, v93, v94, (unsigned int)&unk_21DAB5, 39, DWORD2(v106[0]), *(__int64 *)&v106[1]);
  sub_5E616F(v14, *((__int64 *)&v14 + 1));
  sub_67383A(&v90, v84, v10);
  if ( !(_QWORD)v90 )
  {
    *(_QWORD *)&v90 = 0x8000000000000000LL;
    sub_5E616F(v107, *((__int64 *)&v107 + 1));
    goto LABEL_77;
  }
  sub_61F67E(v113, v90, *((_QWORD *)&v90 + 1));
  v16 = v113[0];
  v17 = *((_QWORD *)&v107 + 1);
  sub_67373E(
    (unsigned int)&v90,
    DWORD2(v107),
    v108,
    (unsigned int)&unk_21B93C,
    23,
    DWORD2(v113[0]),
    *(__int64 *)&v113[1]);
  sub_5E616F(v16, *((__int64 *)&v16 + 1));
  sub_5E616F(v107, v17);
  sub_5E616F(v92, v15);
  v18 = v90;
  sub_5E616F(v101, v13);
  if ( v18 == 0x8000000000000000LL )
  {
LABEL_79:
    v42 = v113;
    *(_QWORD *)&v113[0] = *((_QWORD *)&v90 + 1);
    v43 = &off_13C6858;
LABEL_42:
    sub_5DA280((__int64)aCalledResultUn, 43, (__int64)v42, (__int64)v43);
  }
  *(_QWORD *)&v106[1] = v91;
  v106[0] = v90;
  *(_QWORD *)&v19 = sub_4C3907();
  BYTE8(v106[19]) = 0;
  *(_QWORD *)&v106[9] = v99;
  *((_QWORD *)&v106[9] + 1) = &unk_13C6FD8;
  *(_QWORD *)&v106[14] = 0;
  *(_QWORD *)&v106[10] = v86;
  *((_QWORD *)&v106[10] + 1) = &unk_13C6FB8;
  *(_QWORD *)&v106[15] = 0;
  *((_QWORD *)&v106[1] + 1) = 0;
  v106[2] = 8u;
  v106[11] = off_13CA568;
  v106[12] = xmmword_13CA578;
  v106[13] = v19;
  LODWORD(v106[16]) = 0;
  *(__m128i *)((char *)v113 + 3) = off_13CA568;
  *(_OWORD *)((char *)&v113[1] + 3) = xmmword_13CA578;
  BYTE4(v106[16]) = 0;
  *(_OWORD *)((char *)&v106[16] + 5) = v113[0];
  *(_OWORD *)((char *)&v106[17] + 5) = v113[1];
  DWORD1(v106[18]) = 0;
  *((_QWORD *)&v106[18] + 1) = 0;
  *(_QWORD *)&v106[3] = 0;
  *((_QWORD *)&v106[3] + 1) = 8;
  v106[4] = 0;
  *(_WORD *)((char *)&v106[19] + 9) = 257;
  *(_QWORD *)&v106[5] = 8;
  *(_OWORD *)((char *)&v106[5] + 8) = 0;
  *((_QWORD *)&v106[6] + 1) = 8;
  *(_QWORD *)&v106[7] = 0;
  *((_QWORD *)&v106[7] + 1) = v98;
  *(_QWORD *)&v106[8] = v97;
  *((_QWORD *)&v106[8] + 1) = v88;
  sub_5E616F(v112[0], v84);
  v20 = sub_4C3769(128, 512);
  *(_DWORD *)(v20 + 256) = 0;
  *(_BYTE *)(v20 + 260) = 0;
  *(_QWORD *)(v20 + 264) = 0;
  *(_OWORD *)v20 = 0;
  *(_OWORD *)(v20 + 128) = 0;
  *(_QWORD *)(v20 + 272) = 8;
  *(_OWORD *)(v20 + 280) = 0;
  *(_QWORD *)(v20 + 296) = 8;
  *(_QWORD *)(v20 + 304) = 0;
  *(_BYTE *)(v20 + 312) = 1;
  *(_QWORD *)(v20 + 384) = 1;
  *(_QWORD *)(v20 + 392) = 1;
  *(_BYTE *)(v20 + 400) = 0;
  v21 = v20;
  sub_687F2B((__int64)v113);
  v22 = *((_QWORD *)&v113[0] + 1);
  v23 = v113[1];
  v89 = v113[0];
  if ( !LOBYTE(v113[0]) )
  {
    v24 = *(_QWORD *)(*((_QWORD *)&v113[0] + 1) + 8LL);
    if ( v24 != 3 )
      sub_68E3B7(v24, *(_QWORD *)(*((_QWORD *)&v113[0] + 1) + 16LL));
    *(_QWORD *)(v22 + 8) = 1;
    *(_QWORD *)(v22 + 16) = v21;
  }
  v25 = v23;
  v26 = (__int128 *)v22;
  sub_516087((volatile __int32 *)v22);
  v92 = 0x8000000000000000LL;
  if ( !qword_14385B0 )
  {
    v25 = (__int64)&unk_21FB5E;
    v26 = &v95;
    sub_64F180(&v95, &unk_21FB5E, 14);
    v28 = v95;
    v27 = &unk_200000;
    if ( (_QWORD)v95 == 0x8000000000000000LL )
    {
LABEL_45:
      qword_14385B0 = (__int64)v27 + 1;
      goto LABEL_46;
    }
    v29 = *((_QWORD *)&v95 + 1);
    sub_5D8370(&v107, *((_QWORD *)&v95 + 1), v96);
    if ( (_DWORD)v107 == 1 )
    {
      v27 = &unk_200000;
    }
    else
    {
      v27 = &unk_200000;
      if ( (_QWORD)v108 )
      {
        if ( (_QWORD)v108 == 1 )
        {
          v30 = (unsigned __int8)**((_BYTE **)&v107 + 1);
          if ( v30 == 43 || v30 == 45 )
            goto LABEL_44;
        }
        else
        {
          LOBYTE(v30) = **((_BYTE **)&v107 + 1);
        }
        v31 = (_BYTE)v30 == 43;
        v32 = v31 + *((_QWORD *)&v107 + 1);
        v33 = v31 - v108;
        v34 = 0;
        if ( (_QWORD)v108 - v31 >= 0x11u )
        {
          v37 = 0;
          while ( v37 + v33 )
          {
            v39 = v34;
            v38 = 10 * v34;
            if ( is_mul_ok(0xAu, v39) )
            {
              v40 = (unsigned int)*(unsigned __int8 *)(v32 + v37) - 48;
              v41 = __CFADD__(v40, v38);
              v34 = v40 + v38;
              if ( (unsigned int)v40 <= 9 )
              {
                ++v37;
                if ( !v41 )
                  continue;
              }
            }
            goto LABEL_44;
          }
        }
        else
        {
          for ( j = 0; j + v33; ++j )
          {
            v36 = *(unsigned __int8 *)(v32 + j) - 48;
            if ( v36 > 9 )
              goto LABEL_44;
            v34 = 10 * v34 + v36;
          }
        }
        v27 = (void *)v34;
      }
    }
LABEL_44:
    v26 = (__int128 *)v28;
    v25 = v29;
    sub_601B54(v28, v29);
    goto LABEL_45;
  }
  v27 = (void *)(qword_14385B0 - 1);
LABEL_46:
  v44 = sub_646A40(v26, v25);
  v45 = sub_646D60(v44, &v92);
  *(_QWORD *)&v95 = v45;
  sub_650FD0(v113);
  v46 = sub_4C3769(8, 48);
  *(_QWORD *)v46 = 1;
  *(_QWORD *)(v46 + 8) = 1;
  *(_OWORD *)(v46 + 16) = 0;
  *(_QWORD *)&v107 = v46;
  v47 = _InterlockedIncrement64((volatile signed __int64 *)v46);
  if ( (v47 < 0) ^ v48 | (v47 == 0) )
    goto LABEL_72;
  v49 = sub_4C3769(8, 56);
  v50 = v113[1];
  *(_OWORD *)v49 = v113[0];
  *(_OWORD *)(v49 + 16) = v50;
  *(_QWORD *)(v49 + 32) = v46;
  *(_QWORD *)(v49 + 40) = 1;
  *(_QWORD *)(v49 + 48) = v21;
  v51 = _InterlockedIncrement64(v45);
  if ( (v51 < 0) ^ v48 | (v51 == 0) )
LABEL_72:
    BUG();
  v52 = v49;
  v87 = v21;
  v53 = (volatile signed __int64 **)sub_4C3769(8, 24);
  *v53 = v45;
  v53[1] = (volatile signed __int64 *)v52;
  v53[2] = (volatile signed __int64 *)&off_13B61D8;
  v54 = sub_6473C0(v27, v53);
  v56 = v55;
  if ( (v54 & 1) != 0 )
  {
    sub_51F439(&v107);
    sub_69A2F4(&v95);
    *(_QWORD *)&v113[0] = v56;
    sub_5DA280((__int64)&unk_21B625, 22, (__int64)v113, (__int64)&off_13B6500);
  }
  *(_QWORD *)&v113[0] = v45;
  *((_QWORD *)&v113[0] + 1) = v46;
  *(_QWORD *)&v113[1] = v55;
  pthread_detach(v55);
  sub_69A2F4(v113);
  sub_51F439((char *)v113 + 8);
  v85 = (_DWORD *)sub_4C3769(1, 4);
  *v85 = 876829424;
  v57 = (_DWORD *)sub_4C3769(1, 4);
  *v57 = 1512849310;
  *(_QWORD *)&v95 = 4;
  *((_QWORD *)&v95 + 1) = v57;
  v96 = 4;
  for ( k = 0; k != 4; ++k )
  {
    v59 = *(_BYTE *)sub_5C3DA0(v85, 4, k, &off_13B5C60);
    v60 = (_BYTE *)sub_5C3DA0(v57, 4, k, &off_13B5C60);
    *v60 ^= v59;
  }
  sub_4C2C31(&v107, &v95);
  if ( (_QWORD)v107 != 0x8000000000000000LL )
  {
    v42 = v113;
    *(_QWORD *)&v113[2] = v109;
    v113[1] = v108;
    v113[0] = v107;
    v43 = &off_13B67A0;
    goto LABEL_42;
  }
  v61 = *((_QWORD *)&v107 + 1);
  v62 = v108;
  sub_601B54(4, (__int64)v85);
  sub_5C8B43(v113, (const void *)v62, *((size_t *)&v62 + 1));
  v63 = sub_5CC2F0(v113);
  v65 = v64;
  sub_601B54(v61, v62);
  sub_57DDD2(&v107, v63, v65);
  v66 = (void *)sub_4C3769(1, 0);
  sub_516A82(v110);
  v110 = v66;
  v111 = &unk_13B78B0;
  sub_57DF32(v113, &v107);
  if ( v89 )
    sub_68E3B7(1, v87);
  v67 = (void *)sub_4C3769(8, 384);
  qmemcpy(v67, v113, 0x180u);
  sub_57E14B((char *)&v106[1] + 8, v67);
  qmemcpy(v114, v106, sizeof(v114));
  v68 = v100;
  v69 = (void *)(v100 + 2);
  if ( *((_QWORD *)v100 + 1) == 0x8000000000000000LL )
  {
    qmemcpy(v69, v114, 0x140u);
    v70 = v68;
    return sub_516087(v70);
  }
  sub_516A82(*((void **)v100 + 19));
  sub_601B54(*((_QWORD *)v68 + 1), *((_QWORD *)v68 + 2));
  v75 = *((void **)v68 + 29);
  if ( v75 )
  {
    v76 = *((_QWORD *)v68 + 30);
    if ( *(_QWORD *)v76 )
      (*(void (__fastcall **)(_QWORD))v76)(*((_QWORD *)v68 + 29));
    if ( *(_QWORD *)(v76 + 8) )
      free(v75);
  }
  sub_518E60(*((_QWORD *)v68 + 21), *((_QWORD *)v68 + 22), v71, v72, v73, v74);
  v77 = *((volatile signed __int64 **)v68 + 31);
  if ( v77 && !_InterlockedDecrement64(v77) )
    sub_69A08A(v68 + 62);
  sub_673130(*((_QWORD *)v68 + 5), *((_QWORD *)v68 + 6));
  sub_516F0E(*((_QWORD *)v68 + 4), *((_QWORD *)v68 + 5));
  sub_65D182(v68 + 46);
  sub_6597FF(v68 + 68);
  v82 = *((_QWORD *)v68 + 38);
  if ( v82 )
    sub_518E60(v82, *((_QWORD *)v68 + 39), v78, v79, v80, v81);
  sub_673130(*((_QWORD *)v68 + 8), *((_QWORD *)v68 + 9));
  sub_516F0E(*((_QWORD *)v68 + 7), *((_QWORD *)v68 + 8));
  sub_673130(*((_QWORD *)v68 + 11), *((_QWORD *)v68 + 12));
  sub_516F0E(*((_QWORD *)v68 + 10), *((_QWORD *)v68 + 11));
  sub_673130(*((_QWORD *)v68 + 14), *((_QWORD *)v68 + 15));
  sub_516F0E(*((_QWORD *)v68 + 13), *((_QWORD *)v68 + 14));
  sub_601B54(*((_QWORD *)v68 + 16), *((_QWORD *)v68 + 17));
  v83 = v104;
  qmemcpy(v69, v114, 0x140u);
  result = sub_516087(v68);
  if ( v83 == 1 )
  {
    v70 = v105;
    return sub_516087(v70);
  }
  return result;
}


// ---- 4ef85d depth 0
__int64 __fastcall sub_4EF85D(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  __int64 v10; // r14
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // rdx
  char v17; // al
  char *v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rsi
  void *v23; // rdi
  _OWORD *v24; // r12
  __int64 v25; // rbx
  char *v26; // r15
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int128 v29; // rax
  __int64 v30; // r12
  unsigned __int64 v31; // rdi
  __int64 v32; // r13
  _QWORD *v33; // rbx
  __int64 v34; // rax
  __int128 v35; // xmm0
  __int64 v36; // r15
  __int64 v37; // rsi
  __int128 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // rbx
  _QWORD *i; // r12
  bool v46; // cf
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // r12
  _QWORD *v50; // rax
  bool v51; // zf
  _QWORD *v52; // r14
  _QWORD *v53; // rax
  __int64 v54; // r15
  _QWORD *v55; // rdx
  __int64 v56; // r14
  __int64 v57; // rbx
  __int64 v58; // r14
  void *v59; // r15
  __int64 v60; // rdx
  __int64 v61; // r12
  _QWORD *v62; // rax
  __int64 v63; // r14
  __int64 v64; // rdx
  void *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // r13
  double v68; // xmm0_8
  __int64 v69; // rax
  _QWORD **v70; // r12
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // r14
  __int64 v74; // rax
  char v75; // al
  __int64 v76; // rax
  __int64 v77; // r14
  volatile __int32 *v78; // rdi
  unsigned __int8 v79; // al
  bool v80; // of
  __int64 v81; // rt0
  __int64 v82; // rsi
  void *v83; // rsi
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // r15
  _BYTE *v87; // rdi
  void *v88; // rbx
  __int64 v89; // r12
  __int64 v90; // r13
  __int64 v91; // rax
  volatile signed __int64 *v92; // r15
  __int64 v93; // rax
  __int64 v94; // rt0
  __int64 v95; // r13
  __int64 v96; // rax
  __int128 v97; // xmm1
  __int64 v98; // rt0
  __int64 v99; // r12
  volatile signed __int64 **v100; // rax
  char v101; // al
  __int64 v102; // rdx
  __int64 v103; // rbx
  __int64 v104; // r15
  _QWORD *v105; // rbx
  __int64 v106; // r12
  __int64 v107; // r13
  __int64 v108; // rax
  _QWORD *v109; // r14
  __int64 v110; // rbx
  __int128 *v111; // r14
  _OWORD *v112; // r12
  __int128 v113; // kr10_16
  __int64 v114; // rbx
  __int64 v115; // r15
  __int64 v116; // rbx
  volatile signed __int32 *v117; // r13
  volatile __int32 *v118; // rdi
  unsigned __int8 v119; // al
  __int64 v120; // rt0
  __int64 v121; // rsi
  __int128 v122; // rax
  __int128 v123; // rax
  char *v124; // r12
  __int64 v125; // r13
  __int64 v126; // rbx
  _QWORD *v127; // r14
  __int128 v128; // xmm1
  unsigned __int64 v129; // r13
  __int64 v130; // rbx
  __int64 v131; // r14
  unsigned __int64 v132; // rax
  __int64 v133; // r15
  unsigned __int64 v134; // rbx
  __int64 v135; // rax
  __int64 v136; // rcx
  __int128 v137; // rax
  unsigned __int64 v138; // r14
  __int64 v139; // r13
  __int64 j; // rbx
  __int64 v141; // r15
  __int64 v142; // r13
  __int64 v143; // r14
  __int64 k; // rbx
  __int64 v145; // r13
  __int64 v146; // rdx
  __int64 v147; // rdx
  __int64 v148; // rdx
  char v149; // r13
  __int64 v150; // rdx
  __int64 v151; // r14
  __int64 v152; // rbx
  __int64 v153; // r15
  unsigned __int8 v154; // r13
  __int64 v155; // r12
  __int64 v156; // rax
  __int64 v157; // r13
  _QWORD *v158; // r12
  __int64 v159; // rbx
  __int64 v160; // r14
  void *v161; // r12
  __int64 v162; // rbx
  __int64 v163; // rax
  __int128 v164; // xmm1
  __int64 v165; // rdx
  __int64 v166; // r15
  __int64 v167; // rax
  double v168; // xmm0_8
  __int128 v169; // xmm1
  __int64 v170; // rdx
  __int64 v171; // rdx
  __int64 v172; // r13
  __int64 v173; // r12
  int micro_version; // eax
  __int64 v175; // rdx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 *v179; // r15
  __int64 v180; // r14
  char v181; // dl
  char v182; // r12
  __int64 v183; // rdx
  __int64 v184; // rbx
  _QWORD *v185; // r14
  __int64 v186; // r15
  unsigned __int8 v187; // r13
  __int64 v188; // r12
  __int64 v189; // rax
  __int64 v190; // r15
  _QWORD *v191; // r12
  char *v192; // rdi
  __int128 *v193; // rsi
  void *v194; // r14
  __int64 v195; // r15
  __int64 v196; // r12
  __int64 v197; // rax
  volatile signed __int64 *v198; // rbx
  __int64 v199; // r15
  __int64 v200; // rt0
  __int64 v201; // rax
  __int128 v202; // xmm1
  __int64 v203; // rt0
  __int64 v204; // r12
  volatile signed __int64 **v205; // rax
  char v206; // al
  void *v207; // rdx
  void *v208; // r14
  __int64 (__fastcall **v209)(); // rcx
  __int64 (__fastcall **v210)(); // rcx
  __int64 v211; // rbx
  __int64 (__fastcall **v212)(); // rax
  void *v213; // r15
  int v214; // r14d
  __int64 v215; // [rsp+50h] [rbp-458h]
  __int64 v216; // [rsp+50h] [rbp-458h]
  __int64 v217; // [rsp+50h] [rbp-458h]
  __int64 v218; // [rsp+50h] [rbp-458h]
  char v219; // [rsp+5Fh] [rbp-449h]
  __int64 v220; // [rsp+60h] [rbp-448h]
  __int64 v221; // [rsp+60h] [rbp-448h]
  __int64 v222; // [rsp+60h] [rbp-448h]
  void *v223; // [rsp+60h] [rbp-448h]
  __int64 v224; // [rsp+60h] [rbp-448h]
  __int64 v225; // [rsp+60h] [rbp-448h]
  __int64 v226; // [rsp+60h] [rbp-448h]
  __int64 v227; // [rsp+68h] [rbp-440h]
  unsigned __int8 v228; // [rsp+68h] [rbp-440h]
  __int64 v229; // [rsp+68h] [rbp-440h]
  __int64 v230; // [rsp+68h] [rbp-440h]
  __int64 v231; // [rsp+68h] [rbp-440h]
  __int64 v232; // [rsp+68h] [rbp-440h]
  __int64 v233; // [rsp+68h] [rbp-440h]
  unsigned __int64 v234; // [rsp+70h] [rbp-438h]
  __int64 v235; // [rsp+70h] [rbp-438h]
  __int64 v236; // [rsp+70h] [rbp-438h]
  __int64 v237; // [rsp+78h] [rbp-430h]
  __int64 v238; // [rsp+78h] [rbp-430h]
  __int64 v239; // [rsp+78h] [rbp-430h]
  __int128 v240; // [rsp+80h] [rbp-428h] BYREF
  __int64 v241; // [rsp+90h] [rbp-418h]
  void *ptr[2]; // [rsp+A0h] [rbp-408h] BYREF
  __int128 v243; // [rsp+B0h] [rbp-3F8h]
  __int64 v244; // [rsp+C0h] [rbp-3E8h]
  unsigned __int64 v245; // [rsp+C8h] [rbp-3E0h]
  __int64 v246; // [rsp+D0h] [rbp-3D8h]
  __int64 v247; // [rsp+D8h] [rbp-3D0h]
  __int64 v248; // [rsp+E0h] [rbp-3C8h]
  __int64 v249; // [rsp+E8h] [rbp-3C0h]
  unsigned __int64 v250; // [rsp+F0h] [rbp-3B8h]
  _QWORD *v251; // [rsp+F8h] [rbp-3B0h]
  _BYTE v252[48]; // [rsp+100h] [rbp-3A8h] BYREF
  __int128 v253; // [rsp+130h] [rbp-378h]
  _BYTE *v254; // [rsp+140h] [rbp-368h]
  _OWORD v255[22]; // [rsp+180h] [rbp-328h] BYREF
  volatile signed __int32 *v256; // [rsp+2E8h] [rbp-1C0h]
  __int64 v257; // [rsp+2F0h] [rbp-1B8h]
  _QWORD *v258; // [rsp+2F8h] [rbp-1B0h]
  _QWORD **v259; // [rsp+300h] [rbp-1A8h]
  void *v260; // [rsp+308h] [rbp-1A0h]
  _BYTE v261[72]; // [rsp+310h] [rbp-198h] BYREF
  __int128 v262; // [rsp+358h] [rbp-150h] BYREF
  __int64 v263; // [rsp+368h] [rbp-140h]
  _BYTE v264[104]; // [rsp+370h] [rbp-138h] BYREF
  __int64 v265; // [rsp+3D8h] [rbp-D0h]
  unsigned __int64 v266; // [rsp+3E0h] [rbp-C8h]
  volatile signed __int32 *v267; // [rsp+3E8h] [rbp-C0h]
  __int64 v268; // [rsp+3F0h] [rbp-B8h]
  __int128 v269; // [rsp+3F8h] [rbp-B0h]
  __int64 v270; // [rsp+408h] [rbp-A0h]
  _QWORD *v271; // [rsp+410h] [rbp-98h]
  __int64 v272; // [rsp+418h] [rbp-90h]
  __int64 v273; // [rsp+420h] [rbp-88h] BYREF
  volatile signed __int32 *v274; // [rsp+428h] [rbp-80h] BYREF
  volatile signed __int32 *v275; // [rsp+430h] [rbp-78h] BYREF
  int v276; // [rsp+438h] [rbp-70h]
  __int64 v277[13]; // [rsp+440h] [rbp-68h] BYREF

  v10 = (__int64)a2;
  v272 = a1;
  if ( !__OFSUB__(0, *a3) )
  {
    sub_516A00(*a2, a2[1], a3, a4, a5, a6, a7, a8, a9, a10);
    a2[2] = a3[2];
    *(_OWORD *)a2 = *(_OWORD *)a3;
  }
  if ( !*((_BYTE *)a2 + 24) )
  {
    *(_QWORD *)v252 = aNewAnyThread;
    *(_QWORD *)&v252[8] = 14;
    v12 = syscall(186);
    if ( v12 != getpid() )
    {
      *(_QWORD *)&v255[0] = v252;
      *((_QWORD *)&v255[0] + 1) = sub_617A36;
      sub_5D6C90((__int64)&unk_21B63B, (__int64)v255, (__int64)&off_13C5878);
    }
  }
  v13 = sub_5E7205();
  v277[0] = v13;
  sub_5E713D(v255, v277);
  v258 = *((_QWORD **)&v255[0] + 1);
  v14 = 0x8000000000000001LL;
  if ( *(_QWORD *)&v255[0] != 0x8000000000000001LL )
  {
    *((_QWORD *)&v255[0] + 1) = v258;
    v210 = &off_13B6540;
    goto LABEL_163;
  }
  g_main_context_push_thread_default(v13);
  v15 = sub_51F847(a2);
  v220 = v16;
  v17 = sub_5E8F04();
  v271 = a2;
  v270 = v13;
  if ( !v17 )
  {
    if ( byte_14385C0 )
      sub_5D6C90((__int64)&unk_1FCCE8, 111, (__int64)&off_13BFD18);
    v237 = 24;
    sub_64EF40(v252);
    *(_QWORD *)&v252[32] = 1;
    sub_5E8CDD(v261, v252);
    v227 = v15;
    if ( *(_QWORD *)v261 == 0x8000000000000000LL )
    {
      v18 = &byte_8;
      *(_QWORD *)&v240 = 0;
      *((_QWORD *)&v240 + 1) = 8;
      v241 = 0;
      sub_5E8DAE(v252);
      v19 = 0;
    }
    else
    {
      if ( *(_QWORD *)&v252[32] )
      {
        v20 = (*(_QWORD *)&v252[24] - *(_QWORD *)&v252[8]) / 0x18uLL;
        if ( *(_QWORD *)&v252[32] < v20 )
          v20 = *(_QWORD *)&v252[32];
        v21 = 3;
        if ( v20 >= 4 )
          v21 = v20;
        v22 = v21 + 1;
      }
      else
      {
        v22 = 4;
      }
      sub_5E579B(v255, v22, 0, 8, 24);
      v23 = *((void **)&v255[0] + 1);
      if ( LODWORD(v255[0]) == 1 )
        sub_5CC3A7(*((_QWORD *)&v255[0] + 1), *(_QWORD *)&v255[1]);
      v24 = *(_OWORD **)&v255[1];
      *(_QWORD *)(*(_QWORD *)&v255[1] + 16LL) = *(_QWORD *)&v261[16];
      *v24 = *(_OWORD *)v261;
      ptr[0] = v23;
      ptr[1] = v24;
      *(_QWORD *)&v243 = 1;
      *(_QWORD *)&v255[2] = *(_QWORD *)&v252[32];
      a8 = *(double *)&v252[16];
      v255[1] = *(_OWORD *)&v252[16];
      v255[0] = *(_OWORD *)v252;
      v25 = 24;
      v26 = (_BYTE *)(&dword_0 + 1);
      while ( 1 )
      {
        sub_5E8CDD(v264, v255);
        if ( *(_QWORD *)v264 == 0x8000000000000000LL )
          break;
        if ( v26 == ptr[0] )
        {
          v27 = *(_QWORD *)&v255[2];
          v28 = 1;
          if ( *(_QWORD *)&v255[2] )
          {
            if ( *(_QWORD *)&v255[2] >= (*((_QWORD *)&v255[1] + 1) - *((_QWORD *)&v255[0] + 1)) / 0x18uLL )
              v27 = (*((_QWORD *)&v255[1] + 1) - *((_QWORD *)&v255[0] + 1)) / 0x18uLL;
            v28 = v27 + 1;
          }
          sub_5CBF94(ptr, v26, v28, 8, 24);
          v24 = ptr[1];
        }
        *(_QWORD *)((char *)v24 + v25 + 16) = *(_QWORD *)&v264[16];
        *(_OWORD *)((char *)v24 + v25) = *(_OWORD *)v264;
        *(_QWORD *)&v243 = ++v26;
        v25 += 24;
      }
      sub_5E8DAE(v255);
      v19 = v243;
      v241 = v243;
      v240 = *(_OWORD *)ptr;
      v18 = (char *)ptr[1];
    }
    *(_DWORD *)v261 = 1;
    *(_QWORD *)&v29 = sub_5FB0CE(v19, 8, 32);
    *(_OWORD *)v264 = v29;
    *(_QWORD *)&v264[16] = 0;
    if ( v19 > (unsigned __int64)v29 )
    {
      sub_5CBF94(v264, 0, v19, 8, 32);
      v30 = *(_QWORD *)&v264[8];
      v31 = *(_QWORD *)&v264[16];
    }
    else
    {
      v30 = *((_QWORD *)&v29 + 1);
      v31 = 0;
      if ( !v19 )
      {
        v36 = v29;
        goto LABEL_34;
      }
    }
    v32 = v30 + 32 * v31;
    v33 = v18 + 16;
    v234 = v19 + v31;
    do
    {
      sub_5E64C9(v255, *(v33 - 1), *v33);
      v34 = *((_QWORD *)&v255[1] + 1);
      *(_QWORD *)&v252[16] = *(_QWORD *)&v255[1];
      v35 = v255[0];
      *(_OWORD *)v252 = v255[0];
      *(_QWORD *)(v32 + 16) = *(_QWORD *)&v255[1];
      *(_OWORD *)v32 = v35;
      *(_QWORD *)(v32 + 24) = v34;
      v32 += 32;
      v33 += 3;
      --v19;
    }
    while ( v19 );
    v36 = *(_QWORD *)v264;
    v31 = v234;
LABEL_34:
    v37 = 8;
    *(_QWORD *)&v38 = sub_5FB0CE(v31, 8, 8);
    v40 = v31;
    v255[0] = v38;
    *(_QWORD *)&v255[1] = 0;
    if ( v31 > (unsigned __int64)v38 )
    {
      sub_5CBF94(v255, 0, v31, 8, 8);
      v40 = v31;
      *((_QWORD *)&v38 + 1) = *((_QWORD *)&v255[0] + 1);
      v41 = *(_QWORD *)&v255[1];
    }
    else
    {
      v41 = 0;
      if ( !v31 )
        goto LABEL_39;
    }
    v39 = -(__int64)v40;
    v38 = (unsigned __int64)(*((_QWORD *)&v38 + 1) + 8 * v41);
    v37 = 0;
    do
    {
      *(_QWORD *)(v38 + *((_QWORD *)&v38 + 1)) = *(_QWORD *)(v30 + 4LL * *((_QWORD *)&v38 + 1) + 24);
      --v37;
      *((_QWORD *)&v38 + 1) += 8LL;
    }
    while ( v39 != v37 );
    v41 -= v37;
LABEL_39:
    *(_OWORD *)v252 = v255[0];
    *(_QWORD *)&v252[16] = v41;
    if ( v41 == *(_QWORD *)&v255[0] )
    {
      sub_5E8DF9(v252, v37, *((_QWORD *)&v38 + 1), v39, v40);
      v40 = v31;
    }
    v42 = *(_QWORD *)&v252[8];
    *(_QWORD *)(*(_QWORD *)&v252[8] + 8 * v41) = 0;
    *((_QWORD *)&v255[2] + 1) = v41 + 1;
    *(_OWORD *)((char *)&v255[1] + 8) = *(_OWORD *)v252;
    *(_QWORD *)&v255[0] = v36;
    *((_QWORD *)&v255[0] + 1) = v30;
    *(_QWORD *)&v255[1] = v40;
    *(_QWORD *)&v255[3] = v42;
    v10 = (unsigned int)gtk_init_check(v261, &v255[3]);
    v43 = *((_QWORD *)&v255[0] + 1);
    v44 = *(_QWORD *)&v255[1];
    for ( i = (_QWORD *)(*((_QWORD *)&v255[0] + 1) + 8LL); ; i += 4 )
    {
      v46 = v44-- == 0;
      if ( v46 )
        break;
      sub_69298F(*(i - 1), *i);
    }
    sub_5E5443(*(_QWORD *)&v255[0], v43, 8, 32);
    if ( *((_QWORD *)&v255[1] + 1) != 0x8000000000000000LL )
      sub_5E5443(*((_QWORD *)&v255[1] + 1), *(_QWORD *)&v255[2], 8, 8);
    v14 = 0x8000000000000001LL;
    v15 = v227;
    if ( (_DWORD)v10 )
    {
      v47 = g_main_context_default();
      if ( (unsigned int)g_main_context_acquire(v47) )
      {
        sub_5E8E7E();
        sub_5E8FC6(&v240);
        goto LABEL_49;
      }
      v213 = &unk_1FCD80;
      v237 = 38;
      v214 = 136;
    }
    else
    {
      v213 = &unk_1FCD1F;
      v214 = 141;
    }
    sub_5E8FC6(&v240);
    v211 = sub_651E09(8u, 0x40u);
    *(_QWORD *)v211 = 0x8000000000000000LL;
    *(_QWORD *)(v211 + 8) = v213;
    *(_QWORD *)(v211 + 16) = v237;
    *(_QWORD *)(v211 + 24) = aCargoRegistryS_223;
    *(_QWORD *)(v211 + 32) = 73;
    *(_QWORD *)(v211 + 40) = &unk_106B70;
    *(_QWORD *)(v211 + 48) = 13;
    *(_DWORD *)(v211 + 56) = v214;
    v212 = &off_13C5C68;
    goto LABEL_162;
  }
LABEL_49:
  v244 = sub_5E7205();
  if ( v15 )
  {
    sub_5E64C9(v255, v15, v220);
    v48 = *((_QWORD *)&v255[1] + 1);
    v10 = *((_QWORD *)&v255[0] + 1);
    v14 = *(_QWORD *)&v255[0];
  }
  else
  {
    v48 = 0;
  }
  v49 = gtk_application_new(v48, 0);
  if ( v14 >= (__int64)0x8000000000000002LL )
    sub_5E616F(v14, v10);
  v50 = (_QWORD *)sub_5E8F4F();
  v51 = (*v50)++ == -1;
  if ( v51 )
    goto LABEL_142;
  v52 = v50;
  v53 = (_QWORD *)sub_5E8CBF(8);
  *v53 = v52;
  v54 = g_signal_connect_data(v49, "startup", sub_5E8E27, v53, sub_671CBA, 0);
  *(_QWORD *)sub_51F5CC(v52 + 2, &off_13BFCB8) = v54;
  ++*v55;
  sub_671C65(v52);
  v257 = g_object_ref(v49);
  *(_QWORD *)&v255[0] = 0;
  g_application_register(v49, 0, v255);
  v56 = *(_QWORD *)&v255[0];
  v238 = v49;
  if ( *(_QWORD *)&v255[0] )
  {
    v211 = sub_651E09(8u, 8u);
    *(_QWORD *)v211 = v56;
    g_object_unref(v257);
    g_object_unref(v49);
    g_main_context_unref(v244);
    v212 = &off_13C5CE0;
LABEL_162:
    *(_QWORD *)&v255[0] = v211;
    *((_QWORD *)&v255[0] + 1) = v212;
    v210 = &off_13B6520;
LABEL_163:
    sub_5DA280((__int64)&unk_1D8B12, 33, (__int64)v255, (__int64)v210);
  }
  v255[0] = 0;
  v255[8] = 0;
  v57 = sub_4C3769(128, 512);
  qmemcpy((void *)v57, v255, 0x100u);
  *(_DWORD *)(v57 + 256) = 0;
  *(_BYTE *)(v57 + 260) = 0;
  *(_QWORD *)(v57 + 264) = 0;
  *(_QWORD *)(v57 + 272) = 8;
  *(_OWORD *)(v57 + 280) = 0;
  *(_QWORD *)(v57 + 296) = 8;
  *(_QWORD *)(v57 + 304) = 0;
  *(_BYTE *)(v57 + 312) = 1;
  *(_QWORD *)(v57 + 384) = 1;
  *(_QWORD *)(v57 + 392) = 1;
  *(_BYTE *)(v57 + 400) = 0;
  v255[0] = 0;
  v255[8] = 0;
  v58 = sub_651E09(0x80u, 0x200u);
  qmemcpy((void *)v58, v255, 0x100u);
  *(_DWORD *)(v58 + 256) = 0;
  *(_BYTE *)(v58 + 260) = 0;
  *(_QWORD *)(v58 + 264) = 0;
  *(_QWORD *)(v58 + 272) = 8;
  *(_OWORD *)(v58 + 280) = 0;
  *(_QWORD *)(v58 + 296) = 8;
  *(_QWORD *)(v58 + 304) = 0;
  *(_BYTE *)(v58 + 312) = 1;
  *(_QWORD *)(v58 + 384) = 1;
  *(_QWORD *)(v58 + 392) = 1;
  *(_BYTE *)(v58 + 400) = 0;
  v59 = (void *)sub_5C0FFF(1, v57);
  v61 = v60;
  v62 = (_QWORD *)sub_4C3769(8, 16);
  *v62 = v59;
  v62[1] = v61;
  g_signal_connect_data(v238, "activate", sub_4FB217, v62, sub_5218EA, 0);
  v248 = v58;
  v63 = sub_5C0FFF(1, v58);
  *((_QWORD *)&v269 + 1) = v64;
  v249 = v57;
  v247 = sub_5C0FFF(1, v57);
  v260 = v65;
  v66 = sub_651E09(8u, 0x68u);
  *(_QWORD *)v66 = 1;
  v246 = 1;
  *(_QWORD *)(v66 + 8) = 1;
  *(_DWORD *)(v66 + 16) = 0;
  *(_BYTE *)(v66 + 20) = 0;
  v67 = v66;
  *(_QWORD *)(v66 + 24) = 0;
  *(_QWORD *)(v66 + 40) = 0;
  *(_QWORD *)(v66 + 48) = 8;
  *(_DWORD *)(v66 + 96) = 0;
  *(_OWORD *)(v66 + 56) = 0;
  *(_OWORD *)(v66 + 72) = 0;
  *(_QWORD *)&v255[0] = v66;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v66) <= 0 )
    goto LABEL_142;
  sub_65671A(v66);
  v68 = sub_518D1C(v255);
  v69 = sub_5E4DAF(v68, a8);
  if ( !v69 )
    sub_5DA240((__int64)&unk_1D8B33, 70, (__int64)&off_13B6248);
  v70 = (_QWORD **)v69;
  *(_QWORD *)&v269 = v63;
  v71 = sub_5E6543(sub_60C470);
  v73 = v72;
  v74 = sub_651E09(8u, 0x48u);
  *(_QWORD *)v74 = 1;
  *(_QWORD *)(v74 + 8) = 1;
  *(_QWORD *)(v74 + 16) = 0;
  *(__m128i *)(v74 + 24) = off_13CA568;
  *(_OWORD *)(v74 + 40) = xmmword_13CA578;
  *(_QWORD *)(v74 + 56) = v71;
  v268 = v74;
  *(_QWORD *)(v74 + 64) = v73;
  v75 = sub_6536BF(**v70);
  v259 = v70;
  v235 = v67;
  if ( v75 == 1 )
  {
    v76 = sub_651E09(8u, 0x68u);
    *(_QWORD *)v76 = 1;
    *(_QWORD *)(v76 + 8) = 1;
    *(_DWORD *)(v76 + 16) = 0;
    *(_BYTE *)(v76 + 20) = 0;
    *(_QWORD *)(v76 + 24) = 0;
    *(_QWORD *)(v76 + 40) = 0;
    *(_QWORD *)(v76 + 48) = 8;
    *(_DWORD *)(v76 + 96) = 0;
    *(_OWORD *)(v76 + 56) = 0;
    *(_OWORD *)(v76 + 72) = 0;
    *(_QWORD *)v264 = v76;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v76) <= 0 )
      goto LABEL_142;
    v77 = v76;
    sub_604A82((__int64)v255, (volatile signed __int32 *)(v76 + 16));
    if ( LODWORD(v255[0]) == 1 )
    {
      *(_QWORD *)v252 = *((_QWORD *)&v255[0] + 1);
      v252[8] = v255[1];
      v209 = &off_13C5AF8;
      goto LABEL_154;
    }
    v78 = *((volatile __int32 **)&v255[0] + 1);
    v79 = v255[1];
    v80 = __OFADD__(1, (*(_QWORD *)(*((_QWORD *)&v255[0] + 1) + 56LL))++);
    v81 = _InterlockedIncrement64((volatile signed __int64 *)v77);
    if ( (v81 < 0) ^ v80 | (v81 == 0) )
      goto LABEL_142;
    v82 = v79;
    sub_516087(v78);
    sub_51F08C(v264, v82);
    v83 = v260;
    v84 = sub_5C0FFF(v247, v260);
    v86 = v85;
    v87 = (_BYTE *)(&dword_0 + 1);
    v251 = (_QWORD *)sub_6566FD(1);
    v51 = (*v251)++ == -1;
    if ( v51 )
      goto LABEL_142;
    v215 = v86;
    v221 = v84;
    *(_QWORD *)&v255[1] = 0x8000000000000000LL;
    *(_QWORD *)&v255[0] = 0;
    BYTE8(v255[2]) = 0;
    if ( qword_14385B0 )
    {
      v88 = (void *)(qword_14385B0 - 1);
    }
    else
    {
      v83 = &unk_21FB5E;
      v87 = v261;
      sub_64F180(v261, &unk_21FB5E, 14);
      v89 = *(_QWORD *)v261;
      v88 = &unk_200000;
      if ( *(_QWORD *)v261 != 0x8000000000000000LL )
      {
        v90 = *(_QWORD *)&v261[8];
        sub_5D8370(v264, *(_QWORD *)&v261[8], *(_QWORD *)&v261[16]);
        if ( *(_DWORD *)v264 == 1 )
        {
          v88 = &unk_200000;
        }
        else
        {
          sub_656283(v264, *(_QWORD *)&v264[8], *(_QWORD *)&v264[16]);
          v88 = &unk_200000;
          if ( !v264[0] )
            v88 = *(void **)&v264[8];
        }
        v87 = (_BYTE *)v89;
        v83 = (void *)v90;
        sub_5E616F(v89, v90);
      }
      qword_14385B0 = (__int64)v88 + 1;
    }
    v91 = sub_646A40(v87, v83);
    v92 = sub_646D60(v91, (__int64 *)&v255[1]);
    *(_QWORD *)v261 = v92;
    sub_650FD0(v252);
    v93 = sub_651E09(8u, 0x30u);
    *(_QWORD *)v93 = 1;
    *(_QWORD *)(v93 + 8) = 1;
    *(_OWORD *)(v93 + 16) = 0;
    *(_QWORD *)v264 = v93;
    v94 = _InterlockedIncrement64((volatile signed __int64 *)v93);
    if ( (v94 < 0) ^ v80 | (v94 == 0) )
      goto LABEL_142;
    v95 = v93;
    v96 = sub_651E09(8u, 0x30u);
    v97 = *(_OWORD *)&v252[16];
    *(_OWORD *)v96 = *(_OWORD *)v252;
    *(_OWORD *)(v96 + 16) = v97;
    *(_QWORD *)(v96 + 32) = v95;
    *(_QWORD *)(v96 + 40) = v77;
    v98 = _InterlockedIncrement64(v92);
    if ( (v98 < 0) ^ v80 | (v98 == 0) )
LABEL_142:
      BUG();
    v99 = v96;
    v100 = (volatile signed __int64 **)sub_651E09(8u, 0x18u);
    *v100 = v92;
    v100[1] = (volatile signed __int64 *)v99;
    v100[2] = (volatile signed __int64 *)&off_13C5858;
    v101 = sub_6473C0(v88, v100);
    v103 = v102;
    if ( (v101 & 1) != 0 )
    {
      sub_656348(v264);
      sub_69A2F4(v261);
      v92 = nullptr;
    }
    else
    {
      *(_QWORD *)&v252[16] = v102;
      v103 = v95;
    }
    *(_QWORD *)&v252[8] = v103;
    *(_QWORD *)v252 = v92;
    sub_65662A(v255);
    sub_65709E(v255);
    v104 = sub_4C3769(8, 48);
    *(_OWORD *)v104 = 0;
    *(_QWORD *)(v104 + 16) = sub_51FE37;
    *(_QWORD *)(v104 + 24) = sub_521740;
    *(_OWORD *)(v104 + 32) = 0;
    v105 = (_QWORD *)g_source_new(v104, 144);
    g_source_set_dispose_function(v105, sub_51FDA7);
    sub_604A82((__int64)v255, (volatile signed __int32 *)(v77 + 16));
    if ( LODWORD(v255[0]) == 1 )
    {
      *(_QWORD *)v252 = *((_QWORD *)&v255[0] + 1);
      v252[8] = v255[1];
      v209 = &off_13B6760;
LABEL_154:
      sub_5DA280((__int64)aCalledResultUn, 43, (__int64)v252, (__int64)v209);
    }
    v106 = *((_QWORD *)&v255[0] + 1);
    v228 = v255[1];
    v107 = 0;
    g_source_set_priority(v105, 0);
    if ( !*(_QWORD *)(v106 + 48) )
      v107 = -(__int64)(*(_QWORD *)(v106 + 56) != 0);
    g_source_set_ready_time(v105, v107);
    *(_QWORD *)(v106 + 8) = 1;
    *(_QWORD *)(v106 + 16) = v105;
    sub_516087((volatile __int32 *)v106);
    v105[13] = v77;
    v108 = sub_5E7108(v106, v228);
    v105[14] = v221;
    v105[15] = v215;
    v105[16] = v251;
    v105[17] = v108;
    v105[12] = v104;
    v59 = (void *)v244;
    g_main_context_ref(v244);
    *(_QWORD *)v252 = v59;
    sub_5E713D(v255, v252);
    v109 = (_QWORD *)sub_51FA05(v255, aMainContextAlr, 47, &off_13C5C18);
    g_source_attach(v105, v59);
    g_main_context_release(*v109);
    g_main_context_unref(v59);
    g_source_unref(v105);
    v67 = v235;
    v70 = v259;
  }
  else
  {
    v251 = nullptr;
  }
  v219 = sub_66D65D(**v70);
  sub_65671A(v67);
  v273 = v67;
  sub_5E2529(v255);
  if ( LODWORD(v255[0]) == 1 )
  {
    v110 = *((_QWORD *)&v255[0] + 1);
    v59 = *((void **)&v255[1] + 1);
    v111 = *(__int128 **)&v255[1];
    v112 = *(_OWORD **)&v255[2];
LABEL_118:
    sub_6570C1(&v273);
    *(_QWORD *)&v255[0] = v110;
    *((_QWORD *)&v255[0] + 1) = v111;
    *(_QWORD *)&v255[1] = v59;
    *((_QWORD *)&v255[1] + 1) = v112;
    dbus_error_free(v255);
    goto LABEL_119;
  }
  *(_OWORD *)v252 = *(_OWORD *)((char *)v255 + 8);
  LODWORD(v240) = *(_DWORD *)((char *)&v255[1] + 9);
  *(_DWORD *)((char *)&v240 + 3) = HIDWORD(v255[1]);
  if ( BYTE8(v255[1]) == 2 )
  {
    v110 = 0;
    v112 = nullptr;
    v111 = nullptr;
    goto LABEL_118;
  }
  *(_DWORD *)&v261[57] = v240;
  *(_DWORD *)&v261[60] = *(_DWORD *)((char *)&v240 + 3);
  v261[64] = 0;
  *(_OWORD *)v261 = 0;
  *(_QWORD *)&v261[24] = 0;
  *(_QWORD *)&v261[32] = 1;
  *(_OWORD *)&v261[40] = *(_OWORD *)v252;
  v261[56] = BYTE8(v255[1]);
  sub_5E07E2(
    v255,
    "org.freedesktop.portal.SettingsSettingChangedorg.freedesktop.appearancecolor-schemeorg.freedesktop.portal.Desktop/or"
    "g/freedesktop/portal/desktoplibunity.so.4libunity.so.6libunity.so.9menu:minimize,closemenu:minimize,maximize,close",
    31);
  sub_6ACFBD(0x8000000000000001LL);
  v113 = v255[0];
  v114 = *(_QWORD *)&v255[1];
  sub_5E18AF(
    v255,
    "SettingChangedorg.freedesktop.appearancecolor-schemeorg.freedesktop.portal.Desktop/org/freedesktop/portal/desktoplibunity.so.4libunity.so.6libunity.so.9menu:minimize,closemenu:minimize,maximize,close",
    14);
  sub_6ACFBD(0x8000000000000001LL);
  *(_QWORD *)v264 = 0x8000000000000001LL;
  v250 = 0x8000000000000001LL;
  *(_QWORD *)&v264[24] = 0x8000000000000001LL;
  *(_OWORD *)&v264[48] = v113;
  v115 = v114;
  v116 = *(_QWORD *)&v255[0];
  *(_QWORD *)&v264[64] = v115;
  v222 = *((_QWORD *)&v255[0] + 1);
  *(_OWORD *)&v264[72] = v255[0];
  v229 = *(_QWORD *)&v255[1];
  *(_QWORD *)&v264[88] = *(_QWORD *)&v255[1];
  *(_DWORD *)&v264[96] = 0x4000000;
  v117 = (volatile signed __int32 *)sub_651E09(8u, 0x68u);
  *(_QWORD *)v117 = 1;
  *((_QWORD *)v117 + 1) = 1;
  *((_DWORD *)v117 + 4) = 0;
  *((_BYTE *)v117 + 20) = 0;
  *((_QWORD *)v117 + 3) = 0;
  *((_QWORD *)v117 + 5) = 0;
  *((_QWORD *)v117 + 6) = 1;
  *((_DWORD *)v117 + 24) = 0;
  *(_OWORD *)(v117 + 14) = 0;
  *(_OWORD *)(v117 + 18) = 0;
  ptr[0] = (void *)v117;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v117) <= 0 )
    goto LABEL_142;
  v267 = v117 + 4;
  sub_604A82((__int64)v255, v117 + 4);
  if ( LODWORD(v255[0]) == 1 )
  {
    *(_QWORD *)v252 = *((_QWORD *)&v255[0] + 1);
    v252[8] = v255[1];
    v209 = &off_13C5B38;
    goto LABEL_154;
  }
  v118 = *((volatile __int32 **)&v255[0] + 1);
  v119 = v255[1];
  v80 = __OFADD__(1, (*(_QWORD *)(*((_QWORD *)&v255[0] + 1) + 56LL))++);
  v120 = _InterlockedIncrement64((volatile signed __int64 *)v117);
  if ( (v120 < 0) ^ v80 | (v120 == 0) )
    goto LABEL_142;
  v121 = v119;
  sub_516087(v118);
  sub_65343D(ptr, v121);
  v275 = v117;
  v276 = 0;
  ptr[0] = nullptr;
  ptr[1] = &byte_8;
  *(_QWORD *)&v243 = 0;
  v274 = v117;
  *(_QWORD *)&v255[0] = aType_10;
  *((_QWORD *)&v255[0] + 1) = 4;
  *(_QWORD *)&v255[1] = aSignal_0;
  *((_QWORD *)&v255[1] + 1) = 6;
  sub_5E2654(ptr);
  if ( (_QWORD)v113 != v250 )
  {
    *(_QWORD *)&v122 = sub_5E0197(*((_QWORD *)&v113 + 1), v115);
    *(_QWORD *)&v255[0] = aInterface_0;
    *((_QWORD *)&v255[0] + 1) = 9;
    v255[1] = v122;
    sub_5E2654(ptr);
  }
  v256 = v117;
  if ( v116 != v250 )
  {
    *(_QWORD *)&v123 = sub_5E0197(v222, v229);
    *(_QWORD *)&v255[0] = aMember;
    *((_QWORD *)&v255[0] + 1) = 6;
    v255[1] = v123;
    sub_5E2654(ptr);
  }
  v223 = ptr[0];
  v124 = (char *)ptr[1];
  v230 = v243;
  v125 = 32 * v243;
  v126 = 0;
  v127 = ptr[1];
  while ( v125 != v126 )
  {
    v128 = *(_OWORD *)&v124[v126 + 16];
    v262 = *(_OWORD *)&v124[v126];
    v240 = v128;
    *(_QWORD *)&v255[0] = &v262;
    *((_QWORD *)&v255[0] + 1) = sub_617A36;
    *(_QWORD *)&v255[1] = &v240;
    *((_QWORD *)&v255[1] + 1) = sub_617A36;
    sub_5E046C(v252, &unk_1818A2, v255);
    v127[2] = *(_QWORD *)&v252[16];
    *(_OWORD *)v127 = *(_OWORD *)v252;
    v127 += 3;
    v126 += 32;
  }
  v129 = 32 * (__int64)v223 / 0x18uLL;
  v216 = 8;
  sub_51F461(0, 8);
  if ( v223 == nullptr || 32LL * (_QWORD)v223 == 24 * v129 )
  {
    v216 = (__int64)v124;
  }
  else if ( 32LL * (_QWORD)v223 )
  {
    v216 = sub_5CFFEB(v124);
    if ( !v216 )
      sub_5CC4B1(8, 24 * v129);
  }
  v130 = 0;
  sub_51F461(0, 8);
  v131 = 24 * v230;
  v132 = 0;
  v133 = v216;
  if ( v230 )
  {
    v231 = v131 - 24;
    v134 = (v131 - 24) / 0x18uLL;
    v135 = v131;
    v136 = v216;
    while ( v135 )
    {
      v135 -= 24;
      v46 = __CFADD__(*(_QWORD *)(v136 + 16), v134);
      v134 += *(_QWORD *)(v136 + 16);
      v136 += 24;
      if ( v46 )
        sub_5DA240((__int64)&unk_22024F, 53, (__int64)&off_13C9550);
    }
    v265 = v131;
    v266 = 32 * (__int64)v223 / 0x18uLL;
    *(_QWORD *)&v137 = sub_5E01FB(v134, 1);
    *(_OWORD *)v252 = v137;
    *(_QWORD *)&v252[16] = 0;
    sub_5E0239(v252, *(_QWORD *)(v216 + 8), *(_QWORD *)(v216 + 16));
    v245 = v134;
    v138 = v134 - *(_QWORD *)&v252[16];
    v246 = *(_QWORD *)&v252[8];
    v139 = *(_QWORD *)&v252[8] + *(_QWORD *)&v252[16];
    for ( j = 0; v231 != j; j += 24 )
    {
      v224 = *(_QWORD *)(v216 + j + 32);
      v141 = *(_QWORD *)(v216 + j + 40);
      sub_6A24F1(v255, v139, v138, 1);
      v142 = *((_QWORD *)&v255[1] + 1);
      v143 = *(_QWORD *)&v255[1];
      sub_5E2103(*(_QWORD *)&v255[0], *((_QWORD *)&v255[0] + 1), asc_21E842, 1);
      sub_6A24F1(v255, v143, v142, v141);
      v138 = *((_QWORD *)&v255[1] + 1);
      v139 = *(_QWORD *)&v255[1];
      sub_5E2103(*(_QWORD *)&v255[0], *((_QWORD *)&v255[0] + 1), v224, v141);
    }
    v132 = v245 - v138;
    v130 = *(_QWORD *)v252;
    v129 = v266;
    v133 = v216;
    v131 = v265;
  }
  v225 = v130;
  v245 = v132;
  for ( k = 0; v131 != k; k += 24 )
    sub_5E616F(*(_QWORD *)(v133 + k), *(_QWORD *)(v133 + k + 8));
  sub_5E5443(v129, v133, 8, 24);
  sub_5E27C5(v252, aOrgFreedesktop_0, 20);
  sub_5E28B9(&v252[24], &unk_1FC804, 21);
  *(_QWORD *)&v253 = 5;
  DWORD2(v253) = 0;
  v254 = v261;
  sub_5E07E2(ptr, aOrgFreedesktop_0, 20);
  v112 = v255;
  sub_5E18AF(v255, &unk_1083B0, 8);
  v59 = ptr[1];
  v145 = *((_QWORD *)&v255[0] + 1);
  v232 = *(_QWORD *)&v252[8];
  v217 = *(_QWORD *)&v252[32];
  v111 = &v240;
  *(_QWORD *)&v240 = sub_5E19A3(*(_QWORD *)&v252[8], *(_QWORD *)&v252[32], ptr[1], *((_QWORD *)&v255[0] + 1));
  sub_5E012F(*(_QWORD *)&v255[0], v145, v146);
  sub_5E012F(ptr[0], v59, v147);
  sub_5E19F5(v255, &v240);
  sub_5E0390(v246, v245, v255);
  sub_5E1A47(v255, *(_QWORD *)&v261[48], v240, 5, 0);
  v110 = *((_QWORD *)&v255[0] + 1);
  v149 = v255[0];
  if ( *(_QWORD *)&v255[0] == 1 )
  {
    v59 = *((void **)&v255[1] + 1);
    v111 = *(__int128 **)&v255[1];
    v112 = *(_OWORD **)&v255[2];
  }
  else
  {
    ptr[0] = *((void **)&v255[0] + 1);
    sub_5E1AE2(v255);
    dbus_message_unref(v110);
  }
  sub_5E012F(*(_QWORD *)v252, v232, v148);
  sub_5E012F(*(_QWORD *)&v252[24], v217, v150);
  if ( v149 )
  {
    sub_5E616F(v225, v246);
    sub_6533AE(&v274);
    sub_651CF5(v264);
    sub_656FFD(&v275);
    sub_657BD3(v261);
    v67 = v235;
    goto LABEL_118;
  }
  v179 = (__int64 *)sub_651E09(8u, 0x20u);
  *v179 = v225;
  v179[1] = v246;
  v179[2] = v245;
  v179[3] = (__int64)v256;
  v180 = sub_5E29C2(v261);
  v182 = v181;
  v183 = *(_QWORD *)(v180 + 32);
  *(_QWORD *)(v180 + 32) = v183 + 1;
  qmemcpy(v255, v264, 0x68u);
  *((_QWORD *)&v255[6] + 1) = v179;
  *(_QWORD *)&v255[7] = &off_13C5798;
  sub_5E2ADD(v252, v180 + 8, v183, v255);
  sub_5E3190(v252);
  sub_5E2A35(v180, v182 & 1);
  LODWORD(ptr[1]) = 0;
  ptr[0] = nullptr;
  v184 = sub_651E09(8u, 0x30u);
  *(_OWORD *)v184 = 0;
  *(_QWORD *)(v184 + 16) = sub_657162;
  *(_QWORD *)(v184 + 24) = sub_65729C;
  *(_OWORD *)(v184 + 32) = 0;
  v185 = (_QWORD *)g_source_new(v184, 128);
  g_source_set_dispose_function(v185, sub_65735E);
  sub_604A82((__int64)v255, v267);
  if ( LODWORD(v255[0]) == 1 )
  {
    *(_QWORD *)v252 = *((_QWORD *)&v255[0] + 1);
    v252[8] = v255[1];
    v209 = &off_13C5B38;
    goto LABEL_154;
  }
  v186 = *((_QWORD *)&v255[0] + 1);
  v187 = v255[1];
  v188 = 0;
  g_source_set_priority(v185, 0);
  if ( !*(_QWORD *)(v186 + 48) )
    v188 = -(__int64)(*(_QWORD *)(v186 + 56) != 0);
  g_source_set_ready_time(v185, v188);
  *(_QWORD *)(v186 + 8) = 1;
  *(_QWORD *)(v186 + 16) = v185;
  sub_516087((volatile __int32 *)v186);
  v185[13] = v256;
  v189 = sub_5E7108(v186, v187);
  v67 = v235;
  v185[14] = v235;
  v185[15] = v189;
  v185[12] = v184;
  v190 = g_main_context_ref_thread_default();
  *(_QWORD *)&v240 = v190;
  sub_5E713D(v252, &v240);
  if ( *(_QWORD *)v252 != v250 )
  {
    v255[3] = v253;
    v255[2] = *(_OWORD *)&v252[32];
    v255[1] = *(_OWORD *)&v252[16];
    v255[0] = *(_OWORD *)v252;
    sub_5DA280((__int64)aMainContextAlr, 47, (__int64)v255, (__int64)&off_13C5A18);
  }
  v191 = *(_QWORD **)&v252[8];
  g_source_attach(v185, v190);
  g_main_context_release(*v191);
  g_main_context_unref(v190);
  g_source_unref(v185);
  sub_656FFD(ptr);
  qmemcpy(v255, v261, 0x48u);
  v193 = &v262;
  v192 = (char *)&v255[4] + 8;
  *(_QWORD *)&v252[16] = 0x8000000000000000LL;
  *(_QWORD *)v252 = 0;
  v252[40] = 0;
  if ( qword_14385B0 )
  {
    v194 = (void *)(qword_14385B0 - 1);
  }
  else
  {
    v193 = (__int128 *)&unk_21FB5E;
    v192 = (char *)&v262;
    sub_64F180(&v262, &unk_21FB5E, 14);
    v195 = v262;
    v194 = &unk_200000;
    if ( (_QWORD)v262 != 0x8000000000000000LL )
    {
      v196 = *((_QWORD *)&v262 + 1);
      sub_5D8370(&v240, *((_QWORD *)&v262 + 1), v263);
      if ( (_DWORD)v240 == 1 )
      {
        v194 = &unk_200000;
      }
      else
      {
        sub_656283(&v240, *((_QWORD *)&v240 + 1), v241);
        v194 = &unk_200000;
        if ( !(_BYTE)v240 )
          v194 = *((void **)&v240 + 1);
      }
      v192 = (char *)v195;
      v193 = (__int128 *)v196;
      sub_5E616F(v195, v196);
    }
    qword_14385B0 = (__int64)v194 + 1;
  }
  v197 = sub_646A40(v192, v193);
  v198 = sub_646D60(v197, (__int64 *)&v252[16]);
  *(_QWORD *)&v262 = v198;
  sub_650FD0(ptr);
  v199 = sub_651E09(8u, 0x30u);
  *(_QWORD *)v199 = 1;
  *(_QWORD *)(v199 + 8) = 1;
  *(_OWORD *)(v199 + 16) = 0;
  *(_QWORD *)&v240 = v199;
  v200 = _InterlockedIncrement64((volatile signed __int64 *)v199);
  if ( (v200 < 0) ^ v80 | (v200 == 0) )
    goto LABEL_142;
  v201 = sub_651E09(8u, 0x70u);
  v202 = v243;
  *(_OWORD *)v201 = *(_OWORD *)ptr;
  *(_OWORD *)(v201 + 16) = v202;
  *(_QWORD *)(v201 + 32) = v199;
  qmemcpy((void *)(v201 + 40), v255, 0x48u);
  v203 = _InterlockedIncrement64(v198);
  if ( (v203 < 0) ^ v80 | (v203 == 0) )
    goto LABEL_142;
  v204 = v201;
  v205 = (volatile signed __int64 **)sub_651E09(8u, 0x18u);
  *v205 = v198;
  v205[1] = (volatile signed __int64 *)v204;
  v205[2] = (volatile signed __int64 *)&off_13C5838;
  v206 = sub_6473C0(v194, v205);
  v208 = v207;
  if ( (v206 & 1) != 0 )
  {
    sub_656348(&v240);
    sub_69A2F4(&v262);
    v198 = nullptr;
  }
  else
  {
    *(_QWORD *)&v243 = v207;
    v208 = (void *)v199;
  }
  ptr[1] = v208;
  ptr[0] = (void *)v198;
  sub_65662A(v252);
  sub_65709E(v252);
LABEL_119:
  v151 = sub_4C3769(8, 48);
  *(_OWORD *)v151 = 0;
  *(_QWORD *)(v151 + 16) = sub_51FFEA;
  *(_QWORD *)(v151 + 24) = sub_52180F;
  *(_OWORD *)(v151 + 32) = 0;
  v152 = g_source_new(v151, 312);
  g_source_set_dispose_function(v152, sub_51FD17);
  sub_604A82((__int64)v255, (volatile signed __int32 *)(v67 + 16));
  if ( LODWORD(v255[0]) == 1 )
  {
    *(_QWORD *)v252 = *((_QWORD *)&v255[0] + 1);
    v252[8] = v255[1];
    v209 = &off_13B6900;
    goto LABEL_154;
  }
  v153 = *((_QWORD *)&v255[0] + 1);
  v154 = v255[1];
  v155 = 0;
  g_source_set_priority(v152, 0);
  if ( !*(_QWORD *)(v153 + 48) )
    v155 = -(__int64)(*(_QWORD *)(v153 + 56) != 0);
  g_source_set_ready_time(v152, v155);
  *(_QWORD *)(v153 + 8) = 1;
  *(_QWORD *)(v153 + 16) = v152;
  sub_516087((volatile __int32 *)v153);
  *(_QWORD *)(v152 + 104) = v235;
  v156 = sub_5E7108(v153, v154);
  *(_QWORD *)(v152 + 112) = 0;
  *(_QWORD *)(v152 + 128) = 0;
  *(_QWORD *)(v152 + 144) = 0x8000000000000000LL;
  *(_QWORD *)(v152 + 168) = 0;
  *(_QWORD *)(v152 + 184) = 0;
  *(_BYTE *)(v152 + 248) = 0;
  *(_QWORD *)(v152 + 256) = 1;
  *(_QWORD *)(v152 + 264) = v249;
  *(_QWORD *)(v152 + 272) = 1;
  *(_QWORD *)(v152 + 280) = v248;
  *(_QWORD *)(v152 + 288) = v257;
  *(_BYTE *)(v152 + 296) = v219;
  *(_QWORD *)(v152 + 304) = v156;
  *(_QWORD *)(v152 + 96) = v151;
  v157 = v244;
  g_main_context_ref(v244);
  *(_QWORD *)v252 = v157;
  sub_5E713D(v255, v252);
  v158 = (_QWORD *)sub_51FA05(v255, aMainContextAlr, 47, &off_13C5C18);
  g_source_attach(v152, v157);
  g_main_context_release(*v158);
  g_main_context_unref(v157);
  g_source_unref(v152);
  g_main_context_unref(v157);
  v159 = v270;
  g_main_context_pop_thread_default(v270);
  g_main_context_release(*v258);
  *((_QWORD *)&v255[1] + 1) = v238;
  *(_QWORD *)&v255[2] = v268;
  *((_QWORD *)&v255[2] + 1) = v235;
  g_main_context_unref(v159);
  v255[0] = v269;
  *(_QWORD *)&v255[1] = v259;
  v160 = v247;
  *(_QWORD *)&v255[3] = v247;
  v161 = v260;
  *((_QWORD *)&v255[3] + 1) = v260;
  *(_QWORD *)&v255[4] = 1;
  *((_QWORD *)&v255[4] + 1) = v249;
  *(_QWORD *)&v255[5] = 1;
  *((_QWORD *)&v255[5] + 1) = v248;
  *(_QWORD *)&v255[6] = v251;
  *(_QWORD *)v252 = sub_64F8F0();
  v226 = *(_QWORD *)(*(_QWORD *)v252 + 16LL);
  sub_69A2F4(v252);
  v162 = sub_4C3769(8, 72);
  v163 = sub_4C3907();
  *(__m128i *)&v252[3] = off_13CA568;
  *(_OWORD *)&v252[19] = xmmword_13CA578;
  *(_QWORD *)v162 = 1;
  *(_QWORD *)(v162 + 8) = 1;
  *(_DWORD *)(v162 + 16) = 0;
  *(_BYTE *)(v162 + 20) = 0;
  v164 = *(_OWORD *)&v252[16];
  *(_OWORD *)(v162 + 21) = *(_OWORD *)v252;
  *(_OWORD *)(v162 + 37) = v164;
  *(_DWORD *)(v162 + 52) = *(_DWORD *)&v252[31];
  *(_QWORD *)(v162 + 56) = v163;
  *(_QWORD *)(v162 + 64) = v165;
  v218 = sub_4C3769(8, 48);
  *(_QWORD *)v218 = 1;
  *(_QWORD *)(v218 + 8) = 1;
  *(_QWORD *)(v218 + 40) = 0;
  *(_OWORD *)(v218 + 16) = 0;
  v166 = sub_4C3769(8, 72);
  v167 = sub_4C3907();
  *(__m128i *)&v252[3] = off_13CA568;
  *(_OWORD *)&v252[19] = xmmword_13CA578;
  *(_QWORD *)v166 = 1;
  *(_QWORD *)(v166 + 8) = 1;
  *(_DWORD *)(v166 + 16) = 0;
  *(_BYTE *)(v166 + 20) = 0;
  v168 = *(double *)v252;
  v169 = *(_OWORD *)&v252[16];
  *(_OWORD *)(v166 + 21) = *(_OWORD *)v252;
  *(_OWORD *)(v166 + 37) = v169;
  *(_DWORD *)(v166 + 52) = *(_DWORD *)&v252[31];
  *(_QWORD *)(v166 + 56) = v167;
  *(_QWORD *)(v166 + 64) = v170;
  v233 = sub_5C0FFF(v160, v161);
  v236 = v171;
  v172 = v272;
  sub_5C8A89(v272 + 16, v255);
  v173 = sub_4C3769(8, 48);
  *(_QWORD *)v173 = 1;
  *(_QWORD *)(v173 + 8) = 1;
  *(_DWORD *)(v173 + 16) = 0;
  *(_BYTE *)(v173 + 20) = 0;
  *(_QWORD *)(v173 + 24) = 0;
  *(_QWORD *)(v173 + 32) = 8;
  *(_QWORD *)(v173 + 40) = 0;
  v239 = sub_67DDFF();
  v249 = sub_67DDFF();
  v248 = sub_67DDFF();
  v244 = sub_67DDFF();
  LODWORD(v247) = webkit_get_major_version();
  LODWORD(v160) = webkit_get_minor_version();
  micro_version = webkit_get_micro_version();
  LODWORD(v240) = v247;
  LODWORD(ptr[0]) = v160;
  *(_DWORD *)v261 = micro_version;
  *(_QWORD *)v264 = &v240;
  *(_QWORD *)&v264[8] = sub_5D9C50;
  *(_QWORD *)&v264[16] = ptr;
  *(_QWORD *)&v264[24] = sub_5D9C50;
  *(_QWORD *)&v264[32] = v261;
  *(_QWORD *)&v264[40] = sub_5D9C50;
  sub_6B0234(&v252[8], &unk_117542);
  sub_601B54(*(__int64 *)&v252[8], *(__int64 *)&v252[16]);
  *(_QWORD *)v172 = v233;
  *(_QWORD *)(v172 + 8) = v236;
  *(_QWORD *)(v172 + 64) = v162;
  *(_QWORD *)(v172 + 72) = v218;
  *(_QWORD *)(v172 + 80) = v166;
  *(_QWORD *)(v172 + 88) = v226;
  *(_QWORD *)(v172 + 96) = v173;
  *(_QWORD *)(v172 + 104) = v239;
  *(_QWORD *)(v172 + 112) = v249;
  *(_QWORD *)(v172 + 120) = v248;
  *(_QWORD *)(v172 + 128) = v244;
  *(_BYTE *)(v172 + 136) = 1;
  qmemcpy((void *)(v172 + 144), v255, 0x68u);
  return sub_516A00(*v271, v271[1], v175, 0, v176, v177, v168, *(double *)&v169, a9, a10);
}


// ---- 510afd depth 0
__int64 __fastcall sub_510AFD(__int64 a1, __int64 a2)
{
  return sub_4EE779(a1, a2);
}


// ---- 4fccf1 depth 0
void __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sub_4FCCF1()
{
  sub_688C64();
}


