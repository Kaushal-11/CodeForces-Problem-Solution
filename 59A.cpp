#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int ucnt = 0 , lcnt = 0;
    for(int i = 0 ; i < s.length();i++){
        if(s[i] >= 65 && s[i] <= 90)
            ucnt++;
        else
            lcnt++;
    }
    if(lcnt >= ucnt){
        for(char &ch : s){
            ch = tolower(ch);
        }
        cout<<s<<endl;
    }
    else{
        for(char &ch : s){
            ch = toupper(ch);
        }
        cout<<s<<endl;
    }
    return 0;
}   