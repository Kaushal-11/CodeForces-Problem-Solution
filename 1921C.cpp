#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,f,a,b;
        long long temp = 0;
        cin>>n>>f>>a>>b;
        while(n--){
            long long m;
            cin>>m;
            f -= min(b, (m-temp)*a);
            temp = m;
        }

        if(f <= 0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
return 0;
}   