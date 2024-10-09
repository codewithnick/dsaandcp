#include<bits/stdc++.h>
using namespace std;

void new_array(int a[],int b[],int n){
    int c[2*n],i;
    for(i=0;i<n;i++)
        c[i]=b[i];
    for(i=0;i<n;i++)
        c[n+i]=a[i];
    for(i=0;i<n*2;i++)
        cout<<c[i]<<" ";
}
#define ll long long
int main(){
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    new_array(a,b,n);
    return 0;
}





