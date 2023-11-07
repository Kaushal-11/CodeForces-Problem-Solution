#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int size, x,even = 0, odd =0,mini = INT_MAX;
        cin>>size;
        while(size--){
            cin>>x;
            mini = min(mini, x);
            if(x % 2 == 1) odd++ ;
            else even++;
        }
        if(mini % 2 == 1 || odd == 0 || even == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}