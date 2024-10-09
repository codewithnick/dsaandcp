#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s,x,ns;
int i,j,strs=1,c=0;
bool r=0;
cin>>s;
for(i=0;i<s.length();i++){
    ns+=s[i];
    if(s[i]=='L')
        c++;
    if(s[i]=='R')
        c--;
    if(c==0 && i<s.length()-1)
    {
        ns+="\n";
        strs++;
    }
}
cout<<strs<<"\n";
cout<<ns;
return 0;
}
