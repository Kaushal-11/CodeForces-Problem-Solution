#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char, int> mp = {{'S', 0},{'N', 0},{'W', 1},{'E', 1}};
        string ans(n, '#');
        int plane = 0;
        for (int i = 0; i < n; i++)
        {
            ans[i] = mp[s[i]]?'H':'R';
            if(ans[i] == 'R')
                plane = plane | 1;
            else
                plane = plane | 2;
            mp[s[i]] ^= 1;
        }
        cout<<((plane >= 3 && mp['S'] == mp['N'] && mp['W'] == mp['E']) ? ans : "NO")<<endl;
    }
return 0;
}   