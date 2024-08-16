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
int main() {
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        cout<<min(n,k)*min(m,k)<<endl;
    }
    return 0;
}