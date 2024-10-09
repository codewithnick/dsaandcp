#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t,i,n,m,b,top;
  cin>>t;
  while(t--){
    top=0;
    cin>>n;
    vector <int> arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>b;
        top=(top+b)%n;
    }
    cout<<arr[top]<<endl;
  }
return 0;
}
