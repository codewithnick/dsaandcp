
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a,int b){
    if(b<a){
        a=a^b;
        b=a^b;
        a=a^b;
    }
    while(a!=0 || b!=0){
        a=b%a;
    }
    return (a>b?a:b);
}
int main(){
int a,b;
ll x,y;
cout<<"enter  2 numbers \n"
cin>>a>>b;
y=a*b;
x=gcd(a,b);
cout<<"the gcd is "<<x<<" "<<y/x;
return 0;
}


