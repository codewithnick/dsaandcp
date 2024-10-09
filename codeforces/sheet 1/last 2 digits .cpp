
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
    long long a,b,c,d,mul=1;
    cin>>a>>b>>c>>d;
    a%=100;
    a+=100;
    mul*=a;
    mul%=100;
    mul+=100;
    b%=100;
    b+=100;
    mul*=b;
    mul%=100;
    mul+=100;
    c%=100;
    c+=100;
    mul*=c;
    mul%=100;
    mul+=100;
    d%=100;
    d+=100;
    mul*=d;
    mul%=100;
    if(mul>9)
    cout<<mul;
    else
    cout<<"0"<<mul;
}



