#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    while(n*(n+1)/2*5>240-k){
        n--;
    }
    cout<<n<<endl;
}