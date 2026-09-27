globalThis.window = globalThis;
require('./ext/wasm_exec.js');
const fs=require('fs'),crypto=require('crypto');const go=new Go();
const id2fn=JSON.parse(fs.readFileSync('id2fn.json'));
let rec=false;const c={};
const imports=go.importObject;
imports.trace={log_execution:(i)=>{if(rec){const f=id2fn[i];if(f!==undefined)c[f]=(c[f]||0)+1;}}};
const KEY=Buffer.from('cabeba7ad156801d1c82381c7cb8a3c406ae2c3cd168a96cd8373684cdbf8723','hex');
const IV=Buffer.from('5ff26040c4c20b9f2ffdefa7ecf65d91','hex');
function mk(b){const n=48-b.length;const p=Buffer.concat([b,Buffer.alloc(n,n)]);const ci=crypto.createCipheriv('aes-256-cbc',KEY,IV);ci.setAutoPadding(false);return Buffer.concat([ci.update(p),ci.final()]).toString('base64');}
globalThis.probe=null;
WebAssembly.instantiate(fs.readFileSync('main_trace.wasm'), imports).then(r=>{
  go.run(r.instance);
  setTimeout(()=>{
    const test=(hex)=>{
      for(const k in c) delete c[k];
      const b=Buffer.from(hex,'hex');
      rec=true;let res;try{res=globalThis.check(mk(b));}catch(e){res='EX'}rec=false;
      return {res, parse:c[3247]||0, eval_:c[3249]||0, aes:c[3164]||0, sha:c[3197]||0};
    };
    const cases=process.argv.slice(2);
    for(const h of cases) console.log(h.slice(0,50), JSON.stringify(test(h)));
    process.exit(0);
  },300);
});
