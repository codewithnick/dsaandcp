#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,j,temp;
  cin>>n;
  long arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
  }
  for(i=0;i<n;i++){
   cout<<arr[i]<<" ";
  }
  return 0;
}





