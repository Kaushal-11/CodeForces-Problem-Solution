#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,T;
	cin>>T;
	while(T--){
		cin>>n;
		if(n%2)cout<<"NO";
		else{
			cout<<"Yes"<<endl;
			for(int i=1;i<=n/2;i++)cout<<"AAB";
		}
        cout<<endl;
	}
}