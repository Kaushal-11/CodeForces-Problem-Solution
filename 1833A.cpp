#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
	cin>>t;
	while(t--){
		cin>>n>>s;
		set<string> p;
		for(int i=0;i<n-1;i++) 
            p.insert(s.substr(i,2));
		cout<<p.size()<<endl;
	}
	return 0;
}