// ---- sub_687D80 depth 0
__m128 __fastcall sub_687D80(unsigned __int64 a1, __m128 a2)
{
  __m128d v3; // xmm0
  double v4; // xmm2_8

  if ( a1 )
  {
    v3 = _mm_sub_pd(
           (__m128d)_mm_unpacklo_epi32(_mm_add_epi64((__m128i)a1, (__m128i)a1), (__m128i)xmmword_1059F0),
           (__m128d)xmmword_105440);
    v4 = _mm_unpackhi_pd(v3, v3).m128d_f64[0] + v3.m128d_f64[0];
    a2 = (__m128)a2.m128_u64[0];
    *(double *)a2.m128_u64 = *(double *)a2.m128_u64
                           * *(double *)a2.m128_u64
                           * -sub_687D80(*(double *)a2.m128_u64)
                           / ((v4 + 1.0)
                            * v4);
  }
  return a2;
}


