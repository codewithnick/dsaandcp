#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t,cnt=0,n,x,i;
  string s;
  char a;
  cin>>t;
  while(t--){
        char p1,p2,a1,a2,n1,n2;
    cin>>n>>s;
   cnt=n-1;

   for(i=0;i<n-1;i++){
       a1=s[i];
       a2=s[i+1];
       if(i<n-2)
       {n1=s[i+2];
       if(n1==a1){
        cnt--;
       }
       }
   }
   cout<<cnt<<endl;
  }
return 0;
}

