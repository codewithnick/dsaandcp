#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s;
getline(cin,s);
int i;
for(i=0;i<s.length();i++){
    if(s[i]=='\\')
        break;
    else
        cout<<s[i];
}
return 0;
}


