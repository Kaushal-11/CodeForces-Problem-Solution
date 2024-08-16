#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string ans;
        bool flag = false;

        if (s.length() == 1) {
            char newChar = (s[0] == 'z') ? 'a' : s[0] + 1;
            ans = s + newChar;
        } else {
            for (int i = 0; i < s.length() - 1; i++) {
                if (s[i] == s[i + 1] && !flag) {
                    ans = s.substr(0, i + 1); 
                    char newChar = (s[i] == 'z') ? 'a' : s[i] + 1;
                    ans += newChar;           
                    ans += s.substr(i + 1);   
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                char lastChar = s[s.length() - 1];
                char newChar = (lastChar == 'z') ? 'a' : lastChar + 1;
                ans = s + newChar;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
