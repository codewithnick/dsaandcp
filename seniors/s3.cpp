#include<bits/stdc++.h>
using namespace std;
bool comp(pair<char,int> a,pair<char,int> b){
    return a.second>b.second;
}
int main(){
	string s;
	map<char,int> m;
	cin>>s;
	for(int i=0;i<s.size();i++){
		m[s[i]]++;
	}
	vector <pair<char,int>> arr;
	for(char i='a';i<'a'+26;i++){
        if(m[i]!=0)
        arr.push_back({i,m[i]});
	}
    sort(arr.begin(),arr.end(),comp);
    for(auto it:arr){
        for(int i=0;i<it.second;i++)
            cout<<it.first;
    }
	return 0;
}

