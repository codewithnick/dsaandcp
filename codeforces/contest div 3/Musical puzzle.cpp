#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        map<string,bool>m;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++){
            string sub=s.substr(i,2);
            m[sub]=1;
        }
        cout<<m.size()<<'\n';
    }

return 0;
}




