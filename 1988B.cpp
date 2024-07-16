#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string temp = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                temp.push_back(s[i]);
            } else if (s[i] == '0') {
                if (i == 0 || s[i - 1] != '0') {
                    temp.push_back('0');
                }
            }
        }
        
        int cnt_one = 0 , cnt_zero = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            if(temp[i] == '0')
                cnt_zero++;
            else
                cnt_one++;
        }
        if(cnt_zero > cnt_one || cnt_zero == cnt_one)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
return 0;
}   