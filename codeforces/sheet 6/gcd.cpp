
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main(){
int a,b;
ll x,y;
cin>>a>>b;
y=(ll)a*b;
x=gcd(a,b);
cout<<x<<" "<<y/x;
return 0;
}
