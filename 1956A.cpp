#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int k,q,x,y;
        cin>>k>>q;
        cin>>x;
        for (int i = 2; i <= k; i++)
            cin>>y;
        while(q--){
            int n;
            cin>>n;
            cout<<min(n, x-1)<<" "; 
        }
        cout<<endl;
    }
return 0;
}       