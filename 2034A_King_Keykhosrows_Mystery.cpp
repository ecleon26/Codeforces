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
 
        long long g = gcd(a, b);
        cout << (a / g) * b << '\n';
    }
 
    return 0;
}