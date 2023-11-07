#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int size;
        cin >> size;
        int x;
        int count = 0;
        for (int i = 1; i <= size; i++)
        {
            cin >> x;
            if (x == i)
            {
                count++;
            }
        }
        cout << (count + 1) / 2 << endl;
    }
    return 0;
}