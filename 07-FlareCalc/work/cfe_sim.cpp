// Smoke reproduction of FlareCalc.exe front-end state machine + hidden FP-exception check.
// Mirrors: CRT init stub 0x140001000, wndproc sub_140003B20 (WM_COMMAND), sub_140003A20,
// sub_140008310 (divide functor), SEH filter sub_140002A90 and sub_140006FC0.
#include <windows.h>
#include <xmmintrin.h>
#include <deque>
#include <cstdio>
#include <cwchar>
#include <cstdlib>

static std::deque<double> g_deque;      // qword_1400E9238 block (E9240/48/50/58)
static wchar_t  a0[64]      = L"0";     // 0x1400E2A80 display buffer
static wchar_t  expr[250]   = L"";      // 0x1400E9020 expression buffer
static wchar_t  g_op        = 0;        // word_1400E8F04
static double   g_accum     = 0.0;      // qword_1400E8F08
static unsigned char g_new  = 0;        // byte_1400E8EC4

// ---- 0x140001000 : CRT initializer in .CRT$XI table slot 0x1400D5340 -------
static void unmask_div0(void)
{
    unsigned int csr = _mm_getcsr();
    csr &= ~(1u << 9);                  // btr eax, 9   -> clear MXCSR.ZM
    _mm_setcsr(csr);
}

// ---- 0x140008310 : the '/' std::function body ------------------------------
static double op_div(double a, double b) { return a / b; }

struct Ctx { unsigned long long q0, q1, q2; };
static Ctx     g_ctx;
static unsigned long long g_key = 0xFFFFFFFFull;
static int     g_fired = 0;

// ---- 0x140006FC0 -----------------------------------------------------------
static unsigned long long sub_6FC0(std::deque<double>& d)
{
    if (d.empty()) return 0xFFFFFFFFull;
    double t = d.back(); d.pop_back();
    unsigned long long v21 = (unsigned int)(int)((int)(1.0 * t) - 88224646);
    unsigned long long v25;
    if (!d.empty()) {
        double u = d.back(); d.pop_back();
        v25 = (unsigned int)(int)((int)(10000000.0 * u) - 31428571);
    } else {
        v25 = 0xFFFFFFFFull;
    }
    return v21 | v25;
}

// ---- 0x140002A90 : the __except filter ------------------------------------
static int filter_2A90(EXCEPTION_POINTERS* ep)
{
    if (ep->ExceptionRecord->ExceptionCode != 0xC000008E) return EXCEPTION_CONTINUE_SEARCH;

    std::deque<double> D(g_deque.begin(), g_deque.end());   // loop @ fc.c:1466
    unsigned int a = 0, b = 0, c = 0;
    if (D.size() >= 3) {                                    // fc.c:1478
        std::deque<double> D2(D.begin(), D.end());          // fc.c:1490
        double v21 = D2.back(); D2.pop_back();
        double v22 = D2.back(); D2.pop_back();
        double v23 = D2.back(); D2.pop_back();
        a = (unsigned)(int)(1.0        * v21);              // fc.c:1540
        b = (unsigned)(int)(1.0        * v22);              // fc.c:1552
        c = (unsigned)(int)(10000000.0 * v23);              // fc.c:1560
    }
    unsigned long long v35;
    if (!D.empty()) {
        double v36 = D.back(); D.pop_back();                // fc.c:1575
        v35 = (unsigned long long)(unsigned int)(int)((int)(1.0 * v36) - 8675309) | sub_6FC0(D);
    } else {
        v35 = 0xFFFFFFFFull;
    }
    g_key = v35;
    g_ctx.q0 = (unsigned long long)b | ((unsigned long long)a << 32);  // fc.c:1637
    g_ctx.q1 = c;                                                      // fc.c:1645
    g_ctx.q2 = 0;                                                      // fc.c:1648
    if (v35 == 0) g_fired = 1;                              // sub_140003380 key test @ fc.c:1711
    return EXCEPTION_EXECUTE_HANDLER;
}

// ---- 0x140003A20 -----------------------------------------------------------
static double eval_3A20(wchar_t op, double lhs, double rhs)
{
    double r = 0.0;
    __try {
        switch (op) {
        case L'+': r = lhs + rhs; break;
        case L'-': r = lhs - rhs; break;
        case L'*': r = lhs * rhs; break;
        case L'/': r = op_div(lhs, rhs); break;
        case L'&': r = (double)((int)rhs & (int)lhs); break;
        case L'|': r = (double)((int)rhs | (int)lhs); break;
        case L'^': r = (double)((int)rhs ^ (int)lhs); break;
        }
        g_deque.push_back(r);                                // fc.c:2022
    } __except (filter_2A90(GetExceptionInformation())) {
        r = 0.0;                                             // 0x140003AEF xorps xmm6,xmm6
    }
    return r;
}

