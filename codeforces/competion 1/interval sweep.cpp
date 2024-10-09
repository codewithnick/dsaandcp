
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int a,b;
  cin>>a>>b;
  if(((a>b?a-b:b-a)==1|| a==b)&&(a>0 || b>0))
      cout<<"YES";
  else
    cout<<"NO";

   return 0;
}



