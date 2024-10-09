
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
     vector<vector<char>> v;
     vector<unordered_map<char,bool>> row(3),col(3);

     for(int i=0;i<3;i++){
        vector<char> c(3);
        for(int j=0;j<3;j++){
            cin>>c[j];
            row[i][c[j]]=1;
            col[j][c[j]]=1;
        }
        v.push_back(c);
     }
     char ans='?';
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(v[i][j]=='?'){
                for(char a='A';a<='C';a++){
                    if(row[i][a] || col[j][a])//if exists in row or column
                        continue;
                    else
                        ans=a;
                }
            }
        }
     }
     cout<<ans<<endl;

    }
    return 0;
}
