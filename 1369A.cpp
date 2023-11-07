#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int side;
    for (int i = 0; i < n; i++)
    {
        cin>>side;
        if(side % 4 == 0){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    
return 0;
}