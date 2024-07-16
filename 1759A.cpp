#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string temp = "";
        for (int i = 0; i < 25; i++)
            temp += "Yes";
        
        cout<<(temp.find(s) != -1 ? "YES" : "NO")<<endl;
    }
return 0;
}   