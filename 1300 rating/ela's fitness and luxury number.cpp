
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sqart(ll x){
    ll high=x,mid,ans=1,low=1;
    while(low<=high){
        //cout<<mid<<endl;
        mid=low+(high-low)/2;
        if(mid*mid<=x){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    ll i;
    cin>>t;
    vector<bool>arr(1e19,0);
    while(t--){
        ll l,r,c=0,x=1,k;
        cin>>l>>r;
        for(k=sqart(l);(k+1)*(k+1)<=r;k++){
            ll t1=k*k,t2=k*(k+1),t3=k*(k+2);
            if(l<=t1 && t1<=r)
                c++;
            if(l<=t2 && t2<=r)
                c++;
            if(l<=t3 && t3<=r)
                c++;

        }
        cout<<c<<'\n';
    }
return 0;
}


