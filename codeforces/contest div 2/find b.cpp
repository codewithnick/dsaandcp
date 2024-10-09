
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<ll>c(n),left_ones(n+1,0),right_ones(n+1,0),sum_left(n+1,0),sum_right(n+1,0),left_intmax(n+1,0),right_intmax(n+1,0);
        for(int i=0;i<n;i++)
            {
                cin>>c[i];
                if(c[i]==1){
                    left_ones[i+1]=left_ones[i]+1;
                }else left_ones[i+1]=left_ones[i];

                if(c[i]==INT_MAX){
                    left_intmax[i+1]=left_intmax[i]+1;
                } else left_intmax[i+1]=left_intmax[i];

                sum_left[i+1]=sum_left[i]+c[i];
            }
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            if(l==r){
                cout<<"NO\n";
                continue;
            }
            ll numbers=r-l+1;
            ll sum=sum_left[r]-sum_left[l-1];
            ll ones=left_ones[r]-left_ones[l-1];
            ll maxes=left_intmax[r]-left_intmax[l-1];
            //cout<<"ones:"<<ones<<endl;
            ll sum_except_1=sum-ones;
            if(sum<(ones+numbers) ){
                cout<<"NO\n";
                continue;
            }
            ll sum_except_intmax=sum-(ll)(maxes*INT_MAX);
            ll numbers_except_intmax=numbers-maxes;

             cout<<"YES\n";
        }

    }
return 0;
}

