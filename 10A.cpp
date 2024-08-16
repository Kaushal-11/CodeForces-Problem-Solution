#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, d, e, f, l, r;
    cin >> n >> a >> b >> d >> e >> f;
    int c = 0, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> l >> r;
        if (i > 1)
        {
            sum += min(e, l - c) * a;
            if (l - c > e)
            {
                sum += min(l - c - e, f) * b;
                if (l - c > e + f)
                    sum += (l - c - e - f) * d;
            }
        }
        sum += (r - l) * a;
        c = r;  
    }
    cout << sum;
}