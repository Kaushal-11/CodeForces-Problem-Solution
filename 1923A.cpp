#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[60];
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i])
                cnt++;
        }
        int h = 1, b = n;
        while (a[h] == 0)
            h++;
        while (a[b] == 0)
            b--;
        cout << b - h + 1 - cnt << endl;
    }
    return 0;
}