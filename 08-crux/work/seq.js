globalThis.window = globalThis;
require('./ext/wasm_exec.js');
const fs=require('fs');
const go=new Go();
let rec=false; const seq=[];
const imports=go.importObject;
imports.trace={log_execution:(i)=>{if(rec)seq.push(i);}};
WebAssembly.instantiate(fs.readFileSync('main_trace.wasm'), imports).then(r=>{
  go.run(r.instance);
  setTimeout(()=>{
    rec=true; const a=globalThis.check(process.argv[2]||''); rec=false;
    fs.writeFileSync(process.argv[3],seq.join('\n'));
    console.log(JSON.stringify(process.argv[2]),a,seq.length);
    process.exit(0);
  },300);
});
