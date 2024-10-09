
#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,c1,c2;
    cin>>t;
    while(t--){
            c1=c2=0;
        cin>>n;
        while(n%2==0)
           {
               n=n>>1;
               c1++;
           }
        while(n%3==0)
           {
               n=n/3;
               c2++;
           }
        if(n>1 || c1>c2){
            cout<<-1;
        }
        else{
            cout<<2*c2-c1;
        }
        cout<<endl;
    }
return 0;

}

