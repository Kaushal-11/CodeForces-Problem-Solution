#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        char c;
        cin >> a >> c >> b;
        int d = a;
        if (a == 0)
            a = 12;
        else if (a > 12)
            a = a - 12;
        printf("%02d:%02d %s",a ,b, (d<12 ? "AM":"PM"));
        cout<<endl;
    }
    return 0;
}