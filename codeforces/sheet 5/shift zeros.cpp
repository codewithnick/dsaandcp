
#include<bits/stdc++.h>
using namespace std;
void shift_zero(int arr[],int n){
int i=0,j=0,x=0;
for(i=0;i<n-x;i++){
   if(arr[i]==0)
   {
       for(j=i;j<n-1;j++){
        swap(arr[j],arr[j+1]);
        }
        x++;
        i--;
    }
}
for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
}
#define ll long long
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    shift_zero(arr,n);
return 0;
}



