


#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(97<=a && a<=123 || 65<=a && a<=91)
        {
            cout<<"ALPHA";
            if(97<=a && a<=123)
                cout<<"\nIS SMALL";
            else
                cout<<"\nIS CAPITAL";
        }
    else
        cout<<"IS DIGIT";
    return 0;
}


