
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,j;
  cin>>n;
  ll arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  i=0;
  j=n-1;
  while(i<j){
    cout<<arr[i]<<" ";
    cout<<arr[j]<<" ";
    i++;
    j--;
  }
  if(i==j)
    cout<<arr[i]<<" ";
    return 0;
}


