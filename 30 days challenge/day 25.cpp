
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p;
  int x,i,n,m,mc,y;
  string s;
  cin>>t;
  while(t--){
    cin>>s;
    int r,l;
    bool flag=1;
    i=s.size()-1;
    char a;
    do
    {a=s[i];l=i;i--;}
    while(a!='1'&&i>=0);
    i=l;
    do
    {a=s[i];r=i;i++;}
    while(a!='0'&&i<=s.size()-1);
    cout<<r-l+1<<endl;
  }
return 0;
}


