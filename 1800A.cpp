#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    regex r("[mM]+[eE]+[oO]+[wW]+");
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<(regex_match(s,r) ? "YES" : "NO")<<endl;
    }
return 0;
}   