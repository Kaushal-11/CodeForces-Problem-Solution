#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int first;
    cin>>first;
    int temp , count = 0;
    temp = first;
    while(n > 1){
        int x;
        cin>>x;
        if(x < temp) {
            temp = x;
            count++;
        }
        else if(x > first){
            first = x;
            count++;
        }
        n--;
    }
    cout<<count;
return 0;
}