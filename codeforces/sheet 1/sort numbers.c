

#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
    long a,b,c,min,max;
    cin>>a>>b>>c;
    min=max=a;
    min=min<b?min:b;
    min=min<c?min:c;
    max=max>b?max:b;
    max=max>c?max:c;
    cout<<min<<"\n";
    if (a!=min && a!=max)
        cout<<a<<"\n";
    if (b!=min && b!=max)
        cout<<b<<"\n";
    if (c!=min && c!=max)
        cout<<c<<"\n";
    cout<<max<<"\n";
    cout<<"\n"<<a<<"\n"<<b<<"\n"<<c;
}





