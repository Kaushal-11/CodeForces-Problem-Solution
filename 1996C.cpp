#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;

        vector<vector<int>>mat_a(n+1,vector<int>(26,0)), mat_b(n+1,vector<int>(26,0));

        for(int i=1;i<=n;i++){
            for(int j=0;j<26;j++)
            {
                mat_a[i][j] = mat_a[i-1][j];
                mat_b[i][j] = mat_b[i-1][j];
            }
            mat_a[i][a[i-1]-'a']++;
            mat_b[i][b[i-1]-'a']++;
        }

        while(q--){
            int left,right;
            cin>>left>>right;
            int cnt = 0;
            for(int i=0; i<26; i++)
            {
                int cntA = mat_a[right][i] - mat_a[left-1][i];
                int cntB = mat_b[right][i] - mat_b[left-1][i];
                cnt += abs(cntA - cntB);
            }

            cout<<cnt/2<<endl;
        }
    }
    return 0;
}