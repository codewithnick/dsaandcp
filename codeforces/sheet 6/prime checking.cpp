#define ll long long
#include<bits/stdc++.h>
using namespace std;

bool integer_isprime(long long n){
    if(n==0 || n==1 )
        return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
        return 0;
    return 1;
}

int main(){
    ll n;
    cin>>n;
    if(integer_isprime(n))
        cout<<"YES";
    else
        cout<<"NO";

return 0;
}
