#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string a,b;
    map<string,string> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(b == "child")
            b = "woman";
        mp[b] += a+"\n";
    }
    cout<<mp["rat"]<<mp["woman"]<<mp["man"]<<mp["captain"];
return 0;
}   