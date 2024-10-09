
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,i,s=0;
    cin>>n;
    for(i=1;i<=(ll)sqrt(n);i++){
        if(n%i==0)
        {
            s+=i;
            if(n/i!=(ll)(sqrt(n)))
            s+=(n/i);
        }
    }
    cout<<s;
return 0;
}

