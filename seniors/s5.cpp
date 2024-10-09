
#include<bits/stdc++.h>
using namespace std;
bool check(map<int,int> m){
    for(auto it:m){
            if(it.second%2!=0)
            return false;
    }
    return true;
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
    if(check(m))
        cout<<"true";
    else
        cout<<"false";
	return 0;
}

