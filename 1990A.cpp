#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
            cin>>v[i];
        
        for(int x : v)
            freq[x]++;

        bool flag = false;
        for(auto it : freq){
            if(it.second % 2 == 1){
                flag = true;
                break;
            }
        }
        cout<<(flag ? "YES" : "NO")<<endl;
        
    }
return 0;
}       