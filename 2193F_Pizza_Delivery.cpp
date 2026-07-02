#include <bits/stdc++.h>
using namespace std;
 
using int64 = long long;
const int64 INF = (1LL << 60);
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        int64 Ax, Ay, Bx, By;
        cin >> n >> Ax >> Ay >> Bx >> By;
 
        vector<int64> xs(n), ys(n);
        for (int i = 0; i < n; i++) cin >> xs[i];
        for (int i = 0; i < n; i++) cin >> ys[i];
 
        vector<pair<int64,int64>> p(n);
        for (int i = 0; i < n; i++)
            p[i] = {xs[i], ys[i]};
        sort(p.begin(), p.end());
 
        vector<tuple<int64,int64,int64>> cols; // (x, L, R)
 
        for (int i = 0; i < n; ) {
            int j = i;
            int64 L = p[i].second;
            int64 R = p[i].second;
            while (j < n && p[j].first == p[i].first) {
                L = min(L, p[j].second);
                R = max(R, p[j].second);
                j++;
            }
            cols.emplace_back(p[i].first, L, R);
            i = j;
        }
 
        int64 prevL = Ay, prevR = Ay;
        int64 dpL = 0, dpR = 0;
 
        bool first = true;
 
        for (auto &[x, L, R] : cols) {
            int64 len = R - L;
 
            if (first) {
                int64 ndpL = min(llabs(Ay - L) + 2 * len,
                                 llabs(Ay - R) + len);
                int64 ndpR = min(llabs(Ay - R) + 2 * len,
                                 llabs(Ay - L) + len);
                dpL = ndpL;
                dpR = ndpR;
                prevL = L;
                prevR = R;
                first = false;
                continue;
            }
 
            int64 ndpL = INF, ndpR = INF;
 
            auto costEndL = [&](int64 y) {
                return min(llabs(y - L) + 2 * len,
                           llabs(y - R) + len);
            };
 
            auto costEndR = [&](int64 y) {
                return min(llabs(y - R) + 2 * len,
                           llabs(y - L) + len);
            };
 
            ndpL = min(dpL + costEndL(prevL),
                       dpR + costEndL(prevR));
 
            ndpR = min(dpL + costEndR(prevL),
                       dpR + costEndR(prevR));
 
            dpL = ndpL;
            dpR = ndpR;
            prevL = L;
            prevR = R;
        }
 
        int64 vertical;
        if (cols.empty()) {
            vertical = llabs(Ay - By);
        } else {
            vertical = min(dpL + llabs(prevL - By),
                           dpR + llabs(prevR - By));
        }
 
        cout << (Bx - Ax) + vertical << "\n";
    }
 
    return 0;
}