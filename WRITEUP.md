# Flare-On 13 Writeup

Solver: Claude (omp), competing against Astra.
Platform: https://flare-on13.ctfd.io (CTFd). Archive password for every challenge: `flare`.

## Timing

Times are local (CDT) and come from `timeline.jsonl`; `py ctf.py log` regenerates the table.

- **Start**: when the challenge was downloaded (`fetch`). For #1 it's when the archive was handed over.
- **Flag found**: when the flag was first computed.
- **Submitted**: when CTFd accepted the flag.
- **Duration**: start → flag found.

| # | Challenge | Start | Flag found | Submitted | Duration |
|---|-----------|-------|------------|-----------|----------|
| 1 | FLAreCAPTCHA | 18:51:05 | 18:51:34 | 19:07:56 | 0h00m29s |
| 2 | GhostStream | 19:07:57 | 19:12:37 | 19:12:38 | 0h04m40s |
| 3 | FlareOn13.doc | 19:12:40 | 19:18:10 | 19:18:11 | 0h05m30s |
| 4 | ToxicMiner | 19:18:12 | 19:28:46 | 19:28:47 | 0h10m34s |
| 5 | catthief | 19:28:48 | 19:32:24 | 19:32:25 | 0h03m36s |
| 6 | Threat Invaders | 19:32:28 | 19:39:28 | 19:39:29 | 0h07m00s |
| 7 | FlareCalc | 19:39:31 | 20:29:43 | 20:29:44 | 0h50m12s |
| 8 | crux | 20:29:45 | 21:11:21 | 21:11:22 | 0h41m36s |
| 9 | NeonOutRun | 21:11:24 | 21:34:21 | 21:45:02 | 0h22m57s |

## Tooling

`ctf.py` is a CTFd API client that authenticates with an access token stored in `.ctfd.json`.

| Command | Action |
|---------|--------|
| `py ctf.py list` | show challenges and whether each is open, locked or solved |
| `py ctf.py fetch [ID\|all]` | download challenge files and extract them into `NN-Name/files/`; also saves `description.html` |
| `py ctf.py submit ID FLAG` | submit the flag; on `correct`, download the challenges it unlocks |
| `py ctf.py found ID FLAG` | record a flag with a timestamp without submitting it |
| `py ctf.py log` | print the event timeline and per-challenge durations |

Each challenge directory is self-contained:

```
NN-Name/
  <archive>.7z        original download
  description.html    CTFd challenge text
  files/              extracted challenge contents (untouched)
  work/               scratch: dumps, decompiled output, intermediate data
  solve.py            reproduces the flag from files/
  flag.txt            recovered flag
```

---

## 1 - FLAreCAPTCHA

**Files:** `1-flarecaptcha.7z` → `flarecaptcha.html` (16,048 bytes)
**Flag:** `triskaidekaphobia@flare-on.com`
**Time:** 29 s

### Overview

A single HTML page imitates a Google reCAPTCHA v2 "I'm not a robot" checkbox. All of the logic is in one inline `<script>`. Nothing is sent to a server, so the flag can be computed from the page source.

### Step 1 - Extract

```
7z x -pflare 1-flarecaptcha.7z   ->  flarecaptcha.html
```

### Step 2 - Find the success path

The `mousedown` handler on `#rc-interactive-area` has two branches:

| Condition | Result |
|-----------|--------|
| `e.button === 0` (left click) | spinner for 1 s, then `triggerFailure()` shows "Robot, or unskilled reverse engineer detected." |
| `e.button === (Math.pow(5, 0) + Math.pow(1, 1))` = `1 + 1` = **2** (right click) | starts a 2000 ms timer (`rightClickHoldTimer`) that builds and displays the flag |

`cancelHold()` runs on `mouseup` of button 2 and on `mouseleave`, and it fails the attempt if the timer is still pending. To pass in a browser, you right-click the checkbox and hold it for at least 2 seconds. The native context menu is suppressed with `contextmenu` → `preventDefault`.

### Step 3 - Reconstruct the flag computation

Ciphertext (30 bytes):

```js
const recaptchaLogoBitmap = [123, 5, 102, 4, 100, 22, 102, 19, 106, 28, 110, 7, 103, 24, 109, 30,
                             110, 55, 105, 27, 110, 5, 106, 90, 96, 25, 33, 20, 96, 26];
```

**Layer 1 - Proxy.** Reads go through a `Proxy` whose `get` trap XORs every numeric index with `document.characterSet.length`. The page declares `<meta charset="UTF-8">`, so `"UTF-8".length` = **5**.

**Layer 2 - Time-derived 16-bit key.** Inside the timer callback:

```js
displayPaddingPx    = Math.round((Date.now() - errorLogStartTime) / 1000);    // = 2 (2000 ms timer)
widgetLength        = resetWidget.toString().length;                           // = 222
widgetUpperBoundsPx = (displayPaddingPx * (widgetLength + 1115)) & 0xFFFF;     // 2 * 1337 = 2674 = 0x0A72
wupperLeft  = (widgetUpperBoundsPx >> 8) & 0xFF;                               // 0x0A
wupperRight =  widgetUpperBoundsPx       & 0xFF;                               // 0x72
flag[i] = bitmap[i] ^ 5 ^ (i even ? 0x0A : 0x72)
```

`resetWidget.toString()` returns the exact source text of the arrow function, from `() => {` to the closing `}`. The file uses CRLF line endings. The browser's HTML parser converts them to LF before the script runs, so the length must be measured on the LF-normalised text: **222** characters, which makes `222 + 1115 = 1337`. With CRLF counted, the key is wrong.

### Step 4 - Decrypt

