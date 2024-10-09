#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s,username,pwd,profile,role,key;
int i,j,score=0,c=0;
cin>>s;
s=s.substr(s.find('?')+1,s.length());
username=s.substr(0,s.find('&'));
username=username.substr(0,username.find('=')) +": "+username.substr(1+username.find('='),username.length());
s=s.substr(s.find('&')+1,s.length());
pwd=s.substr(0,s.find('&'));
pwd=pwd.substr(0,pwd.find('=')) +": "+pwd.substr(1+pwd.find('='),pwd.length());
s=s.substr(s.find('&')+1,s.length());
profile=s.substr(0,s.find('&'));
profile=profile.substr(0,profile.find('=')) +": "+profile.substr(1+profile.find('='),profile.length());
s=s.substr(s.find('&')+1,s.length());
role=s.substr(0,s.find('&'));
role=role.substr(0,role.find('=')) +": "+role.substr(1+role.find('='),role.length());
s=s.substr(s.find('&')+1,s.length());
key=s;
key=key.substr(0,key.find('=')) +": "+key.substr(1+key.find('='),key.length());
cout<<username<<"\n"<<pwd<<"\n"<<profile<<"\n"<<role<<"\n"<<key;

return 0;
}

