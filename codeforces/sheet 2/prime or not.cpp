

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   long n,i;
   cin>>n;
   for (i=2;i<n;i++){
    if(n%i==0){
        cout<<"NO";
        break;
    }
   }
   if(n==i){
    cout<<"YES";
   }

  return 0;
}







