#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<s[0]<<s[1];
    for (int i = 2; i < n-1; i+=2)
    {
        cout<<"-"<<s[i]<<s[i+1];
    }
    if(n%2 != 0){
        cout<<s[n-1];
    }
    
return 0;
}   