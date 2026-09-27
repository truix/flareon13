
__int64 __fastcall sub_140007AA0(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int i; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v26; // [rsp+38h] [rbp+10h]
  int v27; // [rsp+38h] [rbp+10h]
  int v28; // [rsp+38h] [rbp+10h]
  int v29; // [rsp+38h] [rbp+10h]
  int v30; // [rsp+38h] [rbp+10h]
  int v31; // [rsp+38h] [rbp+10h]
  int v32; // [rsp+38h] [rbp+10h]
  int v33; // [rsp+38h] [rbp+10h]
  int v34; // [rsp+38h] [rbp+10h]
  int v35; // [rsp+38h] [rbp+10h]

  v5 = 0;
  qword_1400E8ED8 = sub_140001560(a1, (a3 + 1166062034) ^ 0x166FDA20u);
  v6 = 0;
  v26 = 40;
  do
  {
    v7 = v6++ ^ v26;
    v26 = v7;
  }
  while ( v6 < 13 );
  qword_1400E8EE0 = sub_140001560(a1, (a3 + 1735279361) ^ 0x166FDA20u);
  v8 = 0;
  v27 = 40;
  do
  {
    v9 = v8++ ^ v27;
    v27 = v9;
  }
  while ( v8 < 13 );
  qword_1400E8EE8 = sub_140001560(a1, (a3 + 776197559) ^ 0x166FDA20u);
  v10 = 0;
  v28 = 40;
  do
  {
    v11 = v10++ ^ v28;
    v28 = v11;
  }
  while ( v10 < 13 );
  qword_1400E8EF0 = sub_140001560(a1, (a3 + 773787687) ^ 0x166FDA20u);
  v12 = 0;
  v29 = 40;
  do
  {
    v13 = v12++ ^ v29;
    v29 = v13;
  }
  while ( v12 < 13 );
  qword_1400E8EF8 = sub_140001560(a1, (a3 + 996376535) ^ 0x166FDA20u);
  v14 = 0;
  v30 = 40;
  do
  {
    v15 = v14++ ^ v30;
    v30 = v15;
  }
  while ( v14 < 13 );
  v31 = 475;
  for ( i = 0; i < 13; ++i )
  {
    v17 = i ^ v31;
    v31 = v17;
  }
  sub_1400423B0();
  v18 = 0;
  v32 = 475;
  do
  {
    v19 = v18++ ^ v32;
    v32 = v19;
  }
  while ( v18 < 13 );
  sub_1400423B0();
  v20 = 0;
  v33 = 475;
  do
  {
    v21 = v20++ ^ v33;
    v33 = v21;
  }
  while ( v20 < 13 );
  sub_1400423B0();
  v22 = 0;
  v34 = 475;
  do
  {
    v23 = v22++ ^ v34;
    v34 = v23;
  }
  while ( v22 < 13 );
  sub_1400423B0();
  v35 = 475;
  do
  {
    v24 = v5++ ^ v35;
    v35 = v24;
  }
  while ( v5 < 13 );
  return sub_1400423B0();
}
