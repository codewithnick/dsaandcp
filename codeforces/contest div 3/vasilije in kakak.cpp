#include<bits/stdc++.h>
using namespace std;
long long sum_of_n(long long n){
    return (n*(n+1)/2);
}
bool ispossible(long long n,long long k,long long x){
    long long sum=sum_of_n(n);
    if(sum<x){
        return false;
    }
    else if(sum==x){
        if(k==n) return true;
        else return false;
    }
    else{
        x=sum-x;
        k=n-k;
        if(x<1 || k<1) return false;
        else return ispossible(n-1,k,x);
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t=1,n,c,i,x,cnt,k;
    cin>>t;
    while(t--){
        cin>>n>>k>>x;
        cnt=0;
        if(ispossible(n,k,x)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
return 0;
}



