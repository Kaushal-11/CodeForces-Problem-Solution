#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        char mat[3][3];
        int target = 198;
        for(int i=0;i<3;i++){
            for(int j = 0;j<3;j++){
                cin>>mat[i][j];
            }
        }  

        for(int i=0;i<3;i++){
            int temp = 0;
            for(int j = 0;j<3;j++){
                if(mat[i][j] == '?'){
                    continue;
                }
                temp += mat[i][j];               
            }
            
            if(temp != target){
                cout<<char(target - temp)<<endl;
                break;
            }
        }               
    }
return 0;
}   