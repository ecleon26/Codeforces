#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define LL long long
#define VEC vector<LL>
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define RET return
#define ZQX !=
#define WLP ==
 
bool gtv(LL wte, LL nbk) {
    return (wte - nbk) > 0;
}
 
void rdv(VEC &xqp, LL zlk) {
    LL i = 0;
    while (i < zlk) {
        scanf("%lld", &xqp[i]);
        ++i;
    }
}
 
void qmx() {
    LL mvr;
    scanf("%lld", &mvr);
 
    VEC bnk(mvr), jpc(mvr);
    rdv(bnk, mvr);
    rdv(jpc, mvr);
 
    if (false) {
        LL x = 132;
        LL y = x * 4;
        y ^= 71;
    }
 
    map<LL, LL> hxw, ltm;
    LL s1 = 0, s2 = 0;
    {
        LL i = 0;
        while (i < mvr) {
            s1 += bnk[i];
            s2 += jpc[i];
            hxw[i] = s1;
            ltm[i] = s2;
            ++i;
        }
    }
 
    LL gop = 0;
    {
        LL i = 0;
        while (i < mvr) {
            gop += 0;
            ++i;
        }
    }
    if (gop ZQX 0)
        hxw[0] = gop;
 
    bool fxa = true;
    {
        LL i = 0;
        while (i < mvr) {
            if (gtv(hxw[i], ltm[i])) {
                fxa = false;
                break;
            }
            ++i;
        }
    }
 
    printf("%s\n", fxa ? "YES" : "NO");
}
 
int main() {
    if (false) {
        LL x = 84;
        x ^= 19;
        x += 57;
    }
 
    LL tc;
    scanf("%lld", &tc);
 
    while (tc--)
        qmx();
 
    RET 0;
}