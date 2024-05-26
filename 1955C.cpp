#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin>>a[i];

        long long cnt = 0;
        long long half = k/2;
        k -= half;
        for (int i = 0; i < n; i++)
        {
            if(k < a[i]){
                a[i] -= k;
                break;
            }
            else{
                k -= a[i];
                cnt++;
            }
        }
        for (int i = n-1; i >= 0; i--)
        {
            if(half < a[i])
                break;
            else{
                half -= a[i];
                cnt++;
            }
        }
        if(cnt > n){
            cnt = n;
        }
        cout<<cnt<<endl;
    }
return 0;
}   