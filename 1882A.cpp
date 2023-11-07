#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    while(x--){
        int size;
        cin>>size;
        int temp = 1;
        for (int i = 0; i < size; i++)
        {
            int b;
            cin>>b;
            if(b == temp){
                temp++;
            }
            temp++;
        }
        cout<<temp-1<<endl;
    }
return 0;
}