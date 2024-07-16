#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s; 
    cin>>s;
    map<string, int> mp;
    string temp, ans;
    int maxi = 0;
    for (int i = 0; i < n-1; i++)
    {
        temp = s.substr(i, 2);
        mp[temp]++;
        if(mp[temp] > maxi){
            maxi = mp[temp];
            ans = temp;
        }
    }
    cout<<ans;
return 0;
}   