
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   int a,b,c;
   cin>>a;
   b=a%10;
   c=a/10;
   if(b%c==0 || c%b==0)
    cout<<"YES";
    else
    cout<<"NO";
}





