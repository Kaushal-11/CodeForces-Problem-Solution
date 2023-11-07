#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1 , s2;
    cin>>s1>>s2;
    string temp = "";
    for (int i = s2.size()-1; i >= 0; i--)
    {
        temp += s2[i];
    }
    if(temp == s1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
}   