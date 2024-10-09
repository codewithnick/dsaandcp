#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,a,b,c,odd,even,wrongs;
  int x,i,n,m,mc;
  cin>>t;
  while(t--){
    cin>>n;
    odd=0,even=0,wrongs=0;
    for(int i=0;i<n;i++){
        cin>>x;
        x=x%2;
        if(x)
            odd++;
        else
            even++;
        if(i%2!=x)
            wrongs++;
    }
    //cout<<"even "<<even<<endl;
    if((even==odd+1 || even==odd) && (even>0))
        cout<<wrongs/2<<endl;
    else
        cout<<-1<<endl;
  }
return 0;
}

