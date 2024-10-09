
#include<bits/stdc++.h>
using namespace std;
int binsearch(int n){
    int low=0,high=n,mid,ans=high;
    long long x;
        while(low<=high){
            mid=low+(high-low)/2;
            x=(long long)mid*(mid+1);
            x=x>>1;
            x=x*3;
            x=x-mid;
            //cout<<x<<endl;
            if(x<=n){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    return ans;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,a,b,c;
  int i,n,m,mc,y,s;
  long long x;

  cin>>t;
  while(t--){
        cin>>n;
        int ans,rem=n,m=0;
        while(rem>0){
            ans=binsearch(rem);
            if(rem>1)
            m++;
            x=(long long)(ans*(ans+1));
            x=x>>1;
            x=x*3;
            x=x-ans;
            if(ans==0)
                {x=n;}
            rem=rem-x;
        }
        cout<<m<<endl;
  }
return 0;
}


