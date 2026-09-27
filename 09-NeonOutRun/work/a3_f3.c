// ---- 51ffea depth 0
__int64 __fastcall sub_51FFEA(_QWORD *a1, double a2, double a3, double a4, double a5)
{
  _QWORD *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned int v9; // ebx
  unsigned __int8 v10; // r15
  unsigned int v11; // r15d
  __int64 window_by_id; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r14
  unsigned __int64 v29; // rsi
  __int64 v30; // rbx
  _QWORD *v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r15
  __int64 v41; // kr10_8
  unsigned int v42; // eax
  __int64 v43; // r13
  __int64 v44; // rbp
  __int64 v45; // r14
  __int64 *v46; // r13
  __int64 v47; // r15
  _QWORD *v48; // rax
  __int64 v49; // rdi
  _BOOL4 v50; // edx
  __int64 v51; // r15
  unsigned int v52; // ebp
  __int64 v53; // rdx
  unsigned int v54; // edx
  unsigned int v55; // r13d
  unsigned int v56; // eax
  unsigned int v57; // edx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // r13
  __int64 screen; // rax
  __int64 v64; // r13
  __int64 rectangle; // r14
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // r15
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // r13
  __int64 v72; // kr18_8
  _QWORD *v73; // rax
  bool v74; // zf
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _BYTE *v77; // rax
  __int64 v78; // rax
  __int64 v79; // r13
  __int64 v80; // rdx
  __int64 v81; // rbp
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // rdx
  __int64 v85; // rbp
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rbp
  __int64 v89; // rax
  __int64 v90; // r13
  __int64 v91; // rdx
  __int64 v92; // rbp
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rbp
  __int64 v96; // rax
  __int64 v97; // r13
  __int64 v98; // rdx
  __int64 v99; // rbp
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rbp
  __int64 v103; // rax
  __int64 v104; // r13
  __int64 v105; // rdx
  __int64 v106; // rbp
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rbp
  __int64 v110; // rax
  __int64 v111; // r13
  __int64 v112; // rdx
  __int64 v113; // rbp
  __int64 v114; // rax
  __int64 v115; // r13
  __int64 v116; // rdx
  __int64 v117; // rbp
  __int64 v118; // rax
  __int64 v119; // r13
  __int64 v120; // rdx
  __int64 v121; // rbp
  __int64 v122; // rsi
  __int64 v123; // r14
  __int64 v124; // rdx
  __int64 v125; // r13
  __int64 v126; // r14
  __int64 v127; // rdx
  __int64 v128; // r13
  __int64 v129; // rax
  __int64 *v130; // rax
  __int64 *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // r14
  __int64 v134; // rax
  __int64 v135; // r14
  __int64 v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // r14
  __int64 v140; // r15
  __int64 v141; // rax
  __int64 v142; // r14
  unsigned int v143; // ebp
  __int64 v144; // rax
  __int64 v145; // rsi
  __int64 v146; // rbp
  __int64 style_context; // rax
  __int64 v148; // r14
  __int64 v149; // r15
  __int64 v150; // r12
  __int64 v151; // r14
  int n_monitors; // ebp
  unsigned int v153; // r15d
  __int64 v154; // rax
  __int64 v155; // r13
  __int64 v156; // rbx
  __int64 v157; // r13
  _OWORD *v158; // rsi
  unsigned int v160; // [rsp+Ch] [rbp-25Ch]
  char v162; // [rsp+1Fh] [rbp-249h]
  double scale_factor; // [rsp+20h] [rbp-248h]
  __int64 v164; // [rsp+20h] [rbp-248h]
  __int64 v165; // [rsp+20h] [rbp-248h]
  __int64 v166; // [rsp+20h] [rbp-248h]
  __int64 v167; // [rsp+20h] [rbp-248h]
  __int64 v168; // [rsp+20h] [rbp-248h]
  __int64 v169; // [rsp+28h] [rbp-240h]
  __int64 v170; // [rsp+30h] [rbp-238h]
  __int64 v171; // [rsp+30h] [rbp-238h]
  unsigned __int64 v172; // [rsp+38h] [rbp-230h]
  unsigned int v173; // [rsp+40h] [rbp-228h]
  _QWORD *v174; // [rsp+40h] [rbp-228h]
  char v175; // [rsp+48h] [rbp-220h]
  __int64 v176; // [rsp+48h] [rbp-220h]
  __int64 v177; // [rsp+48h] [rbp-220h]
  __int64 v178; // [rsp+48h] [rbp-220h]
  __int64 v179; // [rsp+48h] [rbp-220h]
  __int128 v180; // [rsp+50h] [rbp-218h]
  int v181; // [rsp+64h] [rbp-204h] BYREF
  _QWORD *v182; // [rsp+68h] [rbp-200h]
  __int64 v183; // [rsp+70h] [rbp-1F8h]
  int v184; // [rsp+7Ch] [rbp-1ECh]
  _QWORD v185[2]; // [rsp+80h] [rbp-1E8h]
  _OWORD v186[11]; // [rsp+90h] [rbp-1D8h] BYREF
  double v187; // [rsp+140h] [rbp-128h] BYREF
  __int64 v188[22]; // [rsp+148h] [rbp-120h] BYREF
  unsigned __int64 v189; // [rsp+1F8h] [rbp-70h] BYREF
  __int64 v190; // [rsp+200h] [rbp-68h]
  unsigned __int64 v191; // [rsp+208h] [rbp-60h]
  __int128 v192; // [rsp+210h] [rbp-58h]
  __int64 v193; // [rsp+220h] [rbp-48h]
  __int128 v194; // [rsp+228h] [rbp-40h]

  v5 = a1;
  g_source_set_ready_time(a1, -1);
  v6 = a1[38];
  if ( v6 != sub_5E7108(a1, -1) )
    sub_5D6C90((__int64)&unk_22102E, 125, (__int64)&off_13C5B70);
  v182 = a1 + 14;
  while ( 1 )
  {
    v7 = v5[13];
    sub_604A82((__int64)v188, (volatile signed __int32 *)(v7 + 16));
    if ( LODWORD(v188[0]) == 1 )
    {
      v189 = v188[1];
      LOBYTE(v190) = v188[2];
      sub_5DA280((__int64)aCalledResultUn, 43, (__int64)&v189, (__int64)&off_13C5A78);
    }
    v8 = v188[1];
    sub_656FB1(v186, v188[1] + 24);
    v9 = DWORD2(v186[0]);
    if ( DWORD2(v186[0]) == 31 )
    {
      v10 = *(_QWORD *)(v8 + 56) == 0;
      v9 = 31;
    }
    else
    {
      if ( *(_BYTE *)(v7 + 80) )
        sub_647010(v7 + 96);
      v10 = v186[0];
      v184 = (BYTE3(v186[0]) << 16) | *(unsigned __int16 *)((char *)v186 + 1);
      v160 = HIDWORD(v186[0]);
      v172 = *((_QWORD *)&v186[1] + 1);
      v169 = *(_QWORD *)&v186[1];
      v180 = v186[2];
      v183 = *(_QWORD *)&v186[3];
      v162 = BYTE8(v186[3]);
      v185[0] = *(_QWORD *)((char *)&v186[3] + 9);
      *(_QWORD *)((char *)v185 + 7) = *(_QWORD *)&v186[4];
    }
    sub_516087((volatile __int32 *)v8);
    if ( v9 == 31 )
      return v10 ^ 1u;
    v11 = (v184 << 8) | v10;
    window_by_id = gtk_application_get_window_by_id(v5[36], v11);
    if ( window_by_id )
    {
      v17 = g_object_ref_sink(window_by_id);
      v18 = v9 - 3;
      v19 = v9 - 3;
      if ( v9 < 3 )
        v19 = 3;
      v20 = v17;
      switch ( v19 )
      {
        case 0LL:
          sub_5E64C9(v186, v172, v180);
          gtk_window_set_title(v20, *((_QWORD *)&v186[1] + 1));
          sub_671CD0(*(_QWORD *)&v186[0], *((_QWORD *)&v186[0] + 1));
          sub_601B54(v169, v172);
          goto LABEL_144;
        case 1LL:
          gtk_window_move(v17, v160, v169);
          goto LABEL_115;
        case 2LL:
          gtk_window_resize(v17, v160, v169);
          goto LABEL_115;
        case 3LL:
          v189 = __PAIR64__(v160, v9);
          v190 = v169;
          v191 = v172;
          v192 = v180;
          v193 = v183;
          LOBYTE(v194) = v162;
          *((_QWORD *)&v194 + 1) = *(_QWORD *)((char *)v185 + 7);
          *(_QWORD *)((char *)&v194 + 1) = v185[0];
          v50 = (v9 ^ 2 | (unsigned int)v172 ^ 2) != 0;
          v51 = v17;
          v52 = 2 * v50 + 4;
          v53 = (unsigned int)(2 * v50);
          if ( !(DWORD2(v180) ^ 2 | (unsigned int)v194 ^ 2) )
            v52 = v53;
          scale_factor = (double)(int)gtk_widget_get_scale_factor(
                                        v17,
                                        v172,
                                        v53,
                                        DWORD2(v180) ^ 2 | (unsigned int)v194 ^ 2);
          v173 = sub_656EDF(&v189);
          v55 = v54;
          a2 = scale_factor;
          v56 = sub_656F39(&v189, scale_factor);
          v58 = v57;
          v59 = v55;
          v5 = a1;
          sub_5E4EA1(v186, v173, v59, v56, v58);
          v60 = v52;
          v20 = v51;
          gtk_window_set_geometry_hints(v51, 0, v186, v60);
          goto LABEL_115;
        case 4LL:
          if ( (v160 & 1) != 0 )
            gtk_widget_show_all(v17);
          else
            gtk_widget_hide(v17);
          goto LABEL_115;
        case 5LL:
          gtk_window_present_with_time(v17, 0);
          goto LABEL_115;
        case 6LL:
          gtk_window_set_resizable(v17, v160 & 1);
          goto LABEL_115;
        case 7LL:
          gtk_window_set_deletable(v17, (unsigned __int8)v160);
          goto LABEL_115;
        case 8LL:
          if ( (v160 & 1) != 0 )
            gtk_window_iconify(v17);
          else
            gtk_window_deiconify(v17);
          goto LABEL_115;
        case 9LL:
          if ( (v160 & 1) != 0 )
          {
            v43 = g_object_ref(v17);
            v170 = v20;
            v44 = sub_651E09(8u, 0x28u);
            *(_QWORD *)v44 = 1;
            *(_QWORD *)(v44 + 8) = 1;
            *(_QWORD *)(v44 + 16) = 0;
            *(_QWORD *)(v44 + 24) = v43;
            *(_BYTE *)(v44 + 32) = 0;
            *(_BYTE *)(v44 + 33) = BYTE1(v160);
            v45 = sub_5E7205();
            v188[0] = v45;
            sub_5E713D(v186, v188);
            v46 = (__int64 *)sub_51FA05(v186, &unk_22106C, 55, &off_13C6AF8);
            v47 = sub_5E7108(v186, &unk_22106C);
            v48 = (_QWORD *)sub_4C3769(8, 24);
            *v48 = 0;
            v48[1] = v44;
            v20 = v170;
            v48[2] = v47;
            g_idle_add_full(200, sub_52195A, v48, sub_671D9D);
            v49 = *v46;
            v5 = a1;
            g_main_context_release(v49);
            g_main_context_unref(v45);
          }
          else
          {
            gtk_window_unmaximize(v17);
          }
          goto LABEL_115;
        case 10LL:
          v37 = sub_654F06(v17);
          v70 = sub_5E4D63(v37);
          if ( !v70 )
            goto LABEL_90;
          v71 = v70;
          v40 = sub_605B72(v70);
          g_object_unref(v71);
          if ( !v40 )
            goto LABEL_90;
          sub_653622(v186, v40);
          v72 = *((_QWORD *)&v186[0] + 1);
          g_object_unref(*(_QWORD *)&v186[0]);
          gtk_window_begin_move_drag(v20, 1, (unsigned int)v72, HIDWORD(v72), 0);
          goto LABEL_89;
        case 11LL:
          v37 = sub_654F06(v17);
          v38 = sub_5E4D63(v37);
          if ( !v38 )
            goto LABEL_90;
          v39 = v38;
          v40 = sub_605B72(v38);
          g_object_unref(v39);
          if ( !v40 )
            goto LABEL_90;
          sub_653622(v186, v40);
          v41 = *((_QWORD *)&v186[0] + 1);
          g_object_unref(*(_QWORD *)&v186[0]);
          v42 = sub_50ED29((unsigned __int8)v160);
          sub_654E16(v20, v42, (unsigned int)v41, HIDWORD(v41), 0);
          goto LABEL_89;
        case 12LL:
          if ( !v169 )
            goto LABEL_144;
          if ( v169 == 2 )
          {
            gtk_window_unfullscreen(v17);
LABEL_144:
            g_object_unref(v20);
            continue;
          }
          if ( !v172 )
          {
            gtk_window_fullscreen(v17);
            goto LABEL_144;
          }
          v150 = v17;
          v151 = sub_654F06(v17);
          n_monitors = gdk_display_get_n_monitors(v151);
          v153 = 0;
          if ( n_monitors <= 0 )
            n_monitors = 0;
          while ( n_monitors != v153 )
          {
            v154 = sub_5E4E0A(v151, v153);
            if ( !v154 )
              sub_5D8330();
            v155 = v154;
            if ( v154 == v172 )
            {
              v156 = sub_5E4D8E(v151);
              gtk_window_fullscreen_on_monitor(v150, v156, v153);
              g_object_unref(v156);
            }
            g_object_unref(v155);
            ++v153;
          }
          g_object_unref(v172);
          g_object_unref(v151);
          g_object_unref(v150);
          v5 = a1;
          break;
        case 13LL:
          gtk_window_set_decorated(v17, (unsigned __int8)v160);
          goto LABEL_115;
        case 14LL:
          gtk_window_set_keep_below(v17, (unsigned __int8)v160);
          goto LABEL_115;
        case 15LL:
          gtk_window_set_keep_above(v17, (unsigned __int8)v160);
          goto LABEL_115;
        case 16LL:
          if ( v169 != 0x8000000000000000LL )
          {
            *(_QWORD *)&v186[0] = v169;
            *((_QWORD *)&v186[0] + 1) = v172;
            v186[1] = v180;
            *(_QWORD *)&v186[2] = v183;
            v36 = sub_65683D();
            gtk_window_set_icon(v20, v36);
            g_object_unref(v36);
          }
          goto LABEL_144;
        case 17LL:
          gtk_window_set_urgency_hint(v17, (_BYTE)v160 != 2);
          goto LABEL_115;
        case 18LL:
          v69 = v17;
          gtk_window_set_skip_taskbar_hint(v17, (unsigned __int8)v160);
          v20 = v69;
          gtk_window_set_skip_pager_hint(v69, (unsigned __int8)v160);
          goto LABEL_115;
        case 19LL:
          v138 = sub_653BC7(v17, v11, 3);
          if ( !v138 )
            goto LABEL_115;
          v139 = v138;
          v140 = sub_654F06(v20);
          if ( (_BYTE)v160 == 35 )
            v141 = gdk_cursor_new_for_display(v140, -2);
          else
            v141 = sub_5E4CAB(
                     v140,
                     (char *)dword_227678 + dword_227678[(unsigned __int8)v160],
                     qword_227560[(unsigned __int8)v160]);
          v157 = v141;
          *(_QWORD *)&v186[0] = v141;
          v158 = v186;
          if ( !v141 )
            v158 = nullptr;
          sub_5E4CF2(v139, v158);
          sub_51C8F1(v157);
          g_object_unref(v140);
          g_object_unref(v139);
          goto LABEL_91;
        case 20LL:
          v37 = sub_654F06(v17);
          v61 = sub_5E4D63(v37);
          if ( !v61 )
            goto LABEL_90;
          v62 = v61;
          v40 = sub_605B72(v61);
          g_object_unref(v62);
          if ( !v40 )
            goto LABEL_90;
          screen = gtk_window_get_screen(v20);
          if ( screen )
          {
            v64 = g_object_ref_sink(screen);
            gdk_device_warp(v40, v64, v160, v169);
            g_object_unref(v64);
          }
LABEL_89:
          g_object_unref(v40);
LABEL_90:
          g_object_unref(v37);
LABEL_91:
          v5 = a1;
LABEL_115:
          v24 = v20;
          goto LABEL_116;
        case 21LL:
          if ( (v160 & 1) != 0 )
          {
            a2 = 0.0;
            v186[0] = xmmword_106E00;
            rectangle = cairo_region_create_rectangle();
            v67 = sub_653BC7(v20, v11, v66);
            if ( !v67 )
              sub_5D8330();
            v68 = v67;
            gdk_window_input_shape_combine_region(v67, rectangle, 0, 0);
            g_object_unref(v68);
            cairo_region_destroy(rectangle);
          }
          else
          {
            gtk_widget_input_shape_combine_region(v17, 0);
          }
          goto LABEL_115;
        case 22LL:
          gtk_widget_add_events(v17, 6340900);
          v73 = (_QWORD *)sub_6566FD(v160 >> 8);
          v74 = (*v73)++ == -1;
          if ( v74 )
            goto LABEL_148;
          v174 = v73;
          v75 = (_QWORD *)sub_4C3769(8, 8);
          *v75 = v174;
          g_signal_connect_data(v20, "window-state-event", sub_4FBDF5, v75, sub_671CBA, 0);
          v74 = (*v174)++ == -1;
          if ( v74 )
            goto LABEL_148;
          v76 = (_QWORD *)sub_4C3769(8, 8);
          *v76 = v174;
          g_signal_connect_data(v20, "motion-notify-event", sub_4FBFEA, v76, sub_671CBA, 0);
          v175 = *((_BYTE *)v5 + 296);
          v77 = (_BYTE *)sub_4C3769(1, 1);
          *v77 = v175;
          v171 = v20;
          g_signal_connect_data(v20, "button-press-event", sub_4FBB21, v77, free, 0);
          v78 = sub_4C3769(1, 0);
          g_signal_connect_data(v20, "touch-event", sub_4FB550, v78, nullsub_11, 0);
          v79 = sub_5C0FFF(v5[32], v5[33]);
          v81 = v80;
          v82 = sub_4C3769(8, 24);
          *(_QWORD *)v82 = v79;
          *(_QWORD *)(v82 + 8) = v81;
          *(_DWORD *)(v82 + 16) = v11;
          g_signal_connect_data(v171, "delete-event", sub_4FB708, v82, sub_5218EA, 0);
          v83 = sub_5C0FFF(a1[32], a1[33]);
          v85 = v84;
          v86 = sub_4C3769(8, 24);
          *(_QWORD *)v86 = v83;
          *(_QWORD *)(v86 + 8) = v85;
          *(_DWORD *)(v86 + 16) = v11;
          g_signal_connect_data(v171, "configure-event", sub_4FB8C4, v86, sub_5218EA, 0);
          v176 = sub_5C0FFF(a1[32], a1[33]);
          v88 = v87;
          v89 = sub_4C3769(8, 24);
          *(_QWORD *)v89 = v176;
          *(_QWORD *)(v89 + 8) = v88;
          *(_DWORD *)(v89 + 16) = v11;
          g_signal_connect_data(v171, "focus-in-event", sub_4FB856, v89, sub_5218EA, 0);
          v90 = sub_5C0FFF(a1[32], a1[33]);
          v92 = v91;
          v93 = sub_4C3769(8, 24);
          *(_QWORD *)v93 = v90;
          *(_QWORD *)(v93 + 8) = v92;
          *(_DWORD *)(v93 + 16) = v11;
          g_signal_connect_data(v171, "focus-out-event", sub_4FBA34, v93, sub_5218EA, 0);
          v177 = sub_5C0FFF(a1[32], a1[33]);
          v95 = v94;
          v96 = sub_4C3769(8, 24);
          *(_QWORD *)v96 = v177;
          *(_QWORD *)(v96 + 8) = v95;
          *(_DWORD *)(v96 + 16) = v11;
          g_signal_connect_data(v171, "destroy", sub_4FB4F0, v96, sub_5218EA, 0);
          v97 = sub_5C0FFF(a1[32], a1[33]);
          v99 = v98;
          v100 = sub_4C3769(8, 24);
          *(_QWORD *)v100 = v97;
          *(_QWORD *)(v100 + 8) = v99;
          *(_DWORD *)(v100 + 16) = v11;
          g_signal_connect_data(v171, "enter-notify-event", sub_4FBD17, v100, sub_5218EA, 0);
          v178 = sub_5C0FFF(a1[32], a1[33]);
          v102 = v101;
          v103 = sub_4C3769(8, 24);
          *(_QWORD *)v103 = v178;
          *(_QWORD *)(v103 + 8) = v102;
          *(_DWORD *)(v103 + 16) = v11;
          *(_BYTE *)(v103 + 20) = BYTE2(v160);
          g_signal_connect_data(v171, "motion-notify-event", sub_4FC19F, v103, sub_5218EA, 0);
          v104 = sub_5C0FFF(a1[32], a1[33]);
          v106 = v105;
          v107 = sub_4C3769(8, 24);
          *(_QWORD *)v107 = v104;
          *(_QWORD *)(v107 + 8) = v106;
          *(_DWORD *)(v107 + 16) = v11;
          g_signal_connect_data(v171, "leave-notify-event", sub_4FBD86, v107, sub_5218EA, 0);
          v164 = sub_5C0FFF(a1[32], a1[33]);
          v109 = v108;
          v110 = sub_4C3769(8, 24);
          *(_QWORD *)v110 = v164;
          *(_QWORD *)(v110 + 8) = v109;
          *(_DWORD *)(v110 + 16) = v11;
          g_signal_connect_data(v171, "button-press-event", sub_4FBC6A, v110, sub_5218EA, 0);
          v111 = sub_5C0FFF(a1[32], a1[33]);
          v113 = v112;
          v114 = sub_4C3769(8, 24);
          *(_QWORD *)v114 = v111;
          *(_QWORD *)(v114 + 8) = v113;
          *(_DWORD *)(v114 + 16) = v11;
          g_signal_connect_data(v171, "button-release-event", sub_4FC302, v114, sub_5218EA, 0);
          v115 = sub_5C0FFF(a1[32], a1[33]);
          v117 = v116;
          v118 = sub_4C3769(8, 24);
          *(_QWORD *)v118 = v115;
          *(_QWORD *)(v118 + 8) = v117;
          *(_DWORD *)(v118 + 16) = v11;
          g_signal_connect_data(v171, "scroll-event", sub_4FB78A, v118, sub_5218EA, 0);
          v119 = sub_5C0FFF(a1[32], a1[33]);
          v165 = v120;
          v121 = sub_4C3769(8, 40);
          *(_QWORD *)v121 = 1;
          *(_QWORD *)(v121 + 8) = 1;
          *(_QWORD *)(v121 + 16) = v119;
          *(_QWORD *)(v121 + 24) = v165;
          *(_DWORD *)(v121 + 32) = v11;
          v122 = a1[33];
          v123 = sub_5C0FFF(a1[32], v122);
          v125 = v124;
          if ( !(unsigned __int8)sub_5E8F04() )
          {
            if ( !byte_14385C0 )
              sub_5D6C90((__int64)&unk_22098B, 107, (__int64)&off_13BFDC0);
            sub_5D6C90((__int64)&unk_2209C0, 85, (__int64)&off_13BFDC0);
          }
          v166 = v123;
          v126 = gtk_im_context_simple_new();
          v179 = v125;
          v128 = sub_653BC7(v171, v122, v127);
          gtk_im_context_set_client_window(v126, v128);
          sub_51C8F1(v128);
          gtk_im_context_focus_in(v126);
          v129 = sub_4C3769(8, 24);
          *(_QWORD *)v129 = v166;
          *(_QWORD *)(v129 + 8) = v179;
          *(_DWORD *)(v129 + 16) = v11;
          g_signal_connect_data(v126, "commit", &sub_4FB272, v129, sub_5218EA, 0);
          v74 = (*(_QWORD *)v121)++ == -1;
          if ( v74
            || (v130 = (__int64 *)sub_4C3769(8, 16),
                *v130 = v121,
                v130[1] = v126,
                g_signal_connect_data(v171, "key-press-event", sub_4FBAA2, v130, sub_52191E, 0),
                v74 = *(_QWORD *)v121 == -1,
                ++*(_QWORD *)v121,
                v74) )
          {
LABEL_148:
            BUG();
          }
          v131 = (__int64 *)sub_4C3769(8, 8);
          *v131 = v121;
          g_signal_connect_data(v171, "key-release-event", sub_4FBAE7, v131, sub_521944, 0);
          v5 = a1;
          v167 = sub_5C0FFF(a1[32], a1[33]);
          v133 = v132;
          v134 = sub_4C3769(8, 24);
          *(_QWORD *)v134 = v167;
          *(_QWORD *)(v134 + 8) = v133;
          *(_DWORD *)(v134 + 16) = v11;
          g_signal_connect_data(v171, "window-state-event", sub_4FBE26, v134, sub_5218EA, 0);
          v135 = sub_5C0FFF(v5[34], v5[35]);
          v168 = v136;
          v137 = sub_4C3769(8, 24);
          *(_QWORD *)v137 = v135;
          *(_QWORD *)(v137 + 8) = v168;
          *(_DWORD *)(v137 + 16) = v11;
          *(_BYTE *)(v137 + 20) = v160;
          g_signal_connect_data(v171, "draw", sub_4FB334, v137, sub_521904, 0);
          sub_519DAB(v121);
          sub_671C65(v174);
          v20 = v171;
          goto LABEL_115;
        case 23LL:
          if ( (v160 & 1) != 0 )
            gtk_window_stick(v17);
          else
            gtk_window_unstick(v17);
          goto LABEL_115;
        case 24LL:
        case 25LL:
        case 26LL:
          goto LABEL_151;
        case 27LL:
          v142 = v17;
          v143 = sub_5E721D(&unk_106D00, 0x10u);
          v144 = sub_651E09(1u, 5u);
          *(_BYTE *)(v144 + 4) = BYTE4(v172);
          *(_DWORD *)v144 = v172;
          v145 = v143;
          v146 = v142;
          g_object_set_qdata_full(v142, v145, v144, free_0);
          style_context = gtk_widget_get_style_context(v142);
          v148 = g_object_ref_sink(style_context);
          gtk_style_context_remove_provider(v148, v169);
          if ( (v172 & 1) != 0 )
          {
            v181 = v172 >> 8;
            a2 = (double)BYTE4(v172) / 255.0;
            v187 = a2;
            *(_QWORD *)&v186[0] = &v181;
            *((_QWORD *)&v186[0] + 1) = sub_5DC5D0;
            *(_QWORD *)&v186[1] = (char *)&v181 + 1;
            *((_QWORD *)&v186[1] + 1) = sub_5DC5D0;
            *(_QWORD *)&v186[2] = (char *)&v181 + 2;
            *((_QWORD *)&v186[2] + 1) = sub_5DC5D0;
            *(_QWORD *)&v186[3] = &v187;
            *((_QWORD *)&v186[3] + 1) = sub_5DF850;
            sub_4C3758(v188, &unk_17663B);
            v149 = v188[1];
            *(_QWORD *)&v186[0] = 0;
            gtk_css_provider_load_from_data(v169, v188[1], v188[2], v186);
            if ( *(_QWORD *)&v186[0] )
              g_error_free();
            gtk_style_context_add_provider(v148, v169, 600);
            sub_601B54(v188[0], v149);
            v5 = a1;
          }
          g_object_unref(v148);
          g_object_unref(v169);
          g_object_unref(v146);
          continue;
      }
    }
    else
    {
      if ( v11 != -1 )
      {
        v18 = v9 - 3;
        goto LABEL_117;
      }
      v18 = v9 - 3;
      v21 = v9 - 3;
      if ( v9 < 3 )
        v21 = 3;
      switch ( v21 )
      {
        case 24:
          if ( (_QWORD)v180 != 0x8000000000000000LL )
          {
            sub_69298F(v5[18], v5[19]);
            *((_OWORD *)v5 + 9) = v180;
            v5[20] = v183;
          }
          v31 = v182;
          sub_656912(v182);
          if ( (unsigned __int8)sub_656A7A(v31) )
          {
            if ( v5[18] != 0x8000000000000000LL )
            {
              sub_5CE660(v186, v5[19], v5[20]);
              v32 = sub_656A9E(v186);
              v34 = v33;
              sub_656829(v5[21], v5[22]);
              v5[21] = v32;
              v5[22] = v34;
            }
            if ( !*((_BYTE *)v5 + 128) )
              sub_656AFE(v182);
            if ( v5[23] && *((_DWORD *)v5 + 32) == 1 )
            {
              if ( v169 == 1 )
              {
                v35 = 100;
                if ( v172 < 0x64 )
                  v35 = v172;
                a2 = (double)v35 / 100.0;
                ((void (__fastcall *)(_QWORD, double))v5[26])(v5[17], a2);
              }
              if ( v162 != 5 )
                ((void (__fastcall *)(_QWORD, bool))v5[27])(v5[17], v162 != 0);
            }
          }
          break;
        case 25:
          if ( (_QWORD)v180 != 0x8000000000000000LL )
          {
            sub_69298F(v5[18], v5[19]);
            *((_OWORD *)v5 + 9) = v180;
            v5[20] = v183;
          }
          v25 = v182;
          sub_656912(v182);
          if ( (unsigned __int8)sub_656A7A(v25) )
          {
            if ( v5[18] != 0x8000000000000000LL )
            {
              sub_5CE660(v186, v5[19], v5[20]);
              v26 = sub_656A9E(v186);
              v28 = v27;
              sub_656829(v5[21], v5[22]);
              v5[21] = v26;
              v5[22] = v28;
            }
            if ( !*((_BYTE *)v5 + 128) )
              sub_656AFE(v182);
            if ( v5[23] && *((_DWORD *)v5 + 32) == 1 )
            {
              v29 = 0;
              if ( (v169 & 1) != 0 )
                v29 = v172;
              v30 = v5[17];
              ((void (__fastcall *)(__int64, unsigned __int64))v5[28])(v30, v29);
              ((void (__fastcall *)(__int64, _QWORD))v5[29])(v30, (unsigned int)v169);
            }
          }
          break;
        case 26:
          v22 = sub_5E9407();
          if ( v22 )
          {
            v23 = v22;
            sub_654FDE(v22, v160 & 1);
            DWORD2(v186[7]) = -1;
            DWORD2(v186[0]) = 328;
            BYTE12(v186[0]) = v160 & 1;
            LOBYTE(v186[0]) = 40;
            sub_672186(v188, v5[32], v5[33], v186);
            if ( LOBYTE(v188[0]) != 51 )
            {
              qmemcpy(v186, v188, sizeof(v186));
              sub_515EAF(v186);
            }
            v24 = v23;
LABEL_116:
            g_object_unref(v24);
          }
LABEL_117:
          if ( v9 < 3 )
            v18 = 3;
          if ( v18 )
          {
            switch ( v18 )
            {
              case 12:
                sub_51D337(v169, v172);
                break;
              case 16:
                sub_516A00(v169, v172, v13, v14, v15, v16, a2, a3, a4, a5);
                break;
              case 24:
              case 25:
                sub_516A00(v180, *((_QWORD *)&v180 + 1), v13, v14, v15, v16, a2, a3, a4, a5);
                break;
              case 27:
                g_object_unref(v169);
                break;
            }
          }
          else
          {
            sub_601B54(v169, v172);
          }
          break;
        default:
LABEL_151:
          sub_5D8350((__int64)aInternalErrorE, 40);
      }
    }
  }
}


