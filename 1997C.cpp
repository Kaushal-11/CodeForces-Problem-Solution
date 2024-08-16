#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        stack<int> st;
        st.push(0);
        long long ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '_')
            {
                if (st.size() > 0)
                {
                    int ind = st.top();
                    st.pop();
                    ans += (i - ind);
                }
                else
                {
                    st.push(i);
                }
            }
            else if (s[i] == '(')
                st.push(i);
            
            else if (s[i] == ')')
            {
                int ind = st.top();
                st.pop();
                ans += (i - ind);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
