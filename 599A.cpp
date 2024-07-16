#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(2*(a+b) , min(a+b+c, min(a,b)*2 + 2*c))<<endl;
return 0;
}   