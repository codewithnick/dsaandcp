
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int n,stars=1,j,i;
cin>>n;
for(i=n;i>0;i--){
    for(j=i-1;j>0;j--)
        cout<<" ";
    for(j=1;j<=stars;j++)
        cout<<"*";
    stars+=2;
    cout<<"\n";
}
stars-=2;
for(i=0;i<n;i++){
    for(j=i;j<i*2;j++)
        cout<<" ";
    for(j=1;j<=stars;j++)
        cout<<"*";
    stars-=2;
    cout<<"\n";
}
  return 0;
}
