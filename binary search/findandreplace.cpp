#include<bits/stdc++.h>
using namespace std;

int32_t main(){
#ifndef ONLINE_JUDGE
   freopen("output.txt", "w", stdout);
   freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,a,b,c;
  cin>>t;
  while(t--){
   string s;
   int n,i;
   int x=1;
   map<char,int>m;
   cin>>n;
   cin>>s;
    for(i=0;i<n;i++){
        char a=s[i];
        if(m[a]==0)
        m[a]=x;
        else{
            if(m[a]==x){}
            else
            {
                break;
            }
        }
        //toggle
        if(x==1)
        x=-1;
        else
        x=1;
    }
    if(i==n)
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }
return 0;
}


