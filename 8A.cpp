#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,a,b;
    cin>>s>>a>>b;
    int cnt = 0;
    string arr[4] = {"fantasy", "forward", "backward", "both"};    
    if(s.find(a) != -1 && s.find(b, a.size()+s.find(a)) != -1)
            cnt++;
    reverse(s.begin(), s.end());
    if(s.find(a) != -1 && s.find(b, a.size()+s.find(a)) != -1)
            cnt += 2;

    cout<<arr[cnt]<<endl;    
return 0;
}   