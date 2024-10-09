#include<bits/stdc++.h>
using namespace std;

#define ll long long
double average(float arr[], int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}

int main(){
    int n,i;
    cin>>n;
    float arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<fixed<<setprecision(7)<<average(arr,n);
    return 0;
}



