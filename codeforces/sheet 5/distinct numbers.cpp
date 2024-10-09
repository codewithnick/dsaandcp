
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int distinct_elements(int arr[],int n){
    bool visited[n];
    int dist=0,i,j;
    for(i=0;i<n;i++)
        visited[i]=0;
    for(i=0;i<n;i++)
        if(visited[i]==0)
            for(j=i+1;j<n;j++)
            if(arr[i]==arr[j])
            {
                visited[j]=1;
                dist++;
            }
    return n-dist;
}

int main(){
    int n,i,x;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<distinct_elements(arr,n);
    return 0;
}




