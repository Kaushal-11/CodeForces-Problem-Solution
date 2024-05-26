#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,z;
    cin>>n>>m>>z;
    int cnt = 0;
    vector<int> a,b;
    int temp1,temp2;
    for (int i = 1; i <= z; i++)
    {
        temp1 = i*n;
        if(temp1 <= z)
            a.push_back(temp1);

        temp2 = i*m;
        if(temp2 <= z)
            b.push_back(temp2);
    }
   
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if(a[i] == b[j])    
                cnt++;
        }
    }
    cout<<cnt<<endl;
return 0;
}   