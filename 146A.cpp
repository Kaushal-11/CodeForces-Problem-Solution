#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++)
		if (s[i] != '7' && s[i] != '4')
			return cout << "NO", 0;
		else if(i < n / 2)
			cnt += s[i];
		else
			cnt -= s[i];
	cout << (cnt? "NO": "YES");
}
