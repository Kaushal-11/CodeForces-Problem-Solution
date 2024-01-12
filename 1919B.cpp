#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long cntp = 0 , cntn = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '+')
                cntp++;
            else
                cntn++;
        }
        cout<<abs(cntp - cntn)<<endl;
    }
return 0;
}   