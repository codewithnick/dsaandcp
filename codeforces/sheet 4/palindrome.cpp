#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s;
int i,j;
bool x=1;
getline(cin,s);
i=0;
j=s.length()-1;
while(i<j){
    if(s[i]!=s[j])
    {
        x=0;
        break;
    }
    i++;
    j--;
}
if(x)
    cout<<"YES";
else
    cout<<"NO";
return 0;
}





