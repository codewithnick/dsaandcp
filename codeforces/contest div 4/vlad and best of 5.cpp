
#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int a=0,b=0;
        string s;
        cin>>s;
        for(auto &c:s){
            if(c=='A')a++;
            else b++;
        }

        if(a>b)cout<<"A\n";
        else cout<<"B\n";
    }
return 0;
}


