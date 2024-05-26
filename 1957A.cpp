#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        map<int,int> mp;
        int cnt = 0;
        while(n--){
            cin>>x;
            mp[x]++;
        }
        for(auto it : mp){
            cnt += (it.second / 3);
        }
        cout<<cnt<<endl;
    }
return 0;
}   