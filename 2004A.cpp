#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i, a, b) for(int i = a; i < b; i++)
#define foreach(it, x) for(auto it = (x).begin(); it != (x).end(); ++it)
#define vi vector<int>
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        loop(i, 0, n) {
            cin >> a[i];
        }
        if (n <= 2) {
            if (n == 2 && abs(a[0] - a[1]) == 1) {
                no;
            } else {
                yes;
            }
        } else {
            no;
        }
    }
    return 0;
}
