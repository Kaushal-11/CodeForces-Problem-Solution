#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int temp = a[f];
        sort(a.begin() + 1, a.begin() + n + 1);
        if(a[n-k+1] > temp)
            cout<<"NO"<<endl;
        else if(a[n-k+1] < temp || (a[n-k+1] == temp && a[n-k] < temp))
            cout<<"YES"<<endl;
        else
            cout<<"MAYBE"<<endl;
    }
    return 0;
}
