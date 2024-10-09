#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int n,m,i;
    cin>>n>>m;
    int arr[n],freq[m];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<m;i++){
        freq[i]=0;
    }
    for(i=0;i<n;i++){
        freq[arr[i]-1]++;
    }
    for(i=0;i<m;i++){
     cout<<freq[i]<<"\n";
    }
  return 0;

}

