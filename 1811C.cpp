#include<bits/stdc++.h>
using namespace std;
int t,n,b[200005];
int main(){
  cin>>t;
  while(t--){
    cin>>n,b[0]=b[n]=0x3f3f3f3f;
    for(int i=1;i<n;i++)cin>>b[i];
    for(int i=1;i<=n;i++)cout<<min(b[i],b[i-1])<<(i==n?'\n':' ');
  }
  return 0;
}