#include<bits/stdc++.h>
using namespace std;

int32_t main(){


  int t=1,p,a,b,c;
  cin>>t;
  while(t--){
    int i,n,mid,low,high;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
    cin>>arr[i];
    low=0;
    high=n-1;
    while(low<=high){
        mid=low+(high-low)/2;
        int sum=accumulate(arr.begin()+low,arr.begin()+mid+1,0),wt;
        printf("? %d",mid+1);
        for(i=low;i<=mid;i++)
        printf(" %d",i+1);
        printf("\n");
        fflush(stdout);
        scanf("%d",&wt);
        if(sum!=wt)
        high=mid;
        else
        low=mid+1;
    }
    printf("! %d\n",mid+1);
    fflush(stdout);
   }
  
return 0;
}


