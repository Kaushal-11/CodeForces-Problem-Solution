#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[3];
    while(n--){
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        if((arr[0] == (arr[1]+arr[2])) || (arr[1] == (arr[0]+arr[2])) || arr[2] == ((arr[1]+arr[0])))
            cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}