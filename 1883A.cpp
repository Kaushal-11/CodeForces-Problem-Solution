#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int index = 1 , ans = 4;
        for (int i = 0; i < 4; i++)
        {
            int temp = s[i] - '0';
            if(temp == 0){
                temp += 10;
            }
            ans += abs(temp - index);   
            index = temp;
        }
        cout<<ans<<endl;
    }
return 0;
}   