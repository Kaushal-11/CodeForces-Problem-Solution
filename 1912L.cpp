#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f1_L = 0,f1_O = 0, f2_L = 0,f2_O = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'O')
            f2_O++;
        else
            f2_L++;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]=='O'){
            f1_O++;
            f2_O--;
        }
        else{
            f1_L++;
            f2_L--;
        }
        if(f1_L != f2_L && f1_O != f2_O){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
return 0;
}