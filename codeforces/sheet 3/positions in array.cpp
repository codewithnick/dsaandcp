#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i;
  cin>>n;
  long arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<=10){
        cout<<"A["<<i<<"] = "<<arr[i]<<"\n";
    }
  }

  return 0;
}



