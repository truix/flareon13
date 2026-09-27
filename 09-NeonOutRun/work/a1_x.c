// ---- sub_687CFF depth 0
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


// ---- sub_67E81E depth 0
__int64 __fastcall sub_67E81E(__int64 a1)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 *v8; // rdi
  unsigned __int8 v9; // al
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 *v12; // rsi
  double v14; // xmm3_8
  double v15; // xmm1_8
  double v16; // xmm2_8
  unsigned __int64 *v17; // r14
  unsigned __int8 v18; // bp
  unsigned __int64 v19; // rax
  __int64 *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // r14
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdi
  __int64 v25; // r9
  __int64 i; // r8
  unsigned __int64 j; // r9
  __int64 *v28; // r15
  unsigned __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-E0h] BYREF
  unsigned __int64 v32; // [rsp+10h] [rbp-D8h] BYREF
  __int64 *v33; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v34; // [rsp+20h] [rbp-C8h]
  __int64 v35; // [rsp+28h] [rbp-C0h] BYREF
  unsigned __int64 *v36; // [rsp+30h] [rbp-B8h]
  __int64 *v37; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+40h] [rbp-A8h]
  __int128 v39; // [rsp+50h] [rbp-98h]
  __int128 v40; // [rsp+60h] [rbp-88h]
  __int64 v41; // [rsp+78h] [rbp-70h] BYREF
  __int64 v42; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v43[2]; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int64 v44; // [rsp+98h] [rbp-50h]
  _QWORD v45[9]; // [rsp+A0h] [rbp-48h] BYREF

  v2 = sub_67E4F2();
  v41 = v2;
  v3 = sub_6F6550(a1);
  v42 = a1;
  v31 = v3;
  v4 = sub_618594(a1);
  v5 = sub_67E50C(&v41, (__int64 (__fastcall *)(_QWORD))sub_67EB09, v4, &v42);
  if ( !v5 )
    return sub_68CFCE(v2);
  v6 = v5;
  sub_6F65A0(&v31, v5);
  if ( !(unsigned __int8)sub_6F6120(v6) )
    return sub_68CFCE(v2);
  v7 = sub_617A48(v2);
  sub_61818C(&v32, v6, v7);
  sub_604A82(&v35, &unk_1438590);
  v8 = v36;
  v9 = (unsigned __int8)v37;
  if ( (_BYTE)v35
    || (v40 = v36[1],
        sub_69C4A0(v36, (unsigned __int8)v37),
        sub_604A82(&v35, &unk_1438580),
        v8 = v36,
        v9 = (unsigned __int8)v37,
        (_BYTE)v35) )
  {
    v10 = v9;
LABEL_6:
    sub_69C4A0(v8, v10);
LABEL_7:
    v11 = v32;
    v12 = v33;
    goto LABEL_8;
  }
  v39 = v36[1];
  sub_69C4A0(v36, (unsigned __int8)v37);
  v14 = *(double *)&v39;
  if ( fabs(*(double *)&v40) <= 0.000001 )
    goto LABEL_7;
  v15 = fabs(*(double *)&v39);
  if ( v15 <= 0.000001 )
    goto LABEL_7;
  v16 = fabs(*(double *)&v40 - *(double *)&v39);
  if ( v16 >= 0.000001 )
    goto LABEL_7;
  sub_67E633(&v35);
  v17 = v36;
  v18 = (unsigned __int8)v37;
  if ( (_BYTE)v35 )
  {
    v10 = (unsigned __int8)v37;
    v8 = v36;
    goto LABEL_6;
  }
  sub_5CC332(v43, v36[2], v36[3], 0.000001, v15, v16, v14);
  sub_69C4A0(v17, v18);
  v19 = v32;
  v20 = v33;
  v21 = v34;
  v22 = v43[1];
  v23 = v44;
  v24 = v44;
  if ( v34 < v44 )
    v24 = v34;
  v25 = 0;
  for ( i = 2138955300; (_DWORD)i == -1977242253; i = (unsigned int)v25 ^ (unsigned int)i )
  {
    v25 = 1766263494;
    if ( v21 >= 0x1F )
      *((_BYTE *)v20 + 30) += 59;
LABEL_30:
    ;
  }
  if ( (_DWORD)i == 2138955300 )
  {
    for ( j = 0; v23 != j; ++j )
    {
      if ( j < v24 )
        *((_BYTE *)v20 + j) = *(_BYTE *)(v22 + j);
    }
    v25 = 4116214615LL;
    goto LABEL_30;
  }
  if ( (_DWORD)i != -480073803 )
    goto LABEL_30;
  v45[0] = v19;
  v45[1] = v20;
  v45[2] = v21;
  v28 = &v35;
  sub_4C2C31(&v35, v45, v21, v20, i, v25);
  if ( __OFSUB__(-v35, 1) )
  {
    v29 = (unsigned __int64)v36;
    v28 = v37;
    v1 = v38;
  }
  else
  {
    sub_601B54(v35, v36);
    v29 = 0x8000000000000000LL;
  }
  sub_601B54(v43[0], v22);
  if ( v29 != 0x8000000000000000LL )
  {
    v30 = sub_61834D(v2, (__int64)v28, v1);
    if ( v30 )
      sub_6F65A0(&v31, v30);
    v11 = v29;
    v12 = v28;
LABEL_8:
    sub_601B54(v11, v12);
  }
  return sub_68CFCE(v2);
}


