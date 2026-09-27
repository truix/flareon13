globalThis.window = globalThis;
require('./ext/wasm_exec.js');
const fs=require('fs'),crypto=require('crypto');const go=new Go();
const id2fn=JSON.parse(fs.readFileSync('id2fn.json'));
let rec=false;const c={};const imports=go.importObject;
imports.trace={log_execution:(i)=>{if(rec){const f=id2fn[i];if(f!==undefined)c[f]=(c[f]||0)+1;}}};
const KEY=Buffer.from('cabeba7ad156801d1c82381c7cb8a3c406ae2c3cd168a96cd8373684cdbf8723','hex');
const IV=Buffer.from('5ff26040c4c20b9f2ffdefa7ecf65d91','hex');
function mk(pt){const ci=crypto.createCipheriv('aes-256-cbc',KEY,IV);ci.setAutoPadding(false);const need=48-pt.length;const p=Buffer.concat([pt,Buffer.alloc(need,need)]);return Buffer.concat([ci.update(p),ci.final()]).toString('base64');}
WebAssembly.instantiate(fs.readFileSync('main_trace.wasm'), imports).then(r=>{
  go.run(r.instance);
  setTimeout(()=>{
    for(const k in c) delete c[k];
    rec=true; const res=globalThis.check(mk(Buffer.alloc(32,0x41))); rec=false;
    console.log(res);
    for(const f of [3057,3092,3093,3094,3184,3186,3187,3232,3266,3269,3270,3271,3251,3252,3261])
      console.log('func',f,c[f]||0);
    const top=Object.entries(c).sort((a,b)=>b[1]-a[1]).slice(0,15);
    console.log('top',JSON.stringify(top));
    process.exit(0);
  },300);
});