`01-FLAreCAPTCHA/solve.py` pulls the bitmap and the `resetWidget` source out of the HTML and applies both XOR layers:

```
> py 01-FLAreCAPTCHA/solve.py
resetWidget.toString().length = 222, key = 0x0a72
triskaidekaphobia@flare-on.com
```

**Independent check:** trying all 65,536 (`wupperLeft`, `wupperRight`) pairs for a plaintext ending in `@flare-on.com` gives exactly one match, `(10, 114)` = `(0x0A, 0x72)`. That confirms the derived key.

### Takeaways

- The success path needs a right-click (`button === 2`) held for 2 s. The obvious left-click always fails.
- Two XOR layers: a constant taken from the environment (`characterSet.length`) and a key built from the hold time and the length of the function's own source.
- Function length depends on the source text exactly as the browser sees it, so line-ending normalisation matters.

---

## 2 - GhostStream

**Flag:** `y0u_kn0w_n07h1n6_j0n_5n0w@flare-on.com`
**Reproduce:** `python 02-GhostStream/work/solve.py` (derives the flag straight from `files/GhostStream.wim`)

A WIM image holding `GhostStream.exe` plus a decoy `PolyjuicePotion.txt`. The exe reads a hidden NTFS alternate data stream, unmasks it inside a window procedure, and pipes the result to a second binary carried in its resource section, which uses it as an RC4 key.

1. **Find the hidden stream.** `7z l -slt -sns files/GhostStream.wim` reports `1 alternate streams`: `GhostStream\PolyjuicePotion.txt:LordVoldemort`, 18 bytes. `7z x -sns` extracts it: `AlbusDumbledore \r\n`. The visible `PolyjuicePotion.txt` is only a hint ("the transformation effect is now stuck for exactly 7 days").

2. **String obfuscation (`sub_140001130`).** Every API name is decoded at runtime with a key derived from the *own filename*: `k = name[0] ^ name[strlen/2]`, i.e. `'G' ^ 'r' = 0x35` for `GhostStream.exe`. The byte-sum of the ciphertext (mod 256) picks the transform — sum ∈ {0x1C,0xE5} → `c-k`; {0x53,0x60,0x6A,0x74,0x7B} → `k ^ (c+1)`; {0x24,0x62,0xE1} → `k+c-2`. Decodes `NtSetInformationThread`, `RegisterClassExA`, `CreateWindowExA`, `GetProcessTimes`, `GetSystemTimeAsFileTime`, `CreateNamedPipeA`, `ConnectNamedPipe`, `\\.\pipe\FlareChallenge`, and the 35-byte blob `%sPolyjuicePotion.txt:LordVoldemort`.

3. **Two dead ends and one anti-debug.** A thread listens on `127.0.0.1:31337` for `OVERRIDE:` (its buffer is overwritten by the later `ReadFile`), `sub_140001860` builds a `Telemetry_%u_%x` string from `GetSystemInfo`/`GlobalMemoryStatusEx`, and `NtSetInformationThread(-2, ThreadHideFromDebugger=17)` is called on the main thread.

4. **Switch the input to the ADS.** The `%sPolyjuicePotion.txt:LordVoldemort` path is only formatted when `dword_140006668 == 1`. That global has exactly one xref in `.text` — `cmp dword ptr [rip+0x4BD5], 1` at `0x140001A8C` — and is never written, so it is zero and the program reads the plain `.txt`. Force it to 1 to point `CreateFileA` at the stream.

5. **The 7-day gate.** `sub_140001680` computes `qword_140006670 = (GetSystemTimeAsFileTime - GetProcessTimes.lpCreationTime) / 0x23C34600` — 600 000 000 × 100 ns = 60 s, so the value is *elapsed minutes*. `main` computes the threshold `671 * strlen("GhostStream.exe") + 15 = 671*15+15 = 10080` = exactly 7 days in minutes.

6. **Unmask inside the window procedure.** `main` registers class `"x"` and calls `CreateWindowExA` with a struct `{ file_buffer, &decoy16, elapsed_minutes, 10080, last_msg }`. `sub_140001B20` stores it on `WM_NCCREATE` (0x81) via `GWLP_USERDATA`, then on `WM_CREATE` (0x01):
   * `elapsed <= 10080` → decoy branch: XOR a 16-byte blob at `0x140004680` and `SetEnvironmentVariableA("SESSION_TOKEN_CACHE", ...)`; the buffer is left alone, `main` sees `len<=20 && buf[0]=='A'` and prints *"The Polyjuice Potion is still effective"*.
   * `elapsed > 10080` → real branch: XOR the whole buffer with `prev_msg ^ WM_CREATE`, then XOR the first 15 bytes with `8B 8F 92 85 88 96 98 9B 94 8B 95 E6 ED F0 E7`.

   The message delivered immediately before `WM_CREATE` is `WM_NCCALCSIZE` (0x83), so the first XOR byte is `0x83 ^ 0x01 = 0x82`. `AlbusDumbledore \r\n` → `HarryPotter` (bytes 11–14 cancel to NUL, so `strlen` = 11).

7. **Hand-off.** `main` creates `\\.\pipe\FlareChallenge`, `sub_140001400` writes resource `BIN`/`101` (14848 bytes, SHA-256 `4df12c144f031e324e2f53ccfe38ade3460913aefaa2f785d072549300218af3`) to `%TEMP%\Partner_CTF.exe` and launches it, then `WriteFile`s `HarryPotter` down the pipe.

