#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    while(1){
        int a,b,i,sum=0;
        cin>>a>>b;
        if(a<=0 || b<=0)
            return 0;
        for(i=min(a,b);i<=max(a,b);i++){
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<"\n";
    }
  return 0;
}












