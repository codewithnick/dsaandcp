
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,b,c;
  int x,i,n,m,mc,y;
  //cin>>t;
  while(t--){
    string s;
    char a;
    cin>>s;
    n=s.size();
    int ind=-1;
    c=0,x=0;
    for(i=0;i<=n;i++){
        for(a='a';a<='z';a++){
            string ns=s.substr(0,i)+a+s.substr(i);
            //cout<<ns;
            string nns=ns;
            reverse(ns.begin(),ns.end());
            if(ns==nns)
            {cout<<ns;
            return 0;
            }
        }
    }
    cout<<"NA";


    }


return 0;
}


