#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int ans = 1;
        for (int i = 0; i < n; i++)
            cin>>a[i];

        for (int i = 0; i <= 20; i++)
        {
            vector<int> v;
            for (int j = 0; j < n; j++)
            {
                if((a[j] >> i)&1)
                    v.push_back(j);
            }
            int maxi = 1, last  = -1;
            for(int x : v){
                maxi = max(maxi, x-last);
                last = x;
            }
            maxi = max(maxi, n-last);
            if(last != -1)
                ans = max(ans, maxi);
        }
        cout << ans << endl;
    }
return 0;
}   