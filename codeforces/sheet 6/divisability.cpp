#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int a,b,x;
    cin>>a>>b>>x;
    if(a%x!=0)
        a-=x;
    if(b%x!=0)
        b-=x;
    a=a/x;
    if(a==0)
        a=1;
    b=b/x;
    cout<<((b+a)*(b-a+1)/2)*x;
    return 0;
}
