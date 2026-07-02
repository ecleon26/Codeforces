#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b;
        cin >> a >> b;
 
        if (a >= b)
            cout << a << '\n';
        else if (b <= 2 * a)
            cout << 2 * a - b << '\n';
        else
            cout << 0 << '\n';
    }
 
    return 0;
}