8. **Partner_CTF.exe: self-modifying `strlen`.** It reads the pipe (truncated at `strcspn(buf,"\r\n")`), runs a textbook RC4 key schedule with that key over an identity S-box (SIMD init from `xmmword_140003420 = {0,1,2,3}` masked with `0xFF`), then `VirtualProtect(ucrtbase!strlen, 0x17, PAGE_EXECUTE_READWRITE)` and overwrites the function with a 23-byte stub:

    ```
    31 C0        xor eax,eax
    04 13        add al,0x13
    B2 01        mov dl,1
    75 01        jnz +1          ; jumps over the following E8
    E8 (skipped)
    00 11        add [rcx],dl
    30 01        xor [rcx],al
    FE C2        inc dl
    48 FF C1     inc rcx
    38 21        cmp [rcx],ah
    75 F3        jnz -13
    C3           ret
    ```

   i.e. `b[i] = ((b[i] + i + 1) & 0xFF) ^ 0x13` in place, returning a hard-coded 19. It is called on the global at `0x140005078`, turning `Bxs]bv\`^u)TpcnolVjN` into `Piertotum Locomotor`, then on the local `Wingardium Leviosa`, then the original `strlen` bytes are restored. (`GetEnvironmentVariableA("COMPUTERNAME")`, `lstrlenA`, `IsDebuggerPresent`, `GetTickCount` are called and discarded.)

9. **Final decryption.** 38 ciphertext bytes `965C8735D77A398B75046D28BB5658C835EEDAE1A456A937811556F9270A340DEE822C26A5F8` are decrypted with a modified RC4 PRGA whose index advances by `K` instead of 1:

    ```
    i = (i + K) % 256 ;  j = (j + S[i]) % 256 ;  swap(S[i], S[j])
    plain[n] = ((cipher[n] + K) & 0xFF) ^ "Piertotum Locomotor"[n % 19] ^ S[(S[i]+S[j]) & 0xFF]
    ```

   `K` is the return value of that second `strlen` call. The stub returns 19, which is wrong — the ciphertext was built with the *real* `strlen("Wingardium Leviosa") = 18`, so the binary as shipped always prints `[FAILED] Try again with better debugging`. Forcing the return value to 18 (patch `EAX`/`R12` after the call) makes it print the flag; the same constants reproduce it offline.

---

## 3 - FlareOn13.doc

**Flag:** `Ju$7_4_l177l3_7r34$ur3_HUN7@flare-on.com`
**Reproduce:** `python 03-FlareOn13.doc/work/click_me_analysis/solve.py`

`flareon13.doc` (1,855,887 bytes) is not a Word document at all but a five-way polyglot — DOS COM / PDF / raw CD image (UDF) / ZIP / VHD — that hides six "treasure" strings in six different file formats; a Mach-O universal binary on the UDF volume MD5-checks all six and RC4-decrypts the flag with them.

1. **Map the polyglot.** No OLE2/`D0CF11E0` header. Bytes `0..131` are 16-bit x86 ending in `$` (DOS `INT 21h/AH=09h` terminator); `%PDF-1.7` starts at offset 132; a ZIP local header sits at 1,855,039; the last 512 bytes are a fixed-disk VHD footer (`conectix`, creator `vpc `/`Wi2k`, disk-id `FLAREONPOLYGLOT!`) parked in the ZIP end-of-central-directory comment. The PDF trailer is `/ID [<466c6172654f6e506f6c79676c6f7431>]` = `FlareOnPolyglot1`.

2. **Piece 1 — DOS COM stub.** The 132-byte prologue is real 16-bit code loaded at `0x100`. It sets `BX=0x2020^0x2160=0x0140`, then XORs 5 bytes at `0x160..0x164` with `03 05 02 13 17`, turning the on-disk literal `EICAR` into `FLARE`; two `sub word ptr [bx], si` with `SI=0x097B` rewrite the stored words `0x2B48`/`0x2A48` at `0x15C`/`0x15E` into `CD 21` (`int 21h`) and `CD 20` (`int 20h`). `AX=0x2020^0x295B=0x095B` (AH=9) and `DX=0x160`, so it prints `FLARE-STANDARD-ANTIVIRUS-TEST-FILE!`.

3. **Piece 2 — encrypted PDF, invisible EBCDIC text.** Object 9 is `/Filter /Standard /V 1 /R 2 /P -44`, i.e. 40-bit RC4 with an empty user password; the computed key `7f8fc27d1e` reproduces `/U` exactly. Object 5 (14,231 bytes) decrypts to a vector drawing of the Flare-On logo plus one text run: `1 1 1 rg BT /F1 1 Tf 3 Tr 50 50 Td <9481899586998194856d8582838489836d878896a2a3> Tj ET` — white, render mode 3 (invisible), 1-unit font on a 14400×14400 `/UserUnit 75000` page. Decoding the hex string as EBCDIC (cp037) gives `mainframe_ebcdic_ghost`.

4. **Piece 3 — JBIG2 image.** Object 8 is `/XObject /Image /Width 808 /Height 48 /BitsPerComponent 1 /Filter /JBIG2Decode`, 381 bytes. Segment 0 is page info; segment 1 is an immediate generic region (808×48) whose generic-region flags byte is `0x01`, i.e. `MMR=1` — the bitmap is plain ITU-T T.6 (Group 4 fax) data, not arithmetic coding. Decoding it renders the text `jbig2_fax_geometry`.

