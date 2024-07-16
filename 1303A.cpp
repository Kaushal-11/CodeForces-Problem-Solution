#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int front = s.find("1");
        int back = s.rfind("1");
        int cnt = 0, i;
        
        for (int i = front; i < back; i++)
        {
            if(s[i] == '0')
                cnt++;
        }
        cout<<cnt<<endl;
    }
return 0;
}   