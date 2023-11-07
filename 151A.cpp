#include<bits/stdc++.h>
using namespace std;

int main() {
    int  n, k, l, c, d, p, nl, np; 
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totalml = k * l;
    int toast = totalml / nl;
    int limes = c * d;
    int salt = p / np;
    int ans = min(toast,min(limes,salt));
    cout<<ans/n;
return 0;
}