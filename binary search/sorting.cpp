#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j])
            swap(arr[j+1],arr[j]);
        }
    }
}
void selectionsort(int arr[],int n){
    int i,j,ind,m;
    for(i=0;i<n-1;i++){
        m=arr[i];
        ind=i;
        for(j=i+1;j<n;j++)
        if(arr[j]<m)
        ind=j;
        swap(arr[ind],arr[i]);
    }
}
void insertionsort(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
        
}
void merge(int arr[],int low,int mid,int high){
    if(low==high)
    return;
    int n1=mid-low+1,n2=high-mid,i,j,k;
    int l[n1],r[n2];
    for(i=0;i<n1;i++)
    l[i]=arr[low+i];
    for(i=0;i<n2;i++)
    r[i]=arr[mid+1+i];
    i=0;
    j=0;
    k=low;
    while(i<n1&&j<n2){
        if(l[i]<r[j]){
            arr[k]=l[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=r[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=l[i];
            i++;
            k++;
    }
    while(j<n2){
        arr[k]=r[j];
            j++;
            k++;
    }
   
}
void mergesort(int arr[],int low,int high){
    if(low==high)
    return;
    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=-1,j;
    for(j=0;j<high;j++){
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[high],arr[i+1]);
    return i+1;
}
void quicksort(int arr[],int low,int high){
    if(low>=high)
    return;
    int pi=partition(arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);
}
int32_t main(){
#ifndef ONLINE_JUDGE
   freopen("output.txt", "w", stdout);
   freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
#endif
   int n,i;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   cin>>arr[i];
   //bubblesort(arr,n);
   //selectionsort(arr,n);
   //insertionsort(arr,n);
   //mergesort(arr,0,n-1);
   quicksort(arr,0,n-1);
   for(i=0;i<n;i++)
   cout<<arr[i]<<" ";
   
return 0;
}


