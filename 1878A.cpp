#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , a ,x;
        cin>>n>>a;
        bool b = false;
        for (int i = 0; i < n; i++)
        {   
            cin>>x;
            if(x == a){
                b = true;
            }
        }
        cout<<(b == 1 ? "YES\n":"NO\n");
    }
return 0;
}