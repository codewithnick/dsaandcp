#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s,x;
int i,j,score=0,c=0;
cin>>s;
for(i=0;i<=s.length()-4;i++){
    score=0;
    if(s[i]=='L' && s[i+1]=='L')
    {
        score=-2;
        j=i+1;
        while(s[j+1]=='L' && j<s.length()-1)
        {
            score--;
            j++;
        }
        while(s[j+1]=='R' && j<s.length()-1 && score!=0)
        {
            score++;
            j++;
        }
        if(score==0)
         {
             c++;
             i=j-i;
         }

    }
    if(s[i]=='R' && s[i+1]=='R')
    {
        score=-2;
        j=i+1;
        while(s[j+1]=='R' && j<s.length()-1)
        {
            score--;
            j++;
        }
        while(s[j+1]=='L' && j<s.length()-1 && score!=0)
        {
            score++;
            j++;
        }
        if(score==0)
         {
             c++;
             i=j-i;
         }

    }
}
cout<<c<<"\n";
for(i=0;i<=s.length()-4;i++){
    score=0;
    if(s[i]=='L' && s[i+1]=='L')
    {
        score=-2;
        j=i+1;
        while(s[j+1]=='L' && j<s.length()-1)
        {
            score--;
            j++;
        }
        while(s[j+1]=='R' && j<s.length()-1 && score!=0)
        {
            score++;
            j++;
        }
        if(score==0)
         {
             c++;
             cout<<s.substr(i,j+1)<<"\n";
             i=j-i;
         }

    }
    if(s[i]=='R' && s[i+1]=='R')
    {
        score=-2;
        j=i+1;
        while(s[j+1]=='R' && j<s.length()-1)
        {
            score--;
            j++;
        }
        while(s[j+1]=='L' && j<s.length()-1 && score!=0)
        {
            score++;
            j++;
        }
        if(score==0)
         {
             c++;
             cout<<s.substr(i,j+1)<<"\n";
             i=j-i;

         }

    }
}
return 0;
}
