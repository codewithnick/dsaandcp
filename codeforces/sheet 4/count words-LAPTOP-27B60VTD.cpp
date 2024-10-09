#include<bits/stdc++.h>
using namespace std;

#define ll long long
bool char_is_alpha(char a){
    if((65<=a  && a<91 ) || (97<=a && a<123))
        return 1;
    return 0;
}

int main(){
int i,j=0,words=0;
char a;
bool isword=1;
string s;
getline(cin,s);
for(i=0;i<s.length();i++)
{

    j=i;
    isword=1;
    while(s[j]!=' ' && j<s.length())
    {
        j++;
    }
    if(char_is_alpha(s[i]))
    {
        words++;
    while(i<j)
    {
        i++;
        if(i<j-1 && !char_is_alpha(s[i]))
        {
            words--;
            i=j;
        }
    }
    }
    else
        i=j;
}

cout<<words;
return 0;
}
