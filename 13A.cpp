#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,ans = 0;
	cin>>a;
	for(int i=2; i<a; i++){
		int temp = a;
		while(temp){
            int rem = temp % i;
			ans += rem;
			temp /= i;
		}
	}
	int g = __gcd(ans,a-2);
	cout<<ans/g<<"/"<<(a-2)/g;
	return 0;
}