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
        int a[200000] = {0};
        while (n--)
        {
            int x;
            cin >> x;
            cout << char('a' + a[x]);
            a[x]++;        
        }
        cout<<endl;
    }
    return 0;
}