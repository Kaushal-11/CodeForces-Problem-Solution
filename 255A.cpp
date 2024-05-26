#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt_ch = 0, cnt_bi = 0, cnt_back = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin>>a;
        if(i%3 == 1)
            cnt_ch += a;
        else if(i%3 == 2)
            cnt_bi += a;
        else
            cnt_back += a;
    }
    
    int maxi = max(max(cnt_ch, cnt_bi), cnt_back);
    if(maxi == cnt_ch)
        cout<<"chest";
    if(maxi == cnt_bi)
        cout<<"biceps";
    if(maxi == cnt_back)
        cout<<"back";
return 0;
}   