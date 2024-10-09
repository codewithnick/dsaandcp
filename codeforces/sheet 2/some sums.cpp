#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int n,a,b,i,sum,tot=0,temp;
cin>>n>>a>>b;
for(i=1;i<=n;i++){
    sum=0;
    temp=i;
    while(temp){
        sum+=temp%10;
        temp/=10;
    }
    if(a<=sum && sum<=b)
        tot+=i;
}
cout<<tot;
  return 0;
}

