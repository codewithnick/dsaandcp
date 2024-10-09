
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,n,q;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr(n),next(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>q;
        next[n-1]=n;
        for(int i=n-2;i>=0;i--){
            if(arr[i]==arr[i+1]){
                next[i]=next[i+1];
            }else
            next[i]=i+1;
        }
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            l--;r--;
            if(next[l]<n&&l<n&&next[l]!=l &&r>=next[l])
                cout<<l+1<<' '<<next[l]+1<<endl;
            else
                cout<<-1<<' '<<-1<<endl;
        }
    }
return 0;
}


