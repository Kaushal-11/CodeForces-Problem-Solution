#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string original = "314159265358979323846264338327";
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.size() && s[i] == original[i]; i++)
        {
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}