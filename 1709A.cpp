#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[3];
        for (int i = 1; i <= 3; i++)
            cin>>a[i];
        
        if(a[n] != 0 && a[a[n]] != 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
return 0;
}   