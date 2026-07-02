#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q;
    cin >> q;
 
    while (q--) {
        string s, t;
        cin >> s >> t;
 
        int lcp = 0;
        while (lcp < (int)min(s.size(), t.size()) && s[lcp] == t[lcp])
            lcp++;
 
        int ans = s.size() + t.size();
        if (lcp > 0)
            ans = min(ans, (int)(s.size() + t.size() - lcp + 1));
 
        cout << ans << '\n';
    }
 
    return 0;
}