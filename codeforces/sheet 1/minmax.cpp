#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    long int  a,b,c,mymax,mymin;
    cin>>a>>b>>c;
    mymax=a;
    mymin=a;
    mymax=(mymax>b)?mymax:b;
    mymax=(mymax>c)?mymax:c;
    mymin=(mymin<b)?mymin:b;
    mymin=(mymin<c)?mymin:c;
    cout<<mymin<<" "<<mymax;
    return 0;
}


