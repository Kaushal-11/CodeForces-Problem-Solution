#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int maxi = INT_MIN, mini = INT_MAX;
        int ans = 0;
        int n;
        cin >> n;
        while (n--)
        {
            int a, x;
            cin >> a >> x;
            if (a == 1)
                maxi = max(maxi, x);
            else if (a == 2)
                mini = min(mini, x);
            else
                v.push_back(x);
        }
        ans = mini - maxi + 1;
        for (auto it : v)
        {
            if (it >= maxi && it <= mini)
                ans--;
        }
        cout << max(0, ans) << endl;
    }
    return 0;
}