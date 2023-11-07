#include<bits/stdc++.h>
using namespace std;

//Logic : any two prime number and its combination also be a prime number , all they are valid for this code

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.find("3") < s.find("7")){
            cout<<37<<endl;
        }else{
            cout<<73<<endl;
        }
    }
return 0;
}   