#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,c=0,i,t,j,k;
  bool inc=1;
  cin>>t;
  while(t--){
    cin>>n;
    long arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    c=0;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
                c++;
                 if(arr[j+1]<arr[j] && j<n-1){
                    break;
                }
        }

    }
    cout<<c<<"\n";
  }
  return 0;
}








