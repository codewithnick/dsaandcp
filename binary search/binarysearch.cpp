#include<bits/stdc++.h>
#define sz 100
using namespace std;
int binarysearch( int  arr[],int n, int x){
    int low=0,high=n-1,mid=0,ind=-1;
    while(low<=high){
        //cout<<low<<mid<<high<<endl; 
        mid=(low+high)/2;
        if(arr[mid]==x){
            ind=mid;
            high=mid-1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ind;
}
int recursivebin(int low,int high,int arr[],int x){
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]<x){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    return recursivebin(low,high,arr,x);
}
int lower_bound(int arr[],int n,int x){
    int low=0,high=n-1,mid=(low+high)/2,ans=n;
    while(low<=high){
        mid=(low+high)/2;
        //cout<<low<<high<<mid<<endl;
        if(arr[mid]==x){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<x){
            low=mid+1;
            ans=low;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int ub(int arr[],int n,int x){
    int low=0,mid,high=n-1,ans=n;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]<=x){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
    }
    return ans;
}


int squarert(int x){
int low=0,high=x, mid,ans=-1,temp;
while(low<=high){
    mid=(low+high)/2;
    //cout<<low<<mid<<high<<endl;
    temp=mid*mid;
    if(temp<=x){
        ans=mid;
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return ans;
}
int cubert(int x){
int low=0,high=x, mid,ans=-1;
long long temp;
while(low<=high){
    mid=(low+high)/2;
    //cout<<low<<mid<<high<<endl;
    temp=mid*mid*mid;
    if(temp<=x){
        ans=mid;
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return ans;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n=0,x;
    /* cin>>n>>x;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } */
    
    //cout<<recursivebin(0,n-1,arr,x);
    //cout<<lower_bound(arr,n,x);

    cin>>x;
    cout<<cubert(x);
   return 0;
}
