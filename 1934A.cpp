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
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        cout << (a[n] + a[n - 1] - a[1] - a[2] << 1) << endl;
    }
    return 0;
}