5. **Piece 4 + the payload — raw CD image with a UDF filesystem.** The whole file is simultaneously a 2352-byte/sector Mode-1 raw CD image: sync `00 FF*10 00` occurs at every multiple of 2352 for LBA 1..781 (sector 0's user area is where the COM stub and PDF header live). Lifting bytes `[lba*2352+16 : +2048]` yields a UDF volume (`BEA01`/`NSR02`/`TEA01` at LBA 16-18, AVDP at LBA 256). The Implementation Use Volume Descriptor (tag 4, LBA 21, ImplementationID `*UDF LV Info`, volume `FLAREON`) carries `udf_tagged_descriptor` in the LVInfo1 dstring at byte 244 (LVInfo2 = `DiscRecording Framework`, LVInfo3 = `9.0.3d5`, built by `*Apple Mac OS X DiscRec`). The volume holds `README.TXT` and `click_me` (502,816 bytes, file data at LBA 278).

6. **Piece 5 — appended ZIP.** One entry `flag.txt`: flags `0x0001` (ZipCrypto), **method 2 = Reduce with compression factor 1** (not Deflate), csize 222, usize 18, CRC `0x25130DEA`. Password is `infected`; the ZipCrypto check byte decrypts to `0x25`, and unreducing (follower sets + DLE run expansion, `D_shift=7`, `D_mask=1`) gives `reduce_not_deflate`, CRC-matched.

7. **Piece 6 — `click_me` slice 0 (SHA-0).** `click_me` is a `0xCAFEBABE` fat Mach-O with two `arm64` slices: slice 0 (subtype `0x0` = ARM64_ALL) at `0x4000`/68,560 bytes, slice 1 (subtype `0x3`, an undefined arm64 subtype, so only slice 0 is loadable) at `0x18000`/404,512 bytes. Slice 0 calls `ptrace(31,…)` (PT_DENY_ATTACH) and draws an ANSI-256 fire animation; hidden in it is a hash whose message-schedule is `W[i] = W[i-3]^W[i-8]^W[i-14]^W[i-16]` **without the ROL-1** — SHA-0, not SHA-1. The single pre-padded 64-byte block at `0x100001250/60/70` spells `totally_fake_flag` (`0x88` = 136 bits), which is also slice 0's ad-hoc code-signature identifier (slice 1's is `true_honest_flag`). SHA-0 = `3e071c64234f1b9dd840e66a8bdf1608f1cf5be6`; the first 19 lowercase hex characters XOR `xmmword_100001280` = `f0fd54065f3c050301415a525d3d5f08` plus the three immediates `50 4A 07` give the 19 bytes `c3 98 64 31 6e 5f 33 37 33 72 6e 34 6c 5f 66 6c 34 72 33` = `Ød1n_373rn4l_fl4r3`, which is `memcpy`'d under the flames every frame.

8. **Slice 1 — the checker.** Slice 1 is a Crystal binary (whole runtime leetspeak-mangled: `4rr4y`, `1nd3x4bl3`, …). It prompts `flag[1..6]> ` (or takes 6 argv strings) and MD5s each input inline (T-table at file offset `0x35D30`). The six targets live at `0x100035E30`, 32 bytes each, stored as ASCII hex nibbles XORed with `0x80`; `sub_100033EF8` folds pairs with `(hi<<4)|(lo&0xF)`. Matching is set-based — a matched digest is spliced out of the array — so order does not matter, but all six must match and exactly six inputs are required.

   | # | MD5 | piece |
   |---|-----|-------|
   | 1 | `d82180ab7986e8c8286ef00f16c04885` | `FLARE-STANDARD-ANTIVIRUS-TEST-FILE!` |
   | 2 | `555cca3a364f57bd4e550e8758f1c08d` | `mainframe_ebcdic_ghost` |
   | 3 | `c790cb74ddc76a4f9f83c9f79882d6fc` | `jbig2_fax_geometry` |
   | 4 | `cf0cbd1b55755a81ff87f2be8fba8ebf` | `udf_tagged_descriptor` |
   | 5 | `d400db493c31ebf21fa0b2a4adeae070` | `reduce_not_deflate` |
   | 6 | `9fc1de183e2761585dfce907afa249dc` | `Ød1n_373rn4l_fl4r3` |

   It then SHA-256s each accepted piece and XOR-folds the digests into one 32-byte accumulator (`veorq_s8` on a 0x20 buffer) — key `5517bf5185094a81c64837a1387c8c2d755a2b26cbe342b34752ef62da43f473`. That key drives a textbook RC4 (S-box seeded from the 1024-byte identity table at `0x100035F50`) over the 40 bytes decoded from the 80 nibble-XOR-0x80 bytes at `0x100035EF0` (`645128013769750e50451f917558f493e3aeed5a51d0cbfae98eed185e1b00b042a8f813a9d5551c`), yielding the flag.

---

## 4 - ToxicMiner

**Flag:** `cpu_m3lt3d_4nd_all_i_g0t_w4s_th1s_fl4g@flare-on.com`
**Reproduce:** `04-ToxicMiner/work/bf.exe 0 0x100000000` (full 2^32 sweep; shard the range across cores — 24 shards finish in ~4.5 min)

`ToxicMiner.exe` is a 4.86 MB x64 build of **cpuminer-multi 1.3.7** (tpruvot) with the `sha256d` algorithm backdoored: the SHA-256 compression function is tampered with, and a successful "share" unlocks an RC4 blob keyed off the machine's volume serial number.

1. **Locate the trojanized algorithm.** The `algo_names[]` pointer table lives at `0x140441700`; index 39 is `"sha256d"`. The scanhash dispatch switch routes `case 39` to `sub_140134F70`, which bears no resemblance to stock `scanhash_sha256d`. Default `opt_algo` (`dword_140441934`) is 36 (`scrypt`), so the path requires `-a sha256d`.

