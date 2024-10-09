
#include<iostream>
#include<string.h>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    long x,y,z;
    if(s1.find('+')<s1.length())
    {
        x=stol(s1.substr(0, s1.find('+'))) ;
        y=stol(s1.substr(s1.find('+')+1, s1.find('=')));
        z=stol(s1.substr(s1.find('=')+1,s1.length())) ;
        if (x+y==z)
            cout<<"Yes";
        else
            cout<<x+y;
    }

    else if(s1.find('*')<s1.length())
    {
        x=stol(s1.substr(0, s1.find('*'))) ;
        y=stol(s1.substr(s1.find('*')+1, s1.find('=')));
        z=stol(s1.substr(s1.find('=')+1,s1.length())) ;
        if (x*y==z)
            cout<<"Yes";
        else
            cout<<x*y;
    }
    else if(s1.find('-')<s1.length())
    {
        x=stol(s1.substr(0, s1.find('-'))) ;
        y=stol(s1.substr(s1.find('-')+1, s1.find('=')));
        z=stol(s1.substr(s1.find('=')+1,s1.length())) ;
        if (x-y==z)
            cout<<"Yes";
        else
            cout<<x-y;

    }

}



