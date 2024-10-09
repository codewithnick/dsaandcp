
#include<bits/stdc++.h>
using namespace std;
int find_upper_bound(vector<pair<int,int>> &m,int k,int low,int high){
    int mid;
    while(low<high){
        mid=low+(high-low)/2;
        if(m[mid].first<=k){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return high;
}
bool incinerate(vector<pair<int,int>> &m,int k,int kinit,int low,int high,vector<int> &min_suffix_array){

    int msize=m.size();
    int ub=find_upper_bound(m,k,low,high);
    if(kinit<=0){
        return 0;
    }
    else if(ub==msize){
        return 1;
    }
    else{
        int min_elem=min_suffix_array[ub];
        kinit=kinit-min_elem;
        k+=kinit;
        return incinerate(m,k,kinit,ub,high,min_suffix_array);
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,k,x,y;
        cin>>n>>k;
        vector<pair<int,int>> m(n);
        vector<int> min_suffix_arr(n);
        for(int i=0;i<n;i++){
            cin>>m[i].first;
        }
        for(int i=0;i<n;i++){
            cin>>m[i].second;
        }
        sort(m.begin(),m.end());
        int minelem=1e9;
        for(int i=n-1;i>=0;i--){
            if(m[i].second<minelem)
                minelem=m[i].second;
            min_suffix_arr[i]=minelem;
        }
        if(incinerate(m,k,k,0,n,min_suffix_arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

return 0;
}



