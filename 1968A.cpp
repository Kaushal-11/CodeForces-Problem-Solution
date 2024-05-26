#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi = INT_MIN;
        int index;
        for (int i = 1; i < n; i++)
        {
            maxi = max(maxi,__gcd(n,i)+i);
            index = i;
        }
        cout<<index<<endl;
    }
return 0;
}   