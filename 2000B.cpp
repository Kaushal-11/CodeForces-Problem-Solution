#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,b) for(int i=a;i<b;i++)
#define foreach(it, x) for(auto it = (x).begin(); it != (x).end(); ++it)
#define vi vector<int>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fast_io;

    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        vi v(n + 1, 0);
        v[arr[0]] = 1;

        bool valid = true;
        for (int i = 1; i < n; i++) {
            int temp = arr[i];
            if (temp == n) {
                if (v[temp - 1] == 1) {
                    v[temp] = 1;
                } else {
                    valid = false;
                    break;
                }
            } else if (temp == 1) {
                if (v[temp + 1] == 1) {
                    v[temp] = 1;
                } else {
                    valid = false;
                    break;
                }
            } else if (v[temp - 1] || v[temp + 1]) {
                v[temp] = 1;
            } else {
                valid = false;
                break;
            }
        }

        valid ? yes : no;
    }

    return 0;
}