// ---- message loop key -> command id (sub_140006690 / sub_140008920) --------
static int key_to_cmd(wchar_t ch)
{
    if (ch >= L'0' && ch <= L'9') return ch + 152;
    switch (ch) {
    case L'+': return 210; case L'-': return 211; case L'*': return 212; case L'/': return 213;
    case L'&': return 300; case L'|': return 301; case L'^': return 302; case L'~': return 303;
    case L'=': case L'\r': return 214;
    case L'c': case L'C': case 27: return 215;
    }
    return -1;
}

// ---- sub_140003B20 WM_COMMAND ---------------------------------------------
static void command(int id)
{
    if ((unsigned short)(id - 200) <= 9u) {                  // fc.c:2614
        if (g_new || (a0[0] == L'0' && a0[1] == 0)) { a0[0] = 0; g_new = 0; }
        size_t n = wcslen(a0); if (n < 0x3C) { a0[n] = (wchar_t)(id - 152); a0[n+1] = 0; }
        n = wcslen(expr);      if (n < 0xFA) { expr[n] = (wchar_t)(id - 152); expr[n+1] = 0; }
        return;
    }
    if (id == 215) {                                          // fc.c:2710 'C'
        a0[0] = L'0'; a0[1] = 0; g_accum = 0; g_op = 0; g_new = 0; expr[0] = 0; return;
    }
    if ((unsigned short)(id - 210) <= 3u || (unsigned short)(id - 300) <= 2u) {  // fc.c:2768
        g_accum = _wtof(a0);
        switch (id) {
        case 210: g_op = L'+'; break; case 211: g_op = L'-'; break;
        case 212: g_op = L'*'; break; case 213: g_op = L'/'; break;
        case 300: g_op = L'&'; break; case 301: g_op = L'|'; break;
        default:  g_op = (id == 301) ? L'|' : L'^'; break;
        }
        size_t n = wcslen(expr); if (n < 0xFA) { expr[n] = g_op; expr[n+1] = 0; }
        g_new = 1; a0[0] = g_op; a0[1] = 0;
        return;
    }
    if (id != 214) return;                                    // fc.c:2916 '='
    if (!wcscmp(expr, L"525+193") || !wcscmp(expr, L"742*186") ||
        !wcscmp(expr, L"931-482") || !wcscmp(expr, L"843*952")) {
        wprintf(L"  [decoy branch hit for \"%s\"]\n", expr); expr[0] = 0; g_op = 0; g_new = 1; return;
    }
    if (g_op) {                                               // fc.c:3281
        double rhs = _wtof(a0);
        double r = eval_3A20(g_op, g_accum, rhs);
        swprintf(a0, 64, L"%.8g", r);
        g_op = 0; g_new = 1; expr[0] = 0;
    }
}

static void type(const wchar_t* s)
{
    for (; *s; ++s) {
        if (*s == L' ') continue;
        int id = key_to_cmd(*s);
        if (id >= 0) command(id);
    }
}

int main(int argc, char** argv)
{
    unmask_div0();
    unsigned int csr = _mm_getcsr();
    wprintf(L"MXCSR after CRT init stub = 0x%04X (ZM bit9 = %u)\n", csr, (csr >> 9) & 1);

    const wchar_t* seq = L"22/7=88224646+0=8675309+0=1/0=";
    if (argc > 1) {
        static wchar_t buf[512]; mbstowcs(buf, argv[1], 511); seq = buf;
    }
    wprintf(L"typing: %s\n", seq);
    type(seq);

    wprintf(L"deque size after run = %zu\n", g_deque.size());
    for (size_t i = 0; i < g_deque.size(); ++i) wprintf(L"  [%zu] = %.17g\n", i, g_deque[i]);
    wprintf(L"display = %s\n", a0);
    wprintf(L"key(v35) = 0x%llX  -> payload %s\n", g_key, g_fired ? L"LAUNCHED" : L"not launched");
    wprintf(L"ctx.q0 = 0x%016llX  (a=hi=%u  b=lo=%u)\n", g_ctx.q0,
            (unsigned)(g_ctx.q0 >> 32), (unsigned)(g_ctx.q0 & 0xFFFFFFFF));
    wprintf(L"ctx.q1 = 0x%016llX  (c=%llu)\n", g_ctx.q1, g_ctx.q1);
    return g_fired ? 0 : 1;
}
