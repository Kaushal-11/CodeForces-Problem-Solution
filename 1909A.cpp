#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l = 0, r = 0 , u = 0, d = 0;
        while(n--){
            int x,y;
            cin>>x>>y;
            if(x < 0) l++;
            else if(x > 0) r++;
            if(y > 0) u++;
            else if(y < 0) d++;
        }
        if(!u || !d || !l || !r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
return 0;
}   