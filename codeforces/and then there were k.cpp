#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t,n,i;
    ll x;
    cin>>t;
    while(t--){
        cin>>n;
        //check msb
        for(i=31;i>=0;i--){
            if(n>>i)
                break;
        }
        i=1<<i;
        cout<<i-1<<"\n";

    }
return 0;
}