// ---- 5e7108 depth 1
unsigned __int64 sub_5E7108()
{
  if ( !__readfsbyte(0xFFFFFE70) )
  {
    __writefsqword(0xFFFFFE68, _InterlockedExchangeAdd64(&qword_1436288, 1u));
    __writefsbyte(0xFFFFFE70, 1u);
  }
  return __readfsqword(0xFFFFFE68);
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


// ---- 656fb1 depth 1
char *__fastcall sub_656FB1(_DWORD *a1, __int64 *a2)
{
  char *result; // rax
  __int64 v3; // rdx
  __int64 v4; // r9

  result = (char *)a2[3];
  if ( result )
  {
    v3 = a2[2];
    v4 = 0;
    if ( v3 + 1 >= (unsigned __int64)*a2 )
      v4 = *a2;
    a2[2] = v3 - v4 + 1;
    a2[3] = (__int64)(result - 1);
    result = (char *)(a2[1] + 72 * v3);
    qmemcpy(a1, result, 0x48u);
  }
  else
  {
    a1[2] = 31;
  }
  return result;
}


// ---- 647010 depth 1
__int64 __fastcall sub_647010(volatile signed __int32 *a1)
{
  _InterlockedIncrement(a1);
  return syscall(202, a1, 129, 1);
}


// ---- 516087 depth 1
__int64 __fastcall sub_516087(volatile __int32 *a1)
{
  __int64 result; // rax

  sub_4C2CBD(a1 + 1);
  result = (unsigned int)_InterlockedExchange(a1, 0);
  if ( (_DWORD)result == 2 )
    return sub_647030(a1);
  return result;
}


// ---- 5e64c9 depth 1
void *__fastcall sub_5E64C9(__int64 *a1, const void *a2, size_t a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  char *v6; // rdx
  const char *v7; // r12
  void *result; // rax

  if ( a3 )
  {
    v4 = a3 + 1;
    v5 = sub_5FB0CE(a3 + 1, 1, 1);
    v7 = v6;
    result = memcpy(v6, a2, a3);
    v7[a3] = 0;
  }
  else
  {
    v5 = 0x8000000000000000LL;
    v7 = &byte_12A33A;
    v4 = 1;
  }
  a1[3] = (__int64)v7;
  *a1 = v5;
  a1[1] = (__int64)v7;
  a1[2] = v4;
  return result;
}


// ---- 671cd0 depth 1
__int64 __fastcall sub_671CD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = -a1;
  if ( !__OFSUB__(-a1, 1) )
    return sub_5E616F(a1, a2);
  return result;
}


