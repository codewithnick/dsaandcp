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
    int n,q,x,l,r,k,i,j;
   cin>>n>>q;
   vector<int> arr(n),pre(n),post(n);
   for(i=0;i<n;i++)
    {cin>>x;
    if(x&1)
    arr[i]=1;
    else
    arr[i]=0;
    }
    int sum=0;
   for(i=0;i<n;i++)
   {
    sum+=arr[i];
    pre[i]=sum;
   }
   sum=0;
   for(i=n-1;i>=0;i--)
   {
    sum+=arr[i];
    post[i]=sum;
   }
   while(q--) {
    cin>>l>>r>>k;
    long long var=0;
    l--;
    r--;
    if((r-l+1)&1){}
    else
    k=0;
    var=post[l]-pre[r];
    if(l>0)
    var+=(2*pre[l-1]);
    sum=var+k;
    if(sum&1)
    cout<<"YES\n";
    else
    cout<<"NO\n";

  }
  }
return 0;
}


