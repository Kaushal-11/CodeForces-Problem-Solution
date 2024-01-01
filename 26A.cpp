#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[7000];
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if(!a[i]){
            for (int j = i; j <= n; j += i)    
                a[j]++;
        }
        if(a[i] == 2)
            cnt++;
    }
    cout<<cnt;
return 0;
}   