#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > b)
            swap(a, b);
        if (c > d)
            swap(c, d);
        if (a > c)
        {
            swap(a, c);
            swap(b, d);
        }
        if (a < c && b > c && b < d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
return 0;
}

