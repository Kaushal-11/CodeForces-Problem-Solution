#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt1 , cnt0 = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '0')
                cnt0++;
        }
        cnt1 = n - cnt0;
        int j = 0;
        while(cnt0 >= 0 && cnt1 >= 0){
            if(s[j] == '0')
                cnt1--;
            else
                cnt0--;
            j++;
        }
        cout<<n-j+1<<endl;
    }
return 0;
}   