// ---- 601b54 depth 1
// attributes: thunk
__int64 __fastcall sub_601B54(__int64 a1, __int64 a2)
{
  return sub_5E616F(a1, a2);
}


// ---- 5e9407 depth 1
__int64 sub_5E9407()
{
  __int64 v0; // rax

  if ( !(unsigned __int8)sub_5E8F04() )
  {
    if ( !byte_14385C0 )
      sub_5D6C90((__int64)&unk_22098B, 107, (__int64)&off_13BFE80);
    sub_5D6C90((__int64)&unk_2209C0, 85, (__int64)&off_13BFE80);
  }
  v0 = gtk_settings_get_default();
  if ( v0 )
    return g_object_ref_sink(v0);
  else
    return 0;
}


// ---- 654fde depth 1
__int64 __fastcall sub_654FDE(_QWORD **a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 name; // rax
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v8; // [rsp+10h] [rbp-78h] BYREF
  __int64 v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[24]; // [rsp+30h] [rbp-58h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+48h] [rbp-40h]
  _OWORD v12[3]; // [rsp+50h] [rbp-38h] BYREF

  v7[0] = aGtkApplication_4;
  v7[1] = 33;
  v2 = sub_5E6DE9(*a1, aGtkApplication_4, 33);
  if ( !v2 )
  {
    *(_QWORD *)&v8 = **a1;
    *(_QWORD *)v10 = v7;
    *(_QWORD *)&v10[8] = sub_617A36;
    *(_QWORD *)&v10[16] = &v8;
    v11 = sub_5E6CC8;
    sub_5D6C90((__int64)&unk_113AA7, (__int64)v10, (__int64)&off_13C59E0);
  }
  v3 = v2;
  sub_6538D2(v10, 20);
  g_value_set_boolean(v10, a2);
  v9 = *(_QWORD *)&v10[16];
  v8 = *(_OWORD *)v10;
  sub_5E7257(**a1, 0, v3, &v8, &off_13C5808);
  name = g_param_spec_get_name(v3);
  v5 = sub_606EE6(name);
  sub_5D8EB0(v10, v5);
  if ( *(_DWORD *)v10 == 1 )
  {
    v12[0] = *(_OWORD *)&v10[8];
    sub_5DA280((__int64)aCalledResultUn, 43, (__int64)v12, (__int64)&unk_13C5A98);
  }
  g_object_set_property(a1, *(_QWORD *)&v10[8], &v8);
  if ( (_QWORD)v8 )
    g_value_unset(&v8);
  return g_param_spec_unref(v3);
}


