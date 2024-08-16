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

const int N = 2e5 + 10; 
const int inf = 1e9; 

int n, q, val[N], prv[N][16], nxt[N][16]; 

void solve() 
{ 
    cin >> n >> q; 
    auto get_idx = [](char c) { 
        if (c == 'B') 
            return 0; 
        if (c == 'G') 
            return 1; 
        if (c == 'R') 
            return 2; 
        return 3; 
    }; 

    loop(i, 1, n + 1) { 
        string s; 
        cin >> s; 
        val[i] = (1 << get_idx(s[0])) | (1 << get_idx(s[1])); 
    } 

    loop(i, 0, 16) 
        prv[0][i] = nxt[n + 1][i] = 0; 

    loop(i, 1, n + 1) { 
        loop(j, 0, 16) 
            prv[i][j] = prv[i - 1][j]; 
        prv[i][val[i]] = i; 
    } 

    for (int i = n; i >= 1; i--) { 
        loop(j, 0, 16) 
            nxt[i][j] = nxt[i + 1][j]; 
        nxt[i][val[i]] = i; 
    } 

    while (q--) { 
        int x, y; 
        cin >> x >> y; 
        if (x > y) 
            swap(x, y); 
        if (x == y) { 
            cout << "0\n"; 
            continue; 
        } 
        if (val[x] & val[y]) { 
            cout << y - x << '\n'; 
        } 
        else { 
            int res = inf; 
            loop(i, 0, 4) { 
                if (val[x] >> i & 1) { 
                    loop(j, 0, 4) 
                        if (val[y] >> j & 1) { 
                            int mask = (1 << i) | (1 << j); 
                            if (prv[x][mask]) 
                                res = min(res, abs(x - prv[x][mask]) + abs(y - prv[x][mask])); 
                            if (nxt[x][mask]) 
                                res = min(res, abs(nxt[x][mask] - x) + abs(nxt[x][mask] - y)); 
                        } 
                } 
            } 
            if (res == inf) 
                res = -1; 
            cout << res << '\n'; 
        } 
    } 
} 

int main() 
{ 
    fast_io

    int t; 
    cin >> t; 
    while (t--) 
    { 
        solve(); 
    } 

    return 0; 
} 