#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s;
int i,j,arr[26];
for(i=0;i<26;i++)
    arr[i]=0;
getline(cin,s);
for(i=0;i<s.length();i++)
    arr[s[i]-97]++;
for(i=0;i<26;i++)
    if(arr[i])
    cout<<(char)(i+97)<<" : "<<arr[i]<<"\n";
return 0;
}
