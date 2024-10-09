
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cin>>a;
    while (a/10>0){
        a/=10;
    }
    if(a%2==0){
        cout<<"EVEN";
    }
    else
        cout<<"ODD";
}



