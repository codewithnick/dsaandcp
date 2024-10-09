
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,j,c,x;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  for(i=0;i<n-1;i++){
    for(j=i;j<n;j++){
        if(arr[j]<arr[i]){
            swap(arr[i],arr[j]);
        }
    }
  }
  c=0;
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(arr[j]>arr[i]+1)
            break;
         if(arr[j]==arr[i]+1)
         {
             //cout<<arr[j]<<" "<<arr[i]<<"\n";
             c++;
             break;
        }
    }
  }
    cout<<c;
    return 0;
}
