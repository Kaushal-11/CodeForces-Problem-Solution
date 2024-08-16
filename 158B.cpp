#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, freq[5] = {0}, a, cnt = 0;
	cin >> n;
	while (n--) {
		cin >> a;
		freq[a]++;
	}
	cnt = freq[4] + freq[3] + freq[2] / 2;
	freq[1] -= freq[3];
	if (freq[2] % 2 == 1) {
		freq[1] -= 2;
		cnt++;
	}
	if (freq[1] > 0) 
        cnt += (freq[1] + 3) / 4;
	cout << cnt;
	return 0;
}