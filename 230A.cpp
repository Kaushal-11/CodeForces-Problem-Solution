#include <bits/stdc++.h>

using namespace std;

int n, s, i, x, y, a[10001], m;

int main()
{
    cin >> s >> n;
    for (i = 0; i < n; i++)
        cin >> x >> y;
        a[x] += y;
        m = max(m, x);
    for (i = 1; i <= m; i++)
        if (s > i)
            s += a[i];
    cout << (s > m ? "YES" : "NO");
}
