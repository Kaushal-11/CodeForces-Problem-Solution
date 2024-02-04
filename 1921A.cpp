#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,e,f,g,h;
        cin>>a>>b>>c>>d>>e>>f>>g>>h;
        int temp = max(abs(a-c),abs(b-d));
        cout<<temp*temp<<endl;
    }
return 0;
}   