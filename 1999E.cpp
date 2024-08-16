// #include <iostream>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while(t--) {
//         int l, r;
//         cin >> l >> r;
//         int ans = 0;
//         int curr = l;
//         int next = l + 1;

//         while (curr > 0) {
//             curr /= 3;
//             ans += 2;
//         }

//         while (next > 0) {
//             ans += 1;
//             next /= 3;
//         }

//         for (int i = l + 2; i <= r; i++) {
//             int num = i;
//             while (num > 0) {
//                 num /= 3;
//                 ans += 1;
//             }
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

const int N = 2 * 1e5 + 1;
vector<int> dp(N + 1, -1);

int solve(int i)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    dp[i] = 1 + solve(i / 3);

    return dp[i];
}

int main()
{
    int t;
    cin >> t;

    for (int i = N; i >= 0; i--)
        solve(i);

    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int ans = dp[l] * 2;
        for (int i = l + 1; i <= r; ++i)
        {
            ans += dp[i];
            cout << ans << endl;
            return 0;
        }
    }
}
