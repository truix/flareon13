#!/usr/bin/env python3
"""Render WRITEUP.md into a single self-contained writeup.html.

Usage:  py tools/mkhtml.py            (writes writeup.html next to WRITEUP.md)

No network, no CDN: the CSS and the small syntax highlighter are inlined, so the
page works offline and can be mailed around as one file.
"""
import html
import os
import re
import sys

import markdown

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)

from glossary import CATEGORIES, GLOSSARY  # noqa: E402
from meta import CHALLENGES  # noqa: E402

CSS = r"""
:root{
  --bg:#0b0d12; --bg2:#11141c; --bg3:#161a24; --line:#232838;
  --fg:#d6dae4; --dim:#8b93a7; --faint:#5c6478;
  --accent:#7cc4ff; --accent2:#a78bfa; --ok:#54d68a; --warn:#ffb454; --bad:#ff6b6b;
  --mono:"JetBrains Mono","Cascadia Code","SF Mono",Consolas,monospace;
}
*{box-sizing:border-box}
html{scroll-behavior:smooth}
body{margin:0;background:var(--bg);color:var(--fg);
  font:15px/1.65 -apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,sans-serif;}
a{color:var(--accent);text-decoration:none}
a:hover{text-decoration:underline}
code,pre{font-family:var(--mono);font-size:13px}

/* ---- layout ---------------------------------------------------------- */
.wrap{display:grid;grid-template-columns:260px minmax(0,1fr);gap:0;max-width:1500px;margin:0 auto}
nav{position:sticky;top:0;align-self:start;height:100vh;overflow-y:auto;
  padding:28px 18px;border-right:1px solid var(--line);background:var(--bg2)}
nav h2{font-size:11px;letter-spacing:.14em;text-transform:uppercase;color:var(--faint);
  margin:22px 0 8px}
nav a{display:block;padding:5px 9px;border-radius:6px;color:var(--dim);font-size:13.5px}
nav a:hover{background:var(--bg3);color:var(--fg);text-decoration:none}
nav a.active{background:#1c2436;color:var(--accent)}
nav .num{display:inline-block;width:20px;color:var(--faint)}
main{padding:44px 52px 120px;min-width:0}

/* ---- hero ------------------------------------------------------------ */
.hero{border:1px solid var(--line);border-radius:14px;padding:26px 30px;margin-bottom:34px;
  background:linear-gradient(135deg,#131824,#0d1017 60%)}
.hero h1{margin:0 0 6px;font-size:30px;letter-spacing:-.4px}
.hero .sub{color:var(--dim);font-size:14px}
.stats{display:flex;gap:26px;margin-top:20px;flex-wrap:wrap}
.stat .k{font-size:22px;font-weight:600;color:var(--accent)}
.stat .l{font-size:11px;text-transform:uppercase;letter-spacing:.1em;color:var(--faint)}

/* ---- headings -------------------------------------------------------- */
h2.chal{margin:54px 0 4px;font-size:23px;scroll-margin-top:20px;
  padding-bottom:10px;border-bottom:1px solid var(--line)}
h2.chal .idx{color:var(--faint);font-weight:400;margin-right:10px}
h3{margin:26px 0 8px;font-size:15px;color:var(--accent2);letter-spacing:.02em}
main > h2:first-of-type{margin-top:8px}

/* ---- text ------------------------------------------------------------ */
p{margin:11px 0}
ol,ul{padding-left:22px}
li{margin:7px 0}
li strong:first-child{color:#fff}
hr{border:0;border-top:1px solid var(--line);margin:40px 0}
blockquote{margin:14px 0;padding:10px 16px;border-left:3px solid var(--accent2);
  background:var(--bg2);color:var(--dim)}

/* ---- inline code & flags --------------------------------------------- */
p code,li code,td code{background:#191d29;border:1px solid #242a3a;border-radius:4px;
  padding:1px 5px;color:#e6c07b}
.flag{display:inline-block;background:#10251a;border:1px solid #1f6b3f;color:#7ee2a8;
  border-radius:6px;padding:3px 10px;font-family:var(--mono);font-size:13px;word-break:break-all}
.decoy{display:inline-block;background:#2a1414;border:1px solid #6b1f1f;color:#ff9b9b;
  border-radius:6px;padding:3px 10px;font-family:var(--mono);font-size:13px;word-break:break-all}

/* ---- code blocks ----------------------------------------------------- */
pre{background:#0d1017;border:1px solid var(--line);border-radius:10px;padding:14px 16px;
  overflow-x:auto;margin:14px 0;line-height:1.55}
pre code{color:#cbd3e1}
.k{color:#c678dd}      /* keyword    */
.s{color:#98c379}      /* string     */
.n{color:#d19a66}      /* number/hex */
.c{color:#5c6478;font-style:italic} /* comment */
.f{color:#61afef}      /* function   */
.t{color:#e5c07b}      /* type       */

/* ---- tables ---------------------------------------------------------- */
table{border-collapse:collapse;width:100%;margin:16px 0;font-size:13.5px}
th,td{border:1px solid var(--line);padding:7px 11px;text-align:left}
th{background:var(--bg3);color:var(--dim);font-weight:600;
  font-size:11px;text-transform:uppercase;letter-spacing:.08em}
tr:nth-child(even) td{background:#0f121a}

/* ---- glossary -------------------------------------------------------- */
.gloss{display:grid;gap:14px;margin-top:18px}
.card{border:1px solid var(--line);border-radius:11px;padding:16px 18px;background:var(--bg2)}
.card h4{margin:0 0 8px;font-size:15px;color:#fff;display:flex;align-items:center;gap:10px;
  flex-wrap:wrap}
.tag{font-size:10px;letter-spacing:.09em;text-transform:uppercase;padding:2px 8px;
  border-radius:999px;border:1px solid}
.tag.obfuscation{color:#c9a6ff;border-color:#4b3a72;background:#1d1830}
.tag.anti-analysis{color:#ff9b9b;border-color:#6b2c2c;background:#2a1616}
.tag.crypto{color:#7ee2a8;border-color:#245c3d;background:#10241a}
.tag.packing{color:#ffc978;border-color:#6d4d1f;background:#291f10}
.tag.technique{color:#7cc4ff;border-color:#27506f;background:#101d29}
.tag.vuln{color:#ff9ed2;border-color:#6d2b52;background:#28131f}
.card p{margin:6px 0;color:var(--dim);font-size:14px}
.card .seen{margin-top:9px;padding-top:9px;border-top:1px dashed var(--line);
  font-size:13px;color:var(--faint)}
.card .seen b{color:var(--dim);font-weight:600}


/* ---- challenge cards ------------------------------------------------- */
.chalcard{border:1px solid var(--line);border-radius:16px;padding:26px 30px 22px;
  margin:30px 0;background:linear-gradient(180deg,#12161f,#0d1016);
  box-shadow:0 1px 0 #1c2130 inset}
h2.chal{display:flex;align-items:center;gap:12px;margin:0 0 12px;font-size:24px;
  border:0;padding:0;letter-spacing:-.3px;scroll-margin-top:24px}
h2.chal .idx{font-family:var(--mono);font-size:13px;color:#0b0d12;background:var(--accent);
  border-radius:7px;padding:4px 9px;font-weight:700;letter-spacing:.06em}
h2.chal .perma{margin-left:auto;color:var(--faint);font-size:15px;opacity:0;transition:.15s}
.chalcard:hover h2.chal .perma{opacity:1}
h2.sec{margin:46px 0 10px;font-size:20px;padding-bottom:9px;border-bottom:1px solid var(--line)}
.hook{color:var(--dim);font-size:14.5px;margin:12px 0 4px;max-width:78ch}
.chips{display:flex;flex-wrap:wrap;gap:6px;margin-top:10px}
.chip{font-size:11px;letter-spacing:.05em;color:#9fb0cc;background:#141a26;
  border:1px solid #232c3e;border-radius:6px;padding:3px 9px}
.chalcard ol{max-width:88ch}
.chalcard > p, .chalcard > ol, .chalcard > ul, .chalcard > pre, .chalcard > table{margin-left:2px}

/* ---- misc ------------------------------------------------------------ */
.meta{display:flex;gap:10px;flex-wrap:wrap;margin:10px 0 4px}
.pill{font-size:12px;border:1px solid var(--line);background:var(--bg3);color:var(--dim);
  border-radius:999px;padding:3px 11px}
.pill b{color:var(--fg);font-weight:600}
footer{margin-top:60px;padding-top:18px;border-top:1px solid var(--line);
  color:var(--faint);font-size:12.5px}
@media (max-width:980px){.wrap{grid-template-columns:1fr}nav{position:static;height:auto;
  border-right:0;border-bottom:1px solid var(--line)}main{padding:24px 20px 80px}}
"""

