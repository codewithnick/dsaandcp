#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n,c,i,x,cnt,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x==k)
            flag=true;
        }
        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
return 0;
}