// ---- 672186 depth 1
char __fastcall sub_672186(_BYTE *a1, __int64 a2, __int64 a3, char *a4)
{
  _BYTE *v6; // r14
  signed __int64 v7; // r14
  unsigned __int64 *v8; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // r13
  void *v11; // rdi
  signed __int64 v12; // rax
  signed __int64 j; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdi
  signed __int64 v20; // rsi
  signed __int64 v21; // rax
  signed __int64 v22; // rbx
  __int64 v23; // rdi
  unsigned int v24; // ebx
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned int v27; // edx
  bool v28; // cl
  bool v29; // zf
  bool v30; // sf
  bool v31; // of
  bool v32; // dl
  __int64 *v33; // rax
  __int64 v34; // rbx
  __int64 *v35; // rbx
  __int64 v36; // rbx
  char v37; // bp
  _BYTE *v38; // r15
  __int64 v39; // rax
  _QWORD *v40; // r8
  signed __int64 v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rbx
  __int64 v44; // r14
  unsigned __int64 v45; // rax
  signed __int32 v47[14]; // [rsp+0h] [rbp-348h] BYREF
  __int64 v48; // [rsp+38h] [rbp-310h]
  unsigned __int64 i; // [rsp+48h] [rbp-300h]
  _BYTE *v50; // [rsp+50h] [rbp-2F8h]
  __int64 v51; // [rsp+58h] [rbp-2F0h] BYREF
  void *ptr; // [rsp+60h] [rbp-2E8h]
  char *v53; // [rsp+68h] [rbp-2E0h]
  __int64 v54; // [rsp+70h] [rbp-2D8h] BYREF
  int v55; // [rsp+78h] [rbp-2D0h]
  _OWORD v56[2]; // [rsp+80h] [rbp-2C8h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-2A8h]
  int v58; // [rsp+B0h] [rbp-298h]
  int v59; // [rsp+C0h] [rbp-288h]
  _OWORD v60[12]; // [rsp+D0h] [rbp-278h] BYREF
  _QWORD v61[22]; // [rsp+190h] [rbp-1B8h] BYREF
  _QWORD v62[3]; // [rsp+240h] [rbp-108h] BYREF
  volatile __int32 *v63; // [rsp+258h] [rbp-F0h]
  char v64; // [rsp+260h] [rbp-E8h]
  _OWORD v65[14]; // [rsp+268h] [rbp-E0h] BYREF

  v6 = a1;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v53 = a4;
      v50 = a1;
      LODWORD(v61[0]) = 0;
      v7 = *(_QWORD *)(a3 + 128);
      v8 = *(unsigned __int64 **)(a3 + 136);
      v9 = nullptr;
      for ( i = 0; ; i = (unsigned __int64)v9 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (v7 & 1) != 0 )
            {
              v8 = nullptr;
              v10 = 0;
              goto LABEL_47;
            }
            v10 = ((unsigned int)v7 >> 1) & 0x1F;
            if ( (_DWORD)v10 != 31 )
              break;
            sub_4EBA30(v61, 1);
            v7 = *(_QWORD *)(a3 + 128);
            v8 = *(unsigned __int64 **)(a3 + 136);
          }
          if ( !(i | v10 ^ 0x1E) )
          {
            v11 = v9;
            v9 = (_QWORD *)sub_672D05();
            free_1(v11);
            i = (unsigned __int64)v9;
          }
          if ( !v8 )
            break;
