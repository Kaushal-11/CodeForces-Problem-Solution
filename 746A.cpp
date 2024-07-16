#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int cnt = 0;
    while(a >= 1 && b >= 2 && c >= 4){
        a -= 1; b -= 2; c -= 4;
        cnt += 7;
    }
    cout<<cnt;
return 0;
}   