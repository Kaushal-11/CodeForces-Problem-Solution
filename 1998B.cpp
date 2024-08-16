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
#define lcm(a, b) ((a) * (b) / gcd(a, b))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fast_io;

    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        
        loop(i, 0, n) {
            cin >> v[i];
        }

        if (n > 1) {
            int last = v[n - 1];
            for (int i = n - 1; i > 0; --i) {
                v[i] = v[i - 1];
            }
            v[0] = last;
        }
        
        loop(i, 0, n) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
