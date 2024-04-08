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
        int sum = 0;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 3 == 1)
                temp = 1;
            sum += a;
        }
        if (sum % 3 == 0)
            cout << 0 << endl;
        else if (sum % 3 == 2)
            cout << 1 << endl;
        else if (temp)
            cout << 1 << endl;
        else
            cout<<2<< endl;
    }
    return 0;
}