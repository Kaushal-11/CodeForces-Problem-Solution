#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int req = k*w*(w+1)/2;
    cout<<((req - n)>0?(req-n):0);
return 0;
}   