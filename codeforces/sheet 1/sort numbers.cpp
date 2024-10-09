

#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
    long long a,b,c,min,temp,max;
    cin>>a>>b>>c;
    min=max=a;
    min=min<b?min:b;
    min=min<c?min:c;
    max=max>b?max:b;
    max=max>c?max:c;
    cout<<min<<"\n";
    cout<<a+b+c-min-max<<"\n";
    cout<<max<<"\n";
    cout<<"\n"<<a<<"\n"<<b<<"\n"<<c;
}





