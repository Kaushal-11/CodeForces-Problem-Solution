#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mx = 0, mn = 1e9;
        cin >> n;
        int a[n];
        cin >> a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, max(a[i], a[i - 1]));
        }
        cout << mn - 1 << endl;
    }
}