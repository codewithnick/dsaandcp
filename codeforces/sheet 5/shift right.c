#include<bits/stdc++.h>
using namespace std;

#define ll long long
void shift_and print(int arr[],int n,int shift){
    for(int i=x;i<n+x;i++){
        cout<<arr[i%n]<<" ";
    }
}
int main(){
    int n,i,x;
    cin>>n>>x;
    float arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    shift_and_print(arr,n,x);
    return 0;
}




