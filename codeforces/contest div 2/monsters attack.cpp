#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n;
    cin>>t;
    while(t--){
        ll n,k,bullets;
        cin>>n>>k;
        vector<int>health(n),pos(n);
        map<ll,ll>m;
        for(int i=0;i<n;i++){
            cin>>health[i];
        }
        for(int i=0;i<n;i++){
            cin>>pos[i];
            m[abs(pos[i])]+=health[i];
        }
        bullets=0;
        int currpos=0;
        bool flag=true;
        for(auto &elem:m){
            //cout<<"start pos:"<<currpos<<" bullets:"<<bullets<<" lefthealth\n";
            bullets+=(elem.first-currpos)*k;
            currpos=elem.first;
            ll lefthealth=elem.second-bullets;
            bullets-=elem.second;
            if(lefthealth>0){
                flag=false;break;
            }
            //cout<<"end pos:"<<currpos<<" bullets:"<<bullets<<" lefthealth"<<lefthealth<<endl;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
return 0;
}

