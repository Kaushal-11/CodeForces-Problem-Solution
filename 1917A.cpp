#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int neg = 0;
        bool flag = false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] < 0)
                neg++;
            if(!a[i])
                flag = true;
        }
        if(flag || neg % 2 != 0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl<<1<<' '<<0<<endl;;
        }
    }
return 0;
}   