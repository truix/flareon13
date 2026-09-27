const fs=require('fs');globalThis.window=globalThis;require('./ext/wasm_exec.js');const crypto=require('crypto');
const KEY=Buffer.from('cabeba7ad156801d1c82381c7cb8a3c406ae2c3cd168a96cd8373684cdbf8723','hex');
const IV=Buffer.from('5ff26040c4c20b9f2ffdefa7ecf65d91','hex');
const id2fn=JSON.parse(fs.readFileSync('id2fn.json'));
const mod=new WebAssembly.Module(fs.readFileSync('main_trace.wasm'));
process.on('uncaughtException',(e)=>{dead=true;});
function mkB64(msg){const bs=16;const padlen=bs-(msg.length%bs);const p=Buffer.concat([msg,Buffer.alloc(padlen,padlen)]);const ci=crypto.createCipheriv('aes-256-cbc',KEY,IV);ci.setAutoPadding(false);return Buffer.concat([ci.update(p),ci.final()]).toString('base64');}
let go,inst,dead=true,c={},rec=false;
async function fresh(){go=new Go();const imp=go.importObject;imp.trace={log_execution:(i)=>{if(rec){const f=id2fn[i];if(f!==undefined)c[f]=(c[f]||0)+1;}}};inst=await WebAssembly.instantiate(mod,imp);go.exit=()=>{dead=true;};dead=false;go.run(inst).catch(()=>{dead=true;});await new Promise(r=>setTimeout(r,0));}
async function test(msg){
  if(dead) await fresh();
  c={};rec=true;let res;
  try{res=globalThis.check(mkB64(msg));}catch(e){res='EX';dead=true;}
  rec=false;
  if(dead) res='PANIC';
  return {res,p:c[3247]||0,e:c[3249]||0};
}
module.exports={test,fresh,mkB64};
if(require.main===module)(async()=>{
  await fresh();
  const seen={};
  for(let it=0;it<3000;it++){
    const L=16+Math.floor(Math.random()*32);
    const m=Buffer.alloc(L);
    for(let i=0;i<L;i++) m[i]=[0,1,2,3,4,5,6,7][Math.floor(Math.random()*8)];
    const r=await test(m);
    const k=r.res+'/'+(r.e>0);
    if(!seen[k]){seen[k]=m.toString('hex');console.log(k,'=>',m.toString('hex'),JSON.stringify(r));}
    if(r.e>0 && r.res!=='PANIC') console.log('EVAL-OK',m.toString('hex'),JSON.stringify(r));
  }
  console.log('done',Object.keys(seen));
})();
