#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] % 2 == 0)
        {
            cout << x[i] / 2<<endl;
        }
        else
        {
            cout << (x[i] / 2)+1<<endl;
        }
    }
    return 0;
}