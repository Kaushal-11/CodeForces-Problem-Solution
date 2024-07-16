#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {   
        string x;
        cin>>x;
        if(x[0] == s[0] || x[1] == s[1]){
            flag = true;
        }
    }
    cout<<(flag ? "YES" : "NO");
return 0;
}   