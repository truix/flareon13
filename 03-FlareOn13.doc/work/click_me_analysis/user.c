  *((_QWORD *)v142 + 3) = v137;
  *((_DWORD *)v142 + 8) = 32;
  v142[36] = 0;
  *((_QWORD *)v142 + 5) = v138;
  *((_DWORD *)v142 + 12) = 32;
  v142[52] = 0;
  *((_QWORD *)v142 + 7) = v139;
  *((_DWORD *)v142 + 16) = 32;
  v142[68] = 0;
  *((_QWORD *)v142 + 9) = v140;
  *((_QWORD *)v142 + 11) = v141;
  v142[84] = 0;
  *((_DWORD *)v142 + 20) = 32;
  unk_100058310 = 0x60000001CLL;
  v143 = calloc(1u, 0x50u);
  qword_1000582C0 = (__int64)v143;
  dword_1000582B8 = 80;
  byte_1000582BC = 0;
  *v143 = xmmword_100035EF0;
  v143[1] = xmmword_100035F00;
  v143[2] = xmmword_100035F10;
  v143[3] = xmmword_100035F20;
  v143[4] = xmmword_100035F30;
  v144 = calloc(1u, 0x18u);
  v145 = HIDWORD(qword_1000582F0);
  v146 = v144;
  *v144 = 3;
  v573 = v144;
  if ( v145 == 6 )
  {
    v147 = 0;
    do
    {
      v148 = *(_QWORD *)(qword_100058300 + 8 * v147);
      sub_1000150FC(v146);
      v149 = (int)v146[1];
      v150 = *((_QWORD *)v146 + 2);
      LODWORD(v151) = v149 + 1;
      *(_QWORD *)(v150 + 8 * v149) = v148;
      if ( __OFADD__((_DWORD)v149, 1) )
        goto LABEL_687;
      v152 = SHIDWORD(qword_1000582F0);
      ++v147;
      v146[1] = (_DWORD)v151;
    }
    while ( v147 < v152 );
    goto LABEL_136;
  }
  v150 = 0;
  LODWORD(v151) = 0;
  v163 = 0;
  do
  {
    if ( (byte_10005818A & 1) == 0 )
      sub_100034520(&byte_10005818A, sub_100025D90);
    v164 = v163 + 1;
    v165 = qword_1000581F0;
    sub_100004BA8(&unk_10004E820, v164, 6, &unk_10004E838);
    sub_1000305B0(v165);
    if ( (byte_10005818A & 1) == 0 )
      sub_100034520(&byte_10005818A, sub_100025D90);
    v166 = qword_1000581F0;
    if ( *(int *)(qword_1000581F0 + 104) >= 1 )
    {
      if ( !*(_QWORD *)(qword_1000581F0 + 80) )
      {
        v167 = *(unsigned int *)(qword_1000581F0 + 112);
        if ( (v167 & 0x80000000) != 0 )
          goto LABEL_687;
        *(_QWORD *)(v166 + 80) = malloc(v167);
      }
      sub_1000261D8(v166);
    }
    *(_DWORD *)(v166 + 104) = 0;
    v168 = qword_100058210;
    v582 = v164;
    v169 = sub_1000331D4(qword_100058210);
    if ( v169 )
    {
      v170 = v169;
      sub_1000332B8(v169, v168);
      v171 = (_QWORD *)(v170 + 8);
      v172 = *(_DWORD *)(v170 + 8);
      if ( !v172 )
        break;
      if ( v172 >= 1 )
      {
        v173 = *(void **)(v170 + 16);
        v174 = memchr(v173, 10, *(unsigned int *)(v170 + 8));
        if ( v174 )
        {
          v175 = (_DWORD)v174 - (_DWORD)v173;
          if ( v174 - (_BYTE *)v173 != (_DWORD)v174 - (_DWORD)v173 )
            goto LABEL_687;
          v3 = __OFADD__(v175, 1);
          v202 = v175 + 1;
          v203 = v170;
          if ( v3 )
            v204 = 0x7FFFFFFF;
          else
            v204 = v202;
          v163 = v582;
          v177 = (_DWORD *)sub_100014F38(v203, v204, 10);
          if ( v177 )
            goto LABEL_275;
          break;
        }
      }
      if ( v172 == 0x7FFFFFFF )
      {
        v176 = sub_100014F38(v170, 0x7FFFFFFF, 10);
        v163 = v582;
        v177 = (_DWORD *)v176;
        if ( v176 )
          goto LABEL_275;
        break;
      }
      v578 = (int)v151;
      v207 = calloc(1u, 0x50u);
      *v207 = 118;
      v208 = malloc(0x4Du);
      v209 = 0;
      v210 = 0x7FFFFFFF;
      v207[15] = 77;
      *((_QWORD *)v207 + 8) = v208;
      while ( 1 )
      {
        v3 = __OFSUB__(v210, v172);
        v210 -= v172;
        if ( v3 )
          goto LABEL_687;
        v211 = *(unsigned int *)v171;
        if ( (_DWORD)v211 )
        {
          v212 = *(const void **)(v170 + 16);
          sub_100004464(v207, (unsigned int)v211);
          v213 = v207[14];
          if ( __OFADD__(v213, 12) )
            goto LABEL_687;
          if ( (v211 & 0x80000000) != 0 )
            goto LABEL_690;
          v208 = *((_BYTE **)v207 + 8);
          memcpy(&v208[v213 + 12], v212, v211);
          v3 = __OFADD__(v213, (_DWORD)v211);
          v209 = v213 + v211;
          if ( v3 )
            goto LABEL_687;
          v207[14] = v209;
        }
        *v171 = 0;
        *(_QWORD *)(v170 + 16) = 0;
        sub_1000332B8(v170, v168);
        v172 = *(_DWORD *)(v170 + 8);
        if ( !v172 )
          goto LABEL_246;
        if ( v172 >= 1 )
        {
          v214 = *(void **)(v170 + 16);
          v215 = memchr(v214, 10, *(unsigned int *)(v170 + 8));
          if ( v215 )
            break;
        }
        if ( v210 < v172 )
          goto LABEL_234;
      }
      v216 = (_DWORD)v215 - (_DWORD)v214;
      if ( v215 - (_BYTE *)v214 != (_DWORD)v215 - (_DWORD)v214 )
        goto LABEL_687;
      if ( v210 > v216 )
        v210 = v216 + 1;
LABEL_234:
      if ( v210 < 0 )
      {
        v559 = sub_100004310(&unk_1000383B0, (unsigned int)v210);
        v560 = sub_100004270(v559);
        sub_1000042A4(v560);
      }
      v217 = 0;
      v218 = 0;
      if ( (v172 & 0x80000000) == 0 )
      {
        v219 = nullptr;
        if ( v210 <= (unsigned int)v172 )
        {
          v219 = *(const void **)(v170 + 16);
          LOBYTE(__buf.__sig) = *(_BYTE *)(v170 + 12);
          v217 = v210;
          v218 = 518;
        }
        if ( v218 )
        {
          if ( v217 )
          {
            sub_100004464(v207, v217);
            v220 = v207[14];
            if ( __OFADD__(v220, 12) )
              goto LABEL_687;
            if ( (v217 & 0x80000000) != 0 )
              goto LABEL_690;
            v208 = *((_BYTE **)v207 + 8);
            memcpy(&v208[v220 + 12], v219, v217 & 0x7FFFFFFF);
            v3 = __OFADD__(v220, v217);
            v209 = v220 + v217;
            if ( v3 )
              goto LABEL_687;
            v172 = *(_DWORD *)v171;
            v207[14] = v209;
          }
          if ( v172 >= v210 )
          {
            v221 = *(_QWORD *)(v170 + 16);
            *(_DWORD *)(v170 + 8) = v172 - v210;
            *(_QWORD *)(v170 + 16) = v221 + (unsigned int)v210;
LABEL_246:
            v163 = v582;
            if ( v209 > 0 && v208[v209 - 1 + 12] == 10 )
            {
              v207[14] = v209 - 1;
              if ( v209 != 1 && v208[v209 - 2 + 12] == 13 )
                v207[14] = v209 - 2;
            }
            v222 = v207;
            goto LABEL_274;
          }
        }
      }
LABEL_690:
      v535 = sub_10000470C();
      sub_10000473C(v535);
    }
    v178 = sub_100033D64(v168);
    if ( !v178 )
      break;
    v181 = v178;
    v182 = v179;
    v183 = v180;
    if ( v178 >= 1 )
    {
      v184 = memchr(v180, 10, (unsigned int)v178);
      if ( v184 )
      {
        v185 = (_DWORD)v184 - (_DWORD)v183;
        if ( v184 - v183 != (_DWORD)v184 - (_DWORD)v183 )
          goto LABEL_687;
        v577 = (int)v151;
        if ( __OFADD__(v185, 1) )
          v205 = 0x7FFFFFFF;
        else
          v205 = v185 + 1;
        if ( v205 <= 0 )
        {
          if ( v185 + 1 < 0 )
          {
            v557 = sub_100004310(&unk_1000383B0, (unsigned int)(v185 + 1));
            v558 = sub_100004270(v557);
            sub_1000042A4(v558);
          }
        }
        else
        {
          if ( v205 > v181 )
            goto LABEL_690;
          v206 = v205;
          if ( v183[v205 - 1] != 10 )
            goto LABEL_254;
          if ( v205 != 1 )
          {
            if ( v183[v205 - 2] == 13 )
              v206 = v205 - 2;
            else
              v206 = v205 - 1;
LABEL_254:
            LODWORD(v151) = 0;
            v223 = 0;
            if ( v181 < 0 )
              goto LABEL_690;
            v224 = nullptr;
            if ( v206 <= v181 )
            {
              v224 = v183;
              LOBYTE(__buf.__sig) = v182 & 1;
              LODWORD(v151) = v206;
              v223 = 518;
            }
            if ( !v223 )
              goto LABEL_690;
            v163 = v582;
            if ( !(_DWORD)v151 )
            {
              v177 = &unk_1000385B0;
              goto LABEL_263;
            }
            if ( v224 )
            {
              if ( ((unsigned int)v151 & 0x80000000) != 0 )
                goto LABEL_695;
              v177 = malloc((unsigned int)((_DWORD)v151 + 13));
              memcpy(v177 + 3, v224, (unsigned int)v151 & 0x7FFFFFFF);
              *((_BYTE *)v177 + ((unsigned int)v151 & 0x7FFFFFFF) + 12) = 0;
              *v177 = 1;
              v177[1] = (_DWORD)v151;
              v177[2] = 0;
LABEL_263:
              sub_100033E14(v168);
              v146 = v573;
              LODWORD(v151) = v577;
              if ( v177 )
                goto LABEL_275;
              break;
            }
LABEL_704:
            v553 = sub_10000562C(&unk_1000385C0, (unsigned int)v151, &unk_100038610);
            v554 = sub_100004270(v553);
            sub_1000042A4(v554);
          }
        }
        v206 = 0;
        goto LABEL_254;
      }
    }
    v578 = (int)v151;
    v186 = calloc(1u, 0x50u);
    *(_DWORD *)v186 = 118;
    v191 = 0x7FFFFFFF;
    v186[8] = malloc(0x4Du);
    *((_DWORD *)v186 + 15) = 77;
    do
    {
      do
      {
        while ( 1 )
        {
          if ( v181 >= v191 )
            v187 = (unsigned int)v191;
          else
            v187 = (unsigned int)v181;
          if ( (v187 & 0x80000000) != 0 )
            goto LABEL_692;
          sub_100004464(v186, (unsigned int)v187);
          v188 = *((_DWORD *)v186 + 14);
          if ( __OFADD__(v188, 12) )
            goto LABEL_687;
          v189 = v186[8];
          memcpy((void *)(v189 + v188 + 12), v183, v187);
          v3 = __OFADD__(v188, (_DWORD)v187);
          v190 = v188 + v187;
          if ( v3 )
            goto LABEL_687;
          *((_DWORD *)v186 + 14) = v190;
          sub_100033E14(v168);
          v191 -= v187;
          if ( !v191 )
          {
            v163 = v582;
            goto LABEL_268;
          }
          v181 -= v187;
          if ( !v181 )
            break;
          v183 += v187;
          if ( v181 >= 1 )
            goto LABEL_187;
        }
        v192 = sub_100033D64(v168);
        if ( !v192 )
        {
          v163 = v582;
          if ( v190 )
            goto LABEL_268;
          LODWORD(v151) = v578;
          goto LABEL_136;
        }
        v181 = v192;
        v182 = v193;
        v183 = v194;
      }
      while ( v192 < 1 );
LABEL_187:
      v195 = memchr(v183, 10, (unsigned int)v181);
    }
    while ( !v195 );
    v196 = (_DWORD)v195 - (_DWORD)v183;
    if ( v195 - v183 != (_DWORD)v195 - (_DWORD)v183 )
      goto LABEL_687;
    if ( v191 > v196 )
      LODWORD(v187) = v196 + 1;
    else
      LODWORD(v187) = v191;
    if ( (v187 & 0x80000000) != 0 )
    {
LABEL_692:
      v536 = sub_100004310(&unk_1000383B0, (unsigned int)v187);
      v537 = sub_100004270(v536);
      sub_1000042A4(v537);
    }
    v197 = 0;
    v198 = 0;
    if ( v181 < 0 )
      goto LABEL_690;
    v199 = (unsigned int)v187 > v181;
    v200 = nullptr;
    if ( !v199 )
    {
      v200 = v183;
      LOBYTE(__buf.__sig) = v182 & 1;
      v197 = v187;
      v198 = 518;
    }
    if ( !v198 )
      goto LABEL_690;
    v163 = v582;
    if ( !v197 )
      goto LABEL_202;
    sub_100004464(v186, v197);
    v201 = *((_DWORD *)v186 + 14);
    if ( __OFADD__(v201, 12) )
      goto LABEL_687;
    if ( (v197 & 0x80000000) != 0 )
      goto LABEL_690;
    v189 = v186[8];
    memcpy((void *)(v189 + v201 + 12), v200, v197 & 0x7FFFFFFF);
    v3 = __OFADD__(v201, v197);
    v190 = v201 + v197;
    if ( v3 )
      goto LABEL_687;
    *((_DWORD *)v186 + 14) = v190;
LABEL_202:
    sub_100033E14(v168);
LABEL_268:
    if ( v190 > 0 && *(_BYTE *)(v189 + 12 + (unsigned int)(v190 - 1)) == 10 )
    {
      *((_DWORD *)v186 + 14) = v190 - 1;
      if ( v190 != 1 && *(_BYTE *)(v189 + 12 + (unsigned int)(v190 - 2)) == 13 )
        *((_DWORD *)v186 + 14) = v190 - 2;
    }
    v222 = v186;
LABEL_274:
    v146 = v573;
    v177 = (_DWORD *)sub_100004D30(v222);
    LODWORD(v151) = v578;
    if ( !v177 )
      break;
LABEL_275:
    v225 = (unsigned int)v177[1];
    if ( !(_DWORD)v225 )
      goto LABEL_293;
    v226 = v225 - 1;
    if ( __OFSUB__((_DWORD)v225, 1) )
      goto LABEL_687;
    v227 = v177 + 3;
    v228 = *((unsigned __int8 *)v177 + (int)v226 + 12);
    if ( v228 == 13 )
      goto LABEL_286;
    if ( v228 != 10 )
      goto LABEL_293;
    if ( (int)v225 < 2 || (v229 = (unsigned int)(v225 - 2), *((_BYTE *)v227 + v229) != 13) )
    {
LABEL_286:
      v234 = v177[2];
      if ( v234 <= 1 )
        v234 = 1;
      if ( !v226 )
      {
LABEL_292:
        v177 = &unk_1000385B0;
        goto LABEL_293;
      }
      if ( (v226 & 0x80000000) == 0 )
      {
        v231 = v234 - 1;
        v235 = malloc(v226 + 13);
        v236 = (char *)(v235 + 3);
        v177 = v235;
        memcpy(v235 + 3, v227, v226);
        v236[v226] = 0;
        LODWORD(v229) = v226;
        goto LABEL_291;
      }
LABEL_695:
      v541 = sub_100004270(&unk_1000382B0);
      sub_1000042A4(v541);
    }
    if ( (_DWORD)v225 == 2 )
      goto LABEL_292;
    v230 = v177[2];
    if ( v230 <= 0 )
      v231 = 0;
    else
      v231 = v230 - 2;
    v232 = malloc(v225 + 11);
    v233 = (char *)(v232 + 3);
    v177 = v232;
    memcpy(v232 + 3, v227, v229);
    v233[v229] = 0;
LABEL_291:
    v177[2] = v231;
    *v177 = 1;
    v177[1] = v229;
LABEL_293:
    sub_1000150FC(v146);
    v237 = (int)v146[1];
    v150 = *((_QWORD *)v146 + 2);
    LODWORD(v151) = v237 + 1;
    *(_QWORD *)(v150 + 8 * v237) = v177;
    if ( __OFADD__((_DWORD)v237, 1) )
      goto LABEL_687;
    v146[1] = (_DWORD)v151;
  }
  while ( v163 != 6 );
