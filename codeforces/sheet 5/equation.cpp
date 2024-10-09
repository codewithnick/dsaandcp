#define ll long long
#include<bits/stdc++.h>
using namespace std;

long long power(int a,int b){
    if(b==0)
        return 1;
    if(a==0)
        return 0;
    long long x=1;
    while(b--){
        x*=a;
    }
    return x;
}


//uncomment below to test
int main(){
    int n,x;
    cin>>x>>n;
    ll s=-1;
    if(n%2!=0 && n>0){
        n--;
    }
    do{
        s+=power(x,n);
        n-=2;
    }while(n+2);
    cout<<s;
return 0;
}

