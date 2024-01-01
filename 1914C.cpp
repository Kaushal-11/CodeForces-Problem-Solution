#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        for (int i = 0; i < 3; i++){
            cin>>a[i];
        }
        for (int i = 0; i < 3; i++){
            cin>>b[i];
        }
        for (int i = 0; i < 3; i++){
            cin>>c[i];
        }
        int colMaxi = INT_MIN;
        int rowMaxi_a = INT_MIN;
        int rowMaxi_b = INT_MIN;
        int rowMaxi_c = INT_MIN;
        for (int i = 0; i < 3; i++){
            colMaxi = max(max(a[i],b[i]),c[i]);
            if(colMaxi == a[i]){
                for (int j = 0; j < n; j++)
                {
                    if(a[j] >= b[j] && a[j] >= c[j]){
                        rowMaxi_a = max(rowMaxi_a,a[j]);
                    }
                }
            }
            else if(colMaxi == b[i]){
                for (int j = 0; j < n; j++)
                {
                    if(b[j] >= a[j] && b[j] >= c[j]){
                        rowMaxi_b = max(rowMaxi_b,b[j]);
                    }
                }
            }
            else if(colMaxi == c[i]){
                for (int j = 0; j < n; j++)
                {
                    if(b[j] >= a[j] && b[j] >= c[j]){
                        rowMaxi_c = max(rowMaxi_c,c[j]);
                    }                
                }
            }
        }
    }
return 0;
}   