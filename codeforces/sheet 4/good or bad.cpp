#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s;
int t,i;

getline(cin,s);
t=stoi(s);
while(t--){
            getline(cin,s);
bool a=0;
for(i=0;i<=s.length()-3;i++){
    if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
        a=1;
    if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
        a=1;
    if(a)
        break;
}
if(a)
    cout<<"Good\n";
else
    cout<<"Bad\n";
}
return 0;
}




