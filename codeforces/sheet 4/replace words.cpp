#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int t,i,j,n;
string s,s1="EGYPT",s2;
getline(cin,s);
n=s.length();
for(i=0;i<=n-5;i++){
    if(s1==s.substr(i,5))
    {
           s=s.substr(0,i)+" "+s.substr(i+5,s.length());
    }
    n=s.length();
}
cout<<s;
return 0;
}






