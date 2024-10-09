
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s,s1,s2,smalleststr,ns;
getline(cin,s);
smalleststr=s;
int i;
for(i=1;i<s.length();i++){
    s1=s.substr(0,i);
    s2=s.substr(i,s.length()-i);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    ns=s1+s2;
    //cout<<ns<<"\n";
    if(ns.compare(smalleststr)<0)
        smalleststr=ns;
}
cout<<smalleststr;
return 0;
}
