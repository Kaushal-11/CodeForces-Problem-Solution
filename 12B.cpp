#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    sort(a.begin(),a.end());
    for (int i = 0; i < a.size(); i++)
    {
        if(a[0]=='0')
            swap(a[0],a[i]);
    }
    if(a == b)
        cout<<"OK"<<endl;
    else
        cout<<"WRONG_ANSWER"<<endl;
return 0;
}   