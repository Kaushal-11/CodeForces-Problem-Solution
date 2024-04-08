#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cntA = 0 , cntB = 0;
        for (int i = 0; i < 5; i++)
        {
            if(s[i] == 'A')
                cntA++;
            else
                cntB++;
        }
        cout<<((cntA > cntB)?"A":"B")<<endl;
    }
return 0;
}   