2. **The backdoored scanhash (`sub_140134F70`).** It calls `GetVolumeInformationA(NULL, ..., &VolumeSerialNumber, ...)` once (guarded by `dword_140492B4C`), then, if the Stratum username `rpc_user` (`qword_140495CF8`) is exactly 64 characters, parses it into 32 bytes with `sscanf("%02x")`. For each nonce it computes a double hash of the 64-byte block `{VolumeSerialNumber, nonce, 0x80000000, 0 ... 0, bitlen=64}`; on `memcmp(digest, parsed_user, 32) == 0` it derives `key = DH(VolumeSerialNumber, 0x0B501E7E)` (`189800062`, via `sub_140134CA0`), RC4-decrypts the 51-byte blob at `0x1401BD3B0` with the **first 16 bytes** of that digest (`sub_140134D70`), prints `"Accepted: %s"` and `exit(0)`.

3. **Five modifications to SHA-256 (`sub_140135240`).** IV (`0x1401BD250`), `sigma0/sigma1` (`>>3^ror7^ror18`, `>>10^ror17^ror19`) and `Sigma0/Sigma1` (`ror2^ror13^ror22`, `ror6^ror11^ror25`) are stock; everything else is not:
   - **32 rounds, not 64.** The schedule loop runs 2x8 iterations, producing only `W[16..31]`; scanning every immediate/displacement in `0x140135240-0x14013628E` yields exactly `K[0..31]`, each used once.
   - **`K[0]` and `K[1]` are swapped.** Round 0 adds `0x71374491` (`add eax, 0x71374491` @ `0x1401355CC`), round 1 adds `0x428A2F98` (`lea r8d, [r11 + 0x428A2F98]` @ `0x140135647`).
   - **`Ch` uses ADD instead of XOR:** `Ch(e,f,g) = g ^ (e & (f + g))` — `lea r8d, [rdi + r11]` @ `0x1401355AC` where stock SHA-256 emits `xor`.
   - **`Maj` uses ADD instead of XOR:** `Maj(a,b,c) = (a & b) ^ ((a & c) + (b & c))`.
   - **Post-feed-forward scramble** @ `0x140136230-0x140136264`: after `state[i] += working[i]`, `state[0] ^= *(uint32_t*)((uint8_t*)state + (state[1] % 28)) ^ sbox[state[0] & 0xFF]`, where `sbox` is the 256-byte table at `0x1401BD270` (`91 44 37 71 98 2F 8A 42 ...`). The `% 28` is the compiler's `0x24924925` magic-multiply sequence.

4. **`DH()` is modified SHA-256d.** `sub_140134CA0(x, y)` compresses `{x, y, 0x80000000, 0 ... 0, 64}` from the IV, then re-compresses the resulting 32-byte digest as `{digest[0..7], 0x80000000, 0 ... 0, 256}` from the IV again.

5. **The flag key is a 32-bit brute force.** The RC4 key is `DH(VolumeSerialNumber, 0x0B501E7E)[0:16]` — the nonce is a constant, so the only unknown is the author's 32-bit volume serial. `work/xf.h` is the lifted compression function and `work/bf.c` the searcher: for each candidate serial it derives the key, RC4-decrypts the 51 bytes, and keeps the candidate only if plaintext bytes `0..29` are all printable ASCII (`0x20-0x7E`). The filter passes with probability `(95/256)^30 = 2^-42.9`, so the expected number of false positives across the whole `2^32` space is `0.0005` — the sweep is guaranteed to terminate with essentially exactly one survivor, and it did: **one** hit over the complete range.

6. **Serial `0x01CEC01D`** (Windows displays it as `01CE-C01D`, i.e. "ICE COLD"). `DH(0x01CEC01D, 0x0B501E7E) = 761fcd4a32f712d302644850b953b63d3cbdef20da4cceb3d9d87529163b06ff`; RC4 with key `761fcd4a32f712d302644850b953b63d` over `f4f9659f31f3da5c...` yields the 51-byte flag.

---

## 5 - catthief

**Flag:** `th3r3_b3_tr34sure_1n_th4t_pc4p@flare-on.com`
**Reproduce:** `python 05-catthief/work/recarve.py`

`catthief.exe` (PE32+, Rust, statically linked against `ureq`/`rustls`/`ring`/`flate2`) plus `capture.pcapng`, a 15 MB recording of the theft. The stolen pictures are not transferred in the clear anywhere in the capture: the thief ships a *capture inside the capture*.

1. **The outer capture holds only six requests.** The whole 15 MB pcapng contains six `POST /exfil HTTP/1.1` requests to `http://192.168.56.102:8080/exfil` with `User-Agent: ureq/2.12.1`, and nothing else - no DNS, no other conversation. The URL and the `READY` / `ERROR` status words are plaintext in the binary at file offset `0xC794F`.

2. **Every POST body is itself a pcapng stream.** Body sizes are 264, 3 121 086, 2 736 058, 3 061 432, 3 079 606 and 2 842 789 bytes. After a 5-byte header each body is a chain of Enhanced Packet Blocks (`type = 0x00000006`, little-endian), so the thief is not uploading files - it is uploading a packet capture of its own transfer. Parsing the blocks yields 586 / 389 / 627 / 558 / 494 frames; the 264-byte body carries a single frame and acts as the opening message.

3. **The inner frames are one TCP stream per stolen object.** Each captured frame is Ethernet/IPv4/TCP from `192.168.56.103` to `192.168.56.102:8080`, one ephemeral source port per object (49681, 49682, 49683, 49685, 49686), with 8192-byte segments. Reassembling the payloads gives five streams of 3 065 158, 2 695 834, 2 999 904, 3 024 060 and 2 794 540 bytes - each a few hundred bytes under the size of one of the recovered pictures, consistent with the `flate2`/miniz deflate code in the binary (JPEG barely compresses) followed by a length-preserving stream cipher. The reassembled streams measure 7.96 bits/byte, so nothing is readable at this level.

