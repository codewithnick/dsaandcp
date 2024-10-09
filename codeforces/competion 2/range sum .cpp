#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    long t;
    cin>>t;
    while(t--){
        ll l,r,sum=0;
        cin>>l>>r;
        if(l>r){
            l=l+r;
            r=l-r;
            l=l-r;
        }
        cout<<((r*(r+1))-(l*(l-1)))/2;
        if(t)
            cout<<"\n";
    }

  return 0;
}
