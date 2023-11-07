#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp = n;
    double sum = 0.0;
    while(n--){
        int x; 
        cin>>x;
        sum += double(x)/100.0;
    }
    double ans = (sum/temp)*100;
    printf("%.12f",ans);
return 0;
}