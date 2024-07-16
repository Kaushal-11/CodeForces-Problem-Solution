#include<bits/stdc++.h>
using namespace std;
int main(){
	int T,cnt;
	cin>>T;
	while(T--){
		int n;
		long long a,m=-1,s=0;
		cnt=0;
		cin>>n;
		while(n--){
			cin>>a;
			s+=a;
			if(a>m){
				m=a;
			}
			if(m<<1==s)cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}