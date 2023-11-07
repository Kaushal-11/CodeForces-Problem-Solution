#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        cout<<((x >= y)? x : (y-x <= k) ? y : 2*y-x-k)<<endl;
    }
return 0;
}   