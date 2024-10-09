#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,a,b,c;
  int i,n,m,mc,y,s;
  //cin>>t;
  while(t--){
        cin>>n;
        vector<int>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        int low=0,high=n-1,sej=0,dim=0;
        bool x=1;
        while(low<=high){
            if(x)
            if(arr[low]<arr[high]){
                sej+=arr[high];
                high--;
            }
            else{
                sej+=arr[low];
                low++;
            }
            else
            if(arr[low]<arr[high]){
                dim+=arr[high];
                high--;
            }
            else{
                dim+=arr[low];
                low++;
            }
            x=!x;
        }
        cout<<sej<<" "<<dim<<endl;
  }
return 0;
}



