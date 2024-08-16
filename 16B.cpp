#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    long long s = 0;
    cin >> n >> m;
    pair<int, int> p[m];
    for (int i = 0; i < m; i++)
        cin >>p[i].second >>p[i].first;

    sort(p, p + m);

    for (int i = m - 1; i >= 0; i--)
    {
        if (p[i].second <= n)
        {
            s += p[i].first *p[i].second;
            n -= p[i].second;
        }
        else
        {
            s += n * p[i].first;
            break;
        }
    }
    cout << s;

    return 0;
}
