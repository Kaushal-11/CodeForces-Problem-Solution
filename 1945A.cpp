#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int cnt = a;
        if ((b + c) % 3 > c)
            cout << -1 << endl;
        else
        {
            cnt += (b + c + 2) / 3;
            cout<<cnt << endl;
        }
    }
    return 0;
}