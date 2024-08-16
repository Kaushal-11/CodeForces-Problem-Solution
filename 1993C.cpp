#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        sort(a.begin(), a.end());

        long long result = -1;
        for (long long x = a[n-1]; x < a[n-1]+k; x++)
        {
            bool flag = true;   
            for (int i = 0; i < n; i++)
            {
                if((x - a[i]) % (2*k) >= k){
                    flag = false;
                    break;
                }
            }
            if(flag){
                result = x;
                break;
            }
        }
        cout << result << endl;
    }
    
    return 0;
}