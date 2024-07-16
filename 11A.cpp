#include <bits/stdc++.h>
using namespace std;
int a[2020];
int main()
{
    int n, cnt = 0, d, t ;
    cin >> n >> d;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        t = a[i] > a[i - 1] ? 0 : (a[i - 1] - a[i]) / d + 1;
        cnt += t;
        a[i] = a[i] + t * d;
    }
    cout << cnt;
    return 0;
}