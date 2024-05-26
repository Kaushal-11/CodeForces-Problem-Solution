#include<iostream>
#include<algorithm>
using namespace std;

int a[105];

int main(){
    int n;
    cin>>n;
    double pi=3.141592653589793, sum = 0;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    
    sort(a,a+n+1);
    
    for(int i = n; i > 0; i = i-2)
        sum = sum + pi*(a[i]*a[i]-a[i-1]*a[i-1]);
    
    cout<<sum;
}