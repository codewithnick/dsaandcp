
#include<bits/stdc++.h>
using namespace std;
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        long long n,sum=0,c=0;
        bool flag=0,two=0;
        cin>>n;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=x;
            if(x%3==1)flag=1;
        }
        if(sum%3==0)cout<<0;
        else if(n==1)cout<<1;
        else if((sum+1)%3==0||((sum-1)%3==0 &&flag))cout<<1;
        else{
            cout<<2;
        }
        cout<<endl;
    }
return 0;
}