LABEL_12:
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 128), v7 + 2, v7);
          if ( v7 == v12 )
          {
            if ( (_DWORD)v10 == 30 )
            {
              v45 = i;
              v6 = v50;
              if ( !i )
                sub_5D8330();
              *(_QWORD *)(a3 + 136) = i;
              _InterlockedAdd64((volatile signed __int64 *)(a3 + 128), 2u);
              *v8 = v45;
              v10 = 30;
              goto LABEL_48;
            }
LABEL_47:
            v6 = v50;
            free_1(v9);
            if ( v8 )
            {
LABEL_48:
              qmemcpy(&v8[23 * v10 + 1], v53, 0xB0u);
              _InterlockedOr64((volatile signed __int64 *)&v8[23 * v10 + 23], 1u);
              LOBYTE(v39) = sub_672C3B(a3 + 256);
              goto LABEL_64;
            }
            LOBYTE(v39) = *v53;
            if ( *v53 != 51 )
            {
              BYTE8(v60[0]) = *v53;
              qmemcpy((char *)v60 + 9, v53 + 1, 0xAFu);
              goto LABEL_63;
            }
LABEL_64:
            *v6 = 51;
            return v39;
          }
          v7 = v12;
          v8 = *(unsigned __int64 **)(a3 + 136);
          sub_4EBA09(v61, 1);
        }
        ptr = v9;
        v9 = (_QWORD *)sub_672D05();
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 136), (signed __int64)v9, 0) )
        {
          *(_QWORD *)(a3 + 8) = v9;
          v8 = v9;
          v9 = ptr;
          goto LABEL_12;
        }
        free_1(ptr);
        v7 = *(_QWORD *)(a3 + 128);
        v8 = *(unsigned __int64 **)(a3 + 136);
      }
    }
    v55 = 1000000000;
    v58 = 1000000000;
    memset(v56, 0, sizeof(v56));
    v59 = 1000000000;
    v57 = 0;
    sub_604A82((__int64)v61, (volatile signed __int32 *)a3);
    if ( LODWORD(v61[0]) == 1 )
    {
      *(_QWORD *)&v60[0] = v61[1];
      BYTE8(v60[0]) = v61[2];
      sub_5DA280((__int64)aCalledResultUn, 43, (__int64)v60, (__int64)&off_13C6A38);
    }
    v36 = v61[1];
    v37 = v61[2];
    sub_4EE32F(v65, v61[1] + 56LL);
    if ( *(_QWORD *)&v65[0] )
    {
      v60[0] = v65[0];
      v38 = *(_BYTE **)&v65[1];
      *(_QWORD *)&v60[1] = *(_QWORD *)&v65[1];
      v57 = *(_QWORD *)&v65[1];
      sub_6524AF((volatile __int32 *)v36);
      if ( v38 )
      {
        qmemcpy(v38, a4, 0xB0u);
        v38[176] = 1;
      }
      else
      {
        qmemcpy(v61, a4, sizeof(v61));
        if ( LOBYTE(v61[0]) != 51 )
        {
          sub_659EDF(v61);
          sub_5D8330();
        }
      }
      sub_659E5B(v60);
LABEL_59:
      v48 = 2;
      goto LABEL_60;
    }
    if ( !*(_BYTE *)(v36 + 104) )
    {
      qmemcpy(v61, a4, sizeof(v61));
      v62[0] = v56;
      v62[1] = &v54;
      v62[2] = a3;
      v63 = (volatile __int32 *)v36;
      v64 = v37;
      v42 = (_QWORD *)sub_6524B4(v62, a4 + 176);
      if ( !v42 )
        goto LABEL_76;
      v43 = v42;
      v44 = *v42;
      *v42 = 0;
      if ( v44 )
      {
        *(_QWORD *)(v44 + 32) = 0;
        *(_QWORD *)(v44 + 40) = 0;
        sub_67292F(v60, v61, v44);
        sub_672BF5(v43, v44);
      }
      else
      {
        *(_QWORD *)&v65[0] = sub_5DFE02();
        sub_67292F(v60, v61, *(_QWORD *)&v65[0]);
        sub_659E5B(v65);
      }
      qmemcpy(v65, (char *)v60 + 8, 0xB0u);
      v6 = a1;
      if ( *(_QWORD *)&v60[0] == 3 )
      {
LABEL_76:
        v51 = sub_5DFE02();
        sub_67292F(v60, v61, v51);
        sub_659E5B(&v51);
      }
      else
      {
        qmemcpy((char *)v60 + 8, v65, 0xB0u);
      }
      if ( v64 != 2 )
      {
        sub_659EDF(v61);
        sub_516087(v63);
      }
      v39 = *(_QWORD *)&v60[0];
      goto LABEL_61;
    }
    qmemcpy((char *)v60 + 8, a4, 0xB0u);
    sub_516087((volatile __int32 *)v36);
  }
  else
  {
    DWORD2(v65[0]) = 1000000000;
    LODWORD(v61[6]) = 1000000000;
    memset(v61, 0, 40);
    LODWORD(v61[8]) = 1000000000;
LABEL_16:
    LODWORD(v51) = 0;
LABEL_17:
    LODWORD(v60[0]) = 0;
LABEL_18:
    for ( j = *(_QWORD *)(a3 + 128); ; j = v22 )
    {
      v14 = *(_QWORD *)(a3 + 400);
      if ( (j & v14) != 0 )
        break;
      v15 = j & (v14 - 1);
      v16 = -*(_QWORD *)(a3 + 392);
      v17 = *(_QWORD *)(a3 + 408);
      v18 = 184 * v15;
      v19 = *(_QWORD *)(v17 + 184 * v15 + 176);
      if ( j != v19 )
      {
        v23 = *(_QWORD *)(a3 + 392) + v19;
        if ( v23 != j + 1 )
        {
          sub_4EBA30(v60, v16);
          goto LABEL_18;
        }
        _InterlockedOr(v47, 0);
        if ( *(_QWORD *)(a3 + 392) + *(_QWORD *)a3 != j )
        {
          sub_4EBA09(v60, v16);
          goto LABEL_18;
        }
        if ( (unsigned int)v51 <= 0xA )
        {
          sub_4EBA30(&v51, v16);
          goto LABEL_17;
        }
        v24 = DWORD2(v65[0]);
        if ( DWORD2(v65[0]) != 1000000000 )
        {
          v50 = v6;
          v25 = *(_QWORD *)&v65[0];
          v26 = sub_6465A0();
          v28 = v27 >= v24;
          v31 = __OFSUB__(v26, v25);
          v29 = v26 == v25;
          v30 = v26 - v25 < 0;
          v6 = v50;
          v32 = v30 == v31;
          if ( v29 )
            v32 = v28;
          if ( v32 )
          {
            qmemcpy((char *)v60 + 8, a4, 0xB0u);
            v39 = 0;
            goto LABEL_61;
          }
        }
        *(_QWORD *)&v60[0] = v61;
        *((_QWORD *)&v60[0] + 1) = a3;
        *(_QWORD *)&v60[1] = v65;
        v33 = (__int64 *)sub_6524B4(v23, v16);
        if ( v33 )
        {
          v34 = *v33;
          i = (unsigned __int64)v33;
          *v33 = 0;
          if ( v34 )
          {
            *(_QWORD *)&v56[0] = v34;
            *(_QWORD *)(v34 + 32) = 0;
            *(_QWORD *)(v34 + 40) = 0;
            sub_672D27(v60, v56);
            sub_672BF5(i, v34);
            goto LABEL_16;
          }
          v54 = sub_5DFE02();
          v35 = &v54;
        }
        else
        {
          *(_QWORD *)&v56[0] = sub_5DFE02();
          v35 = (__int64 *)v56;
        }
        sub_672D27(v60, v35);
        sub_659E5B(v35);
        goto LABEL_16;
      }
      if ( (unsigned __int64)(v15 + 1) >= *(_QWORD *)(a3 + 384) )
        v20 = *(_QWORD *)(a3 + 392) + (j & v16);
      else
        v20 = j + 1;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 128), v20, j);
      if ( j == v21 )
      {
        v40 = (_QWORD *)(v18 + v17);
        v61[0] = v40;
        v41 = j + 1;
        v61[1] = v41;
        qmemcpy(v40, a4, 0xB0u);
        v40[22] = v41;
        sub_672C3B(a3 + 320);
        goto LABEL_59;
      }
      v22 = v21;
      sub_4EBA09(v60, v20);
    }
    if ( *a4 == 51 )
      goto LABEL_59;
    BYTE8(v60[0]) = *a4;
    qmemcpy((char *)v60 + 9, a4 + 1, 0xAFu);
  }
  v48 = 1;
