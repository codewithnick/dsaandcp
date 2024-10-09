#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n,c,i,x,cnt;
    cin>>t;
    while(t--){
            int odd=0,even=0,x;
        cin>>n;
        while(n--)
        {
            cin>>x;
            if(x%2)
                odd++;
            else
                even++;
        }
        if(odd%2==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

return 0;
}



