#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n,c,i,x,cnt,m;
    //cin>>t;
    while(t--){
            cin>>n>>m;
            map<string,string>mp;
        string name,ip,cmd;
        for(i=0;i<n;i++)
            {
                cin>>name>>ip;
                mp[ip]=name;
            }
        for(i=0;i<m;i++){
            cin>>cmd>>ip;
            ip=ip.substr(0,ip.end()-ip.begin()-1);
            cout<<cmd<<" "<<ip<<"; #"<<mp[ip]<<endl;
        }
    }
return 0;
}
