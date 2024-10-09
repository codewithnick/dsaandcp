#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s,ns="";
    int n,i,p=0;
    cin>>s>>n;
    map<char,int>m,mp;
    for(auto c:s)
        m[c]++;
    for(char a='a';a<='z';a++){
        if(m[a]==0)
        continue;
        int x=a-96;
        if(p+x<=n)
            {
                p+=x;
                m[a]--;
                mp[a]++;
                a--;
            }
        else{
            break;
        }

    }
    for(auto c:s){
        if(mp[c]){
            ns+=c;
            mp[c]--;
        }
    }
    cout<<ns<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n,c,i,x,cnt;
    cin>>t;
    while(t--){
        solve();
    }

return 0;
}




