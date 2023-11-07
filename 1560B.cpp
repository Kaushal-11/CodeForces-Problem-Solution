#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int circle = abs(a-b);
        if(a > 2*circle || b > 2*circle || c > 2*circle){
             cout<<-1<<endl;
        }
        else if(c <= circle){
             cout<<(c + circle)<<endl;;
        }
        else if(c > circle){
             cout<<(c - circle)<<endl;
        }
    }
return 0;
}