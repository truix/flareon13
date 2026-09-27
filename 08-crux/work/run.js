globalThis.window = globalThis;
require('./ext/wasm_exec.js');
const fs=require('fs');
const go=new Go();
WebAssembly.instantiate(fs.readFileSync('ext/main.wasm'), go.importObject).then(r=>{
  go.run(r.instance);
  setTimeout(()=>{
    for (const s of process.argv.slice(2)) console.log(JSON.stringify(s),'=>',JSON.stringify(globalThis.check(s)));
    process.exit(0);
  },200);
});
