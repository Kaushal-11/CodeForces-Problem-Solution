#include<bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin>>k;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    string ans;
    for (int i = 0; i < s.size(); i += k)
    {
        if(s[i] == s[i+k-1])
            ans += s[i];
        else{
            cout<<-1<<endl;
            exit(0);
        }
    }
    while(k--)
        cout<<ans;

return 0;
}   