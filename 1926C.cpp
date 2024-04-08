#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(200005, 0);
    v[0] = 0;
    for (int i = 1; i < 200005; i++)
    {
        int sum = 0;
        int a = i;
        while (a)
        {
            sum += a % 10;
            a /= 10;
        }
        v[i] = sum + v[i - 1];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n] << endl;
    }
    return 0;
}
