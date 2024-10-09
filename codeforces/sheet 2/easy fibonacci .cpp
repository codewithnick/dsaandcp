#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int n,t1=0,t2=1,t3;
cin>>n;
while(n){
    cout<<t1;
    t3=t1+t2;
    t1=t2;
    t2=t3;
    if(--n)
        cout<<" ";
}
  return 0;
}


