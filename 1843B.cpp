#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,cnt = 0,flag = 0;
        long long sum = 0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            sum += abs(x);

            if(x < 0 && !flag){
                cnt++;
                flag = 1;
            }
            else if(x > 0){
                flag = 0;
            }
        }
        cout<<sum<<" "<<cnt<<endl;
    }
return 0;
}   