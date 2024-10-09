#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int i,j=0,words=0;
char a;
bool isalp=0;
string s;
getline(cin,s);
for(i=0;i<s.length();i++)
{
    a=s[i];
    if(65<=a && a<=91 || 97<=a && a<123)
    {
        isalp=1;
    }
    if(a==' ')
    {
        //word ends or starts
        if(isalp)
            words++;
        isalp=0;
    }
}
if(isalp)
   words++;
cout<<words;
return 0;
}
