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

const int MAXN = 300005;
ll a[MAXN], b[MAXN], c[MAXN];

int main(){
    fast_io;
    ll t, n, check;
    cin >> t;
    while (t--)
    {
        check = 1;
        cin >> n;
        loop(i, 1, n+1)
        {
            cin >> a[i];
            c[n - i + 1] = a[i];
        }
        loop(i, 1, n+1)
        {
            cin >> b[i];
            if (b[i] != a[i])
            {
                check = 0;
            }
        }

        if (check == 0)
        {
            check = 1;
            loop(i, 1, n+1){
                if (b[i] != c[i])
                    check = 0;
            }
        }

        cout << (check ? "Bob\n" : "Alice\n");
    }
    return 0;
}