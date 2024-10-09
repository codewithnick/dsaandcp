#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    int x,y;
    if(s1.find('>')<s1.length())
    {
        x=stoi(s1.substr(0, s1.find('>'))) ;
        y=stoi(s1.substr(s1.find('>')+1, s1.length()));
        if(x>y)
            cout<<"Right";
        else
            cout<<"Wrong";
    }
    else if(s1.find('<')<s1.length())
    {
        x=stoi(s1.substr(0, s1.find('<'))) ;
        y=stoi(s1.substr(s1.find('<')+1, s1.length()));
        if(x<y)
            cout<<"Right";
        else
            cout<<"Wrong";
    }
    else if(s1.find('=')<s1.length())
    {
        x=stoi(s1.substr(0, s1.find('='))) ;
        y=stoi(s1.substr(s1.find('=')+1, s1.length()));
        if(x==y)
            cout<<"Right";
        else
            cout<<"Wrong";
    }


}



