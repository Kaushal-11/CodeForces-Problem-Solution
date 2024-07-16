#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin>>n>>t;
    if(n == 1 && t == 10)
        cout << -1;
    else{
        cout << t;
        if(t == 10)
            n-=2;
        else
            n--;
        for(int i = 0; i < n; i++)
            cout << 0;
    }
return 0;
}   