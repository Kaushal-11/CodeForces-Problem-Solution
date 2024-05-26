#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin>>t;
	while(t--){
		int n; 
        cin>>n;
		vector<string> v;
		for(int i = 0; i < (2*n-2); i++){
			string s;
            cin>>s;
			if(s.size()==n-1)
				v.push_back(s);
		}
        
		if(v[0] == string(v[1].rbegin(),v[1].rend()))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}