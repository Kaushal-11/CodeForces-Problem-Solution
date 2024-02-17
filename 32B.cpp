#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
            cout << 0;
        else if (s[++i] == '-')
            cout << 2;
        else
            cout<<1;
    }
    return 0;
}