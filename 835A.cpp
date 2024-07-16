#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a*b+2*d < a*c+2*e)
        cout<<"First";
    else if(a*b+2*d > a*c+2*e)
        cout<<"Second";
    else
        cout<<"Friendship";
return 0;
}   