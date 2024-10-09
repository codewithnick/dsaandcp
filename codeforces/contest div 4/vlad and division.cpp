#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n;
        c=n;
        vector<int> v;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
            v.push_back(x);
        }
        for(auto &i:v){
            int x=(~i)&INT_MAX;
            if(mp[x]&&mp[i])
            {
                mp[x]--;
                mp[i]--;
                c--;
            }
        }
        cout<<c<<endl;
    }
return 0;
}


