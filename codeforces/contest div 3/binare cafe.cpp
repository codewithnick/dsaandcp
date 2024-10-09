
#include<bits/stdc++.h>
using namespace std;
long long findans(int n,int k){
long long ans=0,m=0,x=1;
while(x<n&&k>m){
            x=x<<1;
            m++;
        }
        x=x>>1;
        m--;
        if(m>1)
        //ans=1<<m;//no of ways i can eat m-1 dishes conscutively
        return m;
        else
            return 1;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;


    cin>>t;

    while(t--){
        int n,k,m;
        long long ans=0,cost=0;
        cin>>n>>k;
        n++;
        while(n>0&&k>0){
            m=findans(n,k-1);//we can eat atleast m dishes easily
            //cout<<'m'<<m<<endl;
            if(m>0)
            ans+=1<<m;
            k-=m;
            if(m>=0)
            cost=1<<(m);//m+1th dish can be eaten in cost
            n=n-cost;//n rupees left
        }
        cout<<ans<<endl;
    }
return 0;
}




