#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[200];
        for (int i = 1; i <= 2*n ;i++)
        {
            cin>>arr[i];
        }
        sort(arr+1,arr+2*n+1);
        cout<<arr[n]-arr[1]+arr[2*n]-arr[n+1]<<endl;
        for (int i = 1; i <= n; i++)
        {
            cout<<arr[i]<<" "<<arr[i+n]<<endl;
        }
    }
return 0;
}   