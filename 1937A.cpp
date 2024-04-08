#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 1;
        cin >> n;
        while (n != 1)
        {
            n = n / 2;
            x *= 2;
        }
        cout << x << endl;
    }
}
