#include <bits/stdc++.h>
using namespace std;   
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<pair<long long,int>> k(q);
        for(int i=0;i<q;i++)
        {
            cin>>k[i].first;
            k[i].second = i;
        }
        vector<long long> ans(q,0);
 
        sort(k.begin(),k.end());
        int i=0;
        long long count = 0;
        for(int j=0;j<q;j++)
        {
            long long key = k[j].first;
            while(i<n && a[i]<= key)
            {
                count += (long long)a[i];
                i++;
            }
 
            ans[k[j].second] = count;
        }
        
        for(int i=0;i<q;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}