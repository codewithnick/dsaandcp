


#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   bool x=1;
   long a,b,i,temp;
   cin>>a>>b;
   for(i=a;i<=b;i++){
        temp=i;
        while(temp){
            if(temp%10==7 || temp%10==4){
                if(temp/10==0){
                    cout<<i<<" ";
                    x=0;
                }
                temp/=10;
            }
            else{
                break;
            }
        }
   }
   if(x)
   {
       cout<<-1;
   }
  return 0;
}









