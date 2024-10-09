


#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int t,i;
cin>>t;
for(i=0;i<t;i++){
    ll n;
    cin>>n;
    do{
        cout<<n%10<<" ";
        n/=10;
    }while(n);
    cout<<"\n";
}
return 0;
}












