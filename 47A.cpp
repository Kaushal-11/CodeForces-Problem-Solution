#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,temp;
    cin>>n;
    temp = sqrtl(n*2);
    if(temp*temp+temp==2*n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
}   