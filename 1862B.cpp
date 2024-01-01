#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int b[200005];
    vector<int> a;
    while(t--){
        int n;
        cin>>n;
        for (int i = 1; i <= n; i++)
            cin>>b[i];
        a.clear();
        a.push_back(b[1]);
        for (int i = 2; i <= n; i++){
            if(b[i] >= b[i-1])
                a.push_back(b[i]);
            else{
                a.push_back(1);
                a.push_back(b[i]);
            }
        }
        cout<<a.size()<<endl;
        for(auto i : a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
return 0;
}   