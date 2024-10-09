#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    string x="",y="";
    while(t--){
        cin>>n;
        x="",y="";
        int b,c;
        bool i=0;
        while(n){
            int a=n%10;
            if(a%2==0){
                b=c=a/2;
            }
            else{
                b=a/2+i;
                c=a/2+!i;
                i=!i;
            }
            x+=(char)(b+48);
            y+=(char)(c+48);
            n/=10;
        }
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        cout<<stoi(x)<<" "<<stoi(y);
        cout<<endl;
    }

return 0;
}

