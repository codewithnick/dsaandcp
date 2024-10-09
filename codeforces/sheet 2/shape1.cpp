


#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int n,i,j;
cin>>n;
for(i=n;i>0;i--){
    for(j=i;j>0;j--)
        cout<<"*";
    if(i>1)
    cout<<"\n";
}
  return 0;
}











