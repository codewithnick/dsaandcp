#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t,i,n,k,c2;
  string s,cat="meow";
  cin>>t;
  while(t--){
    map <char,int>m;
    int cnt=0,c2=0;
    cin>>n>>k>>s;
    for(auto c:s)
    {
        m[c]++;
    }
    for(char c='a';c<='z';c++){
        char a=c^' ';
        int x=min(m[a],m[c]);
        cnt+=x;
        m[a]-=x;
        m[c]-=x;
        c2+=max(m[a],m[c])/2;
    }
    cout<<cnt+min(c2,k)<<endl;
  }
return 0;
}

