#include<bits/stdc++.h>
using namespace std;

int t,n,a[55];

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		
	    if(a[1]==a[n])
	    {
	    	cout<<"NO"<<endl;
	    	continue;
		}
	    
		cout<<"YES"<<endl;
		string s(n,'R');
		s[1]='B';
		cout<<s<<endl;
	}
}