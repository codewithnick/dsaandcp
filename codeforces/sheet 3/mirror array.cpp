

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int n,m,i,j,x;
    cin>>n>>m;
    ll arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=m-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
  return 0;

}