LABEL_136:
  v153 = (unsigned int)dword_100058314;
  if ( dword_100058314 < 0 )
  {
    v548 = sub_100004310(&unk_1000382D0, (unsigned int)dword_100058314);
    v549 = sub_100004270(v548);
    sub_1000042A4(v549);
  }
  if ( dword_100058314 )
  {
    v154 = 16LL * (unsigned int)dword_100058314;
    v155 = (char *)calloc(1u, v154);
    v156 = 0;
    do
    {
      v157 = sub_100033EF8(
               *(unsigned int *)(qword_100058320 + v156),
               *(unsigned __int8 *)(qword_100058320 + v156 + 4),
               *(_QWORD *)(qword_100058320 + v156 + 8));
      v158 = &v155[v156];
      v156 += 16;
      *(_DWORD *)v158 = v157;
      *((_QWORD *)v158 + 1) = v160;
      v158[4] = v159 & 1;
    }
    while ( v154 != v156 );
    v161 = calloc(1u, 0x18u);
    v161[2] = v153;
    *v161 = 28;
    v162 = (char *)calloc(1u, 16 * v153);
  }
  else
  {
    v161 = calloc(1u, 0x18u);
    v155 = nullptr;
    v154 = 0;
    v162 = nullptr;
    *v161 = 28;
    v161[2] = 0;
  }
  *((_QWORD *)v161 + 2) = v162;
  __dst = v162;
  memcpy(v162, v155, v154);
  v161[1] = v153;
  if ( (int)v151 < 1 )
  {
    v567 = 0;
LABEL_703:
    sub_100025D6C();
    v550 = qword_1000581F0;
    v551 = sub_100004BA8(&unk_10004E850, v567, 6, &unk_100038C28);
    v552 = sub_1000307D8(v550, v551);
    sub_100034314(v552);
    goto LABEL_704;
  }
  v238 = v153;
  v239 = 0;
  v579 = (int)v151;
  v240 = (unsigned int)v151;
  v151 = &v585;
  v241 = &xmmword_1000584C0;
  v567 = 0;
  v569 = v240;
  v563 = v153;
  v565 = v161;
  while ( 2 )
  {
    v583 = v238;
    v574 = v239;
    v242 = sub_100033F9C(
             *(unsigned int *)(*(_QWORD *)(v150 + 8 * v239) + 4LL),
             1,
             *(_QWORD *)(v150 + 8 * v239) + 12LL,
             0);
    v244 = 271733878;
    v245 = -1732584194;
    v246 = -271733879;
    v247 = 1732584193;
    if ( v242 >= 1 )
    {
      v248 = 0;
      v249 = v243 + 3;
      do
      {
        for ( j = 0; j != 64; j += 4 )
        {
          if ( v242 <= (int)v248 + (int)j
            || (int)v248 + (int)j + 1 >= (unsigned int)v242
            || (int)v248 + (int)j + 2 >= (unsigned int)v242
            || (int)v248 + (int)j + 3 >= (unsigned int)v242 )
          {
            goto LABEL_690;
          }
          *(_DWORD *)((char *)&v585.__sigaction_u.__sa_handler + j) = *(unsigned __int8 *)(v249 + j - 3)
                                                                    | (*(unsigned __int8 *)(v249 + j - 2) << 8)
                                                                    | (*(unsigned __int8 *)(v249 + j - 1) << 16)
                                                                    | (*(unsigned __int8 *)(v249 + j) << 24);
        }
        v251 = 0;
        v252 = 0;
        v253 = -64;
        v254 = v241;
        v255 = v247;
        v256 = v246;
        v257 = v245;
        __buf = (pthread_condattr_t)v585;
        v591 = v586;
        v258 = v244;
        v592 = v587;
        v593 = v588;
        do
        {
          v261 = v253 + 64;
          v262 = v258;
          v258 = v257;
          v257 = v256;
          if ( (unsigned __int64)(v253 + 64) >= 0x10 )
          {
            if ( v261 >= 0x20 )
            {
              if ( v261 > 0x2F )
              {
                v261 = v251 & 0xF;
                v263 = (v256 | ~v262) ^ v258;
              }
              else
              {
                v263 = v258 ^ v256 ^ v262;
                v261 = (3 * v252 + 5) & 0xF;
              }
            }
            else
            {
              v263 = v262 & v256 | v258 & ~v262;
              v261 = (5 * v252 + 1) & 0xF;
            }
          }
          else
          {
            v263 = v262 & ~v256 | v258 & v256;
          }
          v264 = v263 + v255;
          v265 = *((_DWORD *)&__buf.__sig + v261);
          v266 = *((_DWORD *)v254 - 64);
          v267 = v264 + *(_DWORD *)v254 + v265;
          if ( (v266 & 0x80000000) != 0 )
          {
            v270 = -v266;
            if ( __OFSUB__(0, v266) || (v270 & 0x80000000) != 0 )
              goto LABEL_687;
            v268 = v270 >= 0x20 ? 0 : v267 >> v270;
            v3 = __OFSUB__(32, v266);
            v269 = 32 - v266;
            if ( v3 )
              goto LABEL_687;
          }
          else
          {
            v268 = v267 << v266;
            if ( v266 >= 0x20 )
              v268 = 0;
            v3 = __OFSUB__(32, v266);
            v269 = 32 - v266;
            if ( v3 )
              goto LABEL_687;
          }
          if ( (v269 & 0x80000000) != 0 )
          {
            v3 = __OFSUB__(0, v269);
            v269 = -v269;
            if ( v3 || (v269 & 0x80000000) != 0 )
              goto LABEL_687;
            v259 = v267 << v269;
          }
          else
          {
            v259 = v267 >> v269;
          }
          v254 = (__int128 *)((char *)v254 + 4);
          ++v252;
          if ( v269 >= 0x20 )
            v259 = 0;
          v260 = __CFADD__(v253++, 1);
          v251 += 7;
          v256 = (v259 | v268) + v257;
          v255 = v262;
        }
        while ( !v260 );
        if ( v248 == 2147483584 )
          goto LABEL_687;
        v248 += 64;
        v244 += v258;
        v245 += v257;
        v246 += v256;
        v247 += v262;
        v249 += 64;
      }
      while ( v242 > (int)v248 );
    }
    v271 = v241;
    v272 = (__int64 *)calloc(1u, 0x10u);
    *(_DWORD *)v272 = v247;
    *((_DWORD *)v272 + 1) = v246;
    *((_DWORD *)v272 + 2) = v245;
    *((_DWORD *)v272 + 3) = v244;
    v273 = (unsigned int)(v583 - 1);
    if ( __OFSUB__(v583, 1) )
      goto LABEL_687;
    if ( (v273 & 0x80000000) != 0 )
    {
LABEL_350:
      LODWORD(v273) = v583;
    }
    else
    {
      v274 = v272;
      v275 = 0;
      v276 = __dst;
      if ( *(_DWORD *)__dst != 16 )
        goto LABEL_347;
LABEL_342:
      v277 = *((__int64 **)v276 + 1);
      if ( v277 != v274 )
      {
        v279 = *v277;
        v278 = v277[1];
        if ( v279 != *v274 || v278 != v274[1] )
        {
LABEL_347:
          while ( v273 + v275 )
          {
            --v275;
            v281 = *((_DWORD *)v276 + 4);
            v276 += 16;
            if ( v281 == 16 )
              goto LABEL_342;
          }
          goto LABEL_350;
        }
      }
      if ( v583 <= -(int)v275 )
        goto LABEL_690;
      if ( v275 )
      {
        if ( (_DWORD)v273 + (_DWORD)v275 < 0 )
          goto LABEL_705;
        memmove(v276, v276 + 16, 16LL * (unsigned int)(v273 + v275));
        v282 = __dst;
        v565[1] = v273;
        v283 = &__dst[16 * v273];
        *(_QWORD *)v283 = 0;
        *((_QWORD *)v283 + 1) = 0;
        v284 = v567 + 1;
        if ( __OFADD__(v567, 1) )
          goto LABEL_687;
      }
      else
      {
        LODWORD(v273) = v583 - 1;
        v565[1] = v583 - 1;
        *(_QWORD *)__dst = 0;
        *((_QWORD *)__dst + 1) = 0;
        v285 = (int)v565[3];
        if ( v583 == 1 )
        {
          v282 = &__dst[-16 * v285];
          v565[3] = 0;
          *((_QWORD *)v565 + 2) = v282;
          v284 = v567 + 1;
          if ( __OFADD__(v567, 1) )
            goto LABEL_687;
        }
        else
        {
          v3 = __OFADD__((_DWORD)v285, 1);
          v286 = v285 + 1;
          if ( v3 )
            goto LABEL_687;
          v282 = __dst + 16;
          v565[3] = v286;
          *((_QWORD *)v565 + 2) = __dst + 16;
          v284 = v567 + 1;
          if ( __OFADD__(v567, 1) )
            goto LABEL_687;
        }
      }
      v567 = v284;
      __dst = v282;
      v563 = v273;
    }
    v239 = v574 + 1;
    v238 = v273;
    v241 = v271;
    if ( v574 + 1 != v569 )
      continue;
    break;
  }
  if ( v579 != 6 || v563 )
    goto LABEL_703;
  v287 = (int8x16_t *)calloc(1u, 0x20u);
  if ( (int)v573[1] >= 1 )
  {
    v288 = (pthread_condattr_t)0LL;
    v289 = v573;
    v290 = 0;
    while ( 1 )
    {
      v291 = *(_QWORD *)(*((_QWORD *)v289 + 2) + 8 * v290);
      v292 = *(unsigned int *)(v291 + 4);
      if ( (byte_1000581B2 & 1) == 0 )
      {
        v324 = atomic_load((unsigned int *)&dword_1000581C0);
        __buf = v288;
        v591 = (__int128)v288;
        v592 = (__int128)v288;
        v593 = (__int128)v288;
        v3 = __OFADD__(v324, 2);
        v325 = v324 + 2;
        v594 = (__int128)v288;
        v595 = (__int128)v288;
        v596 = (__int128)v288;
        v597 = (__int128)v288;
        v598 = (__int128)v288;
        v599 = (__int128)v288;
        v600 = (__int128)v288;
        v601 = (__int128)v288;
        v602 = (__int128)v288;
        v603 = (__int128)v288;
        v604 = (__int128)v288;
        v605 = (__int128)v288;
        if ( v3 )
          goto LABEL_687;
        v326 = 0;
        while ( v326 < 64 )
        {
          if ( v325 != 0x80000000 )
          {
            LODWORD(v328) = 4;
            v329 = 2;
            while ( (int)v328 <= v325 )
            {
              v330 = v325 % v329;
              if ( ((v329 ^ v325) & 0x80000000) == 0 )
                goto LABEL_713;
              if ( !v330 )
                goto LABEL_390;
              v3 = __OFADD__(v330, v329);
              v330 += v329;
              if ( !v3 )
              {
LABEL_713:
                if ( !v330 )
                  goto LABEL_390;
                if ( !__OFADD__(v329, 1) )
                {
                  v328 = (v329 + 1) * (__int64)(v329 + 1);
                  ++v329;
                  if ( v328 == (int)v328 )
                    continue;
                }
              }
              goto LABEL_687;
            }
          }
          v327 = v326;
          if ( v326 < 0 )
          {
            if ( (unsigned int)v326 <= 0xFFFFFFBF )
              goto LABEL_690;
            v327 = v326 + 64;
          }
          ++v326;
          *((_DWORD *)&__buf.__sig + v327) = v325;
LABEL_390:
          v3 = __OFADD__(v325++, 1);
          if ( v3 )
            goto LABEL_687;
        }
        if ( (__buf.__sig & 0x80000000) != 0 )
          goto LABEL_687;
        v331 = 0;
        v332 = 0x10000000000uLL;
        do
        {
          v333 = (v331 + v332) >> 64;
          v334 = v331 + v332;
          if ( __CFADD__(*((_QWORD *)&v332 + 1), __CFADD__(v331, (_QWORD)v332)) )
            goto LABEL_687;
          v336 = __PAIR128__(v333, v334) + 1;
          if ( __CFADD__(v334 == -1, v333) )
            goto LABEL_687;
          v338 = v336 >> 1;
          if ( *((_QWORD *)&v336 + 1) >> 1 )
            goto LABEL_687;
          if ( __CFSUB__(LODWORD(__buf.__sig), (v338 * (unsigned __int128)v338) >> 64, v338 * v338 == 0) )
          {
            v331 = v336 >> 1;
          }
          else
          {
            v332 = v338 - (unsigned __int128)1uLL;
            if ( v338 < (unsigned __int128)1uLL )
              goto LABEL_687;
          }
        }
        while ( v331 < v332 );
        LODWORD(xmmword_100058330) = v331;
        if ( __buf.__sig < 0 )
          goto LABEL_687;
        v339 = 0;
        v340 = 0;
        v341 = 0x10000000000uLL;
        do
        {
          v342 = (__PAIR128__(v340, v339) + v341) >> 64;
          v343 = v339 + v341;
          if ( __CFADD__(__CFADD__(v339, (_QWORD)v341), v340)
             | __CFADD__(*((_QWORD *)&v341 + 1), __CFADD__(v339, (_QWORD)v341) + v340) )
          {
            v344 = 1;
          }
          else
          {
            v344 = 0;
          }
          if ( (v344 & 1) != 0 )
            goto LABEL_687;
          v260 = __CFADD__(v343, 1);
          v345 = v343 + 1;
          v347 = v260;
          v260 = __CFADD__(v260, v342);
          v346 = v347 + v342;
          if ( v260 )
            goto LABEL_687;
          *((_QWORD *)&v350 + 1) = v346;
          *(_QWORD *)&v350 = v345;
          v349 = v350 >> 1;
          v351 = v346 >> 1;
          v352 = (v349 * (unsigned __int128)v349) >> 64;
          v353 = !v351 && (0 * (unsigned __int128)v349) >> 64 == 0;
          v354 = 2 * v351 * v349;
          v355 = !v353;
          v356 = v352 + v354;
          v357 = __CFADD__(v352, v354) || v355;
          v358 = v351 ? v357 : 0;
          v359 = v351 ? v356 : (v349 * (unsigned __int128)v349) >> 64;
          if ( (v358 & 1) != 0 )
            goto LABEL_687;
          if ( __CFSUB__(HIDWORD(__buf.__sig), v359, v349 * v349 == 0) )
          {
            v339 = v349;
            v340 = v351;
          }
          else
          {
            v341 = __PAIR128__(v351, v349) - 1;
            if ( __PAIR128__(v351, v349) < 1 )
              goto LABEL_687;
          }
        }
        while ( __PAIR128__(v340, v339) < v341 );
        DWORD1(xmmword_100058330) = v339;
        if ( (*(_DWORD *)__buf.__opaque & 0x80000000) != 0 )
          goto LABEL_687;
        v360 = 0;
        v361 = 0;
        v362 = 0x10000000000uLL;
        do
        {
          v363 = (__PAIR128__(v361, v360) + v362) >> 64;
          v364 = v360 + v362;
          if ( __CFADD__(__CFADD__(v360, (_QWORD)v362), v361)
             | __CFADD__(*((_QWORD *)&v362 + 1), __CFADD__(v360, (_QWORD)v362) + v361) )
          {
            v365 = 1;
          }
          else
          {
            v365 = 0;
          }
          if ( (v365 & 1) != 0 )
            goto LABEL_687;
          v260 = __CFADD__(v364, 1);
          v366 = v364 + 1;
          v368 = v260;
          v260 = __CFADD__(v260, v363);
          v367 = v368 + v363;
          if ( v260 )
            goto LABEL_687;
          *((_QWORD *)&v371 + 1) = v367;
          *(_QWORD *)&v371 = v366;
          v370 = v371 >> 1;
          v372 = v367 >> 1;
          v373 = (v370 * (unsigned __int128)v370) >> 64;
          v374 = !v372 && (0 * (unsigned __int128)v370) >> 64 == 0;
          v375 = 2 * v372 * v370;
          v376 = !v374;
          v377 = v373 + v375;
          v378 = __CFADD__(v373, v375) || v376;
          v379 = v372 ? v378 : 0;
          v380 = v372 ? v377 : (v370 * (unsigned __int128)v370) >> 64;
          if ( (v379 & 1) != 0 )
            goto LABEL_687;
          if ( __CFSUB__(*(unsigned int *)__buf.__opaque, v380, v370 * v370 == 0) )
          {
            v360 = v370;
            v361 = v372;
          }
          else
          {
            v362 = __PAIR128__(v372, v370) - 1;
            if ( __PAIR128__(v372, v370) < 1 )
              goto LABEL_687;
          }
        }
        while ( __PAIR128__(v361, v360) < v362 );
        DWORD2(xmmword_100058330) = v360;
        if ( (*(_DWORD *)&__buf.__opaque[4] & 0x80000000) != 0 )
          goto LABEL_687;
        v381 = 0;
        v382 = 0;
        v383 = 0x10000000000uLL;
        do
        {
          v384 = (__PAIR128__(v382, v381) + v383) >> 64;
          v385 = v381 + v383;
          if ( __CFADD__(__CFADD__(v381, (_QWORD)v383), v382)
             | __CFADD__(*((_QWORD *)&v383 + 1), __CFADD__(v381, (_QWORD)v383) + v382) )
          {
            v386 = 1;
          }
          else
          {
            v386 = 0;
          }
          if ( (v386 & 1) != 0 )
            goto LABEL_687;
          v260 = __CFADD__(v385, 1);
          v387 = v385 + 1;
          v389 = v260;
          v260 = __CFADD__(v260, v384);
          v388 = v389 + v384;
          if ( v260 )
            goto LABEL_687;
          *((_QWORD *)&v392 + 1) = v388;
          *(_QWORD *)&v392 = v387;
          v391 = v392 >> 1;
          v393 = v388 >> 1;
          v394 = (v391 * (unsigned __int128)v391) >> 64;
          v395 = !v393 && (0 * (unsigned __int128)v391) >> 64 == 0;
          v396 = 2 * v393 * v391;
          v397 = !v395;
          v398 = v394 + v396;
          v399 = __CFADD__(v394, v396) || v397;
          v400 = v393 ? v399 : 0;
          v401 = v393 ? v398 : (v391 * (unsigned __int128)v391) >> 64;
          if ( (v400 & 1) != 0 )
            goto LABEL_687;
          if ( __CFSUB__(*(unsigned int *)&__buf.__opaque[4], v401, v391 * v391 == 0) )
          {
            v381 = v391;
            v382 = v393;
          }
          else
          {
            v383 = __PAIR128__(v393, v391) - 1;
            if ( __PAIR128__(v393, v391) < 1 )
              goto LABEL_687;
          }
        }
        while ( __PAIR128__(v382, v381) < v383 );
        HIDWORD(xmmword_100058330) = v381;
        if ( (v591 & 0x80000000) != 0 )
          goto LABEL_687;
        v402 = 0;
        v403 = 0;
        v404 = 0x10000000000uLL;
        do
        {
          v405 = (__PAIR128__(v403, v402) + v404) >> 64;
          v406 = v402 + v404;
          if ( __CFADD__(__CFADD__(v402, (_QWORD)v404), v403)
             | __CFADD__(*((_QWORD *)&v404 + 1), __CFADD__(v402, (_QWORD)v404) + v403) )
          {
            v407 = 1;
          }
          else
          {
            v407 = 0;
          }
          if ( (v407 & 1) != 0 )
            goto LABEL_687;
          v260 = __CFADD__(v406, 1);
          v408 = v406 + 1;
          v410 = v260;
          v260 = __CFADD__(v260, v405);
          v409 = v410 + v405;
          if ( v260 )
            goto LABEL_687;
          *((_QWORD *)&v413 + 1) = v409;
          *(_QWORD *)&v413 = v408;
          v412 = v413 >> 1;
          v414 = v409 >> 1;
          v415 = (v412 * (unsigned __int128)v412) >> 64;
          v416 = !v414 && (0 * (unsigned __int128)v412) >> 64 == 0;
          v417 = 2 * v414 * v412;
          v418 = !v416;
          v419 = v415 + v417;
          v420 = __CFADD__(v415, v417) || v418;
          v421 = v414 ? v420 : 0;
          v422 = v414 ? v419 : (v412 * (unsigned __int128)v412) >> 64;
          if ( (v421 & 1) != 0 )
            goto LABEL_687;
          if ( __CFSUB__((unsigned int)v591, v422, v412 * v412 == 0) )
          {
            v402 = v412;
            v403 = v414;
          }
          else
          {
            v404 = __PAIR128__(v414, v412) - 1;
            if ( __PAIR128__(v414, v412) < 1 )
              goto LABEL_687;
          }
        }
        while ( __PAIR128__(v403, v402) < v404 );
        LODWORD(xmmword_100058340) = v402;
        if ( (DWORD1(v591) & 0x80000000) != 0 )
          goto LABEL_687;
        v423 = 0;
        v424 = 0;
        v425 = 0x10000000000uLL;
        do
        {
          v426 = (__PAIR128__(v424, v423) + v425) >> 64;
          v427 = v423 + v425;
          if ( __CFADD__(__CFADD__(v423, (_QWORD)v425), v424)
             | __CFADD__(*((_QWORD *)&v425 + 1), __CFADD__(v423, (_QWORD)v425) + v424) )
          {
            v428 = 1;
          }
          else
          {
            v428 = 0;
          }
          if ( (v428 & 1) != 0 )
            goto LABEL_687;
          v260 = __CFADD__(v427, 1);
          v429 = v427 + 1;
          v431 = v260;
          v260 = __CFADD__(v260, v426);
          v430 = v431 + v426;
          if ( v260 )
            goto LABEL_687;
          *((_QWORD *)&v434 + 1) = v430;
          *(_QWORD *)&v434 = v429;
          v433 = v434 >> 1;
          v435 = v430 >> 1;
          v436 = (v433 * (unsigned __int128)v433) >> 64;
          v437 = !v435 && (0 * (unsigned __int128)v433) >> 64 == 0;
          v438 = 2 * v435 * v433;
          v439 = !v437;
          v440 = v436 + v438;
          v441 = __CFADD__(v436, v438) || v439;
          v442 = v435 ? v441 : 0;
          v443 = v435 ? v440 : (v433 * (unsigned __int128)v433) >> 64;
          if ( (v442 & 1) != 0 )
            goto LABEL_687;
          if ( __CFSUB__(DWORD1(v591), v443, v433 * v433 == 0) )
          {
            v423 = v433;
            v424 = v435;
          }
          else
          {
            v425 = __PAIR128__(v435, v433) - 1;
            if ( __PAIR128__(v435, v433) < 1 )
              goto LABEL_687;
          }
        }
        while ( __PAIR128__(v424, v423) < v425 );
        DWORD1(xmmword_100058340) = v423;
        if ( (DWORD2(v591) & 0x80000000) != 0 )
          goto LABEL_687;
        v444 = 0;
        v445 = 0;
        v446 = 0x10000000000uLL;
        do
        {
          v447 = (__PAIR128__(v445, v444) + v446) >> 64;
          v448 = v444 + v446;
          if ( __CFADD__(__CFADD__(v444, (_QWORD)v446), v445)
             | __CFADD__(*((_QWORD *)&v446 + 1), __CFADD__(v444, (_QWORD)v446) + v445) )
          {
            v449 = 1;
          }
          else
          {
            v449 = 0;
          }
          if ( (v449 & 1) != 0 )
            goto LABEL_687;
          v260 = __CFADD__(v448, 1);
          v450 = v448 + 1;
          v452 = v260;
          v260 = __CFADD__(v260, v447);
          v451 = v452 + v447;
          if ( v260 )
            goto LABEL_687;
          *((_QWORD *)&v455 + 1) = v451;
          *(_QWORD *)&v455 = v450;
          v454 = v455 >> 1;
          v456 = v451 >> 1;
          v457 = (v454 * (unsigned __int128)v454) >> 64;
          v458 = !v456 && (0 * (unsigned __int128)v454) >> 64 == 0;
          v459 = 2 * v456 * v454;
          v460 = !v458;
          v461 = v457 + v459;
          v462 = __CFADD__(v457, v459) || v460;
          v463 = v456 ? v462 : 0;
          v464 = v456 ? v461 : (v454 * (unsigned __int128)v454) >> 64;
          if ( (v463 & 1) != 0 )
            goto LABEL_687;
          if ( __CFSUB__(DWORD2(v591), v464, v454 * v454 == 0) )
          {
            v444 = v454;
            v445 = v456;
          }
          else
          {
            v446 = __PAIR128__(v456, v454) - 1;
            if ( __PAIR128__(v456, v454) < 1 )
              goto LABEL_687;
          }
        }
        while ( __PAIR128__(v445, v444) < v446 );
        DWORD2(xmmword_100058340) = v444;
        if ( (HIDWORD(v591) & 0x80000000) != 0 )
          goto LABEL_687;
        v465 = 0;
        v466 = 0;
        v467 = 0x10000000000uLL;
        do
        {
          v468 = (__PAIR128__(v466, v465) + v467) >> 64;
          v469 = v465 + v467;
          if ( __CFADD__(__CFADD__(v465, (_QWORD)v467), v466)
             | __CFADD__(*((_QWORD *)&v467 + 1), __CFADD__(v465, (_QWORD)v467) + v466) )
          {
            v470 = 1;
          }
          else
          {
            v470 = 0;
          }
          if ( (v470 & 1) != 0 )
            goto LABEL_687;
          v260 = __CFADD__(v469, 1);
          v471 = v469 + 1;
          v473 = v260;
          v260 = __CFADD__(v260, v468);
          v472 = v473 + v468;
          if ( v260 )
            goto LABEL_687;
          *((_QWORD *)&v476 + 1) = v472;
          *(_QWORD *)&v476 = v471;
          v475 = v476 >> 1;
          v477 = v472 >> 1;
          v478 = (v475 * (unsigned __int128)v475) >> 64;
          v479 = !v477 && (0 * (unsigned __int128)v475) >> 64 == 0;
          v480 = 2 * v477 * v475;
          v481 = !v479;
          v482 = v478 + v480;
          v483 = __CFADD__(v478, v480) || v481;
          v484 = v477 ? v483 : 0;
          v485 = v477 ? v482 : (v475 * (unsigned __int128)v475) >> 64;
          if ( (v484 & 1) != 0 )
            goto LABEL_687;
          if ( __CFSUB__(HIDWORD(v591), v485, v475 * v475 == 0) )
          {
            v465 = v475;
            v466 = v477;
          }
          else
          {
            v467 = __PAIR128__(v477, v475) - 1;
            if ( __PAIR128__(v477, v475) < 1 )
              goto LABEL_687;
          }
        }
        while ( __PAIR128__(v466, v465) < v467 );
        v486 = 0;
        HIDWORD(xmmword_100058340) = v465;
        do
        {
          v488 = *((unsigned int *)&__buf.__sig + v486);
          if ( (v488 & 0x80000000) != 0 )
            goto LABEL_687;
          v489 = v488 << 32;
          v490 = 0;
          v491 = 0x10000000000uLL;
          do
          {
            v492 = (v490 + v491) >> 64;
            v493 = v490 + v491;
            if ( __CFADD__(*((_QWORD *)&v491 + 1), __CFADD__(v490, (_QWORD)v491)) )
              goto LABEL_687;
            v495 = v493 + 1;
            v496 = __CFADD__(v493, 1) + v492;
            if ( __CFADD__(v493 == -1, v492) )
              goto LABEL_687;
            *((_QWORD *)&v499 + 1) = v496;
            *(_QWORD *)&v499 = v493 + 1;
            v498 = v499 >> 1;
            if ( v496 >> 1 )
              goto LABEL_687;
            v500 = (v498 * (unsigned __int128)v498) >> 64;
            v501 = v498 * v498;
            *((_QWORD *)&v503 + 1) = v496;
            *(_QWORD *)&v503 = v495;
            v502 = v503 >> 1;
            v504 = v500 * v498;
            v505 = (v498 * v498 * (unsigned __int128)v498) >> 64;
            v506 = is_mul_ok(v500, v498) && (0 * (unsigned __int128)v501) >> 64 == 0;
            v507 = (v501 * (unsigned __int128)v502) >> 64;
            v508 = !v506;
            v509 = v501 * v502;
            v260 = __CFADD__(v505, v504);
            v510 = v505 + v504;
            v511 = v501 * v498;
            if ( v260 )
              v508 = 1;
            v512 = v500 == 0;
            if ( is_mul_ok(v498, v498) )
              v513 = 0;
            else
              v513 = v508;
            if ( v512 )
              v510 = v507;
            if ( !v512 )
              v509 = v511;
            if ( (v513 & 1) != 0 )
              goto LABEL_687;
            if ( __CFSUB__(v489, v510, v509 == 0) )
            {
              v490 = v498;
            }
            else
            {
              v491 = v498 - (unsigned __int128)1uLL;
              if ( v498 < (unsigned __int128)1uLL )
                goto LABEL_687;
            }
          }
          while ( v490 < v491 );
          v487 = &byte_100058180[4 * v486++];
          *((_DWORD *)v487 + 272) = v490;
        }
        while ( v486 != 64 );
        byte_1000581B2 = 1;
      }
      v293 = sub_100033F9C(v292, 1, v291 + 12, 1);
      v295 = (int32x4_t)xmmword_100058330;
      v296 = (int32x4_t)xmmword_100058340;
      if ( v293 >= 1 )
        break;
LABEL_384:
      v580 = (uint32x4_t)vdupq_laneq_s32(v296, 3);
      v584 = (uint32x4_t)vdupq_laneq_s32(v296, 2);
      v575 = (uint32x4_t)vdupq_lane_s32(*(int32x2_t *)v296.i8, 0);
      v570 = (uint32x4_t)vdupq_laneq_s32(v295, 2);
      __dsta = (uint32x4_t)vdupq_lane_s32(*(int32x2_t *)v296.i8, 1);
      v566 = (uint32x4_t)vdupq_lane_s32(*(int32x2_t *)v295.i8, 0);
      v568 = (uint32x4_t)vdupq_laneq_s32(v295, 3);
      v564 = (uint32x4_t)vdupq_lane_s32(*(int32x2_t *)v295.i8, 1);
      v321 = (int8x16_t *)calloc(1u, 0x20u);
      ++v290;
      v289 = v573;
      v322 = (int)v573[1];
      v288 = (pthread_condattr_t)0LL;
      *v321 = vuzp1q_s8(
                (int8x16_t)vuzp1q_s16(
                             (int16x8_t)vshlq_u32(v566, (uint32x4_t)xmmword_100035F40),
                             (int16x8_t)vshlq_u32(v564, (uint32x4_t)xmmword_100035F40)),
                (int8x16_t)vuzp1q_s16(
                             (int16x8_t)vshlq_u32(v570, (uint32x4_t)xmmword_100035F40),
                             (int16x8_t)vshlq_u32(v568, (uint32x4_t)xmmword_100035F40)));
      v321[1] = vuzp1q_s8(
                  (int8x16_t)vuzp1q_s16(
                               (int16x8_t)vshlq_u32(v575, (uint32x4_t)xmmword_100035F40),
                               (int16x8_t)vshlq_u32(__dsta, (uint32x4_t)xmmword_100035F40)),
                  (int8x16_t)vuzp1q_s16(
                               (int16x8_t)vshlq_u32(v584, (uint32x4_t)xmmword_100035F40),
                               (int16x8_t)vshlq_u32(v580, (uint32x4_t)xmmword_100035F40)));
      v323 = veorq_s8(v321[1], v287[1]);
      *v287 = veorq_s8(*v321, *v287);
      v287[1] = v323;
      if ( v290 >= v322 )
        goto LABEL_674;
    }
    v297 = 0;
    v298 = v294 + 3;
    while ( 1 )
    {
      v299 = 0;
      v585 = (sigaction)0LL;
      v586 = 0u;
      v587 = 0u;
      v588 = 0u;
      memset(v589, 0, sizeof(v589));
      do
      {
        if ( v293 <= (int)v297 + (int)v299
          || (int)v297 + (int)v299 + 1 >= (unsigned int)v293
          || (int)v297 + (int)v299 + 2 >= (unsigned int)v293
          || (int)v297 + (int)v299 + 3 >= (unsigned int)v293 )
        {
          goto LABEL_690;
        }
        *(_DWORD *)((char *)&v585.__sigaction_u.__sa_handler + v299) = _byteswap_ulong(*(_DWORD *)(v298 + v299 - 3));
        v299 += 4;
      }
      while ( v299 != 64 );
      v300 = v589;
      v301 = 48;
      do
      {
        --v301;
        HIDWORD(v303) = *(v300 - 15);
        LODWORD(v303) = HIDWORD(v303);
        v302 = v303 >> 18;
        HIDWORD(v303) = *(v300 - 2);
        LODWORD(v303) = HIDWORD(v303);
        *v300 = *(v300 - 16)
              + *(v300 - 7)
              + (v302 ^ __ROR4__(*(v300 - 15), 7) ^ (*(v300 - 15) >> 3))
              + ((v303 >> 19) ^ __ROR4__(HIDWORD(v303), 17) ^ (HIDWORD(v303) >> 10));
        ++v300;
      }
      while ( v301 );
      v304 = v296.i32[3];
      v305 = v296.i32[2];
      v306 = 0;
      v307 = v296.i32[1];
      v308 = v295.i32[3];
      v309 = v295.i32[2];
      v310 = v295.i32[1];
      v311 = v296.i32[0];
      v312 = v295.i32[0];
      do
      {
        v313 = v304;
        v304 = v305;
        v305 = v307;
        v307 = v311;
        v314 = v308;
        v308 = v309;
        v309 = v310;
        v310 = v312;
        HIDWORD(v316) = v307;
        LODWORD(v316) = v307;
        v315 = v316 >> 6;
        HIDWORD(v316) = v310;
        LODWORD(v316) = v310;
        v317 = v313
             + (v304 & ~v307 | v305 & v307)
             + *(_DWORD *)&byte_100058180[v306 + 1088]
             + *(_DWORD *)((char *)&v585.__sigaction_u.__sa_handler + v306);
        v306 += 4;
        v318 = (v315 ^ __ROR4__(v307, 11) ^ __ROR4__(v307, 25)) + v317;
        v311 = v318 + v314;
        v312 = ((v308 ^ v309) & v310 ^ v308 & v309) + ((v316 >> 2) ^ __ROR4__(v310, 13) ^ __ROR4__(v310, 22)) + v318;
      }
      while ( v306 != 256 );
      if ( v297 == 2147483584 )
        goto LABEL_687;
      v319.i64[0] = __PAIR64__(v307, v311);
      v320.i64[0] = __PAIR64__(v310, v312);
      v297 += 64;
      v298 += 64;
      v319.i64[1] = __PAIR64__(v304, v305);
      v320.i64[1] = __PAIR64__(v308, v309);
      v296 = vaddq_s32(v319, v296);
      v295 = vaddq_s32(v320, v295);
      if ( v293 <= (int)v297 )
        goto LABEL_384;
    }
  }
