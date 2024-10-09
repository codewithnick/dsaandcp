#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,j,k,t,sz=0;
  cin>>t;
  while(t--){
    cin>>n;

    long arr[n],m;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        m=-1e9;
        for(j=i;j<n;j++){
            m=(m>arr[j]?m:arr[j]);
            cout<<m<<" ";
        }
    }
    cout<<"\n";
  }
  return 0;
}







