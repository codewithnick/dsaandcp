
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;


    cin>>t;
    while(t--){
            string s,ns="";
            int n;
            char c=' ';
    cin>>n;
    cin>>s;
        for(auto a:s){
            if(c==' ')
                c=a;
            else if(c==a){
                ns+=a;
                c=' ';
            }
        }
        cout<<ns<<'\n';
    }
return 0;
}



