#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int cnt=0;
	while(s.size()!=1)
	{
		int sum=0;
		for(auto v:s)
			sum+=(v-'0');
		s=to_string(sum);
		cnt++;
	}
	printf("%d",cnt);
	return 0;
} 