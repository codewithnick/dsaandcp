#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,j,temp;
  cin>>n;
  int arr[n];
  vector <int> v;
  for(i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==0)
    v.push_back(i);
  }
  for(i=0;i<(v.size());i++){
    if(v[i]>1){
        //reverse arrray from 0 to v[i]-1
        temp=v[i]-1;
        for(j=0;j<=temp/2 ;j++){
            swap(arr[j],arr[temp-j]);
        }
    }
  }
  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}



