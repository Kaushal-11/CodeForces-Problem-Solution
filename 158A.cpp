#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,a[50]={0},i,j;
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(j=0; a[j]>=a[k-1]&&a[j]!=0; j++);
	cout << j << endl;   
return 0;
}   