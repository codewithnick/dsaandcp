
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int t;
   cin>>t;
   while(t--){
        int l,r,x,a,b,change,c=0;
        cin>>l>>r>>x;
        cin>>a>>b;
        change=abs(b-a);
        if(a<b)
            a+=change;
        else
            a-=change;
        while(l<=a && a<=r){
                if(a<b)
                {
                {//increase the temperature
                   a+=x;
                   c++;
                }while(a<b);
                }
                else if(a>b)
                {
                {//decrease the temperature
                   a-=x;
                   c++;
                }while(a>b);
                }
                if(a==b)
                    break;
        }
        if(a!=b)
        cout<<-1<<"\n";
        else
        cout<<c<<'\n';
   }
    return 0;
}


