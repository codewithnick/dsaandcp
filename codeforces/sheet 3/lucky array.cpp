#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  ll n,i,m=1e6,c=0;
  cin>>n;
  ll arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
    m=(m<arr[i]?m:arr[i]);
  }
  for(i=0;i<n;i++){
    if(arr[i]==m)
        c++;
  }
  if(c%2!=0){
    cout<<"Lucky";
  }
    else{
        cout<<"Unlucky";
    }
  return 0;
}
