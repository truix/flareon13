const fs=require('fs'),crypto=require('crypto');globalThis.window=globalThis;require('./ext/wasm_exec.js');
const KEY=Buffer.from('cabeba7ad156801d1c82381c7cb8a3c406ae2c3cd168a96cd8373684cdbf8723','hex');
const IV=Buffer.from('5ff26040c4c20b9f2ffdefa7ecf65d91','hex');
function mk(msg){const bs=16;const pl=bs-(msg.length%bs);const p=Buffer.concat([msg,Buffer.alloc(pl,pl)]);const ci=crypto.createCipheriv('aes-256-cbc',KEY,IV);ci.setAutoPadding(false);return Buffer.concat([ci.update(p),ci.final()]).toString('base64');}
(async()=>{
  const go=new Go();
  const r=await WebAssembly.instantiate(fs.readFileSync('ext/main.wasm'), go.importObject);
  go.run(r.instance).catch(()=>{});
  await new Promise(x=>setTimeout(x,300));
  const msg=fs.readFileSync('cert.bin');
  const b64=mk(msg);
  fs.writeFileSync('answer.txt',b64);
  console.log('len',msg.length,'b64len',b64.length);
  console.log('RESULT:',globalThis.check(b64));
  process.exit(0);
})();