LABEL_674:
  v514 = sub_100033EF8((unsigned int)dword_1000582B8, (unsigned __int8)byte_1000582BC, qword_1000582C0);
  __buf = (pthread_condattr_t)xmmword_100035F50;
  v591 = xmmword_100035F60;
  v592 = xmmword_100035F70;
  v593 = xmmword_100035F80;
  v594 = xmmword_100035F90;
  v595 = xmmword_100035FA0;
  v596 = xmmword_100035FB0;
  v597 = xmmword_100035FC0;
  v598 = xmmword_100035FD0;
  v599 = xmmword_100035FE0;
  v600 = xmmword_100035FF0;
  v601 = xmmword_100036000;
  v602 = xmmword_100036010;
  v603 = xmmword_100036020;
  v604 = xmmword_100036030;
  v605 = xmmword_100036040;
  v606 = xmmword_100036050;
  v607 = xmmword_100036060;
  v608 = xmmword_100036070;
  v609 = xmmword_100036080;
  v610 = xmmword_100036090;
  v611 = xmmword_1000360A0;
  v612 = xmmword_1000360B0;
  v613 = xmmword_1000360C0;
  v614 = xmmword_1000360D0;
  v615 = xmmword_1000360E0;
  v616 = xmmword_1000360F0;
  v617 = xmmword_100036100;
  v618 = xmmword_100036110;
  v619 = xmmword_100036120;
  v620 = xmmword_100036130;
  v621 = xmmword_100036140;
  v622 = xmmword_100036150;
  v623 = xmmword_100036160;
  v624 = xmmword_100036170;
  v625 = xmmword_100036180;
  v626 = xmmword_100036190;
  v627 = xmmword_1000361A0;
  v628 = xmmword_1000361B0;
  v629 = xmmword_1000361C0;
  v630 = xmmword_1000361D0;
  v631 = xmmword_1000361E0;
  v632 = xmmword_1000361F0;
  v633 = xmmword_100036200;
  v634 = xmmword_100036210;
  v635 = xmmword_100036220;
  v636 = xmmword_100036230;
  v637 = xmmword_100036240;
  v638 = xmmword_100036250;
  v639 = xmmword_100036260;
  v640 = xmmword_100036270;
  v641 = xmmword_100036280;
  v642 = xmmword_100036290;
  v643 = xmmword_1000362A0;
  v644 = xmmword_1000362B0;
  v645 = xmmword_1000362C0;
  v646 = xmmword_1000362D0;
  v647 = xmmword_1000362E0;
  v648 = xmmword_1000362F0;
  v649 = xmmword_100036300;
  v650 = xmmword_100036310;
  v651 = xmmword_100036320;
  v652 = xmmword_100036330;
  v653 = xmmword_100036340;
  v515 = v514;
  v517 = v516;
  v518 = 0;
  v519 = 0;
  do
  {
    v520 = *((_DWORD *)&__buf.__sig + v518);
    v3 = __OFADD__(v519, v520);
    v519 += v520;
    if ( v3 )
      goto LABEL_687;
    v521 = v287->u8[(unsigned int)v518 % 0x20];
    v3 = __OFADD__(v519, v521);
    LOBYTE(v519) = v519 + v521;
    if ( v3 )
      goto LABEL_687;
    v519 = (unsigned __int8)v519;
    *((_DWORD *)&__buf.__sig + v518++) = *((_DWORD *)&__buf.__sig + (unsigned __int8)v519);
    *((_DWORD *)&__buf.__sig + (unsigned __int8)v519) = v520;
  }
  while ( v518 != 256 );
  if ( (v514 & 0x80000000) != 0 )
  {
LABEL_710:
    v562 = sub_100004270(&unk_100038320);
    sub_1000042A4(v562);
  }
  v522 = calloc(1u, v514);
  if ( v515 )
  {
    v523 = v522;
    v524 = 0;
    LOBYTE(v525) = 0;
    v526 = 0;
    do
    {
      v525 = (unsigned __int8)(v525 + 1);
      v527 = *((_DWORD *)&__buf.__sig + v525);
      v3 = __OFADD__(v526, v527);
      LOBYTE(v526) = v526 + v527;
      if ( v3 )
        goto LABEL_687;
      v526 = (unsigned __int8)v526;
      *((_DWORD *)&__buf.__sig + v525) = *((_DWORD *)&__buf.__sig + (unsigned __int8)v526);
      *((_DWORD *)&__buf.__sig + (unsigned __int8)v526) = v527;
      v528 = *((_DWORD *)&__buf.__sig + v525);
      v3 = __OFADD__(v528, v527);
      v529 = v528 + v527;
      if ( v3 )
        goto LABEL_687;
      v530 = *((_DWORD *)&__buf.__sig + v529);
      if ( v530 < 0 )
        goto LABEL_687;
      v531 = v530 ^ *(unsigned __int8 *)(v517 + v524);
      if ( v531 >= 256 )
        goto LABEL_687;
      *((_BYTE *)v522 + v524++) = v531;
    }
    while ( v515 != v524 );
    v532 = malloc(v515 + 13);
    memcpy(v532 + 3, v523, v515);
    v533 = v532;
    *((_BYTE *)v532 + v515 + 12) = 0;
    *v532 = 1;
    v532[1] = v515;
    v532[2] = 0;
  }
  else
  {
    v533 = &unk_1000385B0;
  }
  return sub_1000307D8(qword_100058218, v533);
}

