#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1;
  int x,i,n,m,mc,y;
  //cin>>t;
  while(t--){
    string s,ns;
    cin>>s>>n;
    bool x=0,y=0;
    char a,b;
    for(i=0;i<n;i++){
        cin>>ns;
        a=ns[0];
        b=ns[1];
        if(a==s[1])
            x=1;
        if(b==s[0])
            y=1;
        if(a==s[0]&&b==s[1])
            x=y=1;
    }
    if(x&y)
        cout<<"YES";
    else
        cout<<"NO";
  }
return 0;
}



