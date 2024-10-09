

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,s,temp,i;
    cin>>n>>s;
    temp=n*(n+1)/2;
    if(temp>=s && s>=1 && n>1){
        if(s==1 && n>1)
        {
            cout<<1<<" ";
            continue;
        }
        i=(s<n?s-1:n-1);
        temp=0;
        while(i>0){
            if(temp+i>s){
                i--;
                continue;
            }
            else{
                temp+=i;
                cout<<i<<" ";
            }
            i--;
        }
        if(t)
        cout<<"\n";
    }
    else{
        cout<<-1;
    }
  }
  return 0;
}

