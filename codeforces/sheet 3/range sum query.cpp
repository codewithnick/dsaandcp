#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll n,q,i,j;
    cin>>n>>q;
    ll arr[n],l[q],r[q],s,sums[n],i1,i2;
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
       sums[i]=0;
       if(i)
        sums[i]+=sums[i-1];
       sums[i]+=arr[i];
    }

    for(i=0;i<q;i++)
        cin>>l[i]>>r[i];
    for(i=0;i<q;i++){
        s=0;
        i1=r[i]-1;
        i2=l[i]-2;
        if(i2>=0)
        s=sums[i1] - sums[i2];
        else
            s=sums[i1];
        cout<<s<<"\n";
    }
  return 0;

}
