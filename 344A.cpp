#include<bits/stdc++.h>
using namespace std;

int main() {
    int b,d;
    int cnt = 0;
    int n;
    cin>>n;
    while(n--){
        cin>>d;
        if(b != d)
            cnt++;
        b = d;
    }
    cout<<cnt<<endl;
return 0;
}   