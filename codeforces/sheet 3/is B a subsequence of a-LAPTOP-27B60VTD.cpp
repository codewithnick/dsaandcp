

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
   int n,m,i,j=0,found=0,temp=0;
   cin>>n>>m;
   if(m>n)
   {
       cout<<"NO";
       return 0;
   }
   ll a[n],b[m];
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   for(i=0;i<m;i++){
    cin>>b[i];
   }
   j=0,i=0;
   for(;i<m;i++){
        while(j<n)
        {
            if( b[i]==a[j])
            {
               // cout<<i<<" "<<j<<"\n";
                found++;
                j++;
                break;
            }
            j++;
        }
   }
   //all elements in b are found
   if(found==m){
    cout<<"YES";
   }
   else
    cout<<"NO";
  return 0;

}
