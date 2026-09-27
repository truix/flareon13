
__int64 sub_1400026B0()
{
  int v0; // ebx
  int i; // ecx
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  __int64 v6; // rsi
  __int64 j; // rdi
  HWND WindowW; // rdi
  __int64 result; // rax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+20h] [rbp-E0h]
  _DWORD v22[44]; // [rsp+30h] [rbp-D0h]
  _WORD v23[96]; // [rsp+E0h] [rbp-20h] BYREF
  LPARAM lParam; // [rsp+1A0h] [rbp+A0h] BYREF
  int v25; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v26; // [rsp+1B0h] [rbp+B0h]
  _BYTE v27[96]; // [rsp+1C0h] [rbp+C0h] BYREF

  memset(v23, 0, 0xB2u);
  v0 = 0;
  v16 = 902;
  for ( i = 0; i < 10; ++i )
  {
    v2 = i ^ v16;
    v16 = v2;
  }
  sub_140044960();
  sub_14005DFB0();
  v22[0] = 5308534;
  v22[1] = 5177413;
  v22[2] = 1376331;
  v22[3] = 5701717;
  v22[4] = 6094938;
  v22[5] = 1638475;
  v22[6] = 5963858;
  v22[7] = 5308494;
  v22[8] = 5439507;
  v22[9] = 4194390;
  v22[10] = 5046290;
  v22[11] = 2031684;
  v22[12] = 7798794;
  v22[13] = 4456528;
  v22[14] = 4587613;
  v22[15] = 5046291;
  v22[16] = 5963862;
  v22[17] = 5832796;
  v22[18] = 6225940;
  v22[19] = 5046351;
  v22[20] = 4915221;
  v22[21] = 4259927;
  v22[22] = 5111827;
  v22[23] = 4325462;
  v22[24] = 1310812;
  v22[25] = 8192020;
  v22[26] = 5177423;
  v22[27] = 4194384;
  v22[28] = 5439512;
  v22[29] = 4456540;
  v22[30] = 5505111;
  v22[31] = 4849682;
  v22[32] = 6094913;
  v22[33] = 5767178;
  v22[34] = 6094919;
  v22[35] = 5898317;
  v22[36] = 655447;
  v22[37] = 5963864;
  v22[38] = 1572950;
  v22[39] = 5636176;
  v22[40] = 6029401;
  v22[41] = 4587591;
  v22[42] = 5046296;
  v22[43] = 6226012;
  sub_1400A9F40();
  v3 = 0;
  v17 = 999;
  do
  {
    v4 = v3++ ^ v17;
    v17 = v4;
  }
  while ( v3 < 6 );
  v5 = 0;
  v6 = 0;
  do
  {
    v23[v6] = *(_WORD *)((char *)v22 + v6 * 2) ^ a843952[v5 % 7u];
    sub_14001EBC0();
    sub_1400AB3E0();
    ++v5;
    ++v6;
  }
  while ( v5 < 88 );
  v23[88] = 0;
  sub_14007C5D0();
  sub_140048B80();
  for ( j = 0; j < 89; ++j )
  {
    v27[j] = v23[j];
    sub_140014330();
    sub_140077C90();
  }
  v27[88] = 0;
  sub_140061690();
  WindowW = FindWindowW(L"Flare-OnCalculatorClass", nullptr);
  result = sub_140082020();
  if ( WindowW )
  {
    lParam = (qword_1400E9228 + 0x4E752FC75F23C28BLL) ^ 0x4E752FC79CD2E800LL;
    v10 = 0;
    v18 = 594;
    do
    {
      v11 = v10++ ^ v18;
      v18 = v11;
    }
    while ( v10 < 2 );
    sub_1400465E0();
    v25 = 89;
    v12 = 0;
    v19 = 73;
    do
    {
      v13 = v12++ ^ v19;
      v19 = v13;
    }
    while ( v12 < 10 );
    sub_14006E360();
    sub_140083370();
    v26 = v27;
    sub_140032CD0();
    v14 = 0;
    v20 = 365;
    do
    {
      v15 = v14++ ^ v20;
      v20 = v15;
    }
    while ( v14 < 11 );
    SendMessageW(WindowW, (qword_1400E9228 - 1547648630) ^ 0xA3C0C1C0, 0, (LPARAM)&lParam);
    sub_14008C220();
    sub_140057CA0();
    v21 = 962;
    do
    {
      result = v0++ ^ (unsigned int)v21;
      v21 = result;
    }
    while ( v0 < 13 );
  }
  return result;
}
