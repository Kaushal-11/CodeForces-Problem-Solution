#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[4][5000], y[4];
    int k, x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        y[x]++;
        a[x][y[x]] = i + 1;
    }
    k = min(y[1], min(y[2], y[3]));
    cout << k << endl;
    for (int i = 1; i <= k; i++)
    {
        cout << a[1][i] << " " << a[2][i] << " " << a[3][i] << endl;
    }
    return 0;
}