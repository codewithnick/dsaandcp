

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   ll num,temp,pal=0;
   cin>>num;
    temp=num;
    while(num){
        pal*=10;
        pal+=num%10;
        num/=10;
    }
    cout<<pal;
    if(temp==pal)
        cout<<"\nYES";
    else
        cout<<"\nNO";

  return 0;
}

