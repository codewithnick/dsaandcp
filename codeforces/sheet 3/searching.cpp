#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  ll n,i,x,index=-1;
  cin>>n;
  ll arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  cin>>x;
  for(i=0;i<n;i++){
    if(x==arr[i]){
        index=i;
        break;
    }
  }
  cout<<index;

  return 0;
}



