#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s,a;
        cin>>s>>a;
        unordered_map<char, int> mp;
        int sum = 0;

        for (int i = 0; i < 26; ++i) 
            mp[s[i]] = i+1;

        for (int i = 1; i < a.size(); i++)
            sum += abs(mp[a[i]] - mp[a[i-1]]);
        
        cout<<sum<<endl;
    }
return 0;
}   