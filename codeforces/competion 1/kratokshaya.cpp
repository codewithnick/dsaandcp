

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   ll n,m,k,krat;
   //1n 1m 1k
   //2n 1k
   //2n 1m 1k
   cin >>n>>m>>k;
   krat=min(min(n,m),k);
   n-=krat;
   m-=krat;
   k-=krat;
   if (n!=0){
        if(m==0){
            krat+=min((n/2),k);
        }
   }
   cout<<krat;
   return 0;
}


