#include<bits/stdc++.h>
using namespace std;

char str[300];
int cnt[1<<7];
int main(){
	gets(str);
	for (int i=0;str[i];i++){
		cnt[str[i]]++;
	}
	gets(str);
	for (int i=0;str[i];i++){
		if (isalpha(str[i]) && cnt[str[i]]-- ==0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
