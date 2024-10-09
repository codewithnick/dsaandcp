#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b){
  return (a*b)/__gcd(a,b);
}

ll count(ll mid,ll a,ll b){
    return (mid/a) + (mid/b)- (mid/lcm(a,b));
}

int main(){
    ll a, b,n;
    int t;
    cin>>t;
    while(t--){
    cin>>a>>b>>n;
    ll low=1,high=1e18,mid,ans;
    while(low<=high){
        mid=low+(high-low)/2;

        if(count(mid,a,b)>=n){
        //if(count(mid,a,b)>n){
            high=mid-1;
            ans=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<ans;
    }
}
