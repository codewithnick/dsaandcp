#include<bits/stdc++.h>
using namespace std;
bool findout(set<int>&x,set<int>&y,int&k){
    set<int> unionset=x;
    unionset.insert(y.begin(),y.end());
    if(unionset.size()!=k || x.size()<(k/2) || y.size()<(k/2))
    return false;

    return true;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        set<int>x,y;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
                if(1<=a[i]&&a[i]<=k)
                x.insert(a[i]);
            }
        for(int i=0;i<m;i++)
            {
                cin>>b[i];
                if(1<=b[i]&&b[i]<=k)
                y.insert(b[i]);
            }

        if(findout(x,y,k))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
return 0;
}



