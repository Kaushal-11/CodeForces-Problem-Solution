#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int i = 1;
    while(m - i >= 0){
        m -= i;
        i %= n;
        i++;
    }
    cout<<m;
return 0;
}   