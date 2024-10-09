


#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,k,a;
  cin>>n>>k>>a;
  ll x;
  //trick starts here
  x=(n/a);
  x*=k;
  //trick ends here
  if(n%a==0 || k%a==0 || a%n==0 || a%k==0)
  {if(x>INT_MAX)
    cout<<"long long";
  else
    cout<<"int";
  }
  else{
    cout<<"double";
  }
  return 0;
}


