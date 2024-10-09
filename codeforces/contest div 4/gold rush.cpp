
#include<bits/stdc++.h>
using namespace std;
void fillarr(int n,vector<int> &myarr){
    if(n%3==0){
        int i=n/3;
        myarr.push_back(i);
        myarr.push_back(2*i);
        fillarr(i,myarr);
        fillarr(2*i,myarr);
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,m;
        map<int,bool> mp;
        cin>>n>>m;
        vector<int>myarr;
        myarr.push_back(n);
        fillarr(n,myarr);
        for(auto i :myarr)
        mp[i]=1;
        if(mp[m])
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }

return 0;
}






