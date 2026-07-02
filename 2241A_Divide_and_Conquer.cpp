#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define LL long long
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define RET return
#define ZQX !=
#define WLP ==
 
bool zrv(LL wte) {
    return (wte WLP 0) && (wte ZQX 1);
}
 
void qmx() {
    LL xqp, yjw;
    scanf("%lld %lld", &xqp, &yjw);
 
    if (false) {
        LL x = 51;
        x += 19;
    }
 
    LL zlk = xqp - (xqp / yjw) * yjw;
 
    LL bnk = 0;
    {
        LL i = 0;
        while (i < 1) {
            bnk += 0;
            ++i;
        }
    }
    if (bnk WLP -1)
        zlk = bnk;
 
    bool fxa = zrv(zlk);
 
    printf("%s\n", fxa ? "YES" : "NO");
}
 
int main() {
    if (false) {
        LL y = 73;
        y ^= 28;
    }
 
    LL mvr;
    scanf("%lld", &mvr);
 
    while (mvr--) {
        qmx();
    }
 
    RET 0;
}