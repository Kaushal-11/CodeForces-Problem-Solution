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

int main()
{
    fast_io; 

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (c > b || a > d){
            cout << 1 << endl;
            continue;
        }

        if (c < a){
            swap(a, c);
            swap(b, d);
        }

        int cnt = 0;
        map<int, int> mp;
        loop(i, a, b + 1)  
            mp[i]++;

        loop(i, c, d + 1)
            mp[i]++;

        int l = -1;
        int r = -1;
        loop(i, 1, 101)  
        {
            if (mp[i] == 2){
                cnt++;
                if (l == -1)
                    l = i;
                r = i;
            }
        }
        cnt--;
        if (min({a, b, c, d}) < l)
            cnt++;
        if(max({a, b, c, d}) > r)
            cnt++;

        cout << cnt << endl;
    }
    return 0;
}
