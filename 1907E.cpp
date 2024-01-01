#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long ans = 1;
        int n;
        cin>>n;
        while(n > 0){
            int x = n % 10;
            ans *= (x+1)*(x+2)/2;
            n /= 10;
        }
        cout<<ans<<endl;
    }
return 0;
}   