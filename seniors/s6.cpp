
#include<bits/stdc++.h>
using namespace std;
void operation(map<int,int> m){
    int prs=0,single=0;
    for(auto it:m){
        if(it.second%2==1)
            single+=1;
        prs+=(it.second/2);
    }
    cout<<prs<<" "<<single;
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
    operation(m);
	return 0;
}

