#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long n,k,x;
    cin>>t;
    while(t--){
        cin>>n>>k>>x;
        if((k*(k+1)/2) > x || ((2*n-k+1)*k/2) < x){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
return 0;
}   