#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main() {
    int t;
    cin>>t;
    while(t--){
        ull n;
        cin >> n;

        set<ull> s;
        ull mask = 1;

        for (int i = 0; i < 64; ++i) {
            if (n & (mask << i) && (n ^ (mask << i))) {
                s.insert(n ^ (mask << i));
            }
        }
        
        s.insert(n);
        cout << s.size() << endl;
        for (auto x : s) {
            cout << x << " ";
        }
        cout << endl;
    }
}