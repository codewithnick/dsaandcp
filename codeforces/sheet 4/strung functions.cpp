
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string s,r1,r2,query;
getline(cin,s);
int n,q,i;
n=stoi(s.substr(0,s.find(' ')));
q=stoi(s.substr(s.find(' ')+1,s.length()));
getline(cin,s);
for(i=0;i<q;i++){
    getline(cin,query);
    int x,y;
    r1=query.substr(0,query.find(' '));
    r2=query.substr(query.find(' ')+1,query.length());
    if(r1=="substr"){
        x=stoi(r2.substr(0,r2.find(' ')));
        y=stoi(r2.substr(r2.find(' ')+1,r2.length()));
        cout<<s.substr(x-1,y-x)<<"\n";
    }
    else if(r1=="sort"){
        x=stoi(r2.substr(0,r2.find(' ')));
        y=stoi(r2.substr(r2.find(' ')+1,r2.length()));
        x--;
        //cout<<x<<y<<s.substr(x,y-x)<<"\n";
        for(int a=x;a<y;a++){
                for(int b=x;b<y;b++){

                    if(s[b]>s[b+1]){
                        //cout<<s[b]<<s[b+1]<<'\n';
                        swap(s[b],s[b+1]);
                    }
                }
            }
        //cout<<s<<"\n";
    }
    else if(r1=="reverse"){
            x=stoi(r2.substr(0,r2.find(' ')));
        y=stoi(r2.substr(r2.find(' ')+1,r2.length()));
        x--;
        y--;
        while(x<y){
            swap(s[x],s[y]);
            x++;
            y--;
        }
        cout<<s<<"\n";
    }
    else if(r1=="pop_back"){
        n--;
    }
    else if(r1=="back"){
            cout<<s[n-1]<<"\n";
    }
    else if(r1=="front"){
        cout<<s[0]<<"\n";
    }
    else if(r1=="push_back"){
        s[n]=r2[0];
    }
    else if(r1=="print"){
        x=stoi(r2);
        cout<<s[x]<<"\n";
    }
}
return 0;
}



