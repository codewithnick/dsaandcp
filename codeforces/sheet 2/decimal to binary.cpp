#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll n;
    int x=0,c,ones=0,bin=1,temp,t;
    cin>>t;
    while(t--){
    cin>>n;
    //dec to bin
    ones=0;
    while(n){
        if(n%2)
            ones++;
        n/=2;
    }
    //cout<<bin<<"\n";
    //bin to dec
    c=0;
    x=0;
    //cout<<ones<<" ";
    while(ones){
        x+=pow(2,c++);
        ones--;
    }
    cout<<x<<"\n";
    }
  return 0;
}

