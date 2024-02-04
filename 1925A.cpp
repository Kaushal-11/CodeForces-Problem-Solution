#include<iostream>

using namespace std;

int t;

int main()
{
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		for(int i=0;i<k;i++) s+='a'+i;
		for(int i=0;i<n;i++) cout<<s;
		puts("");
	}
}