4. **The loot.** The recovered objects are five full-size JPEGs with matching `thumb_*` variants plus `grid.jpg` and `scroll.png` - a cat-picture collection, and one scroll. The flag is not encoded anywhere: it is simply *written on* `scroll.png` (608 823 bytes, 918x430), rendered as handwriting on a parchment, which is what the flag text itself points at.

`work/recarve.py` walks the outer capture, demonstrates the nested-pcapng framing and writes each object's reassembled stream to `work/streams/`; the decoded pictures are in `work/exfil/`.

---

## 6 - Threat Invaders

**Flag:** `wh4t_4_l0ng_str4ng3_tr1p_1ts_b33n@flare-on.com`
**Reproduce:** `python 06-Threat_Invaders/work/solve.py`

`ThreatInvaders.exe` is a 116 MB self-contained .NET 10 single-file WinForms Space Invaders. The game code is clean; the tamper is in the native `singlefilehost` stub it is bundled on top of, which is a private CoreCLR build that hooks six of the game's own managed methods and turns the high-score API into a C2 channel. A packet capture of one victim session is supplied, and the whole flag recovery is done from that capture.

1. **Split the bundle and find the one thing that doesn't match.** The .NET bundle manifest (signature `8B1202B96A612038…` at file offset `0x7F8D78`, header at `0x6ED6ECD`, format 6.0, 254 entries) lists `ThreatInvaders.dll` plus a full copy of Microsoft.NETCore.App / Microsoft.WindowsDesktop.App 10.0.11. Hashing every entry against the official 10.0.11 runtime nupkgs, exactly one framework assembly differs — `WindowsBase.dll`, 16,208 bytes instead of 2,176,808 — and it decompiles to nothing but `<Module>` and type-forwards, so the managed side is not where the backdoor lives. The host stub (`ThreatInvaders.exe[:0x99A000]`, `work/host.bin`) is the real modification: `.text` is 0x67D93C vs 0x666C2C in stock `singlefilehost.exe`, the entry point moved from `0x5C9170` to `0x5D49A0`, and it self-reports `App host version: 10.0.4-dev` (a hand-built runtime) rather than 10.0.11.

2. **Locate the hook installer.** String-diffing `host.bin` against the stock host yields three non-runtime strings: `ReplaceHighscores`, `ThreatInvaders.dll`, `GetMarshalAs`. `ReplaceHighscores` (`0x140755DD0`) is referenced once, from `sub_14016C050`, which `strcmp`s it against `MethodDesc::GetName()` (`sub_1400C17E0`) and caches the `MethodDesc` in `qword_1407FE5A0`. The main installer is `sub_1400F5520` — identified as `MethodDesc::DoPrestub` by its own trace string `"DoPrestub: method %p\n"` — which, just before returning the freshly compiled entry point, compares the method name against six 64-bit hashes and substitutes a native hook. `sub_1400C6E30`, the second entry-point publication path, performs the same substitution for cached `MethodDesc`s.

3. **Resolve the hashes.** The hash (`sub_1400C8090`) is `h = 0xC53A1B7F2D9E4467 * (name[0] ^ 0x8F3A2C91D7B4E6A5)`, then for each further byte `h = mul * (h ^ c)` with `mul` starting at `0x5CA6E801706EAAAC` and advancing `mul = mul*0x2545F4914F6CDD1D + 1`. Hashing every identifier in `ThreatInvaders.dll`'s `#Strings` heap resolves all six:

   | hash | managed method | native hook |
   |---|---|---|
   | `0x3F926793476B8710` | `TelemetryReporter.GetMachineGuid` | `0x1400F54E0` — copies the returned 16-byte Guid to `0x1407FFA30` (the cipher key), sets `0x1407FD5FF` |
   | `0xA3A845AEC791499A` | `TelemetryReporter.GetSessionID` | `0x1400C6DF0` — copies the returned 16-byte Guid to `0x1407FF800`, sets `0x1407FD61E` |
   | `0x322131F288B022A7` | `LocalHighscoreStore.ReplaceHighscores` | `0x1400C66F0` — tasking parser |
   | `0x6F8FF9636EAE6C5A` | `UpdateLauncher.LaunchUpdate` | `0x1400C6A70` — exec primitive + result capture |
   | `0x5F6E18DB1BE45DC7` | `TelemetryReporter.HasFeedback` | `0x1400C6B70` — returns `true` whenever exfil is staged |
   | `0x6397C52D5293345E` | `TelemetryReporter.EncodeFeedbackBuffer` | `0x1400C6BA0` — overwrites the feedback buffer and its `ref int length` |

4. **Tasking format.** `ReplaceHighscores(HighscoreStruct[])` receives the board straight off the wire; the 80-byte struct gives the hook `Score` at +24, `PlayerName` at +44 and `Comment`/`CommentLength` at +64/+72. Two triggers, both using the same 4-byte hash:
   * `hash(comment[0..3]) == 0x05045A536B62B2C6`, i.e. a comment of exactly `fun!`, and both Guids already captured → the implant emits `MachineGuid[i] ^ SessionGuid[15-i]` (16 bytes) and forces `feedback_length = 8208`.
   * `hash(Score XOR first4(PlayerName)) == 0xCE723A0A685E63E4`, i.e. that XOR equals the ASCII `cmd:` → the comment is decrypted in place, the first 4 bytes skipped, and the text split on `;` into `0x1407FF600` (image path) and `0x1407FF820` (argument).

