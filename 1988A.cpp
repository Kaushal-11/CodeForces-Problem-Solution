#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int cnt = 1;
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        if(n < k){
            cout<<1<<endl;
            continue;
        }
        while(n > k){
            n = n - (k - 1);
            cnt++;
        }  
        cout<<cnt<<endl;
    }
return 0;
}   