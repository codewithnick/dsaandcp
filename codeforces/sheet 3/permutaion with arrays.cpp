
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,j;
  cin>>n;
  long a[n],b[n];
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    cin>>b[i];
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i]==b[j])
        break;
    }
    if(j==n)
    {
        cout<<"no";
        return 0;
    }
  }
  if(i==n)
    {
        cout<<"yes";
    }
  return 0;
}








