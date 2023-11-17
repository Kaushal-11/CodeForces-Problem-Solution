#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    string s[n];
    int x1 = INT_MAX , x2 = INT_MIN , y1 = INT_MAX , y2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
       cin>>s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(s[i][j] == '*'){
                x1 = min(x1, i);
                x2 = max(x2, i);
                y1 = min(y1, j);
                y2 = max(y2, j);
            }
        }
    }

    for (int i = x1; i <= x2; i++)
    {
        for (int j = y1; j <= y2; j++)
        {
            cout<<s[i][j];
        }
        cout<<endl;
    }
    
return 0;
}   