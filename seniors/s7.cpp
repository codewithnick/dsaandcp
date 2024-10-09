
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    return a.second>b.second;
}
int main(){
    int n,k;
	map<int,int> m;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
        cin>>v[i];
		m[v[i]]++;
	}
	cin>>k;
	vector <pair<int,int>> arr(m.begin(),m.end());
    sort(arr.begin(),arr.end(),comp);
    for(auto it:arr){
            cout<<it.first<<" ";
            if(--k==0)
                break;
    }
	return 0;
}

