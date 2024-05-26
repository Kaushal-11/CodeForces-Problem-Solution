#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            if((s[i] - '0') < d){
                s = s.substr(0,i) + to_string(d) + s.substr(i);
                check = true;
                break;
            }
        }
        if(!check){
            cout<<s+to_string(d)<<endl;
        }
        else
            cout<<s<<endl;
    }
return 0;
}   