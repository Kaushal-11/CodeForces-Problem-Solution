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
        bool flag = 0;
        for (int i = 0; i < n; i++){
            if(s[i]== '0'){
                flag = 1;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
return 0;
}   