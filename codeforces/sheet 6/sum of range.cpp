#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
int a,b;
cin>>a>>b;
if(a>b)
    swap(a,b);

cout<<(ll)b*(b+1)/2 - (ll)a*(a-1)/2<<"\n";

ll ae,ao,be,bo,x,y;
if(a&1)
{
     ao=a;
     ae=a+1;
}
else
{
    ao=a+1;
    ae=a;
}
if(b&1)
{
   bo=b;
   be=b-1;
}
else
{
   bo=b-1;
   be=b;
}
x=(be/2)*(be/2 +1) -((ae-1)/2)*((ae+1)/2);
y=((bo+ao)/2)*((bo-ao)/2 +1);
cout<<x<<"\n"<<y;
return 0;
}
