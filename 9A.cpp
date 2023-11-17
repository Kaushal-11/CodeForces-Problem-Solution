#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int f = 7-max(a,b);
    int g = __gcd(f,6);
    cout<<f/g<<"/"<<6/g<<"\n";
}