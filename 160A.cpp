#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    int sum = 0,cnt = 0;
    int i;
    for (i = 0; i < n; i++){
        cin>>a[i];
        sum += a[i];
    }
    sort(a,a+n);
    for (i = 0; 2*cnt <= sum; i++)
    {
        cnt += a[n-i-1];
    }
    cout<<i<<endl;
return 0;
}   