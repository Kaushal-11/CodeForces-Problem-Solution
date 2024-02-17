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
        int a[n];
        int l[2000000], r[2000000];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (i + 1 > n || a[i] - a[i - 1] < a[i + 1] - a[i])
                l[i] = l[i - 1] + 1;
            else
                l[i] = l[i - 1] + a[i] - a[i - 1];
        }

        for (int i = n; i >= 1; i--)
        {
            if (i < 2 || a[i] - a[i - 1] > a[i + 1] - a[i])
                r[i] = r[i + 1] + 1;
            else
                r[i] = r[i + 1] + a[i + 1] - a[i];
        }

        int m;
        cin >> m;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            if (x < y)
                cout << r[x] - r[y] << endl;
            else
                cout<<l[x]-l[y] << endl;
        }
    }
    return 0;
}