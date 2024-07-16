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
        string ans = "";
        int temp;
        for (int i = n-1; i >= 0; i--)
        {
            if(s[i] == '0'){
                temp = (s[i-2] - '0')*10 + (s[i-1] - '0');
                i -= 2;
            }
            else
                temp = s[i] - '0';
            ans = char(temp + 'a' - 1) + ans;
        }
        cout << ans << endl;
    }
return 0;
}