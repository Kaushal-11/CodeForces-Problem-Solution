#include<bits/stdc++.h>
using namespace std;

int main() {
    char c;
    string a, b;
    cin>>c>>a>>b;
    string u = "6789TJQKA";
    cout<<(a[1] == b[1] && u.find(a[0]) > u.find(b[0]) || a[1] == c && b[1] != c ? "YES":"NO");
return 0;
}   