#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        if (num <= 28)
            cout << "aa" << char('a' + num - 3)<< endl;
        else if (num <= 53)
            cout <<"a"<<char('a' + num - 28) << "z" << endl;
        else
            cout << char('a' + num - 53)<<"zz" << endl;
    }
    return 0;
}