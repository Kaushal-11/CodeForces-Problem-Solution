#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a,b;
    int cnt = 0;
    for (a = 0; a*a <= n; a++)
    {
        b = n - a*a;
        if(m == b*b + a)
            cnt++;
    }
    cout<<cnt<<endl;
return 0;
}