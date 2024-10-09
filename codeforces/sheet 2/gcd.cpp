

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   int a,b;
   long j;
   cin>>a>>b;
   for (j=a*b;j>0;j--)
   {
        if((a%j==0 && b%j==0)|| j==1)
        {
            cout<<j;
            break;
        }

   }
  return 0;
}









