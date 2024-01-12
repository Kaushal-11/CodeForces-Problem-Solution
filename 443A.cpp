#include<bits/stdc++.h>
using namespace std;

main() {
    char c;
    set<char> s;
    while(cin>>c){
        if(isalpha(c))
            s.insert(c);
    }
    cout<<s.size()<<endl;
}   