#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<((a >= b && (a-b)%2 == 0)? "Yes":"No")<<endl;
    }
return 0;
}   