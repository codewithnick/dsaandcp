

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   int t,n;
   ll fact;
   cin>>t;
   int arr[t];
   for(int i=0;i<t;i++){
       cin>>arr[i];
    }
    for(int i=0;i<t;i++){
        n=arr[i];
       fact=1;
       while(n>1){
        fact*=n--;
       }
       cout<<fact<<"\n";
   }

  return 0;
}
