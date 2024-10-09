



#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
    char a,x;
    cin>>a;
    if(97<=a && a<=123 || 65<=a && a<=91)
        {
            if(97<=a && a<=123)
                {
                    x=a-32;
                    cout<<x;
                }
            else
                {
                    x=a+32;
                    cout<<x;
                }
        }
}


