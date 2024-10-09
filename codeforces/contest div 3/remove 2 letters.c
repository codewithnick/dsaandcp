#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t,cnt,n,x,i;
  string s,cat="meow";
  char a;
  cin>>t;
  while(t--){
        char p1,p2;
    cin>>n>>s;
   cnt=n;
    p1=s[0],p2=s[1];
   for(i=0;i<n-1;i++){
        char a1=s[i],a2=s[i+1];
        if(a1==p1&&a2==p2){
            cnt--;
        }
        p1=a1;
        p2=a2;
   }
   cout<<cnt<<endl;
  }
return 0;
}

