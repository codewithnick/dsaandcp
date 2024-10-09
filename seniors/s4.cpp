
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second)
        return a.first>b.first;
    return a.second>b.second;
}
int main(){
    int n;
	map<int,int> m;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
        cin>>v[i];
		m[v[i]]++;
	}
	vector <pair<int,int>> arr(m.begin(),m.end());
    sort(arr.begin(),arr.end(),comp);
    for(auto it:arr){
            for(int i=0;i<it.second;i++)
            cout<<it.first<<" ";
    }
	return 0;
}

