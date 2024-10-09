#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool comp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first)
        return b.second>a.second;
    return a.first>b.first;
}
int main(){
    int t,n,i,j;

    cin>>t;
    while(t--){
        vector<pair<char,int>>arr;
        vector<int>jumps;
        //jumps.push_back(1);
        string s;
        cin>>s;
        n=s.size();
        char start=s[0],en=s[n-1],prev=s[0];
        //make pairs
        for(i=0;i<n;i++)
        arr.push_back({s[i],i});
        //get diff
        int diff=s[n-1]-s[0],cost=0;
        //sort

        if(diff<0)
        sort(arr.begin(),arr.end(),comp);
        else
            sort(arr.begin(),arr.end());

        if(diff>=0)
        for(i=0;i<n;i++){
            char curr=arr[i].first;
            //cost+=(curr-prev);
            if(curr>en)
                break;
            else if(curr>=start)
                jumps.push_back(arr[i].second+1);
            prev=curr;
        }
        else
        for(i=0;i<n;i++){
            char curr=arr[i].first;
            //cost+=(prev-curr);
            if(curr<en)
                break;
            else if(curr<=start)
                jumps.push_back(arr[i].second+1);
            prev=curr;
        }
        cost=s[n-1]-s[0];
        if(cost<0)
            cost*=-1;
        cout<<cost<<" "<<jumps.size()<<endl;
        for(i=0;i<jumps.size();i++)
            cout<<jumps[i]<<" ";
        cout<<endl;
    }
return 0;
}


