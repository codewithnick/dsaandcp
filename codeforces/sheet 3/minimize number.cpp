#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int i,n;
  cin>>n;
  long arr[n],c=0,m=1e9;
  for(i=0;i<n;i++){
    cin>>arr[i];
    c=0;
    while(arr[i]%2==0){
        c++;
        arr[i]/=2;
    }
    arr[i]=c;
  }
  for(i=0;i<n;i++){
   m=(m<arr[i]?m:arr[i]);
  }
  cout<<m;
  return 0;
}











