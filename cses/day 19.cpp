#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,a,b,c;
  int x,i,n,m,mc,y,s;
  cin>>t;
  while(t--){
    cin>>n;
    int maxdiff=-1e9;
    vector <int> a(n),b(n);
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
        maxdiff=(maxdiff>(a[i]-b[i]))?maxdiff:(a[i]-b[i]);
    cout<<maxdiff<<endl;
    for(i=0;i<n;i++)
    {
        x=a[i]-abs(maxdiff);
        if(x==b[i]||(x<0&&b[i]==0)){}
        else
            break;

    }
    if(i==n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
  }
return 0;
}



