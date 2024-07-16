#include "bits/stdc++.h"

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);
    int maxi=0,p=1,x=0;
    
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1])
            p++;
        else{
            maxi=max(maxi,p);
            x++;
            p=1;
        }
    }
    maxi=max(maxi,p);
    x++;
    cout<<maxi<<" "<<x<<endl;
}
