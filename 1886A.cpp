#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n <= 6 || n == 9){
            cout<<"NO"<<endl;
        }
        else if(n % 3 == 0) cout<<"YES"<<endl<<"1 4 "<<n-5<<endl;
        else cout<<"YES"<<endl<<"1 2 "<<n-3<<endl;
    }
return 0;
}