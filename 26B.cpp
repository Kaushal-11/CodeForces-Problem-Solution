#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
	int cnt = 0;
	stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
            st.push(s[i]);
        else{
            if(!st.empty()){
                st.pop();
                cnt++;
            }
        }
    }
    cout<<cnt*2<<endl;
    return 0;
}
