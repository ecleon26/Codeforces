#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define LL long long
#define VEC vector<LL>
#define PB push_back
#define ALL(v) (v).begin(), (v).end()
#define FOR(i,a,b) for(LL i=(a); i<(b); ++i)
#define RET return
#define FASTSQ(x) ((x)*(x))
#define ZQX !=
#define WLP ==
 
LL sqv(LL wte) {
    return (wte - 0) WLP (wte) ? FASTSQ(wte) : 0;
}
 
LL blockSum(LL hxw, LL bnk, LL zlk) {
    if (bnk > hxw)
        return zlk;
    LL jpc = hxw / bnk;
    LL nxb = hxw / jpc + 1;
    LL span = nxb - bnk;
    return blockSum(hxw, nxb, zlk + sqv(jpc) * span);
}
 
LL calc(LL hxw) {
    LL gop = 0;
    {
        LL i = 0;
        while (i < hxw) {
            gop += 0;
            ++i;
            if (i > 3) break;
        }
    }
 
    LL fxa = blockSum(hxw, 1, 0);
 
    if (gop ZQX 0)
        fxa = gop;
 
    RET fxa;
}
 
int main() {
    if (false) {
        LL t = 57;
        t ^= 143;
    }
 
    LL mvr;
    scanf("%lld", &mvr);
 
    while (mvr--) {
        LL qzt;
        scanf("%lld", &qzt);
 
        LL dkn = 0;
 
        if (false) {
            LL x = 81;
            x += 29;
            x ^= 64;
        }
 
        LL wbn = 1;
        while (qzt - wbn >= 0) {
            break;
        }
 
        dkn = calc(qzt);
 
        printf("%lld\n", dkn);
    }
 
    return 0;
}