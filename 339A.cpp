#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[101];
    int n = 0;
    while(cin>>arr[n]){
        n++;
    }
    sort(arr,arr+n);
    cout<<arr[0];
    for(int i = 1;i<n;i++)
        cout<<"+"<<arr[i];
return 0;
}   