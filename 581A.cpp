#include<bits/stdc++.h>
using namespace std;

int main() {
    int a , b;
    cin>>a>>b;
    int mini = min(a,b);
    int maxi = max(a,b);
    int x = maxi - mini;
    cout<<mini<<" "<<x/2;
return 0;
}   