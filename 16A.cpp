#include<bits/stdc++.h>
using namespace std;

char c[1005][1005];
int n,m;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++){
            cin>>c[i][j];
            if(c[i][j]!=c[i][1]||c[i][1]==c[i-1][1]){
            cout<<"NO";
            return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}