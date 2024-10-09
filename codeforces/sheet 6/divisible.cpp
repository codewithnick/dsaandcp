
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    char a;
    int t,x,num=0;
    cin>>s>>t;
    if(s[0]=='0')
        {cout<<"NO";
        }

    while(s!=""){
        num*=10;
        num+=(s[0]-48);
        //cout<<num<<" ";
        num%=t;
        s=s.substr(1);
    }
    if(num==0)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}
