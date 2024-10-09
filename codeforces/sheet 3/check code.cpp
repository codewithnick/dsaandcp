#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int a,b,i,x;
  cin>>a>>b;
  for(i=0;i<a+b+1;i++){
    char c;
    cin>>c;
    if(i==a){
        if(c!='-')
        {
            cout<<"No";
            break;
        }
    }
    else{
        x=(int)c-48;
        if(0<=x && x<=9){}
        else
        {
            cout<<"No";
            break;
        }
    }

  }
  if(i==a+b+1){
        cout<<"Yes";
    }
  return 0;
}









