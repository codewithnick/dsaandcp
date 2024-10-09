
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s;
char a;
getline(cin,s);
int i,t,n;
t=stoi(s);
while(t--){
    getline(cin,s);
    n=stoi(s.substr(0,s.find(" ")));
    s=s.substr(s.find(" ")+1,s.length());
    a=s[0];
    for(i=0;i<n;i++)
        cout<<s<<" ";
    cout<<"\n";
}

return 0;
}

