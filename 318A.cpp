#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,k;
    cin>>n>>k;
    long long temp = (n + 1) /2;
    cout<<(k <= temp ? 2*k-1 : 2*(k - temp));
return 0;
}