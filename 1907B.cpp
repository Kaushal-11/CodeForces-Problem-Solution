#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans;
        int b = 0 , B = 0;
        for (int i = s.size()-1; i >= 0; i--){
            if(s[i] == 'b')
                b++;
            else if(s[i] == 'B')
                B++;
            else 
                if(s[i] >= 'a' && b)
                    b--;
                else if(s[i] < 'a' && B)
                    B--;
                else
                    ans += s[i];
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
return 0;
}