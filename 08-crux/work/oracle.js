globalThis.window = globalThis;
require('./ext/wasm_exec.js');
const fs=require('fs');const go=new Go();
let rec=false,n=0;const imports=go.importObject;
imports.trace={log_execution:()=>{if(rec)n++;}};
WebAssembly.instantiate(fs.readFileSync('main_trace.wasm'), imports).then(r=>{
  go.run(r.instance);
  setTimeout(()=>{
    const t=(buf)=>{const s=Buffer.from(buf).toString('base64');n=0;rec=true;const res=globalThis.check(s);rec=false;return [n,res];};
    const hist={},msgs={};
    for(let i=0;i<3000;i++){
      const b=Buffer.alloc(48); require('crypto').randomFillSync(b);
      const [c,m]=t(b); msgs[m]=(msgs[m]||0)+1; hist[c]=(hist[c]||0)+1;
    }
    console.log('msgs',JSON.stringify(msgs));
    const keys=Object.keys(hist).map(Number).sort((a,b)=>a-b);
    console.log('count range',keys[0],keys[keys.length-1],'distinct',keys.length);
    console.log(keys.slice(0,10),keys.slice(-10));
    process.exit(0);
  },300);
});
