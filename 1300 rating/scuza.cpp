#include<bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int i,n,q,x=0;
        cin>>n>>q;
        vector<int> a(n),maxarr(n);
        vector<ll> sum(n);
        int maxvar=0;
        ll tot=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            maxvar=maxvar>x?maxvar:x;
            a[i]=x;
            tot+=x;
            sum[i]=tot;
            maxarr[i]=maxvar;
        }
        for(i=0;i<q;i++){
                cin>>x;
                int ub=upper_bound(maxarr.begin(),maxarr.end(),x)-maxarr.begin();//index of ub
                if(ub==0)
                    cout<<0;
                else
                    cout<<sum[ub-1];
                cout<<' ';
        }
        cout<<'\n';
    }
return 0;
}



