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
        int cnt = 0;
        bool check = 0;
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '1')
                    cnt++;
            }
            if (cnt == 1)
                check = 1;
        }

        if (check)
            cout << "TRIANGLE" << endl;
        else
            cout << "SQUARE" << endl;
    }

    return 0;
}
