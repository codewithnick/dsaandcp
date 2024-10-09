
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& arr,int n, int mi){
    map<int,int>m;
    bool flag=true;
    for(auto i:arr){
        m[i]++;
        int x=i%mi,y=mi%i;
        if(x<mi&&x>0)
            return check(arr,n,x);
        else if(y<mi&&y>0)
            return check(arr,n,y);
    }
    if(m[mi]>1)return false;
    return flag;
}
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
        if(check(arr,n,*min_element(arr.begin(),arr.end()))){
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
return 0;
}





