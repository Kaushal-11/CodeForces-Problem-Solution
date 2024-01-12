#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    cout<<((s.find("0000000") != -1 || s.find("1111111") != -1)?"YES":"NO");
return 0;
}   