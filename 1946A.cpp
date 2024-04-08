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
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        int mid = (n + 1) / 2;
        for (int i = mid; i <= n; i++)
        {
            if (a[i] == a[mid])
                cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}