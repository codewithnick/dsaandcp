#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t=1,p,a,b,c=0;
  int x,i,j,n,m,mc,y,s;
  //cin>>t;
  while(t--){
        cin>>n>>x;
    vector<int> arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(n==1)
    {cout<<1;
    return 0;
    }

    i=0;
    c=0;
    j=n-1;
    while(i<=j){
        s=arr[i]+arr[j];
        //cout<<i<<" "<<j<<endl;
        if(s<=x){
            c++;
            i++;
            j--;
        }
        else{
            j--;
            c++;
        }
    }

    cout<<c<<endl;
  }
return 0;
}



