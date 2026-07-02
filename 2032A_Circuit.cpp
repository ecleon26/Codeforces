#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int z = 0, x;
        for (int i = 0; i < 2 * n; i++) {
            cin >> x;
            if (x == 0) z++;
        }
 
        int o = 2 * n - z;
 
        cout << (z % 2) << " " << min(z, o) << "\n";
    }
 
    return 0;
}