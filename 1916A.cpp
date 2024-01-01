#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long product = 1;
        while(n--){
            int b;
            cin>>b;
            product *= b;
        }
        if(2023 % product == 0){
            cout<<"YES"<<endl;
            cout<<2023/product<<" ";
            k--;
            while(k--){
                cout<<"1 ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}   