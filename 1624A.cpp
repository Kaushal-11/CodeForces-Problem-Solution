#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi = INT_MIN, mini = INT_MAX;
        while(n--){
            int x;
            cin>>x;
            maxi = max(maxi, x);
            mini = min(mini, x);
        }
        cout<<maxi-mini<<endl;
    }
return 0;
}