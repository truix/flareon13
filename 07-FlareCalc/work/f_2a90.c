

__int64 __fastcall sub_140002A90(__int64 a1)
{

  if ( **(_DWORD **)a1 != -1073741682 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 416) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 424LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 258LL) = 0;
  }
  v4 = qword_1400E9228;
  *(_OWORD *)v81 = 0;
  v82 = 0;
  v83 = 0;
  v7 = qword_1400E9250;
  v8 = qword_1400E9250 + qword_1400E9258;
  *((_QWORD *)&v76 + 1) = v78;
  v9 = (void ***)operator new(0x10u);
  *(_QWORD *)&v76 = v9;
  *v9 = v81;
  v9[1] = nullptr;
  v81[0] = v9;
  for ( m = v81; v7 != v8; ++v7 )
    sub_140007690(v81, *(_QWORD *)(qword_1400E9240 + 8 * ((qword_1400E9248 - 1) & (v7 >> 1))) + 8 * (v7 & 1));
  v10 = (v4 + 1355467040) ^ 0x50CAC920;
  v12 = (v4 - 339269664) ^ 0xEBC727E0;
  v13 = (v4 - 733891072) ^ 0xD441B600;
  v14 = v83;
  if ( v83 >= ((v4 - 0x5209EF7990C1EB3DLL) ^ 0xADF610866F3E14C0uLL) )
  {
    *(_OWORD *)&Block[8] = 0;
    v80 = 0;
    v15 = *((_QWORD *)&v82 + 1);
    v16 = v83 + *((_QWORD *)&v82 + 1);
    *((_QWORD *)&v76 + 1) = v78;
    v17 = operator new(0x10u);
    *(_QWORD *)&v76 = v17;
    *v17 = Block;
    v17[1] = 0;
    *(_QWORD *)Block = v17;
    for ( m = Block; v15 != v16; ++v15 )
      sub_140007690(Block, *((_QWORD *)v81[1] + ((v82 - 1) & (v15 >> 1))) + 8 * (v15 & 1));
    v58 = 638;
    for ( jj = 0; jj < 11; ++jj )
      v58 ^= jj;
    v21 = *(double *)(*(_QWORD *)(*(_QWORD *)&Block[8]
                                + 8
                                * ((*(_QWORD *)&Block[16] - 1LL)
                                 & ((unsigned __int64)(*((_QWORD *)&v80 + 1) + v80 - 1) >> 1)))
                    + 8LL * ((DWORD2(v80) + (_DWORD)v80 - 1) & 1));
    if ( !--*((_QWORD *)&v80 + 1) )
      *(_QWORD *)&v80 = 0;
    v22 = *(double *)(*(_QWORD *)(*(_QWORD *)&Block[8]
                                + 8
                                * ((*(_QWORD *)&Block[16] - 1LL)
                                 & ((unsigned __int64)(*((_QWORD *)&v80 + 1) + v80 - 1) >> 1)))
                    + 8LL * ((DWORD2(v80) + (_DWORD)v80 - 1) & 1));
    if ( !--*((_QWORD *)&v80 + 1) )
      *(_QWORD *)&v80 = 0;
    v23 = *(double *)(*(_QWORD *)(*(_QWORD *)&Block[8]
                                + 8
                                * ((*(_QWORD *)&Block[16] - 1LL)
                                 & ((unsigned __int64)(*((_QWORD *)&v80 + 1) + v80 - 1) >> 1)))
                    + 8LL * ((DWORD2(v80) + (_DWORD)v80 - 1) & 1));
    if ( !--*((_QWORD *)&v80 + 1) )
      *(_QWORD *)&v80 = 0;
    if ( v4 - 0x1730D216A159835FLL >= 0 )
    {
      v27 = (((_DWORD)v4 + 1587969185) ^ 0x5EA67CA0) & 1 | (((v4 - 0x1730D216A159835FLL) ^ 0xE8CF2DE95EA67CA0uLL) >> 1);
      v26 = (double)(int)v27 + (double)(int)v27;
    }
    else
    {
      v26 = (double)(int)((v4 + 1587969185) ^ 0x5EA67CA0);
    }
    v10 = (int)(v26 * v21);
    if ( v4 - 0x58612DC4B8DEF53FLL >= 0 )
    {
      v29 = (((_DWORD)v4 + 1193347777) ^ 0x47210AC0) & 1 | (((v4 - 0x58612DC4B8DEF53FLL) ^ 0xA79ED23B47210AC0uLL) >> 1);
      v28 = (double)(int)v29 + (double)(int)v29;
    }
    else
    {
      v28 = (double)(int)((v4 + 1193347777) ^ 0x47210AC0);
    }
    v12 = (int)(v28 * v22);
    v30 = (v4 + 0x666E768D2F030E60LL) ^ 0x666E768D2F9B98E0LL;
    if ( v4 + 0x666E768D2F030E60LL < 0 )
      v31 = (double)(int)(v30 & 1 | (v30 >> 1)) + (double)(int)(v30 & 1 | (v30 >> 1));
    else
      v31 = (double)(int)v30;
    v13 = (int)(v31 * v23);
    v63 = 588;
    for ( i2 = 0; i2 < 10; ++i2 )
      v63 ^= i2;
    sub_140007340(Block);
    v34 = *(void **)Block;
    *(_QWORD *)Block = 0;
    j_j_j__free_base(v34);
    v14 = v83;
  }
  if ( v14 )
  {
    v36 = *(double *)(*((_QWORD *)v81[1] + ((v82 - 1) & ((v14 + *((_QWORD *)&v82 + 1) - 1LL) >> 1)))
                    + 8LL * (((_BYTE)v14 + BYTE8(v82) - 1) & 1));
    v65 = 561;
    for ( i4 = 0; i4 < 9; ++i4 )
      v65 ^= i4;
    if ( !--v83 )
      *((_QWORD *)&v82 + 1) = 0;
    if ( v4 - 0x409A042AE2720FBFLL >= 0 )
    {
      v42 = (((_DWORD)v4 + 495841345) ^ 0x1D8DF040) & 1 | (((v4 - 0x409A042AE2720FBFLL) ^ 0xBF65FBD51D8DF040uLL) >> 1);
      v41 = (double)(int)v42 + (double)(int)v42;
    }
    else
    {
      v41 = (double)(int)((v4 + 495841345) ^ 0x1D8DF040);
    }
    v35 = (int)((int)(v41 * v36) - ((v4 + 487174061) ^ 0x1D8DF040)) | (unsigned __int64)sub_140006FC0(v81, v4);
  }
  else
  {
    v35 = (v4 - 0x7D08F120641E45E1LL) ^ 0x82F70EDF641E45E0uLL;
  }
  m = (_BYTE *)v35;
  *(_OWORD *)v74 = 0;
  v75 = nullptr;
  sub_140007510(v74, 0, &m);
  m = (_BYTE *)((v4 + 0x49E5DE3A04E7141FLL) ^ 0x49E5DE3AFB18EBE0LL);
  if ( v74[1] == v75 )
  {
    sub_140007510(v74, v74[1], &m);
  }
  else
  {
    *(_QWORD *)v74[1] = (v4 + 0x49E5DE3A04E7141FLL) ^ 0x49E5DE3AFB18EBE0LL;
    v74[1] = (char *)v74[1] + 8;
  }
  v77 = v4;
  *(_QWORD *)&v76 = v12 | ((unsigned __int64)v10 << ((v4 - 96) ^ 0x80));
  v72 = 848;
  for ( i11 = 0; i11 < 6; ++i11 )
    v72 ^= i11;
  *((_QWORD *)&v76 + 1) = v13;
  *(_OWORD *)Block = v76;
  *(_QWORD *)&Block[16] = v77;
  v49 = (char *)v74[1];
  v48 = (char *)v74[0];
  if ( v74[0] != v74[1] )
  {
    do
    {
      if ( (unsigned __int8)sub_140003380(Block, *(_QWORD *)v48) )
        break;
      v48 += 8;
    }
    while ( v48 != v49 );
    v48 = (char *)v74[0];
  }
  if ( v48 )
  {
    v50 = v48;
    if ( ((v75 - v48) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
    {
      v48 = *((char **)v48 - 1);
      if ( (unsigned __int64)(v50 - v48 - 8) > 0x1F )
        invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
    j_j_j__free_base(v48);
    *(_OWORD *)v74 = 0;
    v75 = nullptr;
  }
  sub_140007340(v81);
  v51 = v81[0];
  v81[0] = nullptr;
  j_j_j__free_base(v51);
  return 1;
}
