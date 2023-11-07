#include<bits/stdc++.h>
using namespace std;

int main() {
    long n,m;
    cin>>n>>m;
    set<float> s;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= m; j++)
        {
            long long d = 4*i*i - 4*j;
            if(d >= 0){
                float r1 = (-2*i + sqrt(d))/2;
                float r2 = (-2*i - sqrt(d))/2;
                s.insert(r1);
                s.insert(r2);
            }
        }       
    }
    cout<<s.size();
return 0;
}   