

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  ll t,x,m=0,i;
  cin>>t;
  ll arr[t];
  for(i=0;i<t;i++){
    cin>>arr[i];
  }
  for(i=0;i<t;i++){
    int c=0;
    x=arr[i];
    while(x%2==0){
        x/=2;
        c++;
    }
    m=(m>c?m:c);
  }
  cout<<m;
  return 0;
}

