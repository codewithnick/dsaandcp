#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,j,t;
  cin>>t;
  while(t--){
  cin>>n;
  long arr[n],temp,s;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  s=1e9;
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        temp=arr[i]+arr[j]+j-i;
        s=(s<temp?s:temp);
    }
  }
   cout<<s<<"\n";
  }
  return 0;
}






