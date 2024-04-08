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
        vector<int> v;
        int a = 1, temp;
        while (n > 0)
        {
            temp = n % 10;
            n /= 10;
            if (temp != 0)
            {
                v.push_back(temp * a);
            }
            a *= 10;
        }
        cout << v.size() << endl;
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}