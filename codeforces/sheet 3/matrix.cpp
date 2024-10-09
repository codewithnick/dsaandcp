
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int n,m,i,j,x,d1=0,d2=0;
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
     for(i=0;i<n;i++){
        d1+=arr[i][i];
        d2+=arr[i][n-i-1];
     }
    cout<<(d1>d2?d1-d2:d2-d1);
  return 0;

}










