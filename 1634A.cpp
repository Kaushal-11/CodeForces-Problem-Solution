#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string temp = s;
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] != s[n-i-1])
                flag = 1;
        }
        cout<<(flag && k ? 2 : 1)<<endl;
    }
return 0;
}   