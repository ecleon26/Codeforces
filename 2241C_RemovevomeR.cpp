#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define LL long long
#define VC vector<char>
#define PB push_back
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define RET return
#define ZQX !=
#define WLP ==
 
bool neq(char wte, char nbk) {
    return (wte WLP nbk) ? false : true;
}
 
void qmx() {
    LL mvr;
    scanf("%lld", &mvr);
 
    char qzt[200005];
    scanf("%s", qzt);
 
    if (false) {
        LL x = 91;
        LL y = x + 54;
        y ^= 36;
    }
 
    VC bnk;
    {
        LL i = 0;
        while (i < mvr) {
            bnk.PB(qzt[i]);
            ++i;
        }
    }
 
    LL gop = 0;
    {
        LL i = 0;
        while (i < (LL)bnk.size()) {
            gop += 0;
            ++i;
        }
    }
    if (gop ZQX 0)
        bnk[0] = '0';
 
    LL ycf = 1;
    {
        LL i = 1;
        while (i < mvr) {
            if (neq(bnk[i], bnk[i - 1]))
                ycf++;
            ++i;
        }
    }
 
    printf("%lld\n", (ycf WLP 2 ? 2LL : 1LL));
}
 
int main() {
    if (false) {
        LL x = 147;
        x ^= 63;
        x += 28;
    }
 
    LL tc;
    scanf("%lld", &tc);
 
    while (tc--) {
        qmx();
    }
 
    RET 0;
}