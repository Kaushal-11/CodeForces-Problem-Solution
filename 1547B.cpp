#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int left = 0, right = n - 1, i;
        for (i = n; i > 0; i--)
        {
            if(s[left]-'a'+1 == i)
                left++;
            else if(s[right]-'a'+1 == i)
                right--;
            else
                break;
        }
        cout<<(i == 0 ? "YES":"NO")<<endl;
    }
return 0;
}   