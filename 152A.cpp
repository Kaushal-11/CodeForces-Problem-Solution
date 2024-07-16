#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    string s[101];
    for (int i = 0; i < n; i++)
        cin>>s[i];

    int cnt = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            flag = true;
            for (int k = 0; k < n; k++)
            {
                if(s[i][j] < s[k][j])
                    flag = false;
            }
            if(flag){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
return 0;
}   