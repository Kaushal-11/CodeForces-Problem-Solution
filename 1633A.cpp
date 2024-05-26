#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<n-n%7+7*(n%10<n%7)<<endl;
    }
return 0;
}   