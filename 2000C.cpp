#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i, a, b) for(int i = a; i < b; ++i)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

string check_template(vi &a, string &s) {
    if (a.size() != s.size()) {
        return "NO";
    }

    unordered_map<char, int> char_to_num;
    unordered_map<int, char> num_to_char;

    loop(i, 0, a.size()) {
        char c = s[i];
        int num = a[i];

        if (char_to_num.count(c) && char_to_num[c] != num) {
            return "NO";
        }

        if (num_to_char.count(num) && num_to_char[num] != c) {
            return "NO";
        }

        char_to_num[c] = num;
        num_to_char[num] = c;
    }

    return "YES";
}

int main() {
    fast_io;

    ll t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vi a(n);
        loop(i, 0, n) {
            cin >> a[i];
        }

        cin >> x;
        while (x--) {
            string s;
            cin >> s;
            cout << check_template(a, s) << endl;
        }
    }

    return 0;
}
