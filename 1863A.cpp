#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    while(n--){
        int sub,sub_online,notification;
        string s;
        cin>>sub>>sub_online>>notification;
        cin>>s;
        int x=sub_online,y=sub_online,z=sub_online;
        for (int i = 0; i < notification; i++)
        {
            if(s[i] == '-'){
                z--;
            }
            else{
                z++;
                y++;
            }
            x = max(x,z);
        }
        if(x>=sub){
            cout<<"YES"<<endl;
        }
        else if(y>=sub){
            cout<<"MAYBE"<<endl;
        }
        else
            cout<<"NO"<<endl;
    } 
return 0;
}