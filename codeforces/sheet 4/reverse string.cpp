#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    string s,newstr="",s1,mainstr="";
    vector <string > arr;
    getline(cin,s);
    int i,j;
    j=s.length();
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
         {
             mainstr+=newstr+' ';
             newstr="";
         }
        else
            newstr=s[i]+newstr;
    }
    if(i==s.length())
         mainstr+=newstr;
    cout<<mainstr<<"\n";

return 0;
}
