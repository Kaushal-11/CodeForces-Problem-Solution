#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, temp;
        cin >> s;
        temp = s.substr(0, s.length() / 2);
        cout<<(temp+temp == s ? "YES":"NO")<<endl;
    }
    return 0;
}