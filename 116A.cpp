#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b,pass = 0,temp = 0;
    while(n--){
        cin>>a>>b;
        temp += (b-a);
        if(temp > pass)
            pass = temp;
    }
    cout<<pass;
return 0;
}   