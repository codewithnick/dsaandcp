#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int t;
    string s;
    getline(cin,s);
    t=stoi(s);
while(t--){
    getline(cin,s);
    if(s.length()<=10)
    {
        cout<<s<<"\n";
    }
    else{
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
    }
}
return 0;
}


