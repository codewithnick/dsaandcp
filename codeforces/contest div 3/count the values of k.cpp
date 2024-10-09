
#include<bits/stdc++.h>
using namespace std;
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        long long a,b,l,k,x,y,i=0,j=0,m,n,c=0;
        cin>>a>>b>>l;
        m=1;n=1;
        long long mul;
        while(true){
            //fix i
            while(true){
                mul=m*n;
                if(l%mul==0){
                    n=n*b;
                    //cout<<mul<<"hi\n";
                    j++;
                    c++;
                }
                if(mul>l)
                break;

            }
            if(a==b)break;
            if(l%(m)==0){
                m=m*a;
                n=1;
                i++;
            }
            if(m>l) break;
        }
        cout<<c<<endl;
    }
return 0;
}




