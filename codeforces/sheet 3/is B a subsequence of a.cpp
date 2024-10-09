

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   int n,m,i,j=0;
   cin>>n>>m;
   ll a[n],b[m];
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   for(i=0;i<m;i++){
    cin>>b[i];
   }
   for(j=0,i=0;j<m;j++){
    while(b[j]!=a[i] && i<n)
        i++;
    if(i==n)
        break;
   }
   if(j==m )
    cout<<"YES";
   else
    cout<<"NO";
  return 0;

}
