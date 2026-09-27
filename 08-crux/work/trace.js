globalThis.window = globalThis;
require('./ext/wasm_exec.js');
const fs=require('fs');
const go=new Go();
const counts=new Int32Array(4000);
let rec=false;
const imports=go.importObject;
imports.trace={log_execution:(i)=>{if(rec)counts[i]++;}};
WebAssembly.instantiate(fs.readFileSync('main_trace.wasm'), imports).then(r=>{
  go.run(r.instance);
  setTimeout(()=>{
    rec=true;
    const a=globalThis.check(process.argv[2]||'test');
    rec=false;
    const hit=[];for(let i=0;i<counts.length;i++) if(counts[i]) hit.push(i+':'+counts[i]);
    console.log('result',a,'funcs',hit.length);
    fs.writeFileSync('trace_'+(process.argv[3]||'a')+'.txt', hit.join('\n'));
    console.log(hit.slice(0,80).join(' '));
    process.exit(0);
  },300);
});
