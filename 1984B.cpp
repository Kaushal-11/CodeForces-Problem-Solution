#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string x;
		cin >> x;
		
		if (x[0] != '1' || x[x.size() - 1] == '9'||count(x.begin(), x.end()-1, '0')!=0) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
	return 0;
}   