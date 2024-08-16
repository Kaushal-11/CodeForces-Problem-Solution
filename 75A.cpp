#include<bits/stdc++.h>
using namespace std;

int fun(int x){
    int a = 0, t = 1;
    while(x){
        if(x % 10){
            a += x%10*t;
            t *= 10;
        }
        x /= 10;
    }
    return a;
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<((fun(a)+fun(b) == fun(a+b)) ? "YES" : "NO")<<endl;
return 0;
}   