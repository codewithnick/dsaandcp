
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    x=max(a,c);
    y=min(b,d);
    if(x<=y)
        cout<<x<<" "<<y;
    else
        cout<<-1;
}




