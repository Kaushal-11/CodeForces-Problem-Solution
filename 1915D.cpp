#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if((s[i+1] == 'a' || s[i+1] == 'e') && i != 0){
                s.insert(s.begin()+i,'.');
                n++;
                i += 2;
            }
        }
        cout<<s<<endl;
    }
return 0;
}   