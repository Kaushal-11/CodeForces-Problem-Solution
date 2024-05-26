#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s ,temp, ans;
        cin>>s;
        set<char> v;
        for(char c : s)
            v.insert(c);
        for(char c : v)
            temp += c;
        for(int i = 0; i < n; i++){
            int index = temp.find(s[i]);
            ans += temp[temp.size()-index-1];
        }
        cout<<ans<<endl;
    }
return 0;
}   