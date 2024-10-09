

#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
    string s1,f1,s2,f2;
    cin>>s1>>f1;
    cin>>s2>>f2;
    if(f1.compare(f2)==0)
        cout<<"ARE Brothers";
    else
        cout<<"NOT";
    return 0;
}


