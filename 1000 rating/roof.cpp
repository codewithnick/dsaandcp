#include<bits/stdc++.h>
using namespace std;

int32_t main(){
int t;
cin>>t;
while(t--)
  {
      int n,a,b,i,x;
      cin>>n;
      n--;
      if(n==0){
        cout<<0<<endl;
        break;
        }
      for( i=31;i>=0;i--)
        if(n>>i)
        break;
      a=1<<i;
      x=__builtin_popcount(n);
      if(x==1){
        cout<<n;
      }
      else{
        for(i=a+1;i<n;i++)
            cout<<i<<" ";
        cout<<n<<" "<<a;
      }
      for(i=0;i<a;i++)
        cout<<" "<<i;
    cout<<endl;
  }
return 0;
}



