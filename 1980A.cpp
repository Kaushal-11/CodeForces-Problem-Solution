#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        int cnt = 0;
        map<char, int> mp;
        for (char c = 'A'; c <= 'G'; c++)
            mp[c] = 0;
        for(char c : s)
            mp[c]++;
        for(auto it : mp){
            if(it.second < m)
                cnt += (m - it.second);
        }
        cout<<cnt<<endl;
    }
return 0;
}   