#include<bits/stdc++.h>
using namespace std;

int main() {
    long long m , n , a;
    cin>>m>>n>>a;
    long long a1 = (m + a - 1) / a;
    long long a2 = (n + a - 1) / a;
    long long ans = a1 * a2;
    cout<<ans;
return 0;
}
