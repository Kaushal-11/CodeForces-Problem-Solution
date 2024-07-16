#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int maxi = 0;
        int digit = 2;
        for (int i = 2; i <= n; i++)
        {
            int sum = 0;
            for (int k = 1; k * i <= n  ; k++)
                sum += (k * i);
            
            if(sum > maxi){
                maxi = sum;
                digit = i;    
            }
        }
        cout<<digit<<endl;
    }   
return 0;
}   