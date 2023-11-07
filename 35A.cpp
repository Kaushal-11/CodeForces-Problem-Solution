#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int key;
    cin >> key;
    int x, y;
    for (int i = 0; i < 3; i++)
    {
        cin >> x >> y;
        if (key == x)
        {
            key = y;
        }
        else if (key == y)
        {
            key = x;
        }
    }
    cout << key;
    return 0;
}