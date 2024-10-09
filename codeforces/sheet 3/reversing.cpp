#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i;
  cin>>n;
  long arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  for(i=n-1;i>=0;i--){
    cout<<arr[i]<<" ";
  }
  return 0;
}



