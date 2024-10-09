#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    vector<int> arr(n),pre(n+1,0);
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            pre[i+1]=pre[i]+arr[i];
        }
    cout<<endl;
    //function
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        bool found=false;
        for(int i=0;i<n-mid;i++){
            int right=i+mid;
            int temp=pre[right+1]-pre[i];
            if(temp==0)
                {
                    ans=max(ans,mid);
                    found=true;
                    break;
                }
        }
        if(found){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }

    cout<<"ans="<<ans<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
