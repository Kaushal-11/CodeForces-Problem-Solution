#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        int x;
        while(n--){
            cin>>x;
            sum += abs(x);
        }
        cout<<sum<<endl;
    }
return 0;
}   