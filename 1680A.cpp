#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int cnt = 0;
        if((min(a,b) >= c && min(a,b) <= d) || (min(c,d) >= a && min(c,d) <= b))
            cnt = max(min(a,b),min(c,d));
        else
            cnt = min(a,b) + min(c,d);

        cout<<cnt<<endl;
    }
    
return 0;
}   