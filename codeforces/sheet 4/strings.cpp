#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s,t;
getline(cin,s);
getline(cin,t);
cout<<s.length()<<" ";
cout<<t.length()<<"\n";
cout<<s<<t<<"\n";
swap(s[0],t[0]);
cout<<s<<" "<<t;
return 0;
}

