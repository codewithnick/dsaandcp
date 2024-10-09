#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,c,i,x,cnt,c1,c0;
    long long sum;
    cin>>t;
    while(t--){
        cin>>n;
        c1=sum=c0=0;
        vector <bool> arr(n);
        vector <long long> zeros(n),ones(n),sums(n);
        for(i=0;i<n;i++){
            cin>>x;
            arr[i]=x;
            ones[i]=c1;
            if(x)
            {
                c1++;
            }
        }
        for(i=n-1;i>=0;i--){
              if(!arr[i])
              c0++;
              else
                sum+=c0;
              zeros[i]=c0;
        }
        for(i=0;i<n;i++){
            if(arr[i])
                sums[i]=sum-zeros[i]+ones[i];
            else
                sums[i]=sum-ones[i]+zeros[i]-1;
        }
/*
        for(i=0;i<n;i++)
            cout<<ones[i]<<" ";
        cout<<endl;
        for(i=0;i<n;i++)
            cout<<zeros[i]<<" ";
        cout<<endl;
        for(i=0;i<n;i++)
            cout<<sums[i]<<" ";
        cout<<endl<<sum<<endl;
*/
        cout<<max(sum,*max_element(sums.begin(),sums.end()))<<endl;
    }

return 0;
}


