#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int ans = 0,temp = 0;
        int a;
        while(n--){
            cin>>a;
            ans = max(ans,a - temp);
            temp = a;
        }
        cout<<max(ans,2*(x-a))<<endl;
    }
return 0;
}   