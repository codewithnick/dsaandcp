#define ll long long
#include<bits/stdc++.h>
using namespace std;
/*
returns 1 if string is palindrome or else 0
parameter 1 is string
return type is bool
*/
bool string_ispalindrome(string s){
    ll j=s.length()-1;
    for(ll i=0;i<j;i++,j--)
        if(s[i]!=s[j])
            return 0;
    return 1;
}



//uncomment below to test
int main(){
    string s;
    getline(cin,s);
    cout<<string_ispalindrome(s);

return 0;
}

