#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s, ans;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        if((n-i)%2)
            ans = ans + s[i];
        else
            ans = s[i] + ans;
    }
    cout<<ans;
return 0;
}   