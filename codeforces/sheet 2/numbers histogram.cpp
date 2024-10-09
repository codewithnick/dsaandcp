


#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   char s;
   scanf("%c",&s);
   int n,i,j;
   cin>>n;
   int x[n];
   for(i=0;i<n;i++){
    cin>>x[i];
   }
   for(i=0;i<n;i++){
        for(j=0;j<x[i];j++){
            cout<<s;
        }
        cout<<"\n";
   }
  return 0;
}










