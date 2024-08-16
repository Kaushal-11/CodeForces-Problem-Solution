#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int i = 0, j = 0;
        while (i < s1.size() && j < s2.size()) {
            if (s1[i] == s2[j]) {
                i++;
                j++;
            } else if (s1[i] == '?') {
                s1[i] = s2[j];
                i++;
                j++;
            } else {
                i++;
            }
        }
        if (i >= s1.size() && j < s2.size()) {
            cout << "NO" << endl;
        } else {
            for (int i = 0; i < s1.size(); i++) {
                if (s1[i] == '?')
                    s1[i] = 'a';
            }
            cout << "YES" << endl;
            cout << s1 << endl;
        }
    }
    return 0;
}

