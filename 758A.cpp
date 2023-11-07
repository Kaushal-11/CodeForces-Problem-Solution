#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ,maxi = INT_MIN ,temp = 0;
    cin>>n;
    int y = n;
    while(n--){
        int x;
        cin>>x;
        maxi = max(x, maxi);
        temp += x;
    }
    cout<<maxi * y - temp;
return 0;
}