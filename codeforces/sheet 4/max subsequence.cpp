#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s;
getline(cin,s);
int t,i,j,maxsize=1;
t=stoi(s);
getline(cin,s);
for(i=0;i<s.length()-1;i++){
    for(j=i+1;j<s.length();j++)
    {
           // cout<<i<<j<<"\n";
        if(s[j]==s[j-1])
        break;
        maxsize=(maxsize>j-i+1?maxsize:j-i+1);
    }
}
cout<<maxsize;
return 0;
}




