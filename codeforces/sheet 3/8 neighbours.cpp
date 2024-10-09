

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int n,m,i,j,x,y,a,b;
    bool l=1;
    cin>>n>>m;
    char arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cin>>x>>y;
    for(i=x-2;i<=x;i++){
        if(i<0 || i>=n)
        continue;
        for(j=y-2;j<=y;j++){
            if(j<0 || j>=m)
            continue;
            //cout<<i<<" "<<j<<"\n";
            if(i==x-1 && j==y-1){}
            else{
                if(arr[i][j]!='x')
                  {
                    cout<<"no";
                    i=x;
                    l=0;
                    break;
                  }
            }
        }
    }
    if(l)
        cout<<"yes";
  return 0;

}










