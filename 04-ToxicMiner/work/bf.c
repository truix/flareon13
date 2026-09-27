
#include "xf.h"
static const uint32_t IV[8]={0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19};
static void dhash(uint32_t serial, uint32_t nonce, uint32_t out[8]){
  M128 st[2]; M128 blk[4]; uint32_t *b=(uint32_t*)blk;
  memcpy(st,IV,32); memset(blk,0,64); b[0]=serial; b[1]=nonce; b[2]=0x80000000; b[15]=64;
  xf(st,blk);
  memset(blk,0,64); memcpy(b,st,32); b[8]=0x80000000; b[15]=256;
  memcpy(st,IV,32); xf(st,blk);
  memcpy(out,st,32);
}
int main(int argc,char**argv){
  if(argc>1 && !strcmp(argv[1],"test")){ M128 st[2]; M128 blk[4]; uint32_t*b=(uint32_t*)blk;
    memcpy(st,IV,32); memset(blk,0,64); b[0]=0x12345678;b[1]=0x0b501e7e;b[2]=0x80000000;b[15]=64; xf(st,blk);
    for(int i=0;i<32;i++)printf("%02x",((unsigned char*)st)[i]); printf("\n"); return 0;}
  uint64_t lo=strtoull(argv[1],0,0), hi=strtoull(argv[2],0,0);
  static const unsigned char ct[51]={244,249,101,159,49,243,218,92,241,55,161,184,207,144,161,88,30,235,228,153,167,193,27,21,2,175,116,99,211,178,25,40,102,222,61,233,113,99,231,117,223,228,171,97,111,185,12,39,137,252,135};
  for(uint64_t s=lo;s<hi;s++){
    uint32_t h[8]; dhash((uint32_t)s,0x0b501e7e,h); const unsigned char*k=(const unsigned char*)h;
    unsigned char S[256]; for(int i=0;i<256;i++)S[i]=i;
    unsigned j=0; for(int i=0;i<256;i++){ j=(j+S[i]+k[i&15])&255; unsigned char t=S[i];S[i]=S[j];S[j]=t; }
    unsigned i=0; j=0; unsigned char pt[52]; int ok=1;
    for(int n=0;n<51;n++){ i=(i+1)&255; j=(j+S[i])&255; unsigned char t=S[i];S[i]=S[j];S[j]=t; pt[n]=ct[n]^S[(S[i]+S[j])&255];
      if(pt[n]<0x20||pt[n]>0x7e){ if(n<30){ok=0;break;} } }
    if(ok){ pt[51]=0; printf("HIT %08x %s\n",(unsigned)s,pt); fflush(stdout);}
  }
  return 0;
}