LABEL_60:
  v39 = v48;
LABEL_61:
  if ( v39 == 2 )
    goto LABEL_64;
  if ( !v39 )
    sub_5D8350((__int64)aInternalErrorE, 40);
LABEL_63:
  qmemcpy(v6, (char *)v60 + 8, 0xB0u);
  return v39;
}


// ---- 515eaf depth 1
__int64 __fastcall sub_515EAF(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r14

  LOBYTE(result) = 3;
  if ( *(_BYTE *)a1 >= 0x27u )
    LOBYTE(result) = *(_BYTE *)a1 - 39;
  if ( (_BYTE)result == 1 )
    return sub_51BDE0(a1 + 8);
  result = (unsigned __int8)result;
  if ( (unsigned __int8)result == 3 )
    return sub_51DCCA(a1);
  if ( (unsigned __int8)result == 10 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    sub_652BCF(v2, *(_QWORD *)(a1 + 24));
    return sub_652BFD(*(_QWORD *)(a1 + 8), v2);
  }
  return result;
}


// ---- 69298f depth 1
__int64 __fastcall sub_69298F(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = -a1;
  if ( !__OFSUB__(-a1, 1) )
    return sub_5E616F(a1, a2);
  return result;
}


// ---- 656912 depth 1
void __fastcall sub_656912(__int64 a1)
{
  __int64 v1; // r14
  __int128 v2; // xmm1
  __int128 v3; // xmm2
  __int64 v4; // rax
  __m512i v5; // [rsp+0h] [rbp-98h] BYREF
  __m512i v6; // [rsp+40h] [rbp-58h] BYREF

  if ( !*(_BYTE *)(a1 + 136) )
  {
    *(_BYTE *)(a1 + 136) = 1;
    sub_656B29(&v6, "libunity.so.4libunity.so.6libunity.so.9menu:minimize,closemenu:minimize,maximize,close");
    if ( v6.m512i_i64[0] )
    {
      v5 = v6;
    }
    else
    {
      sub_656B29(&v5, "libunity.so.6libunity.so.9menu:minimize,closemenu:minimize,maximize,close");
      sub_656E6D(&v6.m512i_u64[1]);
    }
    if ( v5.m512i_i64[0] )
    {
      v6 = v5;
    }
    else
    {
      sub_656B29(&v6, "libunity.so.9menu:minimize,closemenu:minimize,maximize,close");
      sub_656E6D(&v5.m512i_u64[1]);
    }
    v1 = v6.m512i_i64[0];
    if ( v6.m512i_i64[0] )
    {
      v5.m512i_i64[6] = v6.m512i_i64[7];
      *(_OWORD *)&v5.m512i_u64[4] = *(_OWORD *)&v6.m512i_u64[5];
      *(_OWORD *)&v5.m512i_u64[2] = *(_OWORD *)&v6.m512i_u64[3];
      *(_OWORD *)v5.m512i_i8 = *(_OWORD *)&v6.m512i_u64[1];
    }
    else
    {
      sub_656E6D(&v6.m512i_u64[1]);
    }
    if ( *(_QWORD *)(a1 + 72) )
      sub_5E4C3B(a1 + 128);
    *(_QWORD *)(a1 + 72) = v1;
    *(_QWORD *)(a1 + 128) = v5.m512i_i64[6];
    v2 = *(_OWORD *)&v5.m512i_u64[2];
    v3 = *(_OWORD *)&v5.m512i_u64[4];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)v5.m512i_i8;
    *(_OWORD *)(a1 + 96) = v2;
    *(_OWORD *)(a1 + 112) = v3;
    if ( v1 )
    {
      v4 = (*(__int64 (**)(void))(a1 + 80))();
      if ( v4 )
      {
        *(_QWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v4;
      }
    }
  }
}


