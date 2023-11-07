#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        string ans;
        for (int i = 0; i < 64; i++)
        {
            char c;
            cin>>c;
            if(c!='.'){
                ans += c;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}