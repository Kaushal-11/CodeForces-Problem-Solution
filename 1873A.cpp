#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        if(s == "bca" || s == "cab") cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
return 0;
}