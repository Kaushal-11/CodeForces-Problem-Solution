#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        string s = "codeforces";
        // if (s.find(c) != string::npos)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
        cout<<(s.find(c) == -1 ? "NO" : "YES") << endl;
    }
    return 0;
}