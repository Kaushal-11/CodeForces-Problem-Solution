#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(max(a,b)==max(c,d) && max(a,b)==min(a,b)+min(c,d))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
return 0;
}   