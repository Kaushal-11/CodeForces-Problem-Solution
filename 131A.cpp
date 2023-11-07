#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string result;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(isupper(s[i])){
            count++;
        }
    }
    
    if(islower(s[0]) && count == s.size()-1 || count == s.size()){
        for (char c : s)
        {
            if(isupper(c)){
                result += tolower(c);
            }
            else{
                result += toupper(c);
            }
        }
    }
    else{
        result = s;
    }

    cout<<result;
return 0;
}