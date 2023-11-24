#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        auto mini = min_element(v.begin(),v.end());
        cout<<(is_sorted(mini, v.end()) ? (mini - v.begin()) : -1)<<endl;
    }
return 0;
}