#include<bits/stdc++.h>
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

void solve() {
    ll n;
    cin >> n;

    vi values(n);
    ll sum = 0;

    loop(i, 0, n) {
        cin >> values[i];
        sum += values[i];
    }

    string directions;
    cin >> directions;

    ll answer = 0;
    ll left = 0, right = n - 1;

    while (right > left) {
        while (directions[left] == 'R') {
            sum -= values[left];
            left++;
        }
        while (directions[right] == 'L') {
            sum -= values[right];
            right--;
        }

        if (right < left)
            break;

        answer += sum;
        sum -= values[left];
        left++;
        sum -= values[right];
        right--;
    }

    cout << answer << endl;
}

int main() {
    fast_io;

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
