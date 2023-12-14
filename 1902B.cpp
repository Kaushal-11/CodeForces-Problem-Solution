#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        long long n, p, l, t;
        cin>>n>>p>>l>>t;
        long z = (n-1)/7 + 1;
        long long ans = max((p-1)/(l+2*t)+1, (p-t*z-1)/l+1);
        cout<<n-ans<<endl;
    }
return 0;
}   