#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'  
 
const ll MOD = 1e9 + 7;
 
void solve() {
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
    cin >> n;
 
    vector<ll> a(n);
 
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for (ll i = 0; i < n; i++) {
        if (a[i] < 0) {
            a[i] = a[i] * -1;
        }
    }
 
    sort(a.begin(), a.end());
 
    cout << a[0];
 
    // while (t--) {
    //     solve();
    // }
 
}