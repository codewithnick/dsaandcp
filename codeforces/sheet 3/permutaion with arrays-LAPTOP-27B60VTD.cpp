
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,j;
  bool found;
  cin>>n;
  long a[n],b[n],vis[n];
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    cin>>b[i];
  }
  for(i=0;i<n;i++){
    vis[i]=0;
  }
  for(i=0;i<n;i++){
    found=0;
    for(j=0;j<n;j++){
        if(a[i]==b[j] && vis[j]==0){
            found=1;
            vis[j]=1;
            break;
        }
    }
    if(found)
        continue;
    else
        break;
  }
  if(i==n)
    cout<<"yes";
  else
    cout<<"no";
  return 0;
}








