#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int n,q,i,j,mid,high,low=0;
    cin>>n>>q;
    ll x;
    vector <long long> arr[n];
    for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
    sort(arr.begin(),arr.end());
    while(q--){
        low=0;
        high=n;
        cin>>x;
        while(low<high){
            mid=low+(high-low)/2;
            //cout<<mid<<"\n";
            if(arr[mid]==x){
                cout<<"found\n";
                break;
            }
            else if(arr[mid]<x)
                low=mid+1;
            else
                high=mid-1;
        }
        if(low>=high)
            cout<<"not found\n";
    }
  return 0;

}