// ---- 656a7a depth 1
bool __fastcall sub_656A7A(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_QWORD *)(a1 + 72) )
      return (*(unsigned int (__fastcall **)(_QWORD))(a1 + 88))(*(_QWORD *)(a1 + 8)) == 1;
  }
  return result;
}


// ---- 5ce660 depth 1
__int64 __fastcall sub_5CE660(unsigned __int64 *a1, const void *a2, size_t a3)
{
  unsigned __int64 v3; // r15
  size_t v4; // r14
  void *v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  size_t v9; // rdx
  unsigned __int64 v10[8]; // [rsp+0h] [rbp-40h] BYREF

  v3 = a3 + 1;
  if ( (__int64)(a3 + 1) < 0 )
    sub_5CC4D0();
  v4 = a3;
  v5 = sub_5CFFA4(a3 + 1, 1u);
  if ( !v5 )
    sub_5CC3A7(1, v3);
  v6 = (unsigned __int64)v5;
  if ( !v4 )
    goto LABEL_13;
  memcpy(v5, a2, v4);
  if ( v4 <= 0xF )
  {
    v7 = 0;
    while ( *((_BYTE *)a2 + v7) )
    {
      if ( v4 == ++v7 )
        goto LABEL_13;
    }
    result = 1;
    goto LABEL_11;
  }
  result = sub_5DA400(0, (__int64)a2, v4);
  if ( result != 1 )
  {
LABEL_13:
    v10[0] = v3;
    v10[1] = v6;
    v10[2] = v4;
    result = (__int64)sub_5CE100(v10);
    v6 = result;
    v4 = v9;
    v3 = 0x8000000000000000LL;
    goto LABEL_14;
  }
LABEL_11:
  a1[3] = v7;
LABEL_14:
  *a1 = v3;
  a1[1] = v6;
  a1[2] = v4;
  return result;
}


// ---- 656a9e depth 1
__int64 __fastcall sub_656A9E(__int64 *a1)
{
  __int64 v1; // r12
  _BYTE *v2; // r14
  _BYTE *v3; // rax

  v1 = *a1;
  if ( __OFSUB__(-*a1, 1) )
    return a1[1];
  v3 = malloc(1u);
  if ( !v3 )
    sub_5CC4B1(1, 1);
  v2 = v3;
  *v3 = 0;
  sub_5E616F(v1, a1[1]);
  return (__int64)v2;
}


// ---- 656829 depth 1
void __fastcall sub_656829(_BYTE *a1, __int64 a2)
{
  if ( a1 )
  {
    *a1 = 0;
    if ( a2 )
      free(a1);
  }
}


// ---- 656afe depth 1
__int64 (*__fastcall sub_656AFE(_QWORD *a1))(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))a1[9];
  if ( result && a1[7] )
  {
    result = (__int64 (*)(void))result();
    if ( result )
    {
      a1[2] = 1;
      a1[3] = result;
    }
  }
  return result;
}


// ---- 65683d depth 1
__int64 __fastcall sub_65683D(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // rcx

  v1 = *(int *)(a1 + 24);
  if ( v1 <= 0 )
    sub_5D6C90((__int64)&unk_21B525, 57, (__int64)&off_13C5708);
  v2 = *(unsigned int *)(a1 + 28);
  if ( (int)v2 <= 0 )
    sub_5D6C90((__int64)&unk_21B541, 59, (__int64)&off_13C5720);
  v3 = *(unsigned int *)(a1 + 32);
  if ( (int)v3 <= 0 )
    sub_5D6C90((__int64)&unk_21B55E, 67, (__int64)&off_13C5738);
  v4 = sub_651E09(8u, 0x18u);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v4 + 16) = v5;
  *(_OWORD *)v4 = *(_OWORD *)a1;
  if ( v5 < v3 * (v2 - 1) + 4 * v1 )
    sub_5D6C90((__int64)&unk_21B57F, 107, (__int64)&off_13C5750);
  return gdk_pixbuf_new_from_data(*(_QWORD *)(v4 + 8), 0, 1, 8, (unsigned int)v1, (unsigned int)v2, v3, &sub_604261, v4);
}


// ---- 654f06 depth 1
__int64 sub_654F06()
{
  __int64 display; // rax

  display = gtk_widget_get_display();
  return g_object_ref_sink(display);
}


// ---- 5e4d63 depth 1
__int64 sub_5E4D63()
{
  __int64 default_seat; // rax

  default_seat = gdk_display_get_default_seat();
  if ( default_seat )
    return g_object_ref_sink(default_seat);
  else
    return 0;
}


// ---- 605b72 depth 1
__int64 sub_605B72()
{
  __int64 pointer; // rax

  pointer = gdk_seat_get_pointer();
  if ( pointer )
    return g_object_ref_sink(pointer);
  else
    return 0;
}


// ---- 653622 depth 1
__int64 __fastcall sub_653622(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // edx
  int v5; // [rsp+8h] [rbp-30h] BYREF
  int v6; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v7[0] = 0;
  gdk_device_get_position(a2, v7, &v5, &v6);
  result = g_object_ref_sink(v7[0]);
  v3 = v5;
  v4 = v6;
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = v4;
  return result;
}


// ---- 50ed29 depth 1
__int64 __fastcall sub_50ED29(unsigned __int8 a1)
{
  return dword_1C7C60[a1];
}


// ---- 654e16 depth 1
__int64 __fastcall sub_654E16(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v8; // eax

  v8 = sub_6536B6(a2, 8);
  return gtk_window_begin_resize_drag(a1, v8, 1, a3, a4, a5);
}


// ---- 651e09 depth 1
void *__fastcall sub_651E09(size_t alignment, size_t size)
{
  void *result; // rax

  result = sub_5CFFA4(size, alignment);
  if ( !result )
    sub_5CC4B1(alignment, size);
  return result;
}


// ---- 5e7205 depth 1
__int64 sub_5E7205()
{
  __int64 v0; // rbx

  v0 = g_main_context_default();
  g_main_context_ref(v0);
  return v0;
}


