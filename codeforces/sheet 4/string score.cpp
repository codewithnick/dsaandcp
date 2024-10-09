#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int n,i,score=0;
string s;
getline(cin,s);
n=stoi(s);
getline(cin,s);
i=0;
while(i<n){
    char a;
    a=s[i];
    //cout<<a;
    if(a=='V'){
        score+=5;
    }
    else if(a=='W'){
        score+=2;
    }
    else if(a=='X'){
        i++;
    }
    else if(a=='Y'){
        //if we are not at last element
        if(i!=n-1){
               s.push_back(s[i+1]);
               n++;
               i++;
        }
    }
    else if(a=='Z'){
        //if we are not at last element
        if(i!=n-1){
            if(s[i+1]=='V'){
                score/=5;
                i++;
            }
            else if(s[i+1]=='W'){
                score/=2;
                i++;
            }

        }
    }
    i++;
}
cout<<score;
return 0;
}
