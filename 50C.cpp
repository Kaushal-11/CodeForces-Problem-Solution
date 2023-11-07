#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a = INT_MIN, b = INT_MIN, c = INT_MAX, d = INT_MAX;
    while(n--){
        int x,y;
        cin>>x>>y;
        a = max(a, x-y);
        b = max(b, x+y);
        c = min(c, x-y);
        d = min(d, x+y);
    }
    int ans = a + b - c - d + 4;
    cout<<ans;
return 0;
}   