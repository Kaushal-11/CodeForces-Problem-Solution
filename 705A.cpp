#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string ans = "";
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 != 0){
            if(i == n) ans += "I hate it";
            else ans += "I hate that ";
        }
        else
            if(i == n) ans += "I love it";
            else ans += "I love that ";
    }
    cout<<ans;
return 0;
}   