#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n, k;
        cin >> n >> k;
 
        vector<long long> sum(k + 1, 0);
 
        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            sum[b] += c;
        }
 
        vector<long long> vals;
        for (int i = 1; i <= k; i++)
            if (sum[i] > 0)
                vals.push_back(sum[i]);
 
        sort(vals.rbegin(), vals.rend());
 
        long long ans = 0;
        for (int i = 0; i < min(n, (int)vals.size()); i++)
            ans += vals[i];
 
        cout << ans << '\n';
    }
 
    return 0;
}