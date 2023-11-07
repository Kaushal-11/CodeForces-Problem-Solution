#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int flag = 0;
        cin>>n;
        map<int, int> m;
        for (int i = 0; i < n; i++){
            int a;
            cin>>a;
            m[a]++;
        }
        if((m.size()==1) || ((m.size()==2) && (abs(m.begin()->second - m.rbegin()->second)) <= 1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}   