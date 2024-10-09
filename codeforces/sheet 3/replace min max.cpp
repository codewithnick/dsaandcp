#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int n;
  cin>>n;
  int arr[n];
  int min=1e9 , max=-1e9,temp,min_i,max_i;
  for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        if(min>=arr[i])
        {
            min=arr[i];
            min_i=i;
        }
        if(max<=arr[i])
        {
            max=arr[i];
            max_i=i;
        }
    }
    temp=arr[min_i];
    arr[min_i]=arr[max_i];
    arr[max_i]=temp;
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
  return 0;
}








