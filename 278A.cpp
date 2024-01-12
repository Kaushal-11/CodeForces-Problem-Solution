#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t,s, sum1 = 0, sum2 = 0, sum3 = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum1 += arr[i];
    }
    cin>>t>>s;
    for (int i = min(t,s); i < max(t,s); i++)
    {
        sum2 += arr[i-1];
    }
    sum3 = sum1 - sum2;
    cout<<min(sum2,sum3)<<endl;
return 0;
}   