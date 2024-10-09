

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,even=0,odd=0, pos=0,neg=0;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    long num;
    cin>>num;
    if(num>0)
        pos++;
    else if(num<0)
        neg++;
    if(num%2==0){
        even++;
    }
    else{
        odd++;
    }
  }
  cout<<"Even: "<<even<<"\nOdd: "<<odd<<"\nPositive: "<<pos<<"\nNegative: "<<neg;
  return 0;
}




