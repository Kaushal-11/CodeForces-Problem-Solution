#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        vector<int> b(n*n), a(n*n);
        for (int i = 0; i < n*n; i++)
            cin>>b[i];
        sort(b.begin(), b.end());
        a[0] = b[0];
        for(int i=1;i<n*n;i++){
            if(i%n==0) 
                a[i]=a[i-n]+c;
            else 
                a[i]=a[i-1]+d;
        }
        sort(a.begin(),a.end());
        cout<<(a == b?"YES":"NO")<<endl;
    }
return 0;
}   
