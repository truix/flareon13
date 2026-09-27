"""Glossary of the attack / obfuscation techniques that actually appear in this writeup.

Each entry: term -> (category, definition, "where it showed up").
Categories drive the colour of the badge in the rendered HTML.
"""

CATEGORIES = {
    "obfuscation": "Obfuscation",
    "anti-analysis": "Anti-analysis",
    "crypto": "Cryptography",
    "packing": "Packing & delivery",
    "technique": "Analysis technique",
    "vuln": "Logic flaw",
}

GLOSSARY = [
    # ---- obfuscation -------------------------------------------------------
    ("Opaque predicate", "obfuscation",
     "A computation whose result is fixed but not obvious to a decompiler, used to bulk up code and hide constants. "
     "Typically <code>(G + K1) ^ K2</code> where <code>G</code> is a global the compiler cannot prove is zero, so the "
     "expression survives optimisation even though it always evaluates to a single constant.",
     "FlareCalc: every constant in the binary is wrapped this way around the always-zero global <code>qword_1400E9228</code>."),

    ("Control-flow flattening", "obfuscation",
     "A function's basic blocks are placed in a single dispatch loop driven by a state variable, so the original "
     "if/else and loop structure is destroyed. Each block ends by mutating the state (often <code>state ^= next</code>) "
     "instead of jumping directly to its successor.",
     "NeonOutRun: the XOR key, LZSS parameters and every angle constant are each produced by a separate flattened "
     "state machine; crux: the whole <code>check()</code> function is one <code>br_table</code> with ~678 states."),

    ("String / literal obfuscation (garble)", "obfuscation",
     "Strings are not stored as plaintext but rebuilt at runtime, usually by XORing two immediate buffers or by a "
     "small decryptor function per literal. Defeats <code>strings</code> and any grep-based triage.",
     "crux: Go binary built with <a href='https://github.com/burrowers/garble'>garble</a>, so the AES key and IV only "
     "exist on the stack; NeonOutRun: property names built as <code>q[i] ^= p[i]</code> from two heap buffers."),

    ("Symbol stripping / name mangling", "obfuscation",
     "Function and type names are removed or replaced with random identifiers. In Go the <code>pclntab</code> often "
     "still holds a partial name table even after mangling, which is enough to recover the package layout.",
     "crux: only 329 of 3255 Go function names survive, and the <code>pcHeader</code> magic is deliberately corrupted "
     "to <code>0xA3C41C63</code> so that a naive magic scan fails."),

    # ---- anti-analysis -----------------------------------------------------
    ("Decoy flag", "anti-analysis",
     "A plausible flag-shaped string placed on the obvious success path, so that an analyst who only reaches the "
     "visible 'win' state submits the wrong answer. Often subtly malformed.",
     "NeonOutRun: the victory screen prints <code>decode_this_system_to_win_it@f1are-on.com</code> — note the digit "
     "<code>1</code> in <code>f1are</code>. The real path patches that byte with <code>buf[30] += 59</code>."),

    ("Exception-driven control flow (VEH abuse)", "anti-analysis",
     "Hidden functionality is reached only from an exception handler, so it never appears as a call target and static "
     "cross-references miss it entirely. The handler inspects program state and decides whether to act.",
     "FlareCalc: a handler for <code>EXCEPTION_FLT_DIVIDE_BY_ZERO</code> (<code>0xC000008E</code>) inspects the "
     "calculator's result deque; the hidden path only runs if the last six results are the magic sequence."),

    ("Signature-blob smuggling", "anti-analysis",
     "A payload is stored inside a structure that normal tooling treats as metadata and skips — here the Authenticode "
     "certificate — so the file still looks like a signed binary and the payload is never scanned as code.",
     "FlareCalc: the 529,565-byte 'certificate' is read back from the exe's own Security directory at runtime and "
     "executed; the real stages hide in an X.509 extension under a private OID."),

    ("Red herring", "anti-analysis",
     "Code or data that looks like the solution but is never reached, wasting analysis effort.",
     "NeonOutRun: the JS <code>if (state.y &gt;= 4000) state.blocked = true</code> 'anti-cheat' — no native code ever "
     "reads <code>blocked</code>; crux: unreferenced <code>replaceTable</code> / <code>roundKeysSize</code> type names."),

    # ---- packing & delivery ------------------------------------------------
    ("Multi-stage unpacking", "packing",
     "The real logic is wrapped in several independent transforms, each of which must be identified before the next "
     "becomes visible. Entropy stays high until the last layer, so intermediate stages look like noise.",
     "NeonOutRun: XOR(2-byte alternating key) → LZSS → zstd → raw DEFLATE → JavaScript, four layers over 1942 bytes."),

    ("LZSS", "packing",
     "A dictionary compressor: a control byte's bits say whether each following item is a literal or a "
     "(offset, length) back-reference into the output produced so far. Parameters (offset width, minimum match "
     "length, bit order) vary per implementation and must be recovered.",
     "NeonOutRun: 12-bit offset, length <code>3 + (hi &amp; 0x0F)</code>, control byte read LSB-first."),

    ("Shellcode-in-shellcode", "packing",
     "A shellcode loader whose payload is itself further shellcode, decrypted per-stage so that only the running "
     "stage is ever in plaintext.",
     "FlareCalc: the cert blob is a loader holding 1035 DER records; each real stage is individually decrypted with a "
     "key derived from the user's input and executed as fresh RWX memory."),

    ("Embedded asset map", "packing",
     "A framework packs the web frontend into the binary as a compile-time map from path to compressed bytes. The "
     "pointers commonly live in relocations rather than in the file image, so a naive read sees only zeros.",
     "NeonOutRun: Tauri <code>EmbeddedAssets</code> phf map at <code>0x13B5470</code>, values raw brotli, pointers "
     "supplied by <code>R_X86_64_RELATIVE</code> addends."),

    # ---- cryptography ------------------------------------------------------
    ("API hashing", "crypto",
     "Imports are resolved at runtime by hashing export names and comparing against stored constants, so no import "
     "table or string reveals which APIs are used. Recovering it means identifying the hash and building a rainbow "
     "table from the system DLLs' export directories.",
     "FlareCalc: djb2 with seed <code>0x1505</code> and multiplier 33 over kernel32 exports; the embedded shellcode "
     "uses a second, different hash (<code>ROL64(h,7) + c</code>, case-folded, compared on the low 32 bits)."),

    ("Key derivation from user input", "crypto",
     "The decryption key is computed from whatever the user supplies, so there is no key to find and a wrong input "
     "simply yields garbage rather than a failed comparison — brute force and patching both become useless.",
     "crux: <code>key = SHA-256(plaintext message)</code> decrypts the embedded flag blob; FlareCalc: "
     "<code>MD5(\"a-b-c\" || le32(id))</code> per record, where a, b, c are the three numbers typed into the calculator."),

    ("Pratt primality certificate", "crypto",
     "A recursive proof that <i>p</i> is prime: a witness <i>g</i> plus certificates for every prime factor of "
     "<i>p−1</i>, such that <code>g^(p-1) ≡ 1 (mod p)</code> and <code>g^((p-1)/q) ≢ 1</code> for each factor <i>q</i>. "
     "Verification is cheap; producing one requires factoring <i>p−1</i>.",
     "crux: the input must be a serialised Pratt certificate whose root equals a hard-coded 256-bit prime."),

    ("Endianness trap", "crypto",
     "A stored constant is meaningful in one byte order and meaningless (or, worse, plausible) in the other, so the "
     "natural reading sends the analyst down a dead end.",
     "crux: the 32-byte target read big-endian is composite; read little-endian it is the prime the certificate must "
     "prove. Only the little-endian reading can be certified."),

    ("Floating-point equality gate", "crypto",
     "A check that two accumulated doubles match within a tolerance. Because the terms are scaled by a per-run random "
     "value, the only way to satisfy it is for each term's coefficient to be exactly 1 — which pins every input value.",
     "NeonOutRun: <code>|ACC − TARGET| &lt; 1e-6</code> where <code>ACC = Σ ampₖ·sin(θₖ)</code> and "
     "<code>TARGET = Σ ampₖ</code>, forcing <code>sin(θₖ) = 1</code> and therefore a unique byte per lap."),

    # ---- logic flaws -------------------------------------------------------
    ("Padding-check side channel", "vuln",
     "PKCS#7 unpadding rejects some inputs before the real check runs, which leaks structure: here the requirement "
     "that the pad length be 1..16 constrains the plaintext length and acts as a cheap filter for candidate inputs.",
     "crux: pad must be ≤ 16, so an ostensibly free-length input is pinned to length ≥ 32 before the parser is even "
     "reached — which is why short test messages never got past the unpad."),

    ("Server-authoritative logic", "vuln",
     "The client is a thin renderer and all state lives in the native process, so tampering with the frontend "
     "achieves nothing; the interesting code is behind the IPC boundary.",
     "NeonOutRun: the page only calls <code>invoke('plugin:neon|e', …)</code> per frame and draws the JSON reply."),

    ("Builtin hooking", "vuln",
     "Native code replaces language builtins in the scripting runtime, so innocuous-looking script calls are actually "
     "entry points into hidden native logic.",
     "NeonOutRun: <code>String.prototype.replaceAll</code>, <code>Math.min</code> and <code>Array.prototype.sort</code> "
     "are swapped for Rust callbacks that collect the flag bytes and gate their release."),

    # ---- analysis technique ------------------------------------------------
    ("Instrumented differential tracing", "technique",
     "Rewrite the target to log every function entry, then diff the traces of two inputs to find exactly where "
     "behaviour diverges. Turns an opaque validator into a per-byte oracle.",
     "crux: <code>wasm-opt --log-execution</code> gave per-function call counts; the parser/evaluator call counts "
     "revealed which candidate messages parsed and which reached evaluation."),

    ("Export-table patching", "technique",
     "Append entries to a module's export section so internal functions can be called directly from the host, turning "
     "static analysis into a callable oracle without reimplementing anything.",
     "crux: exporting the literal decryptor let it be invoked from JavaScript, dumping the 64-byte flag blob."),

    ("Emulation of pure functions", "technique",
     "Rather than reverse an obfuscated computation, map the image into an emulator and just call it. Requires "
     "faithful setup — for a PIE binary that means applying relocations so indirect call slots are populated.",
     "NeonOutRun: Unicorn plus the 42,407 <code>R_X86_64_RELATIVE</code> relocations; without them the "
     "<code>__divti3</code> GOT slot is null and execution faults immediately."),

    ("Debugger-driven state inspection", "technique",
     "Break at a chosen instruction in the live process and read the data structures directly, instead of deducing "
     "their contents statically.",
     "FlareCalc: a cdb breakpoint on the exception handler dumped the result deque, which showed exactly which six "
     "values the hidden check compares."),
]
