#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s;
int i;
getline(cin,s);
for(i=0;i<s.length();i++){
        if(s[i]==',')
            s[i]=' ';
        else if(65<=s[i] && s[i]<=91)
            s[i]+=32;
        else if(97<=s[i] && s[i]<=123)
            s[i]-=32;
        cout<<s[i];
}
return 0;
}



