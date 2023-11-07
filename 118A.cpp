#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    regex r("[aeiouyAEIOUY]");
    s = regex_replace(s , r , "");
    vector<char> v;
    for (int i = 0; i < s.length(); i++)
    {
        v.push_back('.');
        v.push_back(s[i]);
    }
    for(auto x : v){
        cout<<(char)tolower(x);
    }
    
return 0;
}