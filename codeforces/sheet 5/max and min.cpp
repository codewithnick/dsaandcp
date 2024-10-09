#define ll long long
#include<bits/stdc++.h>
using namespace std;
/*returns max element of array*/
int max_of(int arr[],int n){
    int m=-1e9;
    for(int i=0;i<n;i++)
        m=(m>arr[i]?m:arr[i]);
    return m;
}
/*returns min element of array*/
int min_of(int arr[],int n){
    int m=1e9;
    for(int i=0;i<n;i++)
        m=(m<arr[i]?m:arr[i]);
    return m;
}

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<min_of(arr,n)<<" "<<max_of(arr,n);
    return 0;
}

