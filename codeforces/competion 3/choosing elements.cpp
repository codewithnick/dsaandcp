#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n,k,i,j;
  cin>>n>>k;
  ll arr[n],s=0,minelem,maxelem,maxvalue;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  for(i=0;i<k;i++){
    minelem=0;
    maxvalue=minelem;
    for(j=0;j<n;j++){
        if(arr[j]>maxvalue)
        {maxvalue=arr[j];
            maxelem=j;
        }
    }
    s+=maxvalue;
    if(maxvalue)
        arr[maxelem]=minelem;
    else
        break;
  }
  cout<<s;
    return 0;
}




