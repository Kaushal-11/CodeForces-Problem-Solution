#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<char, int> mp;
        int temp = n;
        while(temp--){
            string s;
            cin>>s;
            for(char c : s)
                mp[c]++;
        }

        bool flag = false;
        for(auto it : mp){
            if(it.second % n != 0){
                flag = true;
                break;    
            }
        }

        cout<<(flag ? "NO" : "YES")<<endl;
    }
return 0;
}   