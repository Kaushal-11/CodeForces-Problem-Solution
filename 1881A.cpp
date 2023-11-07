#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n ,m ,cnt = 0;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        while(x.find(s) == -1 && x.size()<50){
            x += x;
            cnt++;
        }
        if(x.find(s) != -1) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
return 0;
}   