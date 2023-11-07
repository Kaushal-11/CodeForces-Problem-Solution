#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s == "yes" || s == "Yes" || s == "yEs" || s == "yeS" || s == "YEs" || s == "yES" || s == "YeS" || s == "YES") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}