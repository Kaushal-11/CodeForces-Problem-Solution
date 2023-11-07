#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n , sum = 0; 
        cin>>n;
        while(n>1){
            int x ;
            cin>>x;
            sum += x;
            n--;
        }
    int ans = -sum;
    cout<<ans<<endl;
    }
return 0;
}   