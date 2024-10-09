#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i;
  cin>>n;
  long arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>0)
        arr[i]=1;
    else if(arr[i]<0)
        arr[i]=2;
  }
  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}


