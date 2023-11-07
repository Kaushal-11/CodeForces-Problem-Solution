#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,arr[3];
    cin>>n;
    while(n--){
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr , arr+3);
        if(arr[1] != arr[2])
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<arr[0]<<" "<<arr[0]<<" "<<arr[2]<<endl;
            }
    }
return 0;
}