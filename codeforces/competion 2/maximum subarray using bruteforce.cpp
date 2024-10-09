#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,j,k,t,sz=0;
  cin>>t;
  while(t--){
    cin>>n;

    long arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            //finding minium in subarray
            //cout<<"\n"<<i<<" "<< j<<" ";
            ll c=1e-5;
            for(k=j;k<=j+i;k++){
                c=(c>arr[k]?c:arr[k]);
            }
            cout<<c<<" ";
        }
    }
    cout<<"\n";

  }
  return 0;
}







