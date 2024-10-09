#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,a,b,c;
  long long x,i,n;
  //cin>>t;
  while(t--){
    cin>>n>>x;
    if(x<=(n+1)/2){
        cout<<x+x-1;
    }
    else{
        x-=((n+1)/2);
        cout<<x*2;
    }
    cout<<endl;
  }
return 0;
}
