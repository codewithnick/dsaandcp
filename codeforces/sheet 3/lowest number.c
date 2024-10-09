#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  ll n,i,x,index=0;
  cin>>n;
  ll arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  x=arr[0];
  for(i=0;i<n;i++){
    if(x<arr[i]){
        index=i;
    }
  }
  cout<<arr[index]<<" "<<index+1;

  return 0;
}




