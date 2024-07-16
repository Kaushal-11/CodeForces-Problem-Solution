#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.find('8') < (n - 10) && s.length() > 10)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
return 0;
}   