
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s,s1,s2;
getline(cin,s);
int i;
for(i=1;i<s.length();i++){
    s1=s.substr(0,i);
    s2=s.substr(i,s.length()-i);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    s=s1+s2;
}
cout<<s;
return 0;
}