// ---- 5e713d depth 1
__int64 __fastcall sub_5E713D(__int64 a1, _QWORD *a2)
{
  void *v2; // r14
  unsigned __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = a2;
  v3 = 0x8000000000000000LL;
  result = g_main_context_acquire(*a2);
  if ( (_DWORD)result )
  {
    v3 = 0x8000000000000001LL;
  }
  else
  {
    result = sub_5E71BB(&unk_1FCAA1, 76, 73, &off_13BFAD8);
    *(_QWORD *)(a1 + 16) = 79;
    *(_QWORD *)(a1 + 24) = aCargoRegistryS_221;
    *(_QWORD *)(a1 + 32) = 84;
    *(_QWORD *)(a1 + 40) = result;
    *(_QWORD *)(a1 + 48) = v5;
    *(_DWORD *)(a1 + 56) = 170;
    v2 = &unk_1FCB2B;
  }
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = v2;
  return result;
}


// ---- 51fa05 depth 1
__int64 __fastcall sub_51FA05(__int128 *a1, __int64 a2, __int64 a3)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  _OWORD v7[4]; // [rsp-48h] [rbp-48h] BYREF

  if ( *(_QWORD *)a1 != 0x8000000000000001LL )
  {
    v4 = *a1;
    v5 = a1[1];
    v6 = a1[2];
    v7[3] = a1[3];
    v7[2] = v6;
    v7[1] = v5;
    v7[0] = v4;
    sub_5DA280(a2, a3, (__int64)v7, (__int64)&off_13B6540);
  }
  return *((_QWORD *)a1 + 1);
}


// ---- 4c3769 depth 1
__int64 __fastcall sub_4C3769(size_t a1, size_t a2)
{
  __int64 result; // rax

  result = sub_4C2BA9(a1, a2);
  if ( !result )
    sub_5CC4B1(a1, a2);
  return result;
}


// ---- 6b03e3 depth 1
// attributes: thunk
__int64 __fastcall g_main_context_release(__int64 a1)
{
  return __imp_g_main_context_release(a1);
}


// ---- 656edf depth 1
__int64 __fastcall sub_656EDF(_DWORD *a1)
{
  _DWORD *v1; // rbx
  unsigned int v2; // eax
  __int128 *v3; // rcx
  unsigned int v4; // ebx
  __int128 v6; // [rsp+10h] [rbp-38h] BYREF
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  if ( *a1 == 2 )
    a1 = &unk_106F20;
  v2 = sub_653541(a1);
  v3 = &v7;
  v7 = *((_OWORD *)v1 + 1);
  if ( (_DWORD)v7 == 2 )
    v3 = (__int128 *)&unk_106F20;
  v4 = v2;
  v6 = *v3;
  sub_653541(&v6);
  return v4;
}


// ---- 656f39 depth 1
__int64 __fastcall sub_656F39(__int64 a1)
{
  __int128 *v1; // r14
  __int128 *v2; // rax
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+10h] [rbp-48h] BYREF
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF

  v1 = v8;
  v8[0] = *(_OWORD *)(a1 + 32);
  v2 = v8;
  if ( LODWORD(v8[0]) == 2 )
    v2 = (__int128 *)&unk_1064D0;
  v6 = *v2;
  v3 = sub_653541(&v6);
  v8[0] = *(_OWORD *)(a1 + 48);
  if ( LODWORD(v8[0]) == 2 )
    v1 = (__int128 *)&unk_1064D0;
  v4 = v3;
  v7 = *v1;
  sub_653541(&v7);
  return v4;
}


// ---- 5e4ea1 depth 1
__int64 __fastcall sub_5E4EA1(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = sub_5E4C8A();
  if ( !(_BYTE)result )
  {
    if ( !byte_1436281 )
      sub_5D6C90((__int64)&unk_1FC98B, 137, (__int64)&off_13BF9E8);
    sub_5D6C90((__int64)&unk_1FC9CF, 85, (__int64)&off_13BF9E8);
  }
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 12) = a5;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 5;
  return result;
}


// ---- 653bc7 depth 1
__int64 sub_653BC7()
{
  __int64 window; // rax

  window = gtk_widget_get_window();
  return sub_653614(window);
}


// ---- 671c5f depth 1
// attributes: thunk
__int64 __fastcall gtk_window_set_resizable(__int64 a1, __int64 a2)
{
  return __imp_gtk_window_set_resizable(a1, a2);
}


// ---- 6566fd depth 1
_QWORD *__fastcall sub_6566FD(char a1)
{
  _QWORD *result; // rax

  result = sub_651E09(8u, 0x18u);
  *result = 1;
  result[1] = 1;
  *((_BYTE *)result + 16) = a1;
  return result;
}


// ---- 5c0fff depth 1
__int64 __fastcall sub_5C0FFF(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v3; // rt0

  if ( !a1 )
  {
    if ( _InterlockedIncrement64(a2 + 64) > 0 )
      return a1;
LABEL_6:
    sub_620770();
  }
  if ( a1 != 1 )
  {
    v3 = _InterlockedIncrement64(a2 + 14);
    if ( !((v3 < 0) ^ __OFSUB__(a1, 1) | (v3 == 0)) )
      return a1;
    goto LABEL_6;
  }
  if ( _InterlockedIncrement64(a2 + 48) <= 0 )
    goto LABEL_6;
  return a1;
}


// ---- 5e8f04 depth 1
__int64 sub_5E8F04()
{
  return sub_5E8F32(sub_6ACD94);
}


// ---- 51c8f1 depth 1
__int64 __fastcall sub_51C8F1(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return g_object_unref(a1);
  return result;
}


// ---- 519dab depth 1
__int64 __fastcall sub_519DAB(_QWORD *a1)
{
  __int64 result; // rax

  if ( (*a1)-- == 1 )
    return sub_52513E(a1);
  return result;
}


// ---- 671c65 depth 1
__int64 __fastcall sub_671C65(_QWORD *a1)
{
  __int64 result; // rax

  if ( (*a1)-- == 1 )
    return sub_6AF751();
  return result;
}


// ---- 5e721d depth 1
__int64 __fastcall sub_5E721D(void *src, size_t n)
{
  _BYTE dest[400]; // [rsp+8h] [rbp-190h] BYREF

  memcpy(dest, src, n);
  dest[n] = 0;
  return g_quark_from_string(dest);
}


// ---- 4c3758 depth 1
void *__fastcall sub_4C3758(_QWORD *a1, const void *a2, unsigned __int64 a3)
{
  if ( (a3 & 1) != 0 )
    return sub_5C8B43(a1, a2, a3 >> 1);
  else
    return (void *)sub_5CE2F0();
}


// ---- 516a00 depth 1
__int64 __fastcall sub_516A00(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = -a1;
  if ( !__OFSUB__(-a1, 1) )
    return sub_601B54(a1, a2);
  return result;
}


// ---- 51d337 depth 1
__int64 __fastcall sub_51D337(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 == 1 )
    return sub_51C8F1(a2);
  return result;
}


// ---- 5e4e0a depth 1
__int64 sub_5E4E0A()
{
  __int64 monitor; // rax

  monitor = gdk_display_get_monitor();
  return sub_653614(monitor);
}


// ---- 5e4d8e depth 1
__int64 sub_5E4D8E()
{
  __int64 default_screen; // rax

  default_screen = gdk_display_get_default_screen();
  return g_object_ref_sink(default_screen);
}


// ---- 5e4cab depth 1
__int64 __fastcall sub_5E4CAB(__int64 a1, const void *a2, size_t a3)
{
  __int64 v3; // rbx
  __int64 v5[6]; // [rsp+8h] [rbp-30h] BYREF

  sub_5E64C9(v5, a2, a3);
  v3 = gdk_cursor_new_from_name(a1, v5[3]);
  if ( !__OFSUB__(-v5[0], 1) )
    sub_5E616F(v5[0], v5[1]);
  return v3;
}


// ---- 5e4cf2 depth 1
__int64 __fastcall sub_5E4CF2(__int64 a1, _QWORD *a2)
{
  if ( a2 )
    return gdk_window_set_cursor(a1, *a2);
  else
    return gdk_window_set_cursor(a1, 0);
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


// ---- 5d8350 depth 1
void __fastcall __noreturn sub_5D8350(__int64 a1, __int64 a2)
{
  sub_5D6C90(a1, 2 * a2 + 1);
}


// ---- 5d6c90 depth 1
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


