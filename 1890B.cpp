#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        bool flag = 0;
        for (int i = 0; i < n-1; i++){
            if (s[i] == s[i+1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else{
            if (m % 2 == 0){
                cout << "NO" << endl;
            }
            else{
                bool flag2 = 0;
                for (int i = 0; i < m - 1; i++){
                    if (t[i] == t[i + 1]){
                        flag2 = 1;
                        break;
                    }
                }
                if (flag2 == 1){
                    cout << "NO" << endl;
                }
                else{
                    bool flag3 = 0;
                    for (int i = 0; i < n - 1; i++){
                        if (s[i] == s[i + 1] && s[i] == t[0]){
                            flag3 = 1;
                            break;
                        }
                    }
                    if (flag3 == 1){
                        cout << "NO" << endl;
                    }
                    else{
                        cout << "YES" << endl;
                    }
                }
            }
        }
    }
return 0;
}