HIGHLIGHT_JS = r"""
// Tiny, dependency-free highlighter. Good enough for the snippets used here.
(function(){
  var KW = /\b(let|const|var|function|return|if|else|for|while|class|new|await|async|import|from|def|import|print|lambda|struct|enum|impl|fn|pub|use|mut|match|try|except|with|as|not|and|or|in|is|None|True|False|null|true|false|void|int|char|unsigned|__int64|static|typedef|goto|break|continue|switch|case|sizeof)\b/g;
  function esc(s){return s.replace(/&/g,'&amp;').replace(/</g,'&lt;').replace(/>/g,'&gt;');}
  document.querySelectorAll('pre > code').forEach(function(el){
    var txt = el.textContent, out = '', i = 0;
    // tokenise: comments, strings, numbers, keywords, calls
    var re = /(\/\/[^\n]*|#[^\n]*|\/\*[\s\S]*?\*\/)|("(?:[^"\\]|\\.)*"|'(?:[^'\\]|\\.)*')|(\b0[xX][0-9a-fA-F]+\b|\b\d+(?:\.\d+)?(?:[eE][-+]?\d+)?\b)|([A-Za-z_][A-Za-z0-9_]*)(?=\s*\()/g;
    var m;
    while((m = re.exec(txt))){
      out += esc(txt.slice(i, m.index));
      if(m[1]) out += '<span class="c">'+esc(m[1])+'</span>';
      else if(m[2]) out += '<span class="s">'+esc(m[2])+'</span>';
      else if(m[3]) out += '<span class="n">'+esc(m[3])+'</span>';
      else if(m[4]) out += '<span class="f">'+esc(m[4])+'</span>';
      i = m.index + m[0].length;
    }
    out += esc(txt.slice(i));
    out = out.replace(/(^|[^>\w])(let|const|var|function|return|if|else|for|while|class|new|await|async|import|from|def|print|lambda|struct|enum|impl|fn|pub|use|mut|match|try|except|with|as|not|and|or|in|is|None|True|False|null|true|false|void|int|char|unsigned|__int64|static|typedef|goto|break|continue|switch|case|sizeof)(?![\w<])/g,
      '$1<span class="k">$2</span>');
    el.innerHTML = out;
  });
  // scrollspy
  var links = [].slice.call(document.querySelectorAll('nav a[href^="#"]'));
  var targets = links.map(function(a){return document.getElementById(a.getAttribute('href').slice(1));});
  function onScroll(){
    var best = 0;
    targets.forEach(function(t,i){ if(t && t.getBoundingClientRect().top < 120) best = i; });
    links.forEach(function(a,i){ a.classList.toggle('active', i === best); });
  }
  document.addEventListener('scroll', onScroll, {passive:true}); onScroll();
})();
"""


