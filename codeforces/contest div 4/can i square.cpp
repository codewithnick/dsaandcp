

#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool issquare(ll n){
    ll mul=1;
     for(ll i=1;mul<=n;i++){
            mul=i*i;
        if(n==mul)
            return true;
    }

    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll sum;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sum=accumulate(a.begin(),a.end(),0ll);
        if(issquare(sum))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
