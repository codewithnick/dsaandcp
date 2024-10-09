#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,a,b,c;
  int x,i,n,m,mc;
  //cin>>t;
  while(t--){
    cin>>n;
    m=-1e9;
    c=0,mc=1;
    for(int i=0;i<n;i++){
        cin>>x;

        if(x>=m){
                //cout<<x;
            c++;
        }
        else{
            mc=max(mc,c);
            c=1;
        }
        m=x;
    }
    cout<<max(mc,c);
  }
return 0;
}

