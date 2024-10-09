#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sumupto(ll n){
    ll sum=0;
    for(ll i=1;i<=n;i++)
        sum+=i;
    return sum;
}
ll sumofdigits(ll n){
    if(n==0)return 0;
    return n%10+sumofdigits(n/10);
}
ll myfun(ll n){
    if(n<=0) return 0;
    long long sum=0,i=1;
    ll x=n%10;
    n/=10;
    sum+=sumupto(x);
    sum+=sumupto(9)*n;
    sum+=sumofdigits(n)*(x+1);
    sum+=myfun(n-1)*10;
    return sum;
}
int32_t main(){
    ll t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        cout<<myfun(n)<<endl;
    }
return 0;
}


