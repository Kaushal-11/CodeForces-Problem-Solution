#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    s.erase(remove(s.begin(), s.end(),' '),s.end());
    int n = s.length();
    char ch = toupper(s[n-2]);
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}   