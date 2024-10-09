#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  ll n,t1=0,t2=1,t3;
    cin>>n;
    if(n==1){
        cout<<0;
    }
    else if(n==2){
        cout<<1;
    }
    else{
        n-=1;
        while(--n){
            t3=t1+t2;
            t1=t2;
            t2=t3;
        }
        cout<<t3;
    }
  return 0;
}










