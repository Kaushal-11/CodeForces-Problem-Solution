#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt = 0;
        cnt += n/4;
        if(n % 4 != 0)
            cnt++;
        cout<<cnt<<endl;
    }
return 0;
}   