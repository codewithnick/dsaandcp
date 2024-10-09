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
  for(i=0;i<n/2;i++){
    if(arr[i]==arr[n-1-i])
    {
    }
    else{
        cout<<"NO";
        break;
    }
  }
  if(i==n/2){
    cout<<"YES";
  }
  return 0;
}




