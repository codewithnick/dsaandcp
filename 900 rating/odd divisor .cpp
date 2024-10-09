#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        while(n%2==0)
            n=n>>1;
        if(n==1)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    }
return 0;

}

