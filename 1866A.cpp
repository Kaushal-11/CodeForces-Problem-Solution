#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin>>n;
    int ans = INT_MAX;
    while(n--){
        cin>>x;
        ans = min(ans, abs(x));
    }
    cout<<ans;
return 0;
}