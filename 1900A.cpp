#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        if(s.find("...") != s.npos) cout<<2<<endl;
        else{
            for(int i = 0; i < n; i++){
                if(s[i]=='.')
                    ans++;
            }
            cout<<ans<<endl;
        }
    }
return 0;
}   