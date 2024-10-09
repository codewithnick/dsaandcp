#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int n,c=1,i,j;
cin>>n;
for(i=n;i>0;i--){
    for(j=0;j<3;j++)
        cout<<c++<<" ";
    cout<<"PUM";
    c++;
    if(i>1)
        cout<<"\n";
}
  return 0;
}


