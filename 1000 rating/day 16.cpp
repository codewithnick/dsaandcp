
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
int t;
cin>>t;
while(t--)
  {
      int n,a,b,i,j;
      cin>>n;
      vector<int> arr(n);
      for(i=0;i<n;i++){
        cin>>arr[i];
     }

     for(i=0,j=n-1;i<j;i++,j--)
     cout<<arr[i]<<" "<<arr[j]<<" ";
     if(i==j)
        cout<<arr[i];
     cout<<endl;

  }
return 0;
}



