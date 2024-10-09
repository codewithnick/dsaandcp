#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t,n,w,h,s;
  cin>>t;
  while(t--){
    s=0;
    cin>>w>>h>>n;

        while(w%2==0){
            w/=2;
            s+=1;
        }

        while(h%2==0){
            h/=2;
            s+=1;
        }
    s=1<<s;
    if(s>=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
  }
return 0;
}
