#include<bits/stdc++.h>
using namespace std;

#define ll long long
void shift_and_print(int arr[],int n,int x){
    x%=n;
    for(int i=n-x;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-x;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n,i,x;
    cin>>n>>x;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    shift_and_print(arr,n,x);
    return 0;
}




