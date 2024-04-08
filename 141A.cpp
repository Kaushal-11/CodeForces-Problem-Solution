#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,b,c;
    cin>>a>>b>>c;
    string temp = a + b;
    sort(c.begin(),c.end());
    sort(temp.begin(),temp.end());
    cout<<(c == temp ? "YES" : "NO");
return 0;
}   