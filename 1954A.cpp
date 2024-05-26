#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        cout<<((m*(n-k-1) >= n)?"YES":"NO")<<endl;
    }
return 0;
}   