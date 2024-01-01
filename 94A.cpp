#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < 10; i++)
    {
        string st;
        cin >> st;
        mp[st] = i;
    }
    for (int i = 0; i < 80; i += 10)
    {
        string str = s.substr(i, 10);
        cout << mp[str];
    }

    return 0;
}