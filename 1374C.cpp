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
        int p1 = 0 , p2 = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '(')
                p1++;
            else
                p2++;
            if(p1 < p2){
                p2--;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}   