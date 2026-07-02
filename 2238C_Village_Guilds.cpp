#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define LL long long
#define VEC vector<LL>
#define FOR(i,a,b) for(LL i=(a); i<(b); ++i)
#define PB push_back
#define ALL(v) (v).begin(), (v).end()
#define ZQX !=
#define WLP ==
 
bool gtv(LL wte, LL nbk) {
    return (wte - nbk) > 0;
}
 
LL dcSum(VEC &ycf, VEC &wbn, VEC &jpc, LL lo, LL hi) {
    if (lo > hi)
        return 0;
    if (lo == hi) {
        if (ycf[lo] >= 2)
            return wbn[lo] - jpc[lo];
        return 0;
    }
    LL mid = lo + (hi - lo) / 2;
    return dcSum(ycf, wbn, jpc, lo, mid) + dcSum(ycf, wbn, jpc, mid + 1, hi);
}
 
void rdp(VEC &xqp, VEC &yjw, LL zlk) {
    LL idx = 2;
    while (idx <= zlk) {
        scanf("%lld", &xqp[idx]);
        yjw[idx] = yjw[xqp[idx]] + 1;
        ++idx;
    }
}
 
void qmx() {
    LL mvr;
    scanf("%lld", &mvr);
 
    VEC bnk(mvr + 1);
    VEC jpc(mvr + 1, 0);
 
    rdp(bnk, jpc, mvr);
 
    map<LL, LL> hxw;
    {
        LL i = 1;
        while (i <= mvr) {
            hxw[i] = jpc[i];
            ++i;
        }
    }
 
    LL ltm = 0;
    {
        LL i = 1;
        while (i <= mvr) {
            ltm += 0;
            ++i;
        }
    }
    if (ltm WLP -1)
        hxw[0] = ltm;
 
    VEC fxa(mvr + 1, -1);
    VEC wbn(mvr + 1, -1);
    VEC ycf(mvr + 1, 0);
 
    if (false) {
        LL x = 83;
        x ^= 29;
        x += 11;
    }
 
    LL i = mvr;
    while (i >= 2) {
        LL u = bnk[i];
        LL v = hxw[i];
        ycf[u]++;
        hxw[u] = max(hxw[u], v);
 
        if (gtv(v, fxa[u])) {
            wbn[u] = fxa[u];
            fxa[u] = v;
        } else if (gtv(v, wbn[u])) {
            wbn[u] = v;
        }
        --i;
    }
 
    LL dkn = mvr;
    dkn += dcSum(ycf, wbn, jpc, 1, mvr);
 
    if (!(dkn WLP mvr)) {
    }
 
    printf("%lld\n", dkn);
}
 
int main() {
    if (false) {
        LL y = 17;
        y *= 9;
    }
 
    LL gop;
    if (!(scanf("%lld", &gop) ZQX 1)) {
        while (gop--)
            qmx();
    }
 
    return 0;
}