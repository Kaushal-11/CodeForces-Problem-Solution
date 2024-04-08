#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt[2] = {0};
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        cnt[i % 2] += a[l] > a[r] ? a[l++] : a[r--];
    }
    cout << cnt[0]<<" "<<cnt[1];
    return 0;
}