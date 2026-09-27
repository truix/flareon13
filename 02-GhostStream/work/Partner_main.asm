140001070  push    rbp
140001072  push    rbx
140001073  push    r15
140001075  lea     rbp, [rsp-300h]
14000107d  sub     rsp, 400h
140001084  mov     rax, cs:__security_cookie
14000108b  xor     rax, rsp
14000108e  mov     [rbp+310h+var_40], rax
140001095  lea     rcx, Format; "[Partner] Process started.\n"
14000109c  call    sub_140001010
1400010a1  xor     edx, edx; Val
1400010a3  lea     rcx, [rbp+310h+Buffer]; void *
1400010aa  mov     r8d, 100h; Size
1400010b0  call    memset
1400010b5  xor     r15d, r15d
1400010b8  lea     rcx, FileName; "\\\\.\\pipe\\FlareChallenge"
1400010bf  mov     [rsp+410h+hTemplateFile], r15; hTemplateFile
1400010c4  xor     r9d, r9d; lpSecurityAttributes
1400010c7  mov     [rsp+410h+dwFlagsAndAttributes], r15d; dwFlagsAndAttributes
1400010cc  xor     r8d, r8d; dwShareMode
1400010cf  mov     edx, 80000000h; dwDesiredAccess
1400010d4  mov     [rsp+410h+dwCreationDisposition], 3; dwCreationDisposition
1400010dc  call    cs:CreateFileA
1400010e2  mov     rbx, rax
1400010e5  cmp     rax, 0FFFFFFFFFFFFFFFFh
1400010e9  jnz     short loc_14000114E
1400010eb  nop     dword ptr [rax+rax+00h]
1400010f0  call    cs:GetLastError
1400010f6  cmp     eax, 0E7h
1400010fb  jnz     loc_1400016CE
140001101  mov     edx, 1388h; nTimeOut
140001106  lea     rcx, FileName; "\\\\.\\pipe\\FlareChallenge"
14000110d  call    cs:WaitNamedPipeA
140001113  test    eax, eax
140001115  jz      loc_1400016BB
14000111b  mov     [rsp+410h+hTemplateFile], r15; hTemplateFile
140001120  lea     rcx, FileName; "\\\\.\\pipe\\FlareChallenge"
140001127  mov     [rsp+410h+dwFlagsAndAttributes], r15d; dwFlagsAndAttributes
14000112c  xor     r9d, r9d; lpSecurityAttributes
14000112f  xor     r8d, r8d; dwShareMode
140001132  mov     [rsp+410h+dwCreationDisposition], 3; dwCreationDisposition
14000113a  mov     edx, 80000000h; dwDesiredAccess
14000113f  call    cs:CreateFileA
140001145  mov     rbx, rax
140001148  cmp     rax, 0FFFFFFFFFFFFFFFFh
14000114c  jz      short loc_1400010F0
14000114e  lea     rcx, ModuleName; "ucrtbase.dll"
140001155  mov     [rsp+410h+arg_8], rdi
14000115d  call    cs:GetModuleHandleA
140001163  mov     rcx, rax; hModule
140001166  lea     rdx, ProcName; "strlen"
14000116d  call    cs:GetProcAddress
140001173  lea     r9, [rsp+410h+NumberOfBytesRead]; lpNumberOfBytesRead
140001178  mov     qword ptr [rsp+410h+dwCreationDisposition], r15; lpOverlapped
14000117d  mov     r8d, 0FFh; nNumberOfBytesToRead
140001183  lea     rdx, [rbp+310h+Buffer]; lpBuffer
14000118a  mov     rcx, rbx; hFile
14000118d  mov     rdi, rax
140001190  call    cs:ReadFile
140001196  test    eax, eax
140001198  jz      short loc_1400011DE
14000119a  mov     eax, [rsp+410h+NumberOfBytesRead]
14000119e  test    eax, eax
1400011a0  jz      short loc_1400011DE
1400011a2  cmp     rax, 100h
1400011a8  jnb     loc_140001732
1400011ae  lea     rdx, Control; "\r\n"
1400011b5  mov     [rbp+rax+310h+Buffer], r15b
1400011bd  lea     rcx, [rbp+310h+Buffer]; Str
1400011c4  call    cs:strcspn
1400011ca  cmp     rax, 100h
1400011d0  jnb     loc_140001732
1400011d6  mov     [rbp+rax+310h+Buffer], r15b
1400011de  mov     [rsp+410h+arg_0], rsi
1400011e6  mov     rcx, rbx; hObject
1400011e9  mov     [rsp+410h+arg_10], r12
1400011f1  mov     [rsp+410h+var_18], r13
1400011f9  mov     [rsp+410h+var_20], r14
140001201  movaps  [rsp+410h+var_30], xmm6
140001209  call    cs:CloseHandle
14000120f  xor     edx, edx; Val
140001211  mov     dword ptr [rsp+410h+var_3D0], 35875C96h
140001219  mov     r8d, 0DAh; Size
14000121f  mov     dword ptr [rsp+410h+var_3D0+4], 8B397AD7h
140001227  lea     rcx, [rbp+310h+var_21A]; void *
14000122e  mov     dword ptr [rsp+410h+var_3D0+8], 286D0475h
140001236  mov     dword ptr [rsp+410h+var_3D0+0Ch], 0C85856BBh
14000123e  mov     dword ptr [rsp+410h+var_3C0], 0E1DAEE35h
140001246  mov     dword ptr [rsp+410h+var_3C0+4], 37A956A4h
14000124e  mov     dword ptr [rsp+410h+var_3C0+8], 0F9561581h
140001256  mov     dword ptr [rsp+410h+var_3C0+0Ch], 0D340A27h
14000125e  mov     [rsp+410h+var_3B0], 262C82EEh
140001266  mov     [rsp+410h+var_3AC], 0F8A5h
14000126d  call    memset
140001272  mov     eax, [rsp+410h+var_3B0]
140001276  lea     rcx, [rbp+310h+Buffer]; Str
14000127d  movups  xmm0, [rsp+410h+var_3D0]
140001282  mov     [rbp+310h+var_220], eax
140001288  mov     esi, 0DEADBEEFh
14000128d  movups  xmm1, [rsp+410h+var_3C0]
140001292  movzx   eax, [rsp+410h+var_3AC]
140001297  xor     rdi, rsi
14000129a  movups  xmmword ptr [rbp+310h+var_240], xmm0
1400012a1  movups  [rbp+310h+var_230], xmm1
1400012a8  mov     [rbp+310h+var_21C], ax
1400012af  mov     cs:qword_140005678, rdi
1400012b6  call    cs:strlen
1400012bc  mov     r14, cs:qword_140005678
1400012c3  mov     rbx, rax
1400012c6  test    eax, eax
1400012c8  jle     loc_14000140A
1400012ce  movdqa  xmm2, cs:xmmword_140003420
1400012d6  lea     rdx, [rsp+410h+var_39C]
1400012db  movdqa  xmm3, cs:xmmword_140003430
1400012e3  add     r14, 10203040h
1400012ea  mov     r8d, r15d
1400012ed  mov     ecx, 8
1400012f2  nop     dword ptr [rax+00h]
1400012f6  nop     word ptr [rax+rax+00000000h]
140001300  lea     eax, [rcx-8]
140001303  movd    xmm0, eax
140001307  lea     rdx, [rdx+10h]
14000130b  pshufd  xmm0, xmm0, 0
140001310  lea     eax, [rcx-4]
140001313  paddd   xmm0, xmm2
140001317  movd    xmm1, eax
14000131b  pshufd  xmm1, xmm1, 0
140001320  lea     eax, [rcx+4]
140001323  paddd   xmm1, xmm2
140001327  andps   xmm0, xmm3
14000132a  andps   xmm1, xmm3
14000132d  packuswb xmm0, xmm0
140001331  packuswb xmm1, xmm1
140001335  packuswb xmm0, xmm0
140001339  movd    dword ptr [rdx-14h], xmm0
14000133e  packuswb xmm1, xmm1
140001342  movd    dword ptr [rdx-10h], xmm1
140001347  movd    xmm0, ecx
14000134b  add     ecx, 10h
14000134e  pshufd  xmm0, xmm0, 0
140001353  paddd   xmm0, xmm2
140001357  movd    xmm1, eax
14000135b  pshufd  xmm1, xmm1, 0
140001360  andps   xmm0, xmm3
140001363  paddd   xmm1, xmm2
140001367  packuswb xmm0, xmm0
14000136b  andps   xmm1, xmm3
14000136e  packuswb xmm0, xmm0
140001372  movd    dword ptr [rdx-0Ch], xmm0
140001377  lea     eax, [rcx-8]
14000137a  packuswb xmm1, xmm1
14000137e  packuswb xmm1, xmm1
140001382  movd    dword ptr [rdx-8], xmm1
140001387  cmp     eax, 100h
14000138c  jl      loc_140001300
140001392  xor     r14, 0BADF00Dh
140001399  lea     r10, [rsp+410h+var_3A0]
14000139e  mov     r9d, r15d
1400013a1  movzx   r11d, byte ptr [r10]
1400013a5  mov     eax, r9d
1400013a8  cdq
1400013a9  idiv    ebx
1400013ab  movsxd  rax, edx
1400013ae  movzx   ecx, [rbp+rax+310h+Buffer]
1400013b6  add     r8d, ecx
1400013b9  add     r8d, r11d
1400013bc  and     r8d, 800000FFh
1400013c3  jge     short loc_1400013D2
1400013c5  dec     r8d
1400013c8  or      r8d, 0FFFFFF00h
1400013cf  inc     r8d
1400013d2  movsxd  rax, r8d
1400013d5  lea     rcx, [rsp+410h+var_3A0]
1400013da  add     rcx, rax
1400013dd  inc     r9d
1400013e0  movzx   eax, byte ptr [rcx]
1400013e3  mov     [r10], al
1400013e6  inc     r10
1400013e9  mov     [rcx], r11b
1400013ec  cmp     r9d, 100h
1400013f3  jl      short loc_1400013A1
1400013f5  xor     r14, 0BADF00Dh
1400013fc  sub     r14, 10203040h
140001403  mov     cs:qword_140005678, r14
14000140a  xor     r14, rsi
14000140d  lea     r9, [rsp+410h+flOldProtect]; lpflOldProtect
140001412  mov     rcx, r14; lpAddress
140001415  mov     edx, 17h; dwSize
14000141a  mov     r8d, 40h ; '@'; flNewProtect
140001420  call    cs:VirtualProtect
140001426  movups  xmm6, xmmword ptr [r14]
14000142a  mov     ebx, [r14+10h]
14000142e  lea     rdx, [rbp+310h+String]; lpBuffer
140001435  movzx   edi, word ptr [r14+14h]
14000143a  lea     rcx, Name; "COMPUTERNAME"
140001441  movzx   esi, byte ptr [r14+16h]
140001446  xorps   xmm0, xmm0
140001449  mov     dword ptr [r14], 1304C031h
140001450  mov     r8d, 40h ; '@'; nSize
140001456  mov     dword ptr [r14+4], 17501B2h
14000145e  mov     dword ptr [r14+8], 301100E8h
140001466  mov     dword ptr [r14+0Ch], 48C2FE01h
14000146e  mov     dword ptr [r14+10h], 2138C1FFh
140001476  mov     word ptr [r14+14h], 0F375h
14000147d  mov     byte ptr [r14+16h], 0C3h
140001482  movups  xmmword ptr [rbp+310h+String], xmm0
140001489  movups  [rbp+310h+var_270], xmm0
140001490  movups  [rbp+310h+var_260], xmm0
140001497  movups  [rbp+310h+var_250], xmm0
14000149e  call    cs:GetEnvironmentVariableA
1400014a4  lea     rcx, [rbp+310h+String]; lpString
1400014ab  call    cs:lstrlenA
1400014b1  call    cs:IsDebuggerPresent
1400014b7  call    cs:GetTickCount
1400014bd  movzx   eax, cs:word_140003390
1400014c4  lea     r13, Str; "Bxs]bv`^u)TpcnolVjN"
1400014cb  movups  xmm0, cs:xmmword_140003380
1400014d2  mov     word ptr [rbp+310h+var_290], ax
1400014d9  mov     rcx, r13; Str
1400014dc  movzx   eax, cs:byte_140003392
1400014e3  mov     [rbp+310h+var_290+2], al
1400014e9  movups  xmmword ptr [rbp+310h+Str], xmm0
1400014ed  call    cs:strlen
1400014f3  lea     rcx, [rbp+310h+Str]; Str
1400014f7  call    cs:strlen
1400014fd  movups  xmmword ptr [r14], xmm6
140001501  mov     [r14+10h], ebx
140001505  lea     r9, [rsp+410h+flOldProtect]; lpflOldProtect
14000150a  mov     [r14+14h], di
14000150f  mov     edx, 17h; dwSize
140001514  mov     [r14+16h], sil
140001518  mov     rcx, r14; lpAddress
14000151b  mov     r8d, [rsp+410h+flOldProtect]; flNewProtect
140001520  mov     r12, rax
140001523  call    cs:VirtualProtect
140001529  movaps  xmm6, [rsp+410h+var_30]
140001531  test    r12d, r12d
140001534  jle     loc_14000166D
14000153a  mov     ecx, r15d
14000153d  mov     r10, 0FFFFFFFFFFFFFFFFh
140001544  inc     r10
140001547  cmp     [r10+r13], cl
14000154b  jnz     short loc_140001544
14000154d  movzx   edi, r12b
140001551  lea     r11, [rbp+310h+var_240+1]
140001558  mov     rsi, r15
14000155b  mov     r14d, 13h
140001561  lea     r9d, [rdi+r15]
140001565  and     r9d, 800000FFh
14000156c  jge     short loc_14000157B
14000156e  dec     r9d
140001571  or      r9d, 0FFFFFF00h
140001578  inc     r9d
14000157b  movsxd  rax, r9d
14000157e  lea     rdx, [rsp+410h+var_3A0]
140001583  add     rdx, rax
140001586  movzx   ebx, byte ptr [rdx]
140001589  lea     r8d, [rcx+rbx]
14000158d  and     r8d, 800000FFh
140001594  jge     short loc_1400015A3
140001596  dec     r8d
140001599  or      r8d, 0FFFFFF00h
1400015a0  inc     r8d
1400015a3  movsxd  rax, r8d
1400015a6  lea     rcx, [rsp+410h+var_3A0]
1400015ab  add     rcx, rax
1400015ae  movzx   eax, byte ptr [rcx]
1400015b1  mov     [rdx], al
1400015b3  mov     rax, rsi
1400015b6  mov     [rcx], bl
1400015b8  movzx   ecx, byte ptr [rdx]
1400015bb  xor     edx, edx
1400015bd  div     r10
1400015c0  add     rcx, rbx
1400015c3  movzx   eax, dil
1400015c7  add     al, [r11-1]
1400015cb  movzx   ecx, cl
1400015ce  movzx   ecx, [rsp+rcx+410h+var_3A0]
1400015d3  xor     cl, [rdx+r13]
1400015d7  xor     cl, al
1400015d9  lea     eax, [r9+rdi]
1400015dd  mov     [r11-1], cl
1400015e1  and     eax, 800000FFh
1400015e6  jge     short loc_1400015F1
1400015e8  dec     eax
1400015ea  or      eax, 0FFFFFF00h
1400015ef  inc     eax
1400015f1  movsxd  r15, eax
1400015f4  lea     r9, [rsp+410h+var_3A0]
1400015f9  movzx   ebx, byte ptr [r9+r15]
1400015fe  lea     ecx, [r8+rbx]
140001602  and     ecx, 800000FFh
140001608  jge     short loc_140001614
14000160a  dec     ecx
14000160c  or      ecx, 0FFFFFF00h
140001612  inc     ecx
140001614  movsxd  rax, ecx
140001617  lea     rdx, [rsp+410h+var_3A0]
14000161c  add     rdx, rax
14000161f  movzx   eax, byte ptr [rdx]
140001622  mov     [r9+r15], al
140001626  lea     rax, [rsi+1]
14000162a  mov     [rdx], bl
14000162c  add     rsi, 2
140001630  movzx   edx, byte ptr [r9+r15]
140001635  add     rdx, rbx
140001638  movzx   r8d, dl
14000163c  xor     edx, edx
14000163e  div     r10
140001641  movzx   r8d, [rsp+r8+410h+var_3A0]
140001647  movzx   eax, dil
14000164b  add     al, [r11]
14000164e  xor     r8b, [rdx+r13]
140001652  xor     r8b, al
140001655  mov     [r11], r8b
140001658  add     r11, 2
14000165c  sub     r14, 1
140001660  jnz     loc_140001561
140001666  mov     [rbp+310h+var_21A], r14b
14000166d  lea     rdx, SubStr; "@flare-on.com"
140001674  lea     rcx, [rbp+310h+var_240]; Str
14000167b  call    cs:strstr
140001681  mov     r14, [rsp+410h+var_20]
140001689  mov     r13, [rsp+410h+var_18]
140001691  mov     r12, [rsp+410h+arg_10]
140001699  mov     rsi, [rsp+410h+arg_0]
1400016a1  test    rax, rax
1400016a4  jz      short loc_1400016F4
1400016a6  lea     rdx, [rbp+310h+var_240]
1400016ad  lea     rcx, aSuccessDecrypt; "\n[SUCCESS] Decrypted Flag: %s\n"
1400016b4  call    sub_140001010
1400016b9  jmp     short loc_140001700
1400016bb  lea     rcx, aPartnerPipeTim; "[Partner] Pipe timeout.\n"
1400016c2  call    sub_140001010
1400016c7  mov     eax, 1
1400016cc  jmp     short loc_140001717
1400016ce  call    cs:GetLastError
1400016d4  mov     edx, eax
1400016d6  lea     rcx, aPartnerCouldNo; "[Partner] Could not open pipe. Error: %"...
1400016dd  call    sub_140001010
1400016e2  mov     ecx, 7D0h; dwMilliseconds
1400016e7  call    cs:Sleep
1400016ed  mov     eax, 1
1400016f2  jmp     short loc_140001717
1400016f4  lea     rcx, aFailedTryAgain; "\n[FAILED] Try again with better debugg"...
1400016fb  call    sub_140001010
140001700  lea     rcx, Command; "pause"
140001707  call    cs:system
14000170d  mov     rdi, [rsp+410h+arg_8]
140001715  xor     eax, eax
140001717  mov     rcx, [rbp+310h+var_40]
14000171e  xor     rcx, rsp; StackCookie
140001721  call    __security_check_cookie
140001726  add     rsp, 400h
14000172d  pop     r15
14000172f  pop     rbx
140001730  pop     rbp
140001731  retn
140001732  call    sub_140001878
140001737  db 0CCh
