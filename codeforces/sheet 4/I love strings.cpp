#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string x,s,t;
int n;
getline(cin,x);
n=stoi(x);
while(n--){
        getline(cin,x);
        s=x.substr(0,x.find(' '));
        t=x.substr(x.find(' ')+1,x.length());
        int i=0,j=0;
        while(i<s.length() || j<t.length()){
            if(i<s.length())
                {
                    cout<<s[i];
                    i++;
                }
            if(j<t.length())
                {
                    cout<<t[j];
                    j++;
                }
        }
        cout<<"\n";
}
return 0;
}
