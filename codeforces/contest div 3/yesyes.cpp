
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int t,i,j;
   cin>>t;
   string s,y="Yes";
   while(t--){
    cin>>s;
    //check start
    for(i=0;i<3;i++)
    if(s[0]==y[i])
    break;
    //done
    if(i==3)
        {cout<<"NO\n";
        continue;}
    //check
    for(j=0;j<s.length();){
        if(s[j]==y[i]){
            j++;
            i=(i+1)%3;
        }
        else
         {
            break;
        }
        //cout<<i<<' '<<j<<"\n";
   }
      if(j==s.length())
    cout<<"YES\n";
   else
    cout<<"NO\n";
   }
    return 0;
}
