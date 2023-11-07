#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin() , v.end());
    cout<<v[n/2];
return 0;
}