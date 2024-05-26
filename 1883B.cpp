#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<int, int> mp;
        for (char ch : s)
            mp[ch]++;
        
        int ans = 0;
        for(auto it : mp){
            if(it.second % 2 == 1){
                ans++;
            }
        }
        if(ans > k+1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}   