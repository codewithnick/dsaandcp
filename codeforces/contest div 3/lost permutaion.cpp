
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int t;
   cin>>t;
   while(t--){
        int i,m,s,ma=-1e9;
        ll x,sum=0;
        cin>>m>>s;
        sum=s;
        int arr[m];
        for(i=0;i<m;i++)
        {cin>>arr[i];
            sum=(ll)(sum+arr[i]);
            ma=(ma>arr[i]?ma:arr[i]);
        }
        for(i=ma;i<=sum;i++){
            x=(ll)(i*(i+1))/2;
            if(x==sum)
            {
                cout<<"YES\n";
                break;
            }
            if(x>sum)
            {
                cout<<"NO\n";
                break;
            }
        }
   }
    return 0;
}

