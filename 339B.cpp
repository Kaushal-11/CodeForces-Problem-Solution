#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    long long a[m];
    for (int i = 0; i < m; i++)
        cin>>a[i];
    
    long long s = 0, cnt = 1;
    for (int i = 0; i < m; i++)
    {
        s += ((a[i] - cnt) + n) % n;
        cnt = a[i];
    }
    cout<<s << endl;
return 0;
}   