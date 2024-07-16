#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> v;
    for(int i = 0; i < n; i++){
        if(s[i] == 'z')
            v.push_back('0');
        if(s[i] == 'n')
            v.push_back('1');
    }
    sort(v.rbegin(), v.rend());
    for(char x : v)
        cout<<x<<" ";
return 0;
}