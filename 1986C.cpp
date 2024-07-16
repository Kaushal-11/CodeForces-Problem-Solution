#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int> v(m,0);
        for(int i=0;i<m;i++)
            cin>>v[i];

        string s2;
        cin>>s2;

        sort(s2.begin(),s2.end());
        
        map<int,int>mp;
        for(auto it:v)
            mp[it]++;
        

        int extra = 0;
        for(auto it:mp)
            extra += (it.second-1);
        
        s2 = s2.substr(0,m);

        int i=0;
        for(auto& it:mp)
        {
            int ind = it.first;
            s[ind-1] = s2[i];
            i++;
        }
        cout<<s<<endl;    
    }
    return 0;
}