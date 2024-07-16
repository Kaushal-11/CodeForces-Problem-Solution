#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    unordered_map<int, int> mp;
    int num = n;
    while(n--){
        int x;
        cin>>x;
        mp[x]++;
    }
    cout<<num - max(mp[1], max(mp[2], mp[3]));
return 0;
}   