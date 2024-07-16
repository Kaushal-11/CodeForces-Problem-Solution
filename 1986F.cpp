#include<bits/stdc++.h>
using namespace std;
#define int long long

map<pair<int,int>,int> M;
int cnt;

pair<int,int> find(int index,vector<vector<int>> &adj,vector<int>& visited,int par){
    if(visited[index] !=- 1)
        return {visited[index],0};

    cnt++;
    visited[index] = cnt;

    int res = visited[index],sum = 1;

    for(auto &val : adj[index]){
        if(val == par) 
            continue;
        pair<int,int> P = find(val,adj,visited,index);
        int x = P.first;
        int y = P.second;
        sum += y;
        if(x <= visited[index])
            res = min(res,x);
        else
            M[{index,val}] = y;
    }

    visited[index] = res;
    return {res,sum};
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> adj(n);
        while(m--){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        M.clear();
        cnt = 0;
        vector<int> visited(n,-1);
        pair<int,int> P = find(0,adj,visited,-1);

        int ans = n*(n-1)/2;
        for(auto &it : M){
            int I = it.second;
            int r = n - it.second;
            ans = min(ans, (I*(I-1)+(r*(r-1)))/2);
        }
        cout << ans << endl;
    }
return 0;
}