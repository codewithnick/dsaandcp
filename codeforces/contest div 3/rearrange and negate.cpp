#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            sum+=abs(x);
        }
        cout<<sum<<endl;
    }
return 0;
}



