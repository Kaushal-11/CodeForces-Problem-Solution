#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string temp = s;
        reverse(s.begin(), s.end());
        s += temp;
        cout << (s > temp ? temp : s) << endl;
    }
    return 0;
}