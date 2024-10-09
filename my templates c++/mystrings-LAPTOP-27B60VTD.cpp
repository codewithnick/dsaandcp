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
bool char_is_alpha(char a){
    if((65<=a  && a<91 ) || (97<=a && a<123))
        return 1;
    return 0;
}
char upper_to_lower(char a){
return a | ' ';
}
char lower_to_upper(char a){
return a & '_';
}
char toggle_case(char a){
return a ^ ' ';
}

//uncomment below to test
int main(){
    string s;
    char a;
    cin>>a;
    cout<<toggle_case(a);

return 0;
}

