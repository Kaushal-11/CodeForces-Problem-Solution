#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
    cin>>n>>m;
	vector<int> v(m+1,0);
	while(n--) {
		int x,a; 
        cin>>x;
		for(int i=0;i<x;i++) {
			cin>>a;
			v[a]++;
		}
	}
	if(count(v.begin(), v.end(), 0)==1) 
        cout<<"YES";
	else 
        cout<<"NO";

	return 0;
}