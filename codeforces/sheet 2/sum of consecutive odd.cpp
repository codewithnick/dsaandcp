#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int t,i,a,b,j,sum;
cin>>t;
for(i=t;i>0;i--){
    cin>>a>>b;
    sum=0;
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(j=a+1;j<b;j++){
        if(j%2!=0)
        sum+=j;
    }
    cout<<sum;
    if(i>1)
        cout<<"\n";
}
  return 0;
}











