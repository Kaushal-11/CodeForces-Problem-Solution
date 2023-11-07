#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        long size;
        cin>>size;
        long long x;
        long long sum = 0;
        for (int i = 0; i < size; i++)
        {
            cin>>x;
            if(x == 1)
                sum--;
            else
                sum += (x-1);
        }
        if(sum >= 0 && size != 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
return 0;
}