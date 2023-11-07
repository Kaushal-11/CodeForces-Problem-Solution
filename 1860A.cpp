#include <bits/stdc++.h>
using namespace std;

bool checkParentheses(string str)
{
    stack<int> s;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            s.push(str[i]);
        }

        else
        {
            if (s.empty() == true)
            {
                return false;
            }
            else if (s.top() == '(' && str[i] == ')')
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return s.size() == 0;
}

int main()
{
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (checkParentheses(s))
        {
            cout << "NO" << endl; // valid parenthasis
        }
        else
        {
            cout << "YES" << endl; // invalid parenthasis
            string t = "";
            for (int i = 0; i < s.length(); i++)
            {
                t += "()";
            }
            cout << t <<endl;
        }
    }

    return 0;
}
