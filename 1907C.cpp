#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char, int> m;
        set<int> st;
        int maxi = 0;
        for (auto x : s){
            m[x]++;
            maxi = max(maxi,m[x]);
        }
        cout<<max(n%2 , 2*maxi-n)<<endl;
    }
return 0;
}   