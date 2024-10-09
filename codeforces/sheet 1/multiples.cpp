

#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    long long  a,b;
    cin>>a>>b;
    if(b%a==0 || a%b==0)
    cout<<"Multiples";
    else
    cout<<"No Multiples";
    return 0;
}

