#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mini = min(a,min(b,c));
        if(a%mini == 0 && b%mini == 0 && c%mini == 0 && (a/mini + b/mini + c/mini) <= 6){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
return 0;
}   