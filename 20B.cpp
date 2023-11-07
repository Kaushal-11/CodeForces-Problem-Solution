#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a == 0 && b == 0 && c ==0){
        cout<<-1;
    }

    int d = b*b - 4*a*c;
    if(d < 0){
        cout<<0;
    }
    float root1 = (-b + sqrt(d))/2*a;
    float root2 = (-b - sqrt(d))/2*a;
    int cnt = 2;
    if(root1 == root2){
        cnt = 1;
    }
    cout<<cnt<<endl;
    if(cnt == 1){
        cout<<root1;
    }
    else{
        if(root1<root2){
            cout<<root1<<endl<<root2<<endl;
        }
        else{
            cout<<root2<<endl<<root1<<endl;
        }
    }
return 0;
}   
