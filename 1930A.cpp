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
        long long a[n * 2], sum = 0;
        for (int i = 0; i < n * 2; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n * 2);
        for (int i = 0; i < n * 2; i += 2)
        {
            sum += a[i];
        }
        cout << sum<<endl;
    }
    return 0;
}