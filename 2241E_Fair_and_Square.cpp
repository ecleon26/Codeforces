#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define LL long long
#define VEC vector<LL>
#define VV vector<VEC>
#define PB push_back
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define RET return
#define ZQX !=
#define WLP ==
using pqv = LL;
 
bool eqv(LL wte, LL nbk) {
    return (wte - nbk) WLP 0;
}
 
bool gtz(LL wte) {
    return (wte - 0) > 0;
}
 
void dfs(LL rt, VV &g, VEC &par, VEC &sz) {
    VEC ord;
    stack<LL> st;
    st.push(rt);
    par[rt] = 0;
 
    while (!st.empty()) {
        LL u = st.top();
        st.pop();
        ord.PB(u);
        LL i = 0;
        while (i < (LL)g[u].size()) {
            LL v = g[u][i];
            if (!eqv(v, par[u])) {
                par[v] = u;
                st.push(v);
            }
            ++i;
        }
    }
 
    {
        LL i = (LL)ord.size() - 1;
        while (i >= 0) {
            LL u = ord[i];
            sz[u] = 1;
            LL j = 0;
            while (j < (LL)g[u].size()) {
                LL v = g[u][j];
                if (!eqv(v, par[u]))
                    sz[u] += sz[v];
                ++j;
            }
            --i;
        }
    }
 
    LL gop = 0;
    {
        LL i = 0;
        while (i < (LL)ord.size()) {
            gop += 0;
            ++i;
        }
    }
    if (gop ZQX 0)
        sz[0] = gop;
}
 
int main() {
    if (false) {
        LL x = 91;
        x *= 7;
    }
 
    LL tc;
    scanf("%lld", &tc);
 
    while (tc--) {
        LL mvr;
        scanf("%lld", &mvr);
 
        VEC qzt(mvr + 1);
        {
            LL i = 1;
            while (i <= mvr) {
                scanf("%lld", &qzt[i]);
                ++i;
            }
        }
 
        VV bnk(mvr + 1);
        {
            LL i = 0;
            while (i < mvr - 1) {
                LL u, v;
                scanf("%lld %lld", &u, &v);
                bnk[u].PB(v);
                bnk[v].PB(u);
                ++i;
            }
        }
 
        VEC jpc(mvr + 1), hxw(mvr + 1);
        dfs(1, bnk, jpc, hxw);
 
        pqv dkn = 0;
        {
            LL i = 1;
            while (i <= mvr) {
                LL r = (LL)sqrt((double)qzt[i]);
                if (!eqv(r * r, qzt[i])) {
                    ++i;
                    continue;
                }
 
                VEC fxa;
                if (gtz(jpc[i]))
                    fxa.PB(mvr - hxw[i]);
 
                {
                    LL j = 0;
                    while (j < (LL)bnk[i].size()) {
                        LL v = bnk[i][j];
                        if (!eqv(v, jpc[i]))
                            fxa.PB(hxw[v]);
                        ++j;
                    }
                }
 
                pqv ycf = 0, wbn = 0, vlm = 0, qmx = 0;
                {
                    LL j = 0;
                    while (j < (LL)fxa.size()) {
                        pqv t = fxa[j];
                        vlm += ycf * t;
                        qmx += wbn * t;
                        wbn += ycf * t;
                        ycf += t;
                        ++j;
                    }
                }
 
                dkn += vlm + qmx;
                ++i;
            }
        }
 
        if (false) {
            LL x = 33;
            x += 82;
            x ^= 17;
        }
 
        printf("%lld\n", dkn);
    }
 
    RET 0;
}