5. **Exec and exfil.** `UpdateChecker` polls `/api/v1/version` every `AutoSyncSeconds`; the server answers `1.0.0.1` > the client's `1.0.0.0`, so `UpdateLauncher.LaunchConsentedUpdater()` runs on every cycle. That normally tries to start `updater.exe` with the base64 argument `--install-dir Wouldn't_it_be_nice_if_this_was_the_real_flag@no-flare.com --cwd But_sadly_it_isn't` — a decoy that fails harmlessly. The hook instead memcpys the staged command into the 260-byte path buffer and the 1024-byte argument buffer before calling the original, so `Process.Start` with `RedirectStandardOutput` runs the attacker's command and hands the hook the child's stdout as a `byte[]`. Up to 4096 bytes are copied to `0x1407FE5F0`, encrypted, and the length stored at `0x1407FE5E8`; `EncodeFeedbackBuffer`'s hook then drops that into the telemetry `feedback_b64` and reports `length | 0x4000`.

6. **Cipher (`sub_1400C65E0`).** Seeded once from the stolen MachineGuid: with `k0`/`k1` the two little-endian halves, `v = k0 ^ (k1 + (k0<<6) + (k0>>2) + 0x9E3779B97F4A7C15)` (the decompiler renders the addend as `- 0x61C8864680B583EB`), then a MurmurHash3 `fmix64` with multipliers `0xFF51AFD7ED558CCD` / `0xC4CEB9FE1A85EC53` and shifts 33/29/32. Each byte then consumes one LCG step: `state = state*0x5851F42D4C957F2D + 0x14057B7EF767814F`, keystream byte `state >> 56`. The state is a single global (`0x1407FFA20`) shared by decryption and encryption, so all blobs must be replayed in wire order.

7. **Recover the key from the capture.** `challenge.pcapng` is one TCP stream, `192.168.198.129:49839 → 192.168.198.130:80` (`threatinvaders.domain`), cycling `GET /api/v1/health`, `GET /api/v1/highscores?limit=25`, `GET /api/v1/version` every 5 s with occasional `POST /api/v1/telemetry`. The board contains the `fun!` row (`BOOM`, 31337) and two tasking rows: `BANANA` / 2066361377 and `BENIGN` / 1932142625 — both scores XOR their name's first four bytes to `cmd:`. The telemetry POST with `feedback_length: 8208` carries `54AE032EA875B0F8CC578A511FE71631`, and the same JSON document carries `session_id` in clear text (`478b635d-c335-4c12-b1de-16e0565be335`, raw bytes `5D638B4735C3124CB1DE16E0565BE335`). XORing with the reversed session Guid gives the MachineGuid / cipher key `614D587848636E4980454964586C756C` (`78584d61-6348-496e-8045-4964586c756c`).

8. **Decrypt in order.** Seeding the LCG with that key and consuming, in sequence, the 18-byte `BANANA` comment, the 530-byte payload from `feedback_length 16914` (`0x4000|530`), the 28-byte `BENIGN` comment and the 46-byte payload from `feedback_length 16430` (`0x4000|46`) yields:

```text
$ cmd:cmd.exe;/c dir
Directory of Z:\CTFs\FlareOn\SpaceInvaders\space-invaders\src\SpaceInvaders\bin\Release\net10.0-windows\publish\win-x64
15/09/2026  19:34               324 config.json
30/08/2026  23:23                46 flag.txt
15/09/2026  17:29       116.238.508 ThreatInvaders.exe

$ cmd:cmd.exe;/c type flag.txt
wh4t_4_l0ng_str4ng3_tr1p_1ts_b33n@flare-on.com
```

---

## 7 - FlareCalc

**Flag:** `t3mplat3s_asn_and_j1t_0h_my@flare-on.com`
**Reproduce:** `py 07-FlareCalc/solve.py`

1. **Trigger.** Every `=` pushes the result onto a global deque of doubles. A vectored handler (`0x140002A90`) catches `EXCEPTION_FLT_DIVIDE_BY_ZERO` (any `x/0=`) and checks the last six results: from newest to oldest `a, b, c, 8675309, 88224646, 22/7` (the multipliers are 1, 1, 1e7, 1, 1, 1e7). The only values that decrypt the payload are `a=8675309`, `b=88224646` and `c=22/7`. Keystrokes: `22/7=` `88224645+1=` `8675308+1=` `22/7=` `88224645+1=` `8675308+1=` `7/0=`.
2. **Loader.** `TrySubmitThreadpoolCallback` runs `0x1400019D0`. It reads the EXE's own Authenticode certificate (529,565 bytes) into RWX memory and calls `blob+0x6D3A(b | a<<32, (int)(c*1e7))`. APIs are resolved by djb2 hash (seed 5381).
3. **Inner shellcode.** The payload finds the X.509 extension OID `1.3.6.1.4.1.1337.1`. It holds a DER `SEQUENCE OF {INTEGER id, OCTET STRING data}` with 1,035 records. Each record is decrypted with an LCG XOR keyed by `MD5("8675309-88224646-31428571" || le32(id))`, followed by an LCG de-interleave. The result is a small JIT function.
4. **C2 state machine.** The payload opens a raw socket with `SIO_RCVALL` and waits for a knock packet, then connects back. Command `0x33` feeds one byte to the current state record, starting at `0xCB7A`. Each record returns the next state id and updates a 32-byte key. Emulating the records with Unicorn and running a DFS finds the input `FLAREON_ASN1_Labyrinth_Key_2026!`, which reaches state `0x1185`.
5. **Flag.** State `0x1185` XTEA-decrypts record `0x2706` (big-endian, 32 rounds, key = `state[0:16] ^ state[16:32]`) and sends the plaintext to the `Flare-OnCalculatorClass` window.

---

## 8 - crux

**Flag:** `Pr4tt_Pr1M4lItY_C3rt5_4nd_Wa4aA4aAA4aAA4a4a5M@flare-on.com`
**Reproduce:** `node 08-crux/work/final.js` (builds the certificate with `08-crux/work/pratt.py`)

A Chrome MV3 extension whose popup calls `window.check(input)` in a 5.8 MB Go-compiled `main.wasm` (garble: names and string literals obfuscated).

1. **Input shape.** `check` base64-decodes the input (StdEncoding) and requires the decoded length to be a multiple of 16, then AES-256-CBC-decrypts it and strips PKCS#7 padding. Key `cabeba7ad156801d1c82381c7cb8a3c406ae2c3cd168a96cd8373684cdbf8723` and IV `5ff26040c4c20b9f2ffdefa7ecf65d91` are garble literals that only exist on the stack at runtime.
2. **The message is a Pratt primality certificate.** The plaintext parses as a tree: leaf = `00` (the value 2); node = `01 | u32le nchildren | nchildren×(u32le len | child) | u32le lenA | A | u32le lenB | B`, where `A` and `B` are **little-endian** magnitudes. A node is valid iff every child is valid, the child values are non-decreasing, `prod(children) == A-1`, `B` is a Lucas witness for `A`, and no `v` in `[2,B)` is - i.e. `B` is the smallest primitive root.
3. **The target.** The root value must equal the 32-byte literal `61e230c9…bbdf89d3` read little-endian: `T = 95681613235744740119807961018865688051340183696570761153419351987106658443873`. Read big-endian it is composite, which is the trap.
4. **Flag.** On success the code SHA-256s the plaintext message and uses that as the AES-256-CBC key for a 64-byte embedded blob; the decrypted plaintext is the flag.

Tooling that made this tractable: `wasm-opt --log-execution` for a per-function call-count oracle, `--instrument-memory` for load/store tracing, and patching the export section so internal functions could be called straight from JS.

---

## 9 - NeonOutRun

**Flag:** `R3_ag3nt_4b0ut_t0_f33l_d1zzy@flare-on.com`
**Decoy:** the victory screen prints `decode_this_system_to_win_it@f1are-on.com` (note `f1are`). That string is a deliberate trap - it is the "hidden next stage" teaser, not the flag.

A 21 MB stripped Linux ELF: a Tauri 2.11.5 desktop app (Rust + wry) that also links a full V8 via `rusty_v8`.

1. **Frontend.** Five brotli blobs in a Tauri `EmbeddedAssets` phf map (pointers come from `R_X86_64_RELATIVE` relocations, so the qwords read 0 in the file). `/index.html` is a thin renderer; per animation frame it calls `invoke('plugin:neon|e', {input: JSON.stringify({up,down,left,right,restart,bounds})})` and draws the JSON reply. On `state.finished` it shows `state.neon`.
2. **The game is JavaScript, hidden four layers deep.** A 1942-byte blob at file offset `0x21DB73`: XOR with the alternating key `(0xD3,0x5A)` -> LZSS (12-bit offset, length `3+(hi&0xF)`) -> a zstd frame -> **raw DEFLATE** -> 4229 bytes of plain JS. The XOR key, the LZSS minimum match and the initial bit mask are each produced by control-flow-flattened state machines.
3. **Why nothing is greppable.** The V8 host (`sub_688C64`) builds every property name at runtime as the XOR of two immediate heap buffers (`q[i] ^= p[i]`), which is why `replaceAll`, `Math`, `min`, `sort`, `tick` and all the JSON keys are absent from the binary in any encoding. Note also that `rusty_v8` is the author's own dependency - Tauri on Linux uses WebKitGTK/JSC - so an embedded V8 is itself the tell that the game logic is not native Rust.
4. **Three hooked builtins.** Before running the script, the Rust host replaces `String.prototype.replaceAll`, `Math.min` and `Array.prototype.sort` with native callbacks - exactly the three the game uses.
   - `sort` (in `generateLaps`): picks a random scale `R`, stores `TARGET = Σ(splits[k]·R)` at `0x1438580`, queues the scaled splits, and clears both the accumulator and the flag buffer.
   - `Math.min` (once per completed lap `k`): pops `amp_k = splits[k]·R`, requires `lapSecs` to be an integer in `0..255`, pushes it into the flag `Vec<u8>`, and does `ACC += amp_k · sin(PI/180 · (C_k ± b_k))`, where `C_k = sub_68003E(sub_67F9D8(k,90))`.
   - `replaceAll` (at the finish): if `|ACC| > 1e-6`, `|TARGET| > 1e-6` and `|ACC-TARGET| < 1e-6`, it overwrites the decoy with the `Vec<u8>` and does `buf[30] += 59`, turning `f1are` into `flare`.

   The JS `if (state.y >= 4000) state.blocked = true` "anti-cheat" is a red herring: no native code ever reads `blocked` or `message`.
5. **Solving it.** Since the `amp_k` are randomly scaled, `ACC == TARGET` forces `sin(...) == 1` for every lap, i.e. `C_k ± b_k ≡ 90 (mod 360)`. So each byte is fully determined: `b_k = (90 - C_k) mod 360`, or `(C_k - 90) mod 360` when the sign flag is set. `C_k` comes from two flattened byte mixers, recovered by emulating them under Unicorn - after applying the 42,407 `R_X86_64_RELATIVE` relocations, without which the `__divti3` GOT slot at `0x1424060` is null and the emulation faults.

`09-NeonOutRun/work/emu.py` reproduces the 28 bytes.
