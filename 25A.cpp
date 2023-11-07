#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x,cntO = 0,cntE = 0,ans1,ans2;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x % 2 == 0){
            cntE++;
            ans1 = i + 1;
        }
        else{
            cntO++;
            ans2 = i + 1;
        }
    }
    if(cntE>cntO){
        cout<<ans2;
    }
    else
        cout<<ans1;
    
return 0;
}