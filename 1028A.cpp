#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ;j++){
            cin>>a[i][j];
        }
    }
    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ;j++){
            if(a[i][j]=='B'){
                count++;
            }
        }
        cout<<endl;
    }
    int b = sqrt(count);
    int t=0;
    int x,y;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ;j++){
            if(a[i][j]=='B'){
                x=i;
                y=j;
                t=2;
                break;
            }
            if(t==2){
                break;
            }
        }
        if(t==2){
            break;
        }
    }
    x=x+1;
    y=y+1;
    cout<<(x+(b/2))<<" "<<(y+(b/2))<<endl;
return 0;
}   