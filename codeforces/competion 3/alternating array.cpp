
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,i,j,p1,p2,n1,n2;
  p1=p2=n1=n2=0;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
    if(i%2==0){
        //0,2,4,6....
        if(arr[i]>0)
            n1+=1;
        if(arr[i]<0)
            p1+=1;
    }
    else{
        //1,3,5,7...
        if(arr[i]>0)
            n2+=1;
        if(arr[i]<0)
            p2+=1;
    }
  }
    cout<<min(p1+n2,n1+p2);
    return 0;
}

