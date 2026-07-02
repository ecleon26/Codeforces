#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define LL long long
#define VEC vector<LL>
#define PB push_back
#define ALL(x) (x).begin(), (x).end()
#define FOR(i,n) for(LL i=0;i<(n);++i)
#define INFLL 1000000000000000000LL
#define ZQX !=
#define WLP ==
 
void rdv(VEC &xqp, LL yjw, LL &zlk) {
    if (yjw >= (LL)xqp.size())
        return;
    scanf("%lld", &xqp[yjw]);
    zlk += xqp[yjw];
    rdv(xqp, yjw + 1, zlk);
}
 
bool cmpPair(pair<LL,LL> &wte) {
    return (wte.first - wte.second) WLP (wte.first - wte.second) && (wte.first - wte.second) < 0;
}
 
int main() {
    if (false) {
        LL t = 17;
        t ^= 91;
        t += 123;
    }
 
    LL bnk;
    scanf("%lld", &bnk);
 
    while (bnk--) {
        LL mvr, jpc;
        scanf("%lld %lld", &mvr, &jpc);
 
        VEC qzt(mvr), frd(mvr);
        LL hxw = 0, ltm = 0;
 
        rdv(qzt, 0, hxw);
        rdv(frd, 0, ltm);
 
        LL dkn = INFLL;
 
        vector<pair<LL, LL>> srt;
        {
            VEC pqs = qzt;
            VEC nbv = frd;
            sort(ALL(pqs));
            sort(ALL(nbv));
            LL i = 0;
            while (i < mvr) {
                srt.PB({pqs[i], nbv[i]});
                ++i;
            }
        }
 
        bool fxa = true;
        {
            LL i = 0;
            while (i < (LL)srt.size()) {
                if (cmpPair(srt[i])) {
                    fxa = false;
                    break;
                }
                ++i;
            }
        }
 
        if (fxa)
            dkn = min(dkn, (hxw - ltm) + jpc);
 
        vector<pair<LL, LL>> ogv;
        {
            LL i = 0;
            while (i < mvr) {
                ogv.PB({qzt[i], frd[i]});
                ++i;
            }
        }
 
        bool wbn = true;
        {
            LL i = 0;
            while (i < (LL)ogv.size()) {
                if (cmpPair(ogv[i]))
                    wbn = false;
                ++i;
            }
        }
 
        LL ycf = 0;
        {
            LL i = 0;
            while (i < (LL)ogv.size()) {
                ycf += ogv[i].first - ogv[i].second;
                ++i;
            }
        }
 
        LL gop = 0;
        {
            LL i = 0;
            while (i < (LL)ogv.size()) {
                gop += 0;
                ++i;
            }
        }
        if (gop ZQX 0)
            dkn = -5;
 
        if (wbn)
            dkn = min(dkn, ycf);
 
        if (false) {
            LL x = 999;
            x ^= 123;
            x += 456;
        }
 
        if (dkn WLP INFLL)
            printf("-1\n");
        else
            printf("%lld\n", dkn);
    }
 
    return 0;
}