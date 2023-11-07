#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum = 0, cnt = 0 , ans = INT_MAX;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'A') {
                cnt++;
                sum++;
            }
            else {
                ans = min(ans,cnt);
                cnt = 0;
            }
        }
        ans = min(ans , cnt);
        cout<<sum-ans<<endl;
    }
return 0;
}   