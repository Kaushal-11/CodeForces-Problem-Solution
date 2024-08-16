#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        unordered_map<char,int>map;

        for(int i=0;i<4*n;i++)
        {
            if(s[i]!='?')
                map[s[i]]++;
        }

        int count=0;

        for(char i='A';i<='D';i++)
        {
            if(map[i]>n)
            {
                count+=n;
            }
            else
            {
                count+=map[i];
            }
        }
        cout<<count<<endl;

    }
}