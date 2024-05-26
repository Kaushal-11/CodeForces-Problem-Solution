#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int cnt = 0, n  = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a')
            cnt++;
    }
    cout<<min(cnt*2-1,n)<<endl;
return 0;
}