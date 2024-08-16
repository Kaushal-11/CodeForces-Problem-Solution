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
        string s;
        cin >> s;
        
        if (s.length() >= 3 && stoi(s.substr(0, 2)) == 10) {
            string temp = s.substr(2);
            if (temp[0] != '0' && stoi(temp) >= 2) {
                yes;
            } else {
                no;
            }
        } else {
            no;
        }
    }
    return 0;
}
