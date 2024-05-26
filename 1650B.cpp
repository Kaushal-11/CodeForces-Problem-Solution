#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int l, r, a;
        cin>>l>>r>>a;
        int p , x;
        p = r/a + r%a;
        x = r/a*a-1;
        if(x >= l)
            p = max(p, x/a+x%a);
        cout<<p<<endl;
    }
return 0;
}   