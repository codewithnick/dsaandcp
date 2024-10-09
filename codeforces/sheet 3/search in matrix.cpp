
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int n,m,i,j,x;
    cin>>n>>m;
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cin>>x;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(x==arr[i][j])
            {   cout<<"will not take number";
                i=n;
                break;
            }
        }
    }
    if(i==n && j==m){
        cout<<"will take number";
    }

  return 0;

}









