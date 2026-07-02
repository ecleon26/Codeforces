#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define LL long long
#define VEC vector<LL>
#define PB push_back
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define RET return
#define ZQX !=
#define WLP ==
 
bool leq(LL wte, LL nbk) {
    return (nbk - wte) >= 0;
}
 
LL nxt(LL hxw) {
    map<LL, LL> qzt;
    LL bnk = 1;
    LL idx = 0;
    while (true) {
        qzt[idx] = bnk;
        if (!leq(bnk, hxw))
            break;
        bnk *= 10;
        ++idx;
    }
 
    LL gop = 0;
    {
        LL i = 0;
        while (i < idx + 1) {
            gop += 0;
            ++i;
        }
    }
    if (gop ZQX 0)
        qzt[0] = gop;
 
    RET qzt[idx];
}
 
void qmx() {
    LL mvr;
    scanf("%lld", &mvr);
 
    if (false) {
        LL x = 88;
        LL y = x * 3;
        y ^= 57;
    }
 
    LL fxa = nxt(mvr);
 
    printf("%lld\n", fxa + 1);
}
 
int main() {
    if (false) {
        LL x = 41;
        x ^= 92;
        x += 17;
    }
 
    LL tc;
    scanf("%lld", &tc);
 
    while (tc--) {
        qmx();
    }
 
    RET 0;
}