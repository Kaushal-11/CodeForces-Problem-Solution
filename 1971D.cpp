#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int cnt = 1;
        bool flag = 0;
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i] != s[i+1])
                cnt++;
            if(s[i] == '0' && s[i+1] == '1') 
                flag = 1;
        }
        cout << cnt-flag <<endl;
    }
return 0;
}   