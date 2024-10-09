

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  ll n,i,sum=0;
  cin>>n;
  ll arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
  }
  cout<<(sum>0?sum:sum*-1);
  return 0;
}


