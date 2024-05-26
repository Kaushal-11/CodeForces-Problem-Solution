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
        bool flag = 1;
        for (int i = 0; i < n; i+=2)
        {
            for (int j = 1; j < n; j+=2)
            {
                if(s[i] == s[j])
                    flag = 0;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
return 0;
}   