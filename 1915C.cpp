#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long long sum = 0;
        while(n--){
            long long a;
            cin>>a;
            sum += a;
        }
        double ans = sqrt(sum);
        if(ans == round(ans))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
return 0;
}   