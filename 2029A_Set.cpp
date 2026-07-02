#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        long long l, r, k;
        cin >> l >> r >> k;
 
        long long ans = r / k - l + 1;
        if (ans < 0) ans = 0;
 
        cout << ans << '\n';
    }
 
    return 0;
}