#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int i,j=0;
string s,s2="hello";
getline(cin,s);
for(i=0;i<s.length();i++){
    if(s[i]==s2[j])
        j++;
}
if(j==5)
    cout<<"YES";
else
    cout<<"NO";
return 0;
}




