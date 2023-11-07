#include<bits/stdc++.h>
using namespace std;

int main() {
    char a;
    int cnt = 0;
    while(cin>>a){
        if(a == '4' || a == '7'){
            cnt++;
        }
    }
    cout<<(cnt == 4 || cnt == 7?"YES":"NO");
return 0;
}   