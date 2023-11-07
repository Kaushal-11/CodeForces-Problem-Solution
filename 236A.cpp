#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int len = s.length();
    int count;
    set<char> unique;
    for (int i = 0; i < len; i++)
    {
        unique.insert(s[i]);
    }
    count = unique.size();
    if(count %2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
         
return 0;
}