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
        int arr[n];
        int check[260] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            check[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (check[arr[i]] == 1)
                cout << i + 1 << endl;
        }
    }
    return 0;
}