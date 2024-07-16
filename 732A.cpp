#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,x;
	cin >> k >> x;
    int cnt = 1;
	int temp = k;
	while(1)
	{
		if (k % 10 == x || k % 10 == 0) 
            break;
		cnt++;
		k += temp;
	}
	cout << cnt;
}