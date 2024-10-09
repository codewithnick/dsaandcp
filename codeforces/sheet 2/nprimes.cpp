

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   int n,i,j,num;
   cin>>num;
   for (j=2;j<=num;j++)
   {
       n=j;
        for (i=2;i<n;i++){
            if(n%i==0){
            break;
            }
        }
        if(n==i){
        cout<<n<<" ";
        }
   }
  return 0;
}







