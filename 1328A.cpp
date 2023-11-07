#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,ans;
        cin>>a>>b;
        ans = a % b;
        cout<<(b-ans)%b<<endl;
    }
return 0;
}   