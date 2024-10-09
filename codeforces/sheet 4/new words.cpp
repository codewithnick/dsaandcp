#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int t,i,j,arr[26],m;
string s;
getline(cin,s);
for(i=0;i<26;i++){
    arr[i]=0;
}
for(i=0;i<s.length();i++){
    char c;
    c=s[i];
    if(c=='e' || c=='g' || c=='y' ||c=='p' || c=='t' )
    arr[c-97]++;
    if( c== 'E' || c=='G' || c=='Y' || c=='P' || c=='T')
    arr[c-65]++;
}
m=1e9;
m=(m<arr['e'-97]?m:arr['e'-97]);
m=(m<arr['g'-97]?m:arr['g'-97]);
m=(m<arr['y'-97]?m:arr['y'-97]);
m=(m<arr['p'-97]?m:arr['p'-97]);
m=(m<arr['t'-97]?m:arr['t'-97]);
if(m==1e9)
    cout<<0;
else
    cout<<m;

return 0;
}






