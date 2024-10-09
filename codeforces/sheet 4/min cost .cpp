#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s,s1,s2;
getline(cin,s);
int i,arr[26],j,k,cost;
for(i=0;i<26;i++){
    cin>>arr[i];
}
for(i=0;i<s.length()-1;i++)
{
    j=i+1;
    if(s[j]=='?')
    {
        while(s[j+1]=='?' && j<n)
        j++;
        //string ends with ?
        if(j==n-1)
        {
            //first word in cost to be equal to last found element

        }
        //string starts with ?

        //string has ? in between
    }
}
return 0;
}
