#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        int cnt = 0;
 
        for (char i = 'A'; i <= 'Z'; i++) {
            int requiredCount = i - 'A' + 1;
            if (mp[i] >= requiredCount) {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}   