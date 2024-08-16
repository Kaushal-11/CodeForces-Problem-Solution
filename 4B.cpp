#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int x[100],y[100];
    int min_sum, max_sum;
    for (int i = 0; i < a; i++)
    {
        cin>>x[i]>>y[i];
        min_sum += x[i];
        max_sum += y[i];
    }

    if(min_sum > b || max_sum < b){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    for (int i = 0; i < a; i++)
    {
        cout<<min(y[i], b-min_sum+x[i])<<" ";
        b -= min(y[i], b-min_sum+x[i]);
        min_sum -= x[i];
    }
    
return 0;
}   