#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int p = 0, ans = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
            if(a[i] != a[1]){
                ans = min(ans, i-1-p);
                p = i;
            }
        }
        ans = min(ans, n-p);
        if(ans == n)
            cout<<"-1"<<endl;
        else
            cout<<ans<<endl;
    }
return 0;
}   