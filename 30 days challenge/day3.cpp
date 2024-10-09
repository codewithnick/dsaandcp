#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t,p,a,b,c,x;
  cin>>t;
  while(t--){
   cin>>p;
   x=p%3;
   if(x==0){
    b=p/3;
    a=b+1;
    c=b-1;
   }
   else if(x==1){
    b=p/3;
    a=b+1;
    c=b-1;
    a=a+1;
   }
   else{
    b=p/3;
    a=b+2;
    c=b-1;
    b++;
   }
   cout<<b<<" "<<a<<" "<<c<<endl;
  }
return 0;
}
