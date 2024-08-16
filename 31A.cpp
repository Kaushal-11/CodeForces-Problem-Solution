#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin>>v[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if(v[i] + v[j] == v[k]){
                    cout<<k+1<<" "<<i+1<<" "<<j+1<<endl;
                    exit(0);
                }
            }            
        }        
    }
    cout<<-1;
return 0;
}   