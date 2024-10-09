#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int q,index,i;
string s;
string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
getline(cin,s);
q=stoi(s);
getline(cin,s);
if(q==1){
    //encrypt
    for(i=0;i<s.length();i++){
        index=Original.find(s[i]);
        s[i]=Key[index];
    }
}
else {
    //decrypt
    for(i=0;i<s.length();i++){
        index=Key.find(s[i]);
        s[i]=Original[index];
    }
}

cout<<s;
return 0;
}







