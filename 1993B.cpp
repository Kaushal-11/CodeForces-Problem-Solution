#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        
        for (long long &x : a) cin >> x;

        long long max_odd = 0;
        long long max_even = 0;

        for (long long x : a) {
            if (x % 2 == 1) max_odd = max(max_odd, x);
            if (x % 2 == 0) max_even = max(max_even, x);
        }

        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (a[i] % 2 != a[0] % 2) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << 0 << endl;
            continue;
        }

        sort(a.begin(), a.end());

        int c = 0;
        for (long long &x : a) {
            if (x % 2 == 0 && x < max_odd) {
                c++;
                x += max_odd;
                max_odd = max(max_odd, x);
            }
        }

        flag = true;
        for (int i = 1; i < n; i++) {
            if (a[i] % 2 != a[0] % 2) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << c << endl;
            continue;
        }

        auto it = find(a.begin(), a.end(), max_odd);
        if (it != a.end()) {
            *it += max_even;
            c++;
        }

        for (long long x : a) {
            if (x % 2 == 0) {
                c++;
            }
        }

        cout << c << endl;
    }
    return 0;
}