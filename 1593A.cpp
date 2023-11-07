#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b,c,maxi;
    while(n--){
        cin>>a>>b>>c;
        cout<<max(max(b,c)-a+1,0)<<" "<<max(max(a,c)-b+1, 0)<<" "<<max(max(a,b)-c+1, 0)<<endl;
    }
return 0;
}