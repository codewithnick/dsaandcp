#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll getsize(pair<ll,ll>x){
    return x.second-x.first;
}
bool comp(pair<ll,ll> a, pair<ll,ll> b){
    //return ((b.second-b.first)>(a.second-a.first));
    return b.first>a.first;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,a,b,i,x;
    map <ll,ll> m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        x=m[a];
        if(x==0 || x>b)
            m[a]=b;
    }
    vector<pair<ll, ll>>arr(m.begin(), m.end());
    sort(arr.begin(),arr.end());
    if(m.size()==1)
    {cout<<1;
    return 0;
    }
    vector<bool> check(m.size(),0);
    /*
    cout<<endl;
    for(auto it :arr)
    {
       cout<<it.first<<" "<<it.second<<"\n";
    }
    */
    ll ind=0;
    for(i=1;i<n;i++)
    {
        //cout<<"ind value= "<<ind<<endl;
        if(ind==i)
            continue;
        //cout<<ind<<" "<<i<<endl;
        if(arr[ind].second<=arr[i].first)
        {
            check[ind]=1;
            if(i!=n-1)
            ind=i;
        }
        else{
            if(arr[ind].second>=arr[i].second){
                check[i]=1;
                ind=i;
            }
            //else if(getsize(arr[ind])>=getsize(arr[i])){
            else{
                check[ind]=1;
                //i++;
            }
        }
    }
    i--;
    //cout<<ind<<" "<<i<<endl;
    if(arr[ind].second<=arr[i].first)
    {
            check[i]=1;
            ind=i;
    }
    /*
    cout<<endl;
    for(auto it:check)
        cout<<it<<" ";
    cout<<endl;
    */
    cout<<accumulate(check.begin(),check.end(),0);
return 0;
}



