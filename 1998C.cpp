#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i, a, b) for (int i = a; i < b; i++)
#define foreach(it, x) for (auto it = (x).begin(); it != (x).end(); ++it)
#define vi vector<int>
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * (b) / gcd(a, b))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int32_t main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vi a(n), b(n);
        loop(i, 0, n) cin >> a[i];
        loop(i, 0, n) cin >> b[i];
        vi ord(n);
        iota(all(ord), 0);
        sort(all(ord), [&](int i, int j) {
            return a[i] > a[j];
        });
        int need = ((n - 1) >> 1) + 1;
        ll low = 0, high = 1e10;
        while (low < high) {
            ll mid = (low + high + 1) >> 1;
            bool ok = 0;
            for (int i : ord) {
                if (b[i] == 1) {
                    if (a[i] + k >= mid) ok = 1;
                    ll x = mid - a[i] - k;
                    int rem = need;
                    for (int j : ord) {
                        if (j == i) continue;
                        if (rem == 0) break;
                        if (a[j] >= x) rem--;
                    }
                    if (rem == 0) ok = 1;
                    break;
                }
            }
            for (int i : ord) {
                if (b[i] == 0) {
                    ll rem = need;
                    ll sum = 0;
                    ll x = mid - a[i];
                    for (int j : ord) {
                        if (j == i) continue;
                        if (rem == 0) break;
                        if (a[j] >= x) {
                            rem--;
                        } else if (b[j]) {
                            sum += x - a[j];
                            rem--;
                        }
                    }
                    if (rem == 0 && sum <= k) {
                        ok = 1;
                    }
                    break;
                }
            }
            if (ok) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        cout << low << '\n';
    }
}