def build_glossary_html():
    cards = []
    for term, cat, definition, seen in GLOSSARY:
        cards.append(
            '<div class="card" id="g-{anchor}">'
            '<h4>{term}<span class="tag {cat}">{catname}</span></h4>'
            "<p>{definition}</p>"
            '<div class="seen"><b>In this writeup:</b> {seen}</div>'
            "</div>".format(
                anchor=re.sub(r"[^a-z0-9]+", "-", term.lower()).strip("-"),
                term=html.escape(term),
                cat=cat,
                catname=CATEGORIES[cat],
                definition=definition,
                seen=seen,
            )
        )
    return '<div class="gloss">' + "\n".join(cards) + "</div>"


def main():
    md_path = os.path.join(ROOT, "WRITEUP.md")
    src = open(md_path, encoding="utf-8").read()

    # Split the intro (everything before the first challenge) from the sections.
    parts = re.split(r"\n---\n", src)
    body_md = "\n---\n".join(parts)

    rendered = markdown.markdown(
        body_md, extensions=["extra", "tables", "fenced_code", "sane_lists", "attr_list"]
    )

    # Decorate challenge headings, flags and decoys.
    def chal_heading(m):
        num, name = int(m.group(1)), m.group(2)
        info = CHALLENGES.get(num)
        pills = ""
        hook = ""
        if info:
            _n, dur, plat, summary, tags = info
            chips = "".join('<span class="chip">%s</span>' % html.escape(t) for t in tags)
            pills = ('<div class="meta">'
                     '<span class="pill"><b>%s</b></span>'
                     '<span class="pill">%s</span>'
                     '</div><div class="chips">%s</div>' % (dur, html.escape(plat), chips))
            hook = '<p class="hook">%s</p>' % html.escape(summary)
        return ('<section class="chalcard">'
                '<h2 class="chal" id="c{n}"><span class="idx">{n:02d}</span>{name}'
                '<a class="perma" href="#c{n}">#</a></h2>{pills}{hook}').format(
                    n=num, name=name, pills=pills, hook=hook)

    rendered = re.sub(r"<h1>[^<]*</h1>", "", rendered, count=1)
    rendered = re.sub(r"<h2>(\d+) - ([^<]+)</h2>", chal_heading, rendered)
    rendered = re.sub(r"<h2>([^<]+)</h2>", r'<h2 class="sec" id="s-\1">\1</h2>', rendered)
    rendered = rendered.replace("<hr />", "</section>")
    rendered = re.sub(
        r"<strong>Flag:</strong>\s*<code>([^<]+)</code>",
        r'<strong>Flag:</strong> <span class="flag">\1</span>',
        rendered,
    )
    rendered = re.sub(
        r"<strong>Decoy:</strong>(.*?)<code>([^<]+)</code>",
        r'<strong>Decoy:</strong>\1<span class="decoy">\2</span>',
        rendered,
    )

    # Nav from the challenge headings.
    chals = re.findall(r'<h2 class="chal" id="c(\d+)"><span class="idx">\d+</span>([^<]*?)<a class="perma"', rendered)
    nav = ['<h2>Challenges</h2>']
    for num, name in chals:
        nav.append('<a href="#c{n}"><span class="num">{n}</span>{name}</a>'.format(n=num, name=html.escape(name)))
    nav.append('<h2>Reference</h2>')
    nav.append('<a href="#glossary">Techniques glossary</a>')

    flags = len(chals)
    out = """<!DOCTYPE html>
<html lang="en"><head><meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<title>Flare-On 13 - Writeup</title>
<style>{css}</style></head>
<body><div class="wrap">
<nav>{nav}</nav>
<main>
<div class="hero">
  <h1>Flare-On 13</h1>
  <div class="sub">Full solutions for all {flags} challenges, with the techniques behind each one.</div>
  <div class="stats">
    <div class="stat"><div class="k">{flags}/{flags}</div><div class="l">solved</div></div>
    <div class="stat"><div class="k">2h54m</div><div class="l">total</div></div>
    <div class="stat"><div class="k">{gloss}</div><div class="l">techniques</div></div>
  </div>
</div>
{body}
<h2 class="chal" id="glossary">Techniques glossary</h2>
<p>Every obfuscation, anti-analysis trick and analysis method used above, defined once and
cross-referenced to where it appears.</p>
{glossary}
<footer>Generated from <code>WRITEUP.md</code> by <code>tools/mkhtml.py</code>. Self-contained: no external CSS or JS.</footer>
</main></div>
<script>{js}</script>
</body></html>""".format(
        css=CSS,
        nav="\n".join(nav),
        body=rendered,
        glossary=build_glossary_html(),
        js=HIGHLIGHT_JS,
        flags=flags,
        gloss=len(GLOSSARY),
    )

    dest = os.path.join(ROOT, "writeup.html")
    open(dest, "w", encoding="utf-8").write(out)
    print("wrote", dest, len(out), "bytes;", flags, "challenges,", len(GLOSSARY), "glossary entries")


if __name__ == "__main__":
    main()
