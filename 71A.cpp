#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.length() > 10)
        {
            string temp;
            int n = s.length() - 2;
            temp = s[0] + to_string(n) + s[s.length() - 1];
            cout << temp <<endl;
        }
        else
        {
            cout << s <<endl;
        }
    }

    return 0;
}