
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i;
  cin>>n;
  if(n<2){
    cout<<-1;
  }
  else{
  for(i=2;i<=n;i++)
    if(i%2==0)
    cout<<i<<"\n";
  }
  return 0;
}




