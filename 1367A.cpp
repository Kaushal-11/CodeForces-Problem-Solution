#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int size = s.size();
        string ans = "";
        ans = s.substr(0, 2);
        for (int i = 2; i < s.size(); i++)
        {
            if(i % 2 != 0)
                ans += s[i];
        }
        cout<<ans<<endl;
    }
return 0;
}   