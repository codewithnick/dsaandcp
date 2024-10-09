#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>a(n),arr(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
                cin>>b[i];
        }
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            arr[i].first=a[i].second;
            arr[i].second=b[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            cout<<arr[i].second<<' ';
        }
        cout<<'\n';
    }


return 0;
}





