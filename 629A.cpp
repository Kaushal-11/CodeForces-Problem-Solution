#include<bits/stdc++.h>
using namespace std;

int r[100],c[100];
int n, cnt = 0;

int main() {
    cin>>n;
    char a;
    for (int i = 0; i < n*n; i++)
    {
        cin>>a;
        if(a == 'C'){
            cnt += r[i/n]++;
            cnt += c[i%n]++;
        }
    }
    cout<<cnt<<endl;
return 0;
}