#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t,p,a,b,c,x,i,n;
  cin>>t;
  while(t--){
    long long sr=0,sb=0,cr=0,cb=0;
    bool flag=0;
    cin>>n;
    vector <int> a(n);
    for(i=0;i<n;i++)
    cin>>a[i];
    sb=a[n-1];
    sort(a.begin(),a.end());
    cr=n;
    cb=0;
    sb=a[0];
    while(cb<cr){
        cb++;
        cr--;
        sb+=a[cb];
        sr+=a[cr];
        if(sr>sb){
            //cout<<sr<<" "<<sb<<endl;
            //cout<<cr<<" "<<cb<<endl;
            flag=1;
            break;
        }

    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
  }
return 0;
}
