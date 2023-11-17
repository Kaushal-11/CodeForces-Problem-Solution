#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n] , e[n];
        int flag = 0;
        for (int i = 0; i < n; i++){
            cin>>s[i]>>e[i];
        }
        for (int i = 1; i < n; i++)
        {
            if(s[i] >= s[0] && e[i] >= e[0]){
                s[0] = -1;
            }
        }
        cout<<s[0]<<endl;
    }
return 0;
}   