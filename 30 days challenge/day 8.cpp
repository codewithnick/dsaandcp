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
  int x,i,n,m,mc,y,s;
  //cin>>t;
  while(t--){
    cin>>s>>n;
    vector <pair<int,int>> arr(n);
    for(i=0;i<n;i++){
        cin>>x>>y;
        arr[i]={x,y};
    }
    sort(arr.begin(),arr.end(),comp);
    for(i=0;i<n;i++){
        //cout<<arr[i].first<<" "<<arr[i].second<<endl<<s<<endl;
        if(arr[i].first>=s)
        break;
        s+=arr[i].second;
    }
    if(i==n)
        cout<<"YES";
    else
        cout<<"NO";
  }
return 0;
}


