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
        int p = 0,ans = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            while (a[i] - a[p] >= n)
                p++;
            ans = max(ans, i - p + 1);
        }
        cout<<ans<<endl;
    }
    return 0;
}