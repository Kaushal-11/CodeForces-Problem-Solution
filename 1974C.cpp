#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin>>v[i];
        long long ans = 0;
        map<vector<long long>, long long> mp;
        for (long long i = 0; i < n-2; i++)
        {
            long long p = v[i];
            long long q = v[i+1];
            long long r = v[i+2];
            long long pairs = 0;
            pairs = mp[{p,q,0}] + mp[{p,0,r}] + mp[{0,q,r}] - 3*mp[{p,q,r}];
            mp[{p,q,0}]++;
            mp[{p,0,r}]++;
            mp[{0,q,r}]++;
            mp[{p,q,r}]++;
            ans += pairs;
        }
        cout<<ans<<endl;
    }
return 0;
}   