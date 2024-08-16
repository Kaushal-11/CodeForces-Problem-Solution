#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt = 0, temp = 1;
        while(k > 0){
            cnt++;
            k -= n;
            temp++;
            if(!(temp & 1))
                n--;
        }
        cout<<cnt<<endl;
    }
return 0;
}   