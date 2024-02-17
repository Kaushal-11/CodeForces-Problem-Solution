#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    set<int> a, b, c;
    int n, m, k;
    int x;
    while (t--)
    {
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x <= k){
                a.insert(x);
                c.insert(x);
            }
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            if (x <= k){
                b.insert(x);
                c.insert(x);
            }
        }
        if (c.size() == k && a.size() >= k / 2 && b.size() >= k / 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        a.clear(), b.clear(), c.clear();
    }
    return 0;
}