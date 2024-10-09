
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  long long a,row,col;
  cin>>a;
  row=a/4;
  if(row%2==0){
    col=a%4;
  }
  else{
    col=a%4-3;
    if(col<0)
        col*=-1;
  }
  cout<<row<<" "<<col;
  return 0;
}

