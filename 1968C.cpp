#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int S=1000;
		cout<<S<<" ";
		for(int i = 0; i < n-1; i++){
			int x;
			cin>>x;
			S+=x;
			cout<<S<<" ";
		}
		cout<<endl;
	}
}