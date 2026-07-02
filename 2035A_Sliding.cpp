#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;
 
        cout << (m - c) + (n - r) * (2 * m - 1) << '\n';
    }
 
    return 0;
}