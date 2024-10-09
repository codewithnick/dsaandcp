#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x=1,y=1,a;
    cin>>n;
    vector<int>arr(n),temp;
    map<int,int> m;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    x=*max_element(arr.begin(),arr.end());
    y=0;
    for(int i=1;i<=x;i++){
        if(x%i==0)
           {//cout<<i<<" ";
               m[i]=1;}
    }
    for(int i=0;i<n;i++){
            //cout<<arr[i]<<m[arr[i]]<<endl;
        if(m[arr[i]]==1)
            m[arr[i]]=0;
        else
            y=max(arr[i],y);
    }
    cout<<x<<" "<<y;
return 0;
}
