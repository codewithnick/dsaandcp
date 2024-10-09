
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    long double r;
    cin>>r;
    long double pi=3.141592653;
    //cout<<pi;
    cout<<fixed<<setprecision(3)<<pi*r*r;
    return 0;
}

