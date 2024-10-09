#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n,c,i,x,cnt,k;
    cin>>t;
    while(t--){
        long long x1=2,x2=3,x3;
        cin>>n;
        n=n-2;
        cout<<x1<<" "<<x2<<" ";
        while(n--){
            x3=(x2)+1;

            while((3*x3)%(x1+x2)==0)
            x3++;
            cout<<x3<<" ";
            x1=x2;
            x2=x3;
        }
        cout<<endl;
    }
return 0;
}



