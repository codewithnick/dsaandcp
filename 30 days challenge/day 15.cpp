
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n,c,i,x,cnt,m,z;
    cin>>t;
    while(t--){
            cin>>n>>z;
            m=0;
            for(i=0;i<n;i++)
            {
                cin>>x;
                x=x|z;
                m=max(x,m);
            }
            cout<<m<<endl;
    }
return 0;
}
