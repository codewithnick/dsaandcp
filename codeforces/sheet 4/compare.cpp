#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
string x,y;
getline(cin,x);
getline(cin,y);
int i;
bool f1=0,f2=0;
for(i=0;i<min(x.length(),y.length());i++){
    if(f1 || f2){
        break;
    }
    if(x[i]<y[i]){
        f1=1;
    }
    else if(x[i]>y[i]){
        f2=1;
    }
    else{
        cout<<x[i];
    }
}
i--;
if(f1){
    for(;i<x.length();i++){
        cout<<x[i];
    }
}
if(f2){
    for(;i<y.length();i++){
        cout<<y[i];
    }
}

return 0;
}



