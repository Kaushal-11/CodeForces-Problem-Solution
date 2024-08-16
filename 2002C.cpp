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

ll calculateDistanceSquared(ll x1, ll y1, ll x2, ll y2)
{
    ll deltaX = x2 - x1;
    ll deltaY = y2 - y1;
    return deltaX * deltaX + deltaY * deltaY;
}

int main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, flag = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        loop(i, 0, n)
            cin >> a[i] >> b[i];

        ll xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;

        ll comp = calculateDistanceSquared(xs, ys, xd, yd);

        loop(i, 0, n){
            if (comp >= calculateDistanceSquared(a[i], b[i], xd, yd)){
                flag = 1;
                break;
            }
        }

        if (flag)
            no;
        else
            yes;
    }
    return 0;
}