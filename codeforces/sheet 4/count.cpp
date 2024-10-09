#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s;
int i;
ll c=0;
getline(cin,s);
for(i=0;i<s.length();i++){
        c+=s[i]-48;
}
cout<<c;
return 0;
}


