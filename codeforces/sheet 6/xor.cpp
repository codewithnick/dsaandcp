#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll a,b,c,q;
cin>>a>>b>>q;
c=a^b;
q--;
if(q%3==0)
    cout<<a;
else if(q%3==1)
    cout<<b;
else
    cout<<c;

return 0;
}
