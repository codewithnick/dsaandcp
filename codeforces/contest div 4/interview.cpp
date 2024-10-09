#include<bits/stdc++.h>
using namespace std;

int32_t main(){


  int t=1,p,a,b,c;
  cin>>t;
  while(t--){
    int i,n,mid,low,high,ans,sum=0;
    cin>>n>>a;
    vector<int> arr(n),pre(n);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        pre[i]=sum;
    }
    low=0;
    high=n-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(mid==low && low==high)
            break;
        int wt;
        sum=pre[mid];
        if(low>0)
            sum-=pre[low-1];
        cout<<"? "<<mid+1;
        for(i=low;i<=mid;i++)
        cout<<" "<<i+1;
        cout<<endl;
        cin>>wt;
        if(sum!=wt)
        {
            if(high!=mid)
            high=mid;
            else
                break;
        }
        else
        low=mid+1;
    }
    cout<<"! "<<mid+1<<endl;
    fflush(stdout);
   }

return 0;
}



