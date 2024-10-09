#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n,c,i,x,cnt;
    //cin>>t;
    while(t--){
        cin>>n;
        long long sum=0,sum1=0,sum2=0;
        for(i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        for(i=0;i<n-1;i++){
            cin>>x;
            sum1+=x;
        }
        for(i=0;i<n-2;i++){
            cin>>x;
            sum2+=x;
        }
        cout<<sum-sum1<<endl<<sum1-sum2;
    }

return 0;
}




