

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   int i,n;
   long x,m=0;
   cin>>n;
   for(int i=1;i<=n;i++){
       cin>>x;
       m=m>x?m:x;
   }
   cout<<m;
  return 0;
}





