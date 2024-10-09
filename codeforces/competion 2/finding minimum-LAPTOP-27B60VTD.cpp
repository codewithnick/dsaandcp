
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    long n,k,i,j;
    cin>>n>>k;
    ll x[n],m;
    for(i=0;i<n;i++)
        cin>>x[i];
    for(i=0;i<n;i+=k){
        m=1e18;
        for(j=i;j<i+k && j<n;j++)
            if(x[j]<m)
                m=x[j];
        if(k>=1)
        cout<<m;
        if(i<n)
        cout<<" ";
    }

  return 0;
}
