#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool flag = false;
        for (int i = 1; i < s.length(); i++)
        {
            string a = s.substr(0,i);
            string b = s.substr(i);

            if(a[0] != '0' && b[0] != '0' && stoi(a) < stoi(b)){
                cout<<a<<" "<<b<<endl;
                flag = true;
                break;
            }
        }
        if(flag == 0) cout<<-1<<endl;
    }
return 0;
}   