#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, d;
        int n, a = 0, f = 0;
        cin >> n >> s >> d;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && d[i] == '0')
                a++;
            if (s[i] == '0' && d[i] == '1')
                f++;
        }
        cout << max(a, f) << endl;
    }
    return 0;
}