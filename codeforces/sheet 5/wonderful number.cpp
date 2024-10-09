#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool string_ispalindrome(string s){
    ll j=s.length()-1;
    for(ll i=0;i<j;i++,j--)
        if(s[i]!=s[j])
            return 0;
    return 1;
}


int main(){
    ll n;
    int i;
    string s="";
    cin>>n;
    if(n%2==0){
        cout<<"NO";
        return 0;
    }
    else{
        while(n>0){
          i=n%2;
          s+=char(i+48);
          n/=2;
        }
    }
    if(string_ispalindrome(s))
    cout<<"YES";
    else
    cout<<"NO";
return 0;
}

