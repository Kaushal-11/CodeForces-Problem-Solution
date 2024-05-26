#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string res = s;
        next_permutation(s.begin(), s.end());
        if(s == res)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl<<s<<endl;
        }
    }
return 0;
}   