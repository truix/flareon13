globalThis.window = globalThis;
require('./ext/wasm_exec.js');
const fs=require('fs'),crypto=require('crypto');
const KEY=Buffer.from('cabeba7ad156801d1c82381c7cb8a3c406ae2c3cd168a96cd8373684cdbf8723','hex');
const IV=Buffer.from('5ff26040c4c20b9f2ffdefa7ecf65d91','hex');
const bytes=fs.readFileSync('ext/main.wasm');
const mod=new WebAssembly.Module(bytes);
function mk(b){const n=48-b.length;const p=Buffer.concat([b,Buffer.alloc(n,n)]);const ci=crypto.createCipheriv('aes-256-cbc',KEY,IV);ci.setAutoPadding(false);return Buffer.concat([ci.update(p),ci.final()]).toString('base64');}
async function run(buf){
  const go=new Go(); let exited=null;
  const inst=await WebAssembly.instantiate(mod, go.importObject);
  go.exit=(c)=>{exited=c;};
  go.run(inst).catch(()=>{});
  try{ const r=globalThis.check(mk(buf)); return exited!==null?('EXIT'+exited):r; }
  catch(e){ return 'EX:'+e.message.slice(0,30); }
}
module.exports={run,mk};
if(require.main===module){(async()=>{
  const H=(h)=>Buffer.from(h.replace(/\s/g,''),'hex');
  const pad0=(b,L)=>Buffer.concat([b,Buffer.alloc(L-b.length,0)]);
  for(let t=0;t<12;t++){
    const child=Buffer.concat([Buffer.from([t]),Buffer.alloc(4,0)]);
    const b=pad0(Buffer.concat([H('01'),Buffer.from([6,0,0,0]),Buffer.concat(Array.from({length:6},()=>child))]),43);
    console.log('childtag',t,await run(b));
  }
})();}
