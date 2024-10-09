#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string ns="";
int t,i;
cin>>t;
for(i=0;i<t;i++){
    char a;;
    cin>>a;
    if(ns.length()>0)
    if(ns[ns.length()-1]==a)
        continue;
    ns+=a;
}
cout<<ns.length();
return 0;
}




