#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+10];
        int ans = INT_MIN, temp = 0;
        for(int i = 0 ; i < n;i++){
            cin>>arr[i];
            if(i > 0 && abs(arr[i]%2 + arr[i-1]%2) == 1){
                temp = max(temp+arr[i],arr[i]);
            }
            else
                temp = arr[i];
            ans = max(ans , temp);
        }
        cout<<ans<<endl;
    }   
return 0;
}