#include<bits/stdc++.h>
using namespace std;

int32_t main(){
   freopen("output.txt", "w", stdout);
   freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,a,b,c;
  int x,i,n,m,mc,y,s;
  cin>>t;
  while(t--){
  int n,even=0,odd=0,x;
 cin>>n;
 for(int i=0;i<n;i++)
 {cin>>x;
 if(x&1)
 odd+=x;
 else
 even+=x;
 }
 if(even>odd)
 cout<<"YES\n";
 else
 cout<<"NO\n";
  }